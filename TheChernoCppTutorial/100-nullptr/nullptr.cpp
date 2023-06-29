#include<iostream>

class Entity
{
public:
    Entity() = default;
    const std::string& Getname() const { return m_Name; }
    void PrintType()
    {
        std::cout << "Entity \n" << std::endl;
    }
private:
    // Entity* m_Instance = nullptr;
    Entity* m_Parent;
    std::string m_Name;
};

struct EntityData
{
    EntityData* m_Parent;
    std::string m_Name;
};


const std::string& Entity_GetName(const EntityData* self)  
{ 
    return self->m_Name; 
}

void Entity_PrintType(EntityData* self)
{
    std::cout << "Entity \n";
}

int main()
{
    Entity* entity = nullptr;
    entity->PrintType();
    uint64_t offset = offsetof(EntityData, m_Name);
    offset = (uint64_t)&((EntityData*)nullptr)->m_Name;
    std::cout << offset << std::endl;
    // void* value = nullptr;
}