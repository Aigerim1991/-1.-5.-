#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

#define size8 8

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int nz = 0;	
	do
	{
		cout << "����� ����� �������: ";
		cin >> nz;

		switch (nz)
		{
		case 1:
		{
			//��������� ������ �� ������ ��������� 
			//���������� ����������: 
			int a[size8];
			a[0] = 37; //1-��
			a[1] = 0;
			a[2] = 50;
			a[3] = 46;
			a[4] = 34;
			a[5] = 46;
			a[6] = 0;
			a[7] = 13;
		}
		break;

		case 2:
		{
			//��������� ������ �� ������ ��������� ����������, 
			int a[10];
			//��������� � ���������� � ���� ���������� ���������
			cout << "������� �������� �������\n";
			for (int i = 0; i < 10; i++)
			{
				cout << " --> ";
				cin >> a[i];
			}
		}
		break;

		case 3:
		{
			//������ ������������ ��� �������� �������� 
			//������ ���������� �������.  � ������� ������� 
			//��������� ����� ��������� ������ ������ ����������, 
			//�������� � ��������� �� 163 �� 190 ������������

			int children[12];
			for (int i = 0; i < 12; i++)
			{
				children[i] = 163 + rand() % 28;
			}
			cout << "���������� ������� ����������� \n";
			cout << "-------------- \n";
			for (int i = 0; i < 12; i++)
			{
				cout << children[i] << endl;
			}
		}
		break;

		case 4:
		{
			//��������� ��������� ������ �� ����� ������ 
			//�������� ������� �� ��� �������
			int a[12];
			for (int i = 0; i < 12; i++)
			{
				a[i] = 163 + rand() % 300;
			}

			cout << "���������� ������� ����������� \n";
			cout << "-------------- \n";

			cout << "������� ������ �������: ";
			int index = 0;
			cin >> index;
			cout << "������� ��� �������� " << index
				<< " ����� " << a[index] << endl;

		}

		case 5:
		{
			//������� �������� ������� �� ����� � �������� �������
			int a[12];
			for (int i = 0; i < 12; i++)
			{
				a[i] = 163 + rand() % 300;
			}

			for (int i = 11; i >= 0; i--)
			{
				cout << a[i] << endl;
			}
		}
		break;
		case 6:
		{//6.	��� ������. ��������� ���������:
			//a.������� ����������� ����� �� ������ �������� �������;
			//b.������� �������� ��������������� ���� ����� ��������� �������
			int a[5];
			for (int i = 0; i < 5; i++)
			{
				a[i] = 1 + rand() % 10;
				cout << a[i] << "\n";
			}
			cout << "------\n";
			int index;
			int sum = 0;

			cout << "������ ����� �������: ";
			cin >> index;
			sum += a[index];

			cout << "������ ����� �������: ";
			cin >> index;
			sum += a[index];

			int sred_arif = sum / 2;
			cout << "������� �������� = " << sred_arif << endl;
		}

		break;
		case 7:
		{
			int a[10], d, n, i;
			cout << "������ �����" << endl;
			cin >> n;

			for (i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 20;
				cout << a[i] << endl;
			}
			for (int i = 0; i < 10; i++)
			{
				cout << "��������� � 2 ���� " << a[i] * 2 << endl;
				cout << "��������� �� ����� " << a[i] - n << endl;
				cout << "��������� �� ������ ������� " << a[i] / a[0] << endl;
			}



		}break;
		case 8:
		{
			//� ������� �������� �������� � ��������� 
			//12 ��������� ���������. 
			//���������� ����� ��������� ���� ���������
			int a[12], sum = 0;
			for (int i = 0; i < 12; i++)
			{
				a[i] = 20 + rand() % 100;
				cout << a[i] << endl;
				sum += a[i];

			}
			cout << "O���� ��������� ���� ��������� " << sum << endl;










		}break;
		case 9:
		{
			//� ������� �������� ��������
			//� ���������� �������, �������� 
			//�� ������ ���� �������.
			//���������� ������������� ���������� ������� 
			//� ���� ������
			int a[28], sum = 0, sred_arifmet;
			for (int i = 0; i < 28; i++)
			{
				a[i] = 5 + rand() % 15;
				cout << a[i] << endl;
				sum += a[i];
				sred_arifmet = sum / 28;
			}
			cout << "O���� ���������� ������� " << sum << " ������������� ���������� ������� " << sred_arifmet << endl;
		}
		break;
		case 10:
		{
			//� ������� �������� ���������� � ����� ������� �� 
			//30 ���������, ����������� � �������� ����������, 
			//���������������� �������� ��������. 
			//����������, �� ��������� �� ����� ����� ���� ��������� ���������������� ����������
			int a[30], sum = 0, gruz;
			cin >> gruz;
			for (int i = 0; i < 30; i++)
			{
				a[i] = 20 + rand() % 80;
				cout << a[i] << endl;
				sum += a[i];

			}
			cout << " ����� ����� " << sum << endl;
			if (gruz > sum)
				cout << "��������� ����� ����� ���� ��������� ���������������� ���������� " << "\n";
			else cout << " �� ��������� " << endl;
		}
		break;
		case 11:
		{
			//��� ������. ����������: 
			//a.��� ��������������� ��������;
			//b.��� ��������, �� ����������� ����� 100.
				//c.��� ������ ��������
			int a[30], sum = 0;

			for (int i = 0; i < 30; i++)
			{
				a[i] = -20 + rand() % 200;
				if (a[i] > 0)
					cout << "��������������� �������� " << a[i] << endl;

				if (a[i] < 100)
					cout << "�� ����������� ����� 100 " << a[i] << endl;
				if (a[i] % 2 == 0)
					cout << "��� ������ �������� " << a[i] << endl;
			}


		}
		break;
		case 12:
		{
			//��� ������. ������� �� ����� ������� ��� ��������, 
			//������� �� ������ ������, ����� � �� ��������
			int a[10];
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 25;
				if (i % 2 == 0)
					cout << " ������ " << i << "\n";
				
			}
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 25;
				if (i % 2 != 0)
					cout << " �� ������" << i << "\n";

			}
		}
		break;
		}
		
	} while (nz > 0);
}