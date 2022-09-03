#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
//class Animal
//{
//public:
//	int m_age;
//	Animal()
//	{
//		m_age = 10;
//	}
//};
//class Sheep :virtual public Animal {
//public:
//	float weight;
//};
//class Camel :virtual public Animal
//{
//public:
//	float height;
//
//};
//class Alpaca :public Sheep,public Camel {};
//class Father
//{
//public:
//	int m_A;
//	int m_B;
//	int m_C;
//	int m_D;
//};
//class Son :virtual public Father
//{
//public:
//	int m_A;
//	int m_B;
//	Son()
//	{
//		m_A = 10;
//		(*this).Father::m_A=20;
//		Father::m_A = 30;
//	}
//};
//void test1()
//{
//	Alpaca p;
//	cout << p.Camel::m_age << endl;
//	cout << p.Sheep::m_age << endl;
//
//}
//int main()
//{ 
//	Son p;
//	cout << p.m_A << p.Father::m_A;
//	//cout << sizeof(p);
//	//test1();
//	return 0;
//}
//class Animal
//{
//public:
//	int m_a;
//	virtual void Speak()//虚函数
//	{
//		cout << "动物在叫" << endl;
//	}
//	virtual void Speak1()//虚函数
//	{
//		cout << "动物在叫1" << endl;
//	}
//	virtual void Speak2()//虚函数
//	{
//		cout << "动物在叫2" << endl;
//	}
//	void Show()
//	{
//		//this->_vfptr;
//	}
//};
//class Cat :public Animal
//{
//public:
//	/*void Speak()
//	{
//		cout << "小猫在叫" << endl;
//	}*/
//	void Test1()
//	{
//		cout << "void Test1()" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "小狗在叫" << endl;
//	}
//	
//};
//void DoSpeak(Animal&p)
//{
//	p.m_a = 10;
//	p.Speak();
//}
//void test1()
//{
//	Animal p;
//	//Animal p2;
//	Cat cat;
//	//Cat cat2;
//	//cat.Animal::m_a;
//	//cat._vfptr;
//	DoSpeak(cat);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class calculator
//{
//public:
//	int num_a;
//	int num_b;
//	virtual int compute()
//	{
//		cout << "计算不明确,请重新输入!" << endl;
//		return 0;
//	}
//};
//class Add:public calculator
//{
//public:
//	int compute()
//	{
//		return num_a + num_b;
//	}
//};
//class Sub :public calculator
//{
//public:
//	int compute()
//	{
//		return num_a - num_b;
//	}
//};
//class Div :public calculator
//{
//public:
//	int compute()
//	{
//		return num_a / num_b;
//	}
//};
//class Mul :public calculator
//{
//public:
//	int compute()
//	{
//		return num_a * num_b;
//	}
//};
//int DoCompute(calculator&p)
//{
//	return p.compute();
//}
//void test2()
//{
//	Add add;
//	add.num_a = 10;
//	add.num_b = 20;
//	Sub sub;
//	sub.num_a = 10;
//	sub.num_b = 20;
//	Mul mul;
//	mul.num_a = 10;
//	mul.num_b = 20;
//	Div div;
//	div.num_a = 10;
//	div.num_b = 20;
//	calculator p;
//	p.num_a = 10;
//	p.num_b = 20;
//	cout << add.num_a << "+" << add.num_b << "=" << DoCompute(add) << endl;;
//	cout << add.num_a << "-" << add.num_b << "=" << DoCompute(sub) << endl;;
//	cout << add.num_a << "*" << add.num_b << "=" << DoCompute(mul) << endl;;
//	cout << add.num_a << "/" << add.num_b << "=" << DoCompute(div) << endl;;
//	cout << add.num_a << "?" << add.num_b << "=" << DoCompute(p) << endl;;
//}
//int main()
//{
//	test2();
//	return 0;
//}/
//class Animal
//{
//public:
//	int m_age;
//};
//class Dog:public virtual Animal
//{
//public:
//};
//class Cat:public Animal
//{};
//class Za :public Dog, public Cat {};
//int main()
//{
//	Za p;
//	p.Cat::m_age = 10;
//	p.Dog::m_age = 20;
//	cout << p.Cat::m_age << endl;
//	cout << p.Dog::m_age << endl;
//
//	return 0;
//}
//char* longestPalindrome(char* s) {
//    int len = strlen(s);
//    int* tmp = (int*)malloc((len - 1) * sizeof(int));
//    int left = 0;
//    int right = len - 1;
//    int begin = 0;
//    int end = 0;
//    while (begin < len - 1)
//    {
//        while (begin < right)
//        {
//            left = begin;
//            while (right > begin && s[right] != s[begin])
//                right--;
//            end = right;
//            while (left <=right)
//            {
//                if (s[left] != s[right])
//                    break;
//                left++;
//                right--;
//            }
//            if (left > right)
//            {
//            tmp[begin] = end - begin + 1;
//            break;
//            }
//            else if (right==begin )
//            {
//                tmp[begin] = 0;
//                break;
//            }
//           
//            right = end-1;
//        }
//        right = len - 1;
//        begin++;
//    }
//    int max = tmp[0];
//    int index = 0;
//    for (int i = 1; i < len - 1; i++)
//    {
//        if (max < tmp[i])
//        {
//            max = tmp[i];
//            index = i;
//        }
//    }
//    *(s + index + tmp[index]) = '\0';
//    free(tmp);
//    tmp = NULL;
//    return s + index;
//
//}
//int main()
//{
//    char arr[] = "xaabacxcabaaxcabaax";
//    cout<<longestPalindrome(arr);
//    return 0;
//}