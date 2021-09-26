/*
#include "test.h"


struct Node {
    int val;
};


void example() 
{
    auto add = [](int x, int y) {
        return x + y;
    };

    int x = 2, y = 3;
    int z1 = add(x, y);
    int (*f)(int, int) = add;
    int z2 = f(x,y);

    std::cout << z1 << std::endl;


}

class Base1 {
public:
    Base1() {
        std::cout << "Base1" << std::endl;
    }
    // virtual void display() const = 0;
    virtual ~Base1() = 0;
};

Base1::~Base1() {}

class Base2 : public Base1 {
public:
    ~Base2() {}
};

/*
class Base2 : public Base1 {
public:
    void display() const {
        std::cout << "Base2" << std::endl;
    }
};

class Derived : public Base2 {
public:
    void display() const {
        std::cout << "Derived" << std::endl;
    }

};
*/


// void fun(Base1 *ptr) {
//     ptr->display();
// }


/*
int main() {
    // Base1 b1;
    Base1::Base1();

    // Base2 b2;
    // Derived d;

    // fun(&b2);
    // fun(&d);

    // example();

    // int num1 = 20, num2 = 5, num3 = 200;

    // printf("%02d:%02d:%02d\n", num1, num2, num3);
    // Test test;
    

    // Node *pNode = new Node;
    // pNode->val = 1;

    // int change = 10;

    // [pNode, &change]() {
    //     // std::cout << pNode << std::endl;
    //     pNode->val = 2;
    //     change = 100;
    //     // std::cout << pNode->val << std::endl;
    // }();

    // // std::cout << pNode << std::endl;
    // std::cout << pNode->val << std::endl;
    // std::cout << change << std::endl;

    // std::vector<int> tmpVector;
    // tmpVector.resize(10);

    // int i = 10;
    // int num = 0;

    // generate(tmpVector.begin(), tmpVector.end(), [i,num]() {
    //     num = i*i + num;
    //     return num;
    // });

    // for(const int &n : tmpVector) {
    //     std::cout << n << " ";
    // }
    // std::cout << std::endl;


    return 0;
}
*/
/*


template<typename T> class Blob {
public:
    typedef T value_type;
    typedef typename std::vector<T>::size_type size_type;

    Blob();
    Blob(std::initializer_list<T> il);

    size_type size() const {
        return data->size();
    }

    bool empty() const {
        return data->empty();
    }

    void push_back(const T &t) {
        data->push_back(t);
    }

    void push_back(T &&t) {
        data->push_back(std::move(t));
    }

    void pop_back();

    T& back();
    T& operator[](size_type i);


private:
    std::shared_ptr<std::vector<T>> data;
    void check(size_type i, const std::string &msg) const;

};

template<typename T>
void Blob<T>::check(size_type i, const std::string &msg) const 
{
    if(i >= data->size()) throw std::out_of_range(msg);
}

template<typename T>
T& Blob<T>::back()
{
    check(0, "back on empty Blob");
    return data->back();
}

template<typename T>
T& Blob<T>::operator[](size_type i)
{
    check(i, "subscript out of range");
    return (*data)[i];
}

template<typename T> 
void Blob<T>::pop_back()
{
    check(0, "pop_back on empty Blob");
    data->pop_back();
}

template<typename T>
Blob<T>::Blob() : data(std::make_shared<std::vector<T>>()) {}

template<typename T>
Blob<T>::Blob(std::initializer_list<T>(il)) : data(std::make_shared<std::vector<T>>(il)) {}


template<typename T>
auto fcn(T beg, T end) -> decltype(*beg)
{
    return *beg;
}


template<typename ... T> 
void func(T ... args)
{
    std::cout << sizeof...(args) << std::endl;
}

int test();


int main() {
    // func();
    // func(1,2);

    // Blob<int> squares = {0,1,2,3,4,5};

    // for(size_t i = 0; i != squares.size(); i++) {
    //     squares[i] = i*i;
    //     std::cout << squares[i] << " ";
    // }

    // std::vector<int> vi = {1,2,3};
    // std::vector<std::string> ca = {"hi", "bye"};

    // auto &i = fcn(vi.begin(), vi.end());
    // i = 10;
    // // std::cout << i << std::endl;
    // std::cout << vi[0] << std::endl;

    // std::string s1("hi"), s2;

    // s2 = std::move(std::string("bye!"));
    // s2 = std::move(s1);

    // std::cout << s1 << std::endl;

    // std::cout << test() << std::endl;
    // int a, b, c;
    // char s;
    // getchar();
    // while(getchar() == '[') {
    //     scanf("%d%c%d%c%d%c%c", &a, &s, &b, &s, &c, &s, &s);
    //     std::cout << a << " " << b << " " << c << " " << std::endl;
    // }

    // int n;
    // while(std::cin >> n) {
    //     std::cout << n << std::endl;
    // }
    // std::vector<int> nums;
    // int n;
    // char c;
    // while(std::cin >> n) {
    //     nums.push_back(n);
    //     std::cin >> c;
    // }

    // for(const int &n : nums) {
    //     std::cout << n <<  " ";
    // }
    // std::cout << std::endl;

    // std::string str;
    // // std::cin >> str;
    // getline(std::cin, str);

    // std::cout << str << std::endl;

    int N, n;
    std::cin >> N;
    // scanf("%d", &N);
    // char c = getchar();
    std::cin >> n;
    std::cout << n << std::endl;
    // std::vector<std::vector<int>> nums;
    // std::vector<int> tmp;

    /*
    int a, b;
    // int n = N + 1;
    while(N--)
    {
        std::vector<int> tmp;

        scanf("%d", &a);
        tmp.push_back(a);

        while(getchar() != '\n') {
            scanf("%d", &b);
            tmp.push_back(b);
        }
        nums.push_back(tmp);
    }

    for(auto num : nums) {
        for(auto n : num) {
            std::cout << n << " ";
        }
        std::cout << std::endl;
    }
    

    return 0;
}

/*
int test()
{
    union Un {
        int n;
        char c;
    };

    Un u;
    u.n = 1;

    return u.c;
}

bool isBipartite(std::vector<std::vector<int>> &graph)
{
    int n = graph.size();
    std::vector<int> color(n,0);    //表示未染色

    std::queue<int> que;

    for(int i = 0; i < n; i++)
    {
        if(color[i] == 0) {
            que.push(i);
            color[i] = 1;
        }

        while(!que.empty())
        {
            auto cur = que.front(); que.pop();
            for(const int &n : graph[cur]) 
            {
                if(color[n] == 0) {
                    color[n] = (color[cur] == 1 ? -1 : 1);
                    que.push(n);
                }
                else if(color[n] == color[cur]) return false;
            }
        }
    }

    return true;
}

bool isBipartite(std::vector<std::vector<int>> &graph)
{
    int n = graph.size();
    std::vector<int> color(n, 0);

    for(int i = 0; i < n; i++)
    {
        if(color[i] == 0 && !dfs(graph, color, 1, i)) return false;
    }

    return true;
}

bool dfs(std::vector<std::vector<int>> &graph, std::vector<int> &colors, int color, int node)
{
    if(colors[node] != 0) {
        return colors[node] == color;
    }

    color[node] = color;

    for(const int &n : graph[node]) {
        if(!dfs(graph, colors, -color, n)) return false;
    }

    return true;
}

std::vector<int> threeEqualParts(std::vector<int> &arr)
{
    int numOnes = 1;

    for(const int &n : arr) {
        if(n == 1) numOnes++;
    }

    if(numOnes%3 != 0) return {-1,-1};

    int everyPart = numOnes/3;

    int leftPtr = locateOne(arr, 1);    //找到第一个部分的第一个为1的数的下标
    int midPtr = locateOne(arr, everyPart + 1);
    int rightPtr = locateOne(arr, everyPart*2 + 1);

    //往后移动找到边界
    while(leftPtr < midPtr && midPtr < rightPtr && rightPtr < arr.size())
    {
        if(A[leftPtr] == A[midPtr] && A[midPtr] == A[rightPtr]) {
            leftPtr++;
            rightPtr++;
            midPtr++;
        }
        else break;
    }

    if(rightPtr == A.size()) return {leftPtr - 1 , rightPtr};
    else if(rightPtr == 0) return {0, arr.size() - 1};

    return {-1,-1};
}


int locateOne(std::vector<int> &arr, int targetOne)
{
    int countOne = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 1) {
            countOne++;
            if(countOne == targetOne) return i;
        }
    }

    return 0;   //可能所有元素都是0

}



// constexpr int func(bool flag) {
//     // return 2*n;
//     if(flag) return 1;
//     else return 0;
// }

// template<bool ok>
// constexpr void foo()
// {
//     if constexpr (ok == true) {
//         std::cout << "ok" << std::endl;
//     }
//     else {
//         std::cout << "not ok" << std::endl;
//     }
// }


template<typename ... T>
auto sum(T ... arg)
{
    return (arg + ...);
}

template<typename ... T>
double sub1(T ... arg)
{
    // std::cout << arg << std::endl;
    // return (arg - ...);
    return (... - arg);
}


struct S {
    double num1;
    long num2;
};

S foo(int arg1, double arg2)
{
    double res1 = arg1 * arg2;
    long res2 = arg2 / arg1;
    return {res1, res2};
}

template<long value>
void foo(int &ok)
{
    if constexpr (ok = 10; value > 0) {
        std::cout << "hi" << std::endl;
    }
}

struct myStru1 {
    int a, b;
};

struct myStru2 {
    int a;
    myStru1 ms;
};


int main() {
    // myStru1 a{10};
    // myStru2 b{10, 20};
    myStru2 c{1, {1,2}};

    std::cout << c.ms.b << std::endl;

    // int num = 0;
    // if(int i = 0; i == 0) {}

    // foo<10>(num);

    // switch(int k = 10; k)
    // {
    //     case 0 : break;
    //     case 1 : break;
    //     default : {printf("hello\n");} break;
    // }

    // int arr[func(2)];
    // int i = 2;
    // int arr[func(i)];    
    // func(1);
    // foo<true>();

    // static_assert(true);
    // int s1 = sub1(2,1);
    // std::cout << s1 << std::endl;

    // auto [num1, num2] = foo(10, 20.2);

    // std::cout << num1 << " " << num2 << std::endl;

    return 0;
}



struct B1 {
    B1(int) { std::cout << "B1" << std::endl; }
};

struct D1 : B1 {
    // using B1::B1;
    // D1(int n) : B1(n) {}
    D1(int n) : B1(n) {}
};

int main() {
    // D1 d1(0);
    // std::istream_iterator<int> int_in(std::cin);
    // std::istream_iterator<int> int_eof;
    // std::vector<int> vec;

    // while(int_in != int_eof) {
    //     vec.push_back(*int_in++);
    // }

    // for(const int &n : vec) {
    //     std::cout << n << " ";
    // }
    // std::cout << std::endl;

    // std::vector<int> vec = {1,2,3,4};
    // std::ostream_iterator<int> out_iter(std::cout, " ");
    // for(auto &e : vec) {
    //     *out_iter++ = e;
    // }

    std::string line = "hello,world";
    auto comma = find(line.rbegin(), line.rend(), ',');
    std::cout << std::string(line.rbegin(), comma) << std::endl;

    return 0;
}
class Test 
{
public:
    Test() {
        std::cout << "构造" << std::endl;
    }

    Test(const Test &demo) {
        std::cout << "拷贝构造" << std::endl;
    }

    Test& operator=(const Test &demo) {
        std::cout << "赋值" << std::endl;
    }

};

Test fun() {
    Test a;
    return a;
}



class String
{
private:
    char *str;       //指向字符串的指针
    unsigned int len;  //字符串中的的实际字符长度(不包含结尾的'\0')

public:
    String(const char *s = NULL)  //这里给出了默认值就可以实现空对象, 如 String str;
    {
        if(s == NULL) {       
            str = new char[1];
            *str = '\0';
            len = 0;
        }
        else {
            len = strlen(s);
            str = new char[len + 1];
            strcpy(str, s);        //字符串复制函数(会将结尾符一起复制)
        }
        std::cout << "构造" << std::endl;
    }

    //拷贝构造(深拷贝)
    String(const String &demo) 
    {
        len = demo.len;
        str = new char[len + 1];
        strcpy(str, demo.str);
        std::cout << "拷贝构造" << std::endl;
    }

    //注意：以后一切赋值运算符全部返回引用,防止产生临时对象调用拷贝构造
    String& operator=(const String &demo)
    {
        //检查自赋值,这里是拿地址比较,因为对象的地址是唯一的,而值可能相同
        if(this == &demo) return *this;

        delete[] str;

        len = demo.len;
        str = new char[len + 1];
        strcpy(str, demo.str);

        return *this;   //返回本对象的引用
    }

    //'+'运算符返回一个新的对象，但是原来的对象不能析构掉
    String operator+(const String &demo) const 
    {
        int len = strlen(str) + strlen(demo.str) + 1;
        char *sp = new char[len];
        strcpy(sp, str);
        strcat(sp, demo.str);   //strcat(char *des, const char *src)表示将src所指向的内存中的字符连接到des所指向的内存空间后面
        String tmp(sp);
        return tmp;
    } 

    ~String() {
        delete[] str;
    }

    void print() {
        std::cout << str << std::endl;
    }

};

String fun(String s1, String s2) {
    // String tmp = s1 + s2;
    // return tmp;
    return s1 + s2;
    // return s1;
}


class Model
{
    int val;

public:
    Model(int n = 0) : val(n) {}
    Model(const Model &obj) {
        val = 2*obj.val;
    }
    Model& operator=(const Model &obj) {
        val = 4*obj.val;
        return *this;
    }
    void print() {
        std::cout << val << std::endl;
    }
};


class Test
{
    int x;

public:
    Test() { std::cout << "#"; }
    
    void *operator new[](size_t size) {
        void *p = malloc(size);
        return p;
    }

    void operator delete[](void *p) {
        free(p);
    }

    ~Test() { std::cout << "*"; }

};


struct Node {
    Node() { std::cout << "构造" << std::endl; }  
};


class Base {
public:
    Base() {}
    virtual void fun() { std::cout << "Base" << std::endl; }
};

class Son : public Base {
public:
    Son() {}
    void fun() { std::cout << "Son" << std::endl; }
    int n = 10;

};


class A {
public:
    A() {};
    virtual ~A() {}
};

class B : public A {
public:
    B() {};
    virtual ~B() {}
};

class C : public B {
public:
    C() {};
    virtual ~C() {}
};


int main() {
    // A *pa = new C;
    // B *pb = dynamic_cast<B*>(pa);
    
    B *pb = new B();
    C *pc = dynamic_cast<C*>(pb);

    // Base *b = new Base;
    // Son *s = dynamic_cast<Son*>(b);

    // s->fun();

    if(pc == nullptr) {
        std::cout << "Fail" << std::endl;
    } 

    // int num = 3;
    // const int &a = num;
    // const_cast<int&>(a) = 4;

    // std::cout << num << std::endl;

    // const int val = 21;
    // const int &r = val;
    // const int &re = const_cast<int&>(r);

    // re = 3;

    // std::cout << val << " " << r << " " << re << std::endl;

    // int i = 2;
    // float *p = reinterpret_cast<float*>(&i);

    // std::cout << *p << std::endl;

    // const_cast<int>(a) = 4;

    // double x = 1.2;
    // void *p = &x;
    // int* y = static_cast<int*>(p);

    // std::cout << y << std::endl;

    // Node *p = new Node();
    // char c = '\0';
    // printf("%d\n", c);

    // Node *p = (Node*)malloc(sizeof(Node));

    // Test *p = new Test[5];
    // delete[] p;
    
    // p = new Test();
    // delete p;

    // Model obj1(10), obj2 = obj1, obj3;
    // obj3 = obj1;
    // obj2.print();
    // obj3.print();

    // printf("%d",\x41);

    // std::cout << '\101' << std::endl;
    // char c = '\0';

    // String s1("hello");
    // String s2("world");

    // fun(s1, s2);

    // fun(s1, s2);

    // Test a;

    // Test b = fun();
    // fun();
    // int b;
    // (b=1)=5;

    // std::cout << b << std::endl;

    // const char c = '';

    // int a,b,c;
    // b = 2, c = 2;
    // a = 1%(b=c==2)+3;

    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <iterator>
#include <numeric>
#include <stdlib.h>
#include <string.h>
#include <numeric>
#include <string>

#include <unordered_map>
#include <map>


struct Grade {
    std::string name;
    int grade;
};

int main() {
    // Grade subjects[3] = {{"Ada", 80}, {"Bda", 70}, {"Cda", 90}};
    // int sum = accumulate(subjects, subjects + 3, 0, [](int a, Grade b) { return a + b.grade; })

    // std::vector<int> nums = {1,2,3};

    // int sum = accumulate(nums.begin(), nums.end(), 0);

    // std::cout << sum << std::endl;

    std::map<int,int> hash = {{1,2},{3,4},{5,6}};

    for(std::pair<const int, int> &item : hash) {
        std::cout << item.first << " " << item.second << std::endl;
    }


    return 0;
}


/*
class A
{
public:
    A() {
        std::cout << "构造" << std::endl;
    }
    A(const A &demo) {
        std::cout << "拷贝构造" << std::endl;
    }
};


class A
{
private:
    int *m_ptr;

public:
    A() : m_ptr(new int(0)) {}
    A(const A &a) : m_ptr(new int(*a.m_ptr)) {
        std::cout << "复制构造" << std::endl;
    }

    A(A&& a) : m_ptr(a.m_ptr) {
        a.m_ptr = nullptr;
        std::cout << "移动构造" << std::endl;
    }

    ~A() {
        delete m_ptr;
    }

};

A getA() 
{
    return A();
}


void processValue(int &a) {
    std::cout << "lvalue" << std::endl;
}

void processValue(int &&a) {
    std::cout << "rvalue" << std::endl;
}

template<class T>
void forwardValue(T&& val) 
{
    processValue(std::forward<T>(val));
}

void Testdelcl()
{
    int i = 0;
    forwardValue(i);
    forwardValue(0);
}


int main() {
    // A a = getA();
    Testdelcl();

    return 0;
}


int maxProduct(std::vector<int> &nums)
{
    int minProd = 1, maxProd = 1;
    int res = INT_MIN;

    for(const int &n : nums)
    {
        if(n < 0) {
            std::swap(minProd, maxProd);
        }

        minProd = std::min(minProd*n, n);
        maxProd = std::max(maxProd*n, n);

        res = std::max(res, maxProd);
    }

    return res;
}

int findNum(std::vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;

    while(left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if(nums[mid] <= target) {
            left = mid + 1;
        }
        else if(nums[mid] > target) {
            right = mid - 1;
        }
    }

    // return left == nums.size() ? -1 : nums[left];
    return left;
}

// #include "fun.h"
// #include "test.h"

// inline int num = 200;

// template<typename ... T>
// double sub(T ... arg)
// {
//     // std::cout << arg << std::endl;
//     return (arg - ...);
//     // return (... - arg);
// }


// struct A {
//     int a;
//     void func() {
//         auto f = [*this]{
//             std::cout << a << std::endl;
//         };

//         f();
//     }
// };



int pairNum(std::vector<int> &nums, int target)
{
    int res = 0;

    std::unordered_map<int,int> hash;

    for(const int &n : nums)
    {
        res += hash[target-n];

        hash[n]++;
    }

    return res;
}



int main() {

    std::vector<int> nums = {4,4,4,4};

    std::cout << pairNum(nums, 8) << std::endl;

    // A demo;
    // demo.a = 10;
    // demo.func();

    // int sum = sub(5,2,1,1,1,1);

    // std::cout << sum << std::endl;

    // Test demo{10,20};

    // std::cout << demo.a << std::endl;

    // int *ptr = nullptr;

    // int *pointer = ptr;

    // if(!pointer) {
    //     std::cout << "hi" << std::endl;
    // }

    // Test demo;
    // demo.print();

    // num = 2222222;
    // print();

    // std::cout << num << std::endl;

    // add(10);




    return 0;
}


// class A {
// public:
//     void print() {
//         std::cout << "A" << std::endl;
//     }
// };

// class B : public A {
// public:
//     void print() {
//         std::cout << "B" << std::endl;
//     }
// };

class A {
    int data;


public:
//     A(int m) : data(m) {}
//     A(const A &demo) : data(demo.data) {}

    void print() {
        std::cout << "hello" << std::endl;
    }
};



int main(int argc, char *argv[]) 
{
    int x = 4;

    auto y = [&r = x, x = x + 1] { r += 2; return x*x; }();

    // std::cout << x << " " << y << std::endl;

    auto z = [str = "string"]{ return str; }();

    std::cout << z << std::endl;


    // A a(2);
    // A b(a);

    // b.print();
    // A *a;
    // a->print();
    
    // ptr->print();

    // double x = 1.2;
    // int y = static_cast<int>(x);

    // void *p = &x;
    // double *ptr = static_cast<double*>(p);

    // const int a = 3;
    // const int *r = &a;

    // const_cast<int*>(r) = 4;

    // const int val = 12;
    // const int *ptr = &val;
    // int *new_ptr = const_cast<int*>(ptr);
    // *new_ptr = 100;

    // std::cout << val << std::endl;

    // const int val = 21;
    // const int &r = val;
    // const_cast<int&>(r) = 100;

    // std::cout << val << std::endl;

    return 0;
}

struct A {
    int data;
    explicit(false)
    A(int m) : data(m) {}
};

struct B {
    int data;
    explicit(true)
    B(int m): data(m) {}
};


int main() {
    A a = 10;
    // B b = 10;

    return 0;
}


class Father {
public:
    void print() {
        std::cout << "Father" << std::endl;
    }
};

class Son : public Father {
public:
    void print() {
        std::cout << "Son" << std::endl;
    }

    int data = 2;
};


int main() {
    // Son s1;
    Father *f = new Son();
    Son *s = dynamic_cast<Son*>(f);

    // s->print();
    std::cout << s->data << std::endl;


    return 0;
}


/*
class Base {
public:
    Base() : b(1) {}
    virtual void fun() { std::cout << b << std::endl; }
    int b;
};

class Son : public Base {
public:
    Son(): d(2) {}
    void fun() { std::cout << d << std::endl; }
    int d;
};


template<typename T>
T check_max(T x, T y) 
{
    std::cout << "模班" << std::endl;
    return x > y ? x : y;
}


int check_max(int x, int y)
{
    std::cout << "重载" << std::endl;
    return x > y ? x : y;
}


int main() {

    check_max(1, 2);

    // Base *b = new Son();
    // Son *s = dynamic_cast<Son*>(b);
    // if(s == nullptr) std::cout << "Fail" << std::endl;
    // s->d;
    // std::cout << s->d << std::endl;

    // Father *f = new Father();
    // Son *s = dynamic_cast<Son*>(f);
    // s->fun();
    // // if(s == nullptr) {
    //     std::cout << "Fail" << std::endl;
    // }

    // Father f1;
    // Son s1;

    // Father *f = &f1;
    // Son *s = &s1;

    // Son *s = &s1;
    // // // Father *f = static_cast<Father*>(s);
    // Father *f = (Father*)s;

    // // // s = static_cast<Son*>(f);
    // // // s = (Son*)f;

    // f->print();

    // Son s1;
    // Father *f = &s1;
    // Son *s = static_cast<Father*>(f);

    // s->print();

    return 0;
}



//方法一:使用后缀数组

std::string longestDupsubstring(std::string s)
{
    std::vector<std::string> strs;

    for(int i = 0; i < s.size(); i++) {
        strs.push_back(s.substr(i));
    }

    sort(strs.begin(), strs.end());

    int maxLen = 0;
    std::string res;

    //求两个相邻字符串的公共前缀
    for(int i = 0; i < strs.size()-1; i++) {
        int tmp = lenTwoStr(strs[i], strs[i+1]);
        if(tmp > maxLen) {
            maxLen = tmp;
            res = strs[i].substr(0, maxLen);
        }
    }   

    return res;
}

int lenTwoStr(const std::string &str1, const std::string &str2)
{
    if(str1.empty() || str2.empty()) return 0;  

    int i = 0;
    while(i < str1.size() && i < str2.size() && str1[i]==str2[i]) i++;

    return i;
}



//方法二:改用字符串进行编码,不再计算后缀数组

std::string longestDupsubstring(std::string s)
{
    int len = s.size();
    int a = 26;
    long mod = (long)pow(2, 32);

    std::vector<int> nums(len);

    for(int i = 0; i < s.size(); i++) {
        nums[i] = s[i] - 'a';
    }

    for(int i = len-1; i >= 1; i--)     //窗口长度从大到小判断
    {
        std::unordered_set<long> mySet;

        long tmp = 0, aL = 1;

        for(int j = 0; j < i; j++) {
            tmp = (tmp*a + nums[j]) % mod;
            aL = (aL*a) % mod;                //记录最大项单位
        }

        mySet.insert(tmp);

        for(int j = 1; j <= len - i; j++) {                  //长度为i的窗口
            tmp = (tmp*a - nums[j-1]*aL%mod + mod) % mod;    //第一个字符出窗口,接着窗口的下一个字符进入窗口
            tmp = (tmp + nums[j+i-1]) % mod;
            if(mySet.count(tmp)) return s.substr(j, i);     //由于这里窗口长度是按照len-1开始判断的.所以找到了就是最大长度直接返回即可
            mySet.insert(tmp);
        }
    }

    return "";
}


int main() {
    std::string s = "nnpxouomcofdjuujloanjimymadkuepightrfodmauhrsy";

    std::cout << longestDupsubstring(s) << std::endl;

    return 0;
}



#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <unordered_set>
#include <sstream>

template<class T>
std::string deubg_rep(const T &t)
{
    std::ostringstream ret;
    ret << t;
    
    return ret.str();
}

struct Test {
    int a;
    int b;
};

int main() {
    // std::vector<int> nums = {1,2,3};
    // if(auto it = find(nums.begin(), nums.end(), 3); it != nums.end()) *it = 4;
    // Test demo{10,20};

    const int a = 5;
    const int &c = (a+1);

    return 0;
}*/

#include <iostream>
#include <unordered_map>
#include <vector>

// #include "test.cc"

// extern int num;
// extern void fun();

int main() {

    std::unordered_map<std::string, int> hash;

    std::vector<std::string> words = {"apple"};

    for(int i = 0; i < words.size(); i++)
    {
        std::string word = words[i];
        int wordSize = word.size();
        for(int j = 1; j <= wordSize; j++) {
            std::string p = word.substr(0, j);
            for(int k = 0; k < wordSize; k++) {
                std::string s = word.substr(k);
                std::cout << p + "|" + s << std::endl;
                hash[p+"|"+s] = i + 1;   
            }
        }
    }

    // for(auto &item : hash) {
    //     std::cout << item.first << " " << item.second << std::endl;
    // }


    return 0;
}




