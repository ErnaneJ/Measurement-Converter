#include <iostream>

using namespace std;

int main(){
    float temp, c, f, k;
    char unidade;
    cout<<"Digite a temperatura, seguinte de sua unidade de medida para realizarmos a conversão:"<<endl;
    cin>>temp>>unidade;
    unidade = toupper(unidade);
    if(unidade=='C'){
        c = temp;
        f = c*1.8+32;
        k = c+273.15;
    }else if(unidade=='F'){
        f = temp;
        c = (f-32)/1.8;
        k = c+273.15;
    }else if(unidade=='K'){
        k = temp;
        c = k-273.15;
        f = c*1.8+32;
    }
    cout.precision(2);
    cout<<fixed<<"Celsius: "<<c<<
           "\nFarenheit: "<<f<<
           "\nKelvin: "<<k;
}