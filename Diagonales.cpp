#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int m[3][3],diagonalprincipal=0,diagonalsecundaria=0,seccion1=0,seccion2=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			m[i][j]=rand()%(99-1+1)+1;
			cout<<m[i][j]<<"\t";
			if(i==j)diagonalprincipal+=m[i][j];
			if(i+j==2)diagonalsecundaria+=m[i][j];
			if(i<j)seccion1+=m[i][j];
			if(i>j)seccion2+=m[i][j];
		}
		cout<<endl;
	}
	cout<<"\nLa suma de la diagonal principal es "<<diagonalprincipal<<endl;
	cout<<"\nLa suma de la diagonal secundaria es "<<diagonalsecundaria<<endl;
	cout<<"\nLa suma de la primera secci�n es "<<seccion1<<endl;
	cout<<"\nLa suma de la segunda secci�n es "<<seccion2;
	return 0;
}

