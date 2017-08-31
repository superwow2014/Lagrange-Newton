#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x)
{
	return exp(x)+x;//‘”Ќ ÷»я
}

int menu()
{
	int variant;
	cout << "1.‘ормировани€ исходных данных. \n"
	     << "2.Ћагранж\n"
	     << "3.Ќьютон\n"
	     << "4.¬ыход.\n"
	     << " \n\nкогда € начинал набирать этот код его понимали только € и бог\nтеперь осталс€ только бог\n"
	     << ">>> ";
	cin >> variant;
	return variant;
}

int main()
{
	setlocale (0, "rus");
	//переменные и туда и туда
	double X[4];
	double F[4];
	//переменные дл€ лагранжа
	double W[4];
	double FW[4];
	double xk=0,L, x;
	//переменные дл€ ньютона
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
			cout<<"я столько раз набирал свой пароль по пь€ни,\n"
				  "что в трезвом виде могу его набрать не только с закрытыми глазами,\nно и без рук.\n\n\n" 
				  "¬ведите x\n";
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
    		cout<<"-  ак отличить наркомана от программиста?\n- ј что дл€ вас значит фраза: ќтдай винт, а то € твою мамупродам?\n\n\n          ћ≈“ќƒ Ћј√–јЌ∆ј\n\nF \n";
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

			cout<<"!!!!!!!!!!!!!!Ќ≈ «јЅ”ƒ№“≈ ѕќ∆јЋ”…—“ј «јѕ»—ј“№ —јћ ћЌќ√ќ„Ћ≈Ќ ѕќ ‘ќ–ћ”Ћ≈!!!!!!!!!!"
				<<"\n ћЌќ√ќ„Ћ≈Ќ Ћј√–јЌ∆ј ƒЋя „»—Ћј X*\n";
			if(xk==0)
			{
				cout<<"\n¬ведите х*";
				xk = -0.5;
			}
			L=F[0]*(xk-X[1])*(xk-X[2])*(xk-X[3])/W[0]
			+F[1]*(xk-X[0])*(xk-X[2])*(xk-X[3])/W[1]
			+F[2]*(xk-X[0])*(xk-X[1])*(xk-X[3])/W[2]
			+F[3]*(xk-X[0])*(xk-X[1])*(xk-X[2])/W[3];
			cout<<"ћногочлен лагранжа равен "<<L<<"\n\n Ќ≈ «јЅ”ƒ№“≈ ѕќ—„»“ј“№ ѕќ√–≈ЎЌќ—“№ » —–ј¬Ќ»“№";
			system("pause");
    		system("cls");
    		goto start;
    	}

    	case 3:
    	{
    		system("cls");
    		cout<<"’акеры из —анкт ѕетербурга взломали сеть Microsoft\n и внесли изменени€ в ключевые коды новейших разработок корпорации Microsoft.\n Microsoft выражает им благодарность - теперь всЄ работает.\n\n\n          ћ≈“ќƒ ЌЅя“ќЌј\n\nF \n";
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
			cout<<"!!!!!!!!!!!!!!Ќ≈ «јЅ”ƒ№“≈ ѕќ∆јЋ”…—“ј «јѕ»—ј“№ —јћ ћЌќ√ќ„Ћ≈Ќ ѕќ ‘ќ–ћ”Ћ≈!!!!!!!!!!"
				<<"\n ћЌќ√ќ„Ћ≈Ќ Ќ№ё“ќЌј ƒЋя „»—Ћј X*\n";
			if(xk==0)
			{
				cout<<"\n¬ведите х*";
				xk=-0.5;
			}	
			NIOT=fabs(F[0]+(xk-X[0])*F2[0]+(xk-X[0])*(xk-X[1])*F3[0]+(xk-X[0])*(xk-X[1])*(xk-X[2])*F4);
				cout<<"ћногочлен ньютона равен "<<NIOT<<"\n\n Ќ≈ «јЅ”ƒ№“≈ ѕќ—„»“ј“№ ѕќ√–≈ЎЌќ—“№ ѕќ ‘ќ–ћ”Ћ≈ » —–ј¬Ќ»“№";
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
