//const value can be exploited

const int class_size = 12;

int finalGrade[class_size];  //ok

//const的变量初始化以后不能被赋值，不能被修改；这种const的变量对c++来说仍然是变量而不是常数，
//因为变量意味着要在内存里给你分配地址。

int x;
cin >> x;
const int size = x;
double classAverage[size]; // error!


//这里之所以错误是因为编译器需要知道本地变量有多大，然后给他分配内存

//指针遇上const有两种情况
//一种是q是const，一种是*q是const

char *const q="abc";//q是const
    *q='c';//ok
   	q++;//error
	
const char *p="ABCD";//*p是const char
    *p='b';//error(意思是你不能通过这个p去修改我所指定的内存单元，而不是我所指到哪，那个内存单元就变成const了)
	
Person p1("Fred",200);
const Person* p=&p1;	//对象是const
Person const* p=&p1;	//对象是const
Person *const p=&p1;    //指针是const

//看const是在*号前还是后（也可以在前面再加个const，那么指针和对象就都是const了）
//*p是const的意思是，你不能通过这个p去修改我所指定的内存单元，而不是我所指到哪，那个内存单元就变成const了

int i;
const int ci=3;
int *ip;
const int *cip;
ip=&i;
cip=&i;
ip=&ci;//error（可以通过ip修改他所指的内容，但是ci是const，不允许被修改）
cip=&ci;


int main()
{
char *s=“hello world”;//会出现warning，应该在最前面加上const。 
  
//如果这句是char s[]=“hello world”，那么这段程序是正确的，因为他会把代码段里的"hello world"拷贝到堆栈里面
//这种做法是错误的，本地变量放在堆栈里，全局变量在全局数据区里，而全局变量里的这种常量hellow world在代码段里，代码段是不可写的，这是一个const，不能被修改。

cout << s << endl;
s[0]=‘B’;
cout << s << endl;
return 0;
}

void f(const int* x);//可以把int或const int送给这个函数，他会保证在函数内不修改这个参数。
int a=15;
f(&a);//ok
const int b=a;
f(&b);//ok
b=a+1;//error
//如果函数的参数是const int x，对于调用f的人无所谓，因为不是指针，只表明在f里面不改x。


int f2(){return 1;}
const int f3(){return 1;}
int main(){
const int j=f2();
int k=f3();//因为这只是赋值，并不修改f3()的返回结果。
}
//这些操作都是可以的





