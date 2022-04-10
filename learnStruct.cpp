#include<iostream>

using namespace std;

struct Student{
    string name;
    int age;
    int score;

}s3;  //Def 3

struct Teacher{
    int id;
    string name;
    int age;
    Student stu;
};

void printStudent1(Student s){
    s.age = 100;
    cout<<"值传递函数中打印："<<s.age<<endl;
}
//可减少内存空间消耗，不会复制新的副本，但有可能会改变原数据，
//所以不改数据的时候推荐用const
void printStudent2(Student *p){
    p->age = 100;
    cout<<"地址传递函数中打印："<<p->age<<endl;
}

int main(){
    //Def 1
    //struct Student s1;
    //struct可以省略
    Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout<<"姓名:"<<s1.name<<"年龄:"<<s1.age<<"分数:"<<s1.score<<endl;

    //Def 2
    //struct Student s2 = {"李四", 19, 80};
    Student s2 = {"李四", 19, 80};
    cout<<"姓名:"<<s2.name<<"年龄:"<<s2.age<<"分数:"<<s2.score<<endl;

    //Def 3
    s3.name = "王五";
    s3.age = 20;
    s3.score = 60;
    cout<<"姓名:"<<s3.name<<"年龄:"<<s3.age<<"分数:"<<s3.score<<endl;

////////////////////////////////////////////////////////////////////////////////////
    //结构体数组
    cout<<"结构体数组"<<endl;
    struct Student stuArray[3] =
    {
        {"张三", 18, 100},
        {"李四", 28, 99},
        {"王五", 38, 66}
    };
    //给结构体数组中元素赋值
    stuArray[2].name = "赵六";

    //遍历结构体数组
    for(int i=0; i<3; i++){
        cout<<"姓名："<<stuArray[i].name<<endl;
    }
////////////////////////////////////////////////////////////////////////////////////
    //结构体指针。利用->
    cout<<"结构体指针"<<endl;
    Student s = {"张三", 18, 100};
    Student *p = &s;

    cout << p->name<<endl;
////////////////////////////////////////////////////////////////////////////////////
    cout<<"结构体的嵌套"<<endl;
    Teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;
    cout<<t.name<<t.stu.name<<endl;
////////////////////////////////////////////////////////////////////////////////////
    cout<<"结构体作参数"<<endl;
    Student s_para;
    s_para.name = "张三";
    s_para.age = 20;
    s_para.score = 85;

    printStudent1(s_para);
    printStudent2(&s_para);
    cout<<"main函数里打印："<<s_para.age<<endl;
}
