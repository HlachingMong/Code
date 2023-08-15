#include <iostream>

using namespace std;

void determineOperators(string data){
    int n=1;
    for(int i=0; i<data.length(); i++){
        if(data[i]=='+' || data[i]=='-' || data[i]=='/' || data[i]=='*' || data[i]=='=' || data[i]=='%'){
            cout<<"Operator"<<n++<<": "<<data[i]<<endl;
        }
    }
}

int main(){
    string data;
    cout<<"Input String to determine operators: ";
    cin>>data;
    determineOperators(data);
    return 0;
}