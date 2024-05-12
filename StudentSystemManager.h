#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//学生信息
typedef struct _Student
{
	int stuNum;
	char name[20];
	int score;
}Student;

//结点信息
typedef struct _Node//创建结点
{
	Student student;
	struct _Node* next;//数据域和指针域
}Node;

void welcome();//开头学生的管理操作步骤

//要定义

void inputStudent(Node* head);//输入相似信息


void printStudent(Node* head);//打印学生信息

void countStudent(Node* head);//学生人数

void findStudent(Node* head);//查找学生信息

void saveStudent(Node* head);//保存学生信息

void loadStudent(Node* head);//加载学生信息

void modifyStudent(Node* head);//修改学生信息

void deleteStudent(Node* head);//删除学生信息

void sortStudent(Node* head);//退出系统