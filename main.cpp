#include <iostream>
#include <vector>
#include <list>
#include <windows.h>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

typedef list<int> LISTINT;
typedef list<int> LISTCHAR;
/*
 * 一.基本解释

　　typedef为C语言的关键字，作用是为一种数据类型定义一个新名字。这里的数据类型包括内部数据类型（int,char等）和自定义的数据类型（struct等）。

　　在编程中使用typedef目的一般有两个，一个是给变量一个易记且意义明确的新名字，另一个是简化一些比较复杂的类型声明。

二．用法

（1）用typedef声明一个新类型名来代替已有的类型名。如：

typedef int Status  //指定标识符Status代表int类型
typedef double DATE  //指定标识符DATE代表double类型

这样下面代码等价：

int i; double j;
Status i;DATE j;
https://www.cnblogs.com/dmego/p/5944169.html
 */

void func1();
void func2();
void func3();

int main() {
//    func1();
 //   func2();
    func3();
}

void func1(){
    // 创建一个向量存储 int
    vector<int> vec;
    int i;

    // 显示 vec 的原始大小
    cout << "vector size = " << vec.size() << endl;

    // 推入 5 个值到向量中
    for(i = 0; i < 5; i++){
        vec.push_back(i);
    }

    // 显示 vec 扩展后的大小
    cout << "extended vector size = " << vec.size() << endl;

    // 访问向量中的 5 个值
    for(i = 0; i < 5; i++){
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // 使用迭代器 iterator 访问值
    vector<int>::iterator v = vec.begin();
    while( v != vec.end()) {
        cout << "value of v = " << *v << endl;
        v++;
    }
}
void func2(){
    //https://blog.csdn.net/fanyun_01/article/details/56881515
    //用LISTINT创建一个list对象
    LISTINT listOne;
    //声明i为迭代器
    LISTINT::iterator i;

    listOne.push_front(3);
    listOne.push_front(2);
    listOne.push_front(1);

    listOne.push_back(4);
    listOne.push_back(5);
    listOne.push_back(6);

    cout << "listOne.begin()--- listOne.end():" << endl;
    for (i = listOne.begin(); i != listOne.end(); ++i)
        cout << *i << " ";
    cout << endl;

    LISTINT::reverse_iterator ir;
    cout << "listOne.rbegin()---listOne.rend():" << endl;
    for (ir = listOne.rbegin(); ir != listOne.rend(); ir++) {
        cout << *ir << " ";
    }
    cout << endl;

// #include <numeric>
    int result = accumulate(listOne.begin(), listOne.end(), 0);
    cout << "Sum=" << result << endl;
    cout << "------------------" << endl;

    //用LISTCHAR创建一个list对象
    LISTCHAR listTwo;
    //声明i为迭代器
    LISTCHAR::iterator j;

    listTwo.push_front('C');
    listTwo.push_front('B');
    listTwo.push_front('A');

    listTwo.push_back('D');
    listTwo.push_back('E');
    listTwo.push_back('F');

    cout << "listTwo.begin()---listTwo.end():" << endl;
    for (j = listTwo.begin(); j != listTwo.end(); ++j)
        cout << char(*j) << " ";
    cout << endl;

    //#include <algorithm>
    j = max_element(listTwo.begin(), listTwo.end());
    cout << "The maximum element in listTwo is: " << char(*j) << endl;
    //#include <windows.h>
    Sleep(10000);

}
void func3(){
    map<int, string> mapStudent;

//    mapStudent.insert(pair<int, string>(1, "student_one"));
//
//    mapStudent.insert(pair<int, string>(2, "student_two"));
//
//    mapStudent.insert(pair<int, string>(3, "student_three"));

    mapStudent.insert(map<int, string>::value_type (1, "student_one"));

    mapStudent.insert(map<int, string>::value_type (2, "student_two"));

    mapStudent.insert(map<int, string>::value_type (3, "student_three"));




//    mapStudent[1] = "student_one";
//
//    mapStudent[1] = "student_two";
//
//    mapStudent[2] = "student_three";
    int nSize = mapStudent.size();
    cout<<nSize<<endl;


    map<int, string>::iterator iter;

    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++)

    {

        cout<<iter->first<<" "<<iter->second<<endl;

    }
}