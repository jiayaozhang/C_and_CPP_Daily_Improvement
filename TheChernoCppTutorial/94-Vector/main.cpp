#include<iostream>

template<typename Vector>
class VectorIterator
{
public:
	using ValueType = typename Vector::ValueType; // 此处要加上typename指出后面是一个类型名，以免引起歧义
	using PointerType = ValueType*;// 这里可加可不加typename
	using ReferenceType = ValueType&;
public:
	VectorIterator(PointerType ptr):m_Ptr(ptr) {}
	VectorIterator operator++()
	{
		m_Ptr++;
		return *this;
	}
	VectorIterator operator++(int) // 这里看不懂
	{
		VectorIterator iterator = *this;
		++(*this);
		return iterator;
	}
	VectorIterator operator--()
	{
		m_Ptr--;
		return *this;
	}
	VectorIterator operator--(int) // 同++，也看不懂
	{
		VectorIterator iterator = *this;
		--(*this);
		return iterator;
	}
	ReferenceType operator[](int index)
	{
		return *(m_Ptr+index);
	}
	PointerType operator->() // 不知道这里为啥返回一个指针
	{
		return m_Ptr;
	}
	ReferenceType operator*()
	{
		return *m_Ptr;
	}
	bool operator==(const VectorIterator& other) const
	{
		return m_Ptr == other.m_Ptr;
	}
	bool operator!=(const VectorIterator& other) const
	{
		return !(*this==other);
	}
private:
	PointerType m_Ptr; // 迭代器的一个主要成员就是一个指针
};

template<typename T>
class Vector
{
public:
	using ValueType = T; // 为了将此类型传给VectorIterator使用，故命名
	using Iterator = VectorIterator<Vector<T>>; // 用于begin和end函数返回类型
public:
	Vector()
	{
		// Alloc 2 memory
		ReAlloc(2); // 初始化构造的时候默认分类两个内存
	}
	~Vector()
	{
		delete[] m_Data; // 此处写的不完整，还需要释放每个元素的内存
	}
	void PushBack(T&& value) // 右值版本，用move
	{
		if (m_Size >= m_Capacity) // 发现当前分配内存快要满的时候，再多分配一点内存
			ReAlloc(m_Capacity + m_Capacity / 2);
		m_Data[m_Size] = std::move(value);
		m_Size++;
	}
	void PushBack(const T& value) // 左值版本，用copy
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);
		m_Data[m_Size] = value;
		m_Size++;
	}
	template<typename... Args>
	T& EmplaceBack(Args&&... args) // Emplace与Push的区别在于，可以在里面调元素类的构造函数
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);
		new(&m_Data[m_Size]) T(std::forward<Args>(args)...); // 这句话看不太懂
		// m_Data[m_Size] = T(std::forward<Args>(args)...); //可替代上一句话
		return m_Data[m_Size++];
	}
	void PopBack()
	{
		if (m_Size > 0)
		{
			m_Size--;
			m_Data[m_Size].~T(); // 弹出末尾元素，并且释放内存
		}
	}
	void Clear()
	{
		for (size_t i = 0; i < m_Size; i++)
			m_Data[i].~T();
		m_Size = 0;
	}
	Iterator begin()
	{
		return Iterator(m_Data);
	}
	Iterator end()
	{
		return Iterator(m_Data+m_Size);
	}

	size_t Size() const { return m_Size; }
	const T& operator[] (size_t index) const { return m_Data[index]; }
	T& operator[] (size_t index) { return m_Data[index]; }
private:
	void ReAlloc(size_t newCapacity)
	{
		// 1. alloc a new block of memory
		// 2. copy/move old elements to new block of memory
		// 3. delete
		T* newBlock = new T[newCapacity];
		if (m_Size > newCapacity)
			m_Size = newCapacity;
		for (size_t i = 0; i < m_Size; i++)
			newBlock[i] = std::move(m_Data[i]); // 使用move的方式，避免copy
		delete[] m_Data;
		m_Data = newBlock;
		m_Capacity = newCapacity;
	}

	T* m_Data = nullptr;
	size_t m_Size;
	size_t m_Capacity;
};

int main()
{	
	Vector<std::string> data;
	data.EmplaceBack("ydc");
	data.EmplaceBack("tt");
	for (Vector<std::string>::Iterator it = data.begin(); it != data.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	for (auto& v : data)
	{
		std::cout<<v<<std::endl;
	}
	std::cin.get();
}