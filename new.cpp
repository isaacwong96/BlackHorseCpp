#include<iostream>
using namespace std;

//new的基本语法
int * func(){
    //在堆区创建整型数据
    //new返回的是该数据类型的指针
    int * p = new int(10);
    return p;
}
void test01(){
    int * p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    //堆区的数据由程序员管理开辟，程序员管理释放
    //如果想释放堆区数据，用delete
    //vs里delete后不能再输出*p了
    delete p;
    cout<<*p<<endl;
    cout<<*p<<endl;
    cout<<*p<<endl;
}
void test02(){
    //堆区里开辟数组
    int * arr = new int[10];
    for(int i=0; i<10; i++){
        arr[i] = i + 100;
    }
    for(int i=0; i<10; i++){
        cout<<arr[i]<<endl;
    }
    //释放堆区数组
    //释放数组时要加[]
    delete[] arr;
}
int main(){
    test01();
    test02();
}
