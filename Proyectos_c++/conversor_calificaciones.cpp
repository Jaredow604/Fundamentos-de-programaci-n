/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
int calificacion;
cout<<"Ingresa tu calificacion del 0 al 100"<<endl;
cin>> calificacion;

if (calificacion>=97 && calificacion <=100){
    cout<<"Tu calificacion es A+";
}else if (calificacion>=93 && calificacion <=96){
    cout<<"Tu calificacion es A";
}else if (calificacion>=90 && calificacion <=92){
    cout<<"Tu calificacion es A-";
}else if (calificacion>=87 && calificacion <=89){
    cout<<"Tu calificacion es B+";
}else if (calificacion>=83 && calificacion <=86){
    cout<<"Tu calificacion es B";
}else if (calificacion>=80 && calificacion <=82){
    cout<<"Tu calificacion es B-";
}else if (calificacion>=77 && calificacion <=79){
    cout<<"Tu calificacion es C+";
}else if (calificacion>=73 && calificacion <=76){
    cout<<"Tu calificacion es C";
}else if (calificacion>=70 && calificacion <=72){
    cout<<"Tu calificacion es C-";
}else if (calificacion>=67 && calificacion <=69){
    cout<<"Tu calificacion es D+";
}else if (calificacion>=65 && calificacion <=66){
    cout<<"Tu calificacion es D";
}else if (calificacion>=0 && calificacion <=64){
    cout<<"Tu calificacion es D-";
}

}
