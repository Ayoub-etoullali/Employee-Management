#include <iostream>
#include <conio.h>

using namespace std;

class Employe{
	
	int matricule;
	char *nom;
	double salaire;
	int age;
	
	public :
		// moi
		Employe(int m,char *n,double s,int a){
			
			matricule=m;   nom=n;   salaire=s;  age=a;
		}
		//
		void toString();
		double getSalaire();
		void setSalaire(double);
		void afficherS();
		int getAge();
		void setAge(int);
		void afficherA();
};

void Employe::toString(){
	
	cout << "Nom : " << nom << "\tMatricule : " <<  matricule << "\tAge : " << age << "\tSalaire : " << salaire << endl;
}

double Employe::getSalaire(){
	
	return salaire;
}

void Employe::setSalaire(double y){
	
	salaire=y;
}

void Employe::afficherS(){
	
	cout << "Salaire : " << salaire << endl;
}

int Employe::getAge(){
	
	return age;
}


void Employe::setAge(int y){
	
	age=y;
}

void Employe::afficherA(){
	
	cout << "Age : " << age << endl;
}





class Adherant : public Employe{
	
	char *dateAdher;
	double montPart;
	public :
		// moi  
		Adherant(char*,double);
		//  
		double getMontant();
		void setMontant(float);
		double setSaliare(double){
			
			return getSalaire()-montPart;
		}
		void afficherA(){
			
			cout << "Salaire : " << getSalaire()-montPart << endl;
		}		
};

Adherant::Adherant(char* d,double m):Employe(456464,"radouane",7000,30){
	
	dateAdher=d;   montPart=m;
}

double Adherant::getMontant(){
	
	return montPart;
}

void Adherant::setMontant(float x){
	
	montPart=x;
	cout << "Nouveau montant : " << montPart << endl;
}




int main(){
	
	double s,a,m;
	Employe A(95664,"ayoub",10000,20),B(456464,"radouane",7000,30);
	A.toString();
	s=A.getSalaire();  cout << s << endl;
	A.setSalaire(11000);
	A.afficherS();
	a=A.getAge(); cout << a << endl;
	A.setAge(21);  
	A.afficherA();
	getch();
	B.toString();
	
	getch();
	Adherant C("15-04-2022",1000);

	m=C.getMontant(); cout << "Montant est : "<< m <<endl;
	C.setMontant(1500);
	// modifier manuallement
	C= Adherant("15-04-2000",9999);
	cout << "Montant est : "<< C.getMontant() <<endl;
	
	getch();
	return 0; 
}
