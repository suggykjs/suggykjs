#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//ѧ����Ϣ
typedef struct _Student
{
	int stuNum;
	char name[20];
	int score;
}Student;

//�����Ϣ
typedef struct _Node//�������
{
	Student student;
	struct _Node* next;//�������ָ����
}Node;

void welcome();//��ͷѧ���Ĺ����������

//Ҫ����

void inputStudent(Node* head);//����������Ϣ


void printStudent(Node* head);//��ӡѧ����Ϣ

void countStudent(Node* head);//ѧ������

void findStudent(Node* head);//����ѧ����Ϣ

void saveStudent(Node* head);//����ѧ����Ϣ

void loadStudent(Node* head);//����ѧ����Ϣ

void modifyStudent(Node* head);//�޸�ѧ����Ϣ

void deleteStudent(Node* head);//ɾ��ѧ����Ϣ

void sortStudent(Node* head);//�˳�ϵͳ