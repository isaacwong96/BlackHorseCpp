#include<iostream>

using namespace std;

struct Student{
    string name;
    int age;
    int score;

}s3;  //Def 3
int main(){
    //Def 1
    //struct Student s1;
    //struct����ʡ��
    Student s1;
    s1.name = "����";
    s1.age = 18;
    s1.score = 100;
    cout<<"����:"<<s1.name<<"����:"<<s1.age<<"����:"<<s1.score<<endl;

    //Def 2
    //struct Student s2 = {"����", 19, 80};
    Student s2 = {"����", 19, 80};
    cout<<"����:"<<s2.name<<"����:"<<s2.age<<"����:"<<s2.score<<endl;

    //Def 3
    s3.name = "����";
    s3.age = 20;
    s3.score = 60;
    cout<<"����:"<<s3.name<<"����:"<<s3.age<<"����:"<<s3.score<<endl;
    return 0;
}
