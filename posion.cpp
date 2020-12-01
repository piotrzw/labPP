#include <iostream>
using namespace std;
#define ROZM 20

typedef struct karta {
        int wartosc;
        char kolor[7];
    }karta;

void wypelnij_talie(karta *talia, int parametry[], int wartosci[]);
void drukuj_talie(karta *talia, int rozm);

int main()
{
    int wartosci[ROZM];
    int parametry[4];
    
    int k, g ,gv, o, ov;

    cin >> k >> g >> gv >> o;
    parametry[0]=k;
    parametry[1]=g;
    parametry[2]=gv;
    parametry[3]=o;
    for(int i=0; i<o; i++)
    {
        cin >> ov;
        wartosci[i]=ov;
    }
    karta *talia=(karta*)malloc((g+o*k)*sizeof(karta));
    if ( talia == NULL ) { 
        cout << "Brak pamięci!\n"; 
        return 1;                
    }
    int rozmiar= g+o*k;
    wypelnij_talie(talia, parametry, wartosci);
    drukuj_talie(talia, rozmiar);
    return 0;
}

void drukuj_talie(karta *talia, int rozm)
{
    for(int i=0; i < rozm; i++)
    {
        cout << talia[i].wartosc << ' ' << talia[i].kolor << ' ';
    }
}

