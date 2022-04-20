#include<iostream>
using namespace std;

//不要返回局部变量的引用
int& test01(){
   int a = 10;//局部变量存放在四区中的栈区
   return a;
}

//函数的调用可以作为左值
int& test02(){
   static int a = 10;//局部变量存放在四区中的栈区
   return a;
}

int main(){
    //2.4 引用作函数返回值
    //int &ref1 = test01();
    //cout<<"ref1="<<ref1<<endl;//VS里第一次会保留，是正确的
    //cout<<"ref1="<<ref1<<endl;

    int &ref2 = test02();
    cout<<"ref2="<<ref2<<endl;//VS里第一次会保留，是正确的
    test02() = 1000;//如果函数的返回值是引用，则这个函数调用可以作为左值
    cout<<"ref2="<<ref2<<endl;
}
