#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//// cw 5.2.1
void wyczysc ( char*napis){
napis[]=0;
}

int dlugosc_bez_spacji(char *napis){
    int pom=0;
    int i=0;
    while[napis[i]!=0){
        if(napis[i]!=32){
            pom++
        }
    i++
    }

return pom;

}

int Duze_litery(char*napis){
int i=0;
int pom=0;
while(napis[i]!=0){
    if(napis[i]>=65&&napis[i]<=90){
        pom++
    }
    i++;
}
return pom;

}

int Oro_totalne(char*napis){
char*wynik=malloc(100*sizeof(char));
int i=0;
int j=0;

while(napis[i]!=0){
    if(napis[i]=!32){
        wynik[j]=napis[i];
        j++;
    }
i++
}
wynik[j]=0;
return wynik;
}

///////////////////////////
int Oro_totalnev2(char*napis){
char*wynik=malloc(100*sizeof(char));
int i=0;
int j=0;

while(napis[i]!=0){
    if(napis[i]=!32){
        wynik[i]=napis[i];

    }
    else{
        wynik[i]=95;
    }
i++
}
wynik[i]=0;
return wynik;
}
//////////////////////////////
int porownaj(char*napis1, char*napis2){
int i=0;
int dl1=dlugosc(napis1);
int dl2= dlugosc(napis2);
if(dl1==dl2){
    for (i=0;i<=dl2-1;i++){
        if(napis1[i]!=[napis2[i]){
            return 0;
        }
    }
    return 1;
}
else{
    return 0;
}
}
////////////////////////////////////
int porownajslownikowko(char*napis1,char*napis2){
int i;
if(porownaj(napis1,napis2)==1){
    return 0;
}
for(i-0;napis1[i] && napis2[i];i++){
    if(napis1[i]!=napis2[i]){
        if(napis1[i]<napis2[i]){
            return 1;
        }
        else if(napis1[i]>napis2[i]){
            return 0;
        }

        }
    }
    if(napis1[i]!=0){
            return 1;
  }
  if(napis2[i]!=0){
    return 1;
  }
}

void przepisz(char*napis1, char*napis2){

int i;
for (i=0;i<dlugosc(napis1);i++){
    napis2[i]=napis1[i];
}
napis2[dlugosc(napis)]=0;

}


void przepisz_ale_inna(char*napis1, char*napis2, unsigned int n){

int i;
for (i=0;i<dlugosc(napis1)&&i<n;i++){
    napis2[i]=napis1[i];
}
napis2[i]=0;

}
//lekacja_2

void zamien_spacje(char* napis){
int i;
for(i=0;napis[i]!=0;i++){
    if(napis[i]=32){
        napis[i]=95;
    }
}

}

//////

void konkatenacja_napisu(char* napis1, char* napis2, char* napis3){
int i;
for(i=0;napis[i]!=0;i++)
{
   napis3[i]= napis1[i];
}
for(j=0;napis2[j];j++;i++)
{
napis3[i]=napis2[j];
}
 napis3[i]=0;
}


/////////

void male_na_duze(char* napis1){
int i;
for(i=0;napis[i]!=0;i++)
{
  if(napis[i]>=97&&napis[i]<=122){
    napis[i]=napis[i]-32;
  }
}


}

////////////////

void zwiekszenie_o_jeden(char* napis1){
int i;
for(i=0;napis[i]!=0;i++)
{
  if(napis[i]>=40&&napis[i]<=56){
    napis[i]=napis[i]+1;
  }
}
}


//////////////////


void dodawanie(char* napis1, char* wynik){
int i;
for(i=0;napis[i]!=0;i++)
{
  if(napis[i]>=48&&napis[i]<=56)
  {
    napis[i]=napis[i]+1;
  }
}

}

//////////////////
 void wytnij(char *str, int n, int m){
 int i,j

  for(j=0;napis[j]!=0;j++)
  {
      ///ustala dlugosc napisu
  }
if(j+1>m){ // jesli napis jest wystarczajaco dlugi aby wicinac srodek
    for(i=0;i+m<j;i++){
        napis[n+1]= napis[m+i+1]
    }
}

else if((n<j)&&(j+1<=m)){ /// jesli jest sredniej dlugosci i wycinamy koncowke
    napis[n]=0;
}
 }
///////

void wytnij2(char napis1, char napis2){
int i, dl;
for(dl=0;napis2[dl]!=0;dl++){
    for (i=0;napis[i]!=0;i++)
    {
        if(porownaj)(napis1,napis2)){
        wytnij(napis1,i,i+dl-1);
        return
        }
    }
}

}
/////////////

 void wytnijtesameznaki(char * napis1, char * napis2)
 {
 int i,j;

  for(i=0,j=0;napis[i]!=0;i++)
  {
      if(napis1[i]!=napis2[j])

  }
 }

char * godzina(int godz, int min, int sek){
char* wynik = malloc(9*sizeof(char));
sprintf(wynik,"%02d:%02d:02d", godz,min,sek);
return wynik;

}

void maleduze(char* napis){

int i;

for(i=0;napis[i]!=0;i++)
{
    napis[i]= towupper(napis[i]);

}
}

char* sklejnapisy(char* napis1, char napis2, char napis3){

char* wynik= malloc((strlen(napis1)+strlen(napis2)+strlen(napis3)+1))*sizeof(char)

strcpy(wynik, napis1);
strcat(wynik,napis2)'
strcat(wynik,napis3)
return wynik;


}




int main()
{

    //printf("5.2.1\n");
    //chat *napis="pieczywo";
    //printf(napis)

    //wyczysc(napis);
    //printf(napis);
   //char* piaty ="student";
    //char* szosty= malloc(20*sizeof(char));/// alokacja pamieci na szostego;
    //wypisz(piaty);
    //przepisz(piaty,szosty);
    //wypisz(piaty);
    //wypisz(szosty);


    char napis[50]= "tu chcemy zamienic spacje";
    printf(napis)
    printf("\n")
    zamien_spacje(napis);
    printf(napis)

    char*nap "pierwszy";
    char* napp = "drugi";
    char * napis[30];
    konkatenacja_napisu(nap,napp,napis);
    //printf(napis);



    return 0;
}