void wypelnij_talie(karta *talia, int parametry[], int wartosci[])
{
    for(int i=0; i<parametry[1]; i++)
    {
        talia[i].wartosc=parametry[2];
        talia[i].kolor[0]='g';
        talia[i].kolor[1]='r';
        talia[i].kolor[2]='e';
        talia[i].kolor[3]='e';
        talia[i].kolor[4]='n';
        talia[i].kolor[5]='\0';
    }
    switch(parametry[0])
    {
        case 1:
        {
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1];
                talia[k].kolor[0]='b';
                talia[k].kolor[1]='l';
                talia[k].kolor[2]='u';
                talia[k].kolor[3]='e';
                talia[k].kolor[4]='\0';
                talia[k].wartosc=wartosci[i];
            }
        }
        break;
        case 2:
        { 
            for(int i=0;i<parametry[3];i++)
            {    int k=i+parametry[1];
                talia[k].kolor[0]='b';
                talia[k].kolor[1]='l';
                talia[k].kolor[2]='u';
                talia[k].kolor[3]='e';
                talia[k].kolor[4]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3];
                talia[k].kolor[0]='r';
                talia[k].kolor[1]='e';
                talia[k].kolor[2]='d';
                talia[k].kolor[3]='\0';
                talia[k].wartosc=wartosci[i];
            }
        }
        break;
        case 3: 
        {
            for(int i=0;i<parametry[3];i++)
            {    int k=i+parametry[1];
                talia[k].kolor[0]='b';
                talia[k].kolor[1]='l';
                talia[k].kolor[2]='u';
                talia[k].kolor[3]='e';
                talia[k].kolor[4]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3];
                talia[k].kolor[0]='r';
                talia[k].kolor[1]='e';
                talia[k].kolor[2]='d';
                talia[k].kolor[3]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*2;
                talia[k].kolor[0]='v';
                talia[k].kolor[1]='i';
                talia[k].kolor[2]='o';
                talia[k].kolor[3]='l';
                talia[k].kolor[4]='e';
                talia[k].kolor[5]='t';
                talia[k].kolor[6]='\0';
                talia[k].wartosc=wartosci[i];
            }
        }
        break;
        case 4: 
        {
            for(int i=0;i<parametry[3];i++)
            {    int k=i+parametry[1];
                talia[k].kolor[0]='b';
                talia[k].kolor[1]='l';
                talia[k].kolor[2]='u';
                talia[k].kolor[3]='e';
                talia[k].kolor[4]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3];
                talia[k].kolor[0]='r';
                talia[k].kolor[1]='e';
                talia[k].kolor[2]='d';
                talia[k].kolor[3]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*2;
                talia[k].kolor[0]='v';
                talia[k].kolor[1]='i';
                talia[k].kolor[2]='o';
                talia[k].kolor[3]='l';
                talia[k].kolor[4]='e';
                talia[k].kolor[5]='t';
                talia[k].kolor[6]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*3;
                talia[k].kolor[0]='y';
                talia[k].kolor[1]='e';
                talia[k].kolor[2]='l';
                talia[k].kolor[3]='l';
                talia[k].kolor[4]='o';
                talia[k].kolor[5]='w';
                talia[k].kolor[6]='\0';
                talia[k].wartosc=wartosci[i];
            }
        }
        break;
        case 5:
        {
            for(int i=0;i<parametry[3];i++)
            {    int k=i+parametry[1];
                talia[k].kolor[0]='b';
                talia[k].kolor[1]='l';
                talia[k].kolor[2]='u';
                talia[k].kolor[3]='e';
                talia[k].kolor[4]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3];
                talia[k].kolor[0]='r';
                talia[k].kolor[1]='e';
                talia[k].kolor[2]='d';
                talia[k].kolor[3]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*2;
                talia[k].kolor[0]='v';
                talia[k].kolor[1]='i';
                talia[k].kolor[2]='o';
                talia[k].kolor[3]='l';
                talia[k].kolor[4]='e';
                talia[k].kolor[5]='t';
                talia[k].kolor[6]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*3;
                talia[k].kolor[0]='y';
                talia[k].kolor[1]='e';
                talia[k].kolor[2]='l';
                talia[k].kolor[3]='l';
                talia[k].kolor[4]='o';
                talia[k].kolor[5]='w';
                talia[k].kolor[6]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*4;
                talia[k].kolor[0]='w';
                talia[k].kolor[1]='h';
                talia[k].kolor[2]='i';
                talia[k].kolor[3]='t';
                talia[k].kolor[4]='e';
                talia[k].kolor[5]='\0';
                talia[k].wartosc=wartosci[i];
            }
        } 
        break;
        case 6: 
        {
            for(int i=0;i<parametry[3];i++)
            {    int k=i+parametry[1];
                talia[k].kolor[0]='b';
                talia[k].kolor[1]='l';
                talia[k].kolor[2]='u';
                talia[k].kolor[3]='e';
                talia[k].kolor[4]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3];
                talia[k].kolor[0]='r';
                talia[k].kolor[1]='e';
                talia[k].kolor[2]='d';
                talia[k].kolor[3]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*2;
                talia[k].kolor[0]='v';
                talia[k].kolor[1]='i';
                talia[k].kolor[2]='o';
                talia[k].kolor[3]='l';
                talia[k].kolor[4]='e';
                talia[k].kolor[5]='t';
                talia[k].kolor[6]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*3;
                talia[k].kolor[0]='y';
                talia[k].kolor[1]='e';
                talia[k].kolor[2]='l';
                talia[k].kolor[3]='l';
                talia[k].kolor[4]='o';
                talia[k].kolor[5]='w';
                talia[k].kolor[6]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*4;
                talia[k].kolor[0]='w';
                talia[k].kolor[1]='h';
                talia[k].kolor[2]='i';
                talia[k].kolor[3]='t';
                talia[k].kolor[4]='e';
                talia[k].kolor[5]='\0';
                talia[k].wartosc=wartosci[i];
            }
            for(int i=0;i<parametry[3];i++)
            {   int k=i+parametry[1]+parametry[3]*5;
                talia[k].kolor[0]='b';
                talia[k].kolor[1]='l';
                talia[k].kolor[2]='a';
                talia[k].kolor[3]='c';
                talia[k].kolor[4]='k';
                talia[k].kolor[5]='\0';
                talia[k].wartosc=wartosci[i];
            }
        } 
        break;
    }
}