#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x)
{
	return exp(x)+x;//�������
}

int menu()
{
	int variant;
	cout << "1.������������ �������� ������. \n"
	     << "2.�������\n"
	     << "3.������\n"
	     << "4.�����.\n"
	     << " \n\n����� � ������� �������� ���� ��� ��� �������� ������ � � ���\n������ ������� ������ ���\n"
	     << ">>> ";
	cin >> variant;
	return variant;
}

int main()
{
	setlocale (0, "rus");
	//���������� � ���� � ����
	double X[4];
	double F[4];
	//���������� ��� ��������
	double W[4];
	double FW[4];
	double xk=0,L, x;
	//���������� ��� �������
	double F2[3];
	double F3[2];
	double F4,NIOT;
	setlocale(LC_ALL,"RUS");
	int variant;
	double ooo = -2;
	start: variant = menu();
	switch(variant)
	{
		case 1:
		{
			system("cls");
			cout<<"� ������� ��� ������� ���� ������ �� �����,\n"
				  "��� � ������� ���� ���� ��� ������� �� ������ � ��������� �������,\n�� � ��� ���.\n\n\n" 
				  "������� x\n";
		   	for(int i=0;i<4;i++){
				X[i] = ooo;
				ooo = ooo + 1;
			}
			for(int i=0;i<4;i++)
			{
				x=X[i];
				F[i]=f(x);
			}
			system("pause");
			system("cls");
			goto start;
		}
    	case 2:
    	{
    		system("cls");
    		cout<<"- ��� �������� ��������� �� ������������?\n- � ��� ��� ��� ������ �����: ����� ����, � �� � ���� ����������?\n\n\n          ����� ��������\n\nF \n";
    		for(int i=0;i<4;i++)
			{
				cout<<F[i]<<"\n";
			}

			cout<<"\n\nW \n";
			W[0]=(X[0]-X[1])*(X[0]-X[2])*(X[0]-X[3]);
			W[1]=(X[1]-X[0])*(X[1]-X[2])*(X[1]-X[3]);
			W[2]=(X[2]-X[0])*(X[2]-X[1])*(X[2]-X[3]);
			W[3]=(X[3]-X[0])*(X[3]-X[1])*(X[3]-X[2]);
			for(int i=0;i<4;i++)
				cout<<W[i]<<"\n";
			cout<<"\n\nF/w \n";
			FW[0]=F[0]/W[0];
			FW[1]=F[1]/W[1];
			FW[2]=F[2]/W[2];
			FW[3]=F[3]/W[3];
			for(int i=0;i<4;i++)
			cout<<FW[i]<<"\n";

			cout<<"!!!!!!!!!!!!!!�� �������� ���������� �������� ��� ��������� �� �������!!!!!!!!!!"
				<<"\n ��������� �������� ��� ����� X*\n";
			if(xk==0)
			{
				cout<<"\n������� �*";
				xk = -0.5;
			}
			L=F[0]*(xk-X[1])*(xk-X[2])*(xk-X[3])/W[0]
			+F[1]*(xk-X[0])*(xk-X[2])*(xk-X[3])/W[1]
			+F[2]*(xk-X[0])*(xk-X[1])*(xk-X[3])/W[2]
			+F[3]*(xk-X[0])*(xk-X[1])*(xk-X[2])/W[3];
			cout<<"��������� �������� ����� "<<L<<"\n\n �� �������� ��������� ����������� � ��������";
			system("pause");
    		system("cls");
    		goto start;
    	}

    	case 3:
    	{
    		system("cls");
    		cout<<"������ �� ����� ���������� �������� ���� Microsoft\n � ������ ��������� � �������� ���� �������� ���������� ���������� Microsoft.\n Microsoft �������� �� ������������� - ������ �� ��������.\n\n\n          ����� �������\n\nF \n";
    		for(int i=0;i<4;i++)
			{
				cout<<F[i]<<"\n";
			}
			cout<<"\n\n F(Xi,Xi+1)\n";
			F2[0]=(F[0]-F[1])/(X[0]-X[1]);
			F2[1]=(F[1]-F[2])/(X[1]-X[2]);
			F2[2]=(F[2]-F[3])/(X[2]-X[3]);
			for(int i=0;i<3;i++)
			{
				cout<<F2[i]<<"\n";
			}
			cout<<"\n\n F(Xi,Xi+1,Xi+2)\n";
			F3[0]=(F2[1]-F2[0])/(X[2]-X[0]);
			F3[1]=(F2[2]-F2[1])/(X[3]-X[1]);
			for(int i=0;i<2;i++)
			{
				cout<<F3[i]<<"\n";
			}
			cout<<"\n\n F(Xi,Xi+1,Xi+2,Xi+3)\n";
			F4=(F3[1]-F3[0])/(X[3]-X[0]);
			cout<<F4<<"\n";
			cout<<"!!!!!!!!!!!!!!�� �������� ���������� �������� ��� ��������� �� �������!!!!!!!!!!"
				<<"\n ��������� ������� ��� ����� X*\n";
			if(xk==0)
			{
				cout<<"\n������� �*";
				xk=-0.5;
			}	
			NIOT=fabs(F[0]+(xk-X[0])*F2[0]+(xk-X[0])*(xk-X[1])*F3[0]+(xk-X[0])*(xk-X[1])*(xk-X[2])*F4);
				cout<<"��������� ������� ����� "<<NIOT<<"\n\n �� �������� ��������� ����������� �� ������� � ��������";
			system("pause");
    		system("cls");
    		goto start;	
		}
		case 8:
		{
			default:
	    	system("cls");
			return 0;
		}
	}
}
