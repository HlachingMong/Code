#include<iostream>

using namespace std;

void dataType(string dt){
    if(dt=="int" || dt=="string" || dt=="float" || dt=="char" || dt=="bool" || dt=="double"){
        cout<<"Valid Data Type: "<<dt<<endl;
    }
    else{
        cout<<"Invalid Data Type: "<<dt<<endl;
    }
}

void variableName(string v){
    int n=0;
    int p=0;
    for(int i=0; i<v.length(); i++){
        if(v[i]=='0' || v[i]=='1' || v[i]=='2' || v[i]=='3' || v[i]=='4' || v[i]=='5' || v[i]=='6' || v[i]=='7' || v[i]=='8' || v[i]=='9'){
            cout<<"Error! Variable name starts with the number: "<<v[i]<<endl;
            n++;
        }
        break;
    }

    for(int i=0; i<v.length(); i++){
            if(v[i]=='!' || v[i]=='@' || v[i]=='#' || v[i]=='$' || v[i]=='%' || v[i]=='&' || v[i]=='*' || v[i]=='-' || v[i]=='+' || v[i]=='_'){
                cout<<"Error! Variable name contains symbol: "<<v[i]<<endl;
                p++;
                break;
            }
        }

    if(n==0 && p==0){
        cout<<"Valid Variable name: "<<v<<endl;
    }
    else{
        cout<<"Invalid Variable name: "<<v<<endl;
    }
    for(int i=0; i<v.length(); i++){
        if(v[i]==',' || v[i]=='.' || v[i]==':'){
            cout<<"Error! Invalid Punctuator: "<<v[i]<<endl;
            cout<<"\n";
            break;
        }
        else if(v[i]==';'){
            cout<<"Valid Punctuator: "<<v[i]<<endl;
            cout<<"\n";
            break;
        }
    }
}

void returnType(string rt){
    if(rt=="void" || rt=="string" || rt=="int" || rt=="bool"){
        cout<<"Valid return type: "<<rt<<endl;
    }
    else{
        cout<<"Error! Invalid return type: "<<rt<<endl;
    }
}

void functionName(string f){
    int id=0;
    int t=0;
    int n=0;
    for(int i=0; i<f.length(); i++){
        if(f[i]=='0' || f[i]=='1' || f[i]=='2' || f[i]=='3' || f[i]=='4' || f[i]=='5' || f[i]=='6' || f[i]=='7' || f[i]=='8' || f[i]=='9'){
        cout<<"Error! Function name starts with the number: "<<f[i]<<endl;
        n++;
    }
    break;
    }

    for(int i=0; i<f.length(); i++){
            if(f[i]=='!' || f[i]=='#' || f[i]=='$' || f[i]=='%' || f[i]=='&' || f[i]=='*' || f[i]=='@'){
            cout<<"Error! Function name contains the symbol: "<<f[i]<<endl;
            t++;
            break;
        }
    }

    if(n==0 && t==0){
        cout<<"Valid Function Name: "<<f<<endl;
    }
    else{
        cout<<"Invalid Function Name: "<<f<<endl;
    }
    for(int i=0; i<f.length(); i++){
       if(f[i]=='(' || f[i]==')'){
          id++;
    }
    }
    //cout<<id<<endl;
    if(id == 1){
        cout<<"Unbalanced Bracket"<<endl;
        cout<<"\n";
    }
    else if(id == 2){
        cout<<"Balanced Bracket"<<endl;
        cout<<"\n";
    }
    else if(id == 0){
        cout<<"There is no Brackets"<<endl;
        cout<<"\n";
    }

    int g=0;
    for(int i=0; i<f.length(); i++){
        if(f[i]=='{' || f[i]=='}'){
            g++;
        }
    }
    if(g==1){
        cout<<"Unbalanced Curly Brace"<<endl;
    }
    else if(g==2){
        cout<<"Balanced Curly Brace"<<endl;
    }


}

void functionDefinition(string fd, string a, string r, string w){
    
    if(fd=="void" && r=="return"){
        cout<<"Error! Return Type is void, void doesn't return anything"<<endl;
    }
    else if(fd=="void" && r!="return"){
        cout<<"Valid Function Definition"<<endl;
    }
    else{
        cout<<"Valid Function Definition"<<endl;
    }
    
}



int main(){
    string dt, v;
    string rt, f, b;
    string fd, a, r, w;

    int choice;
    for(;;){
        cout<<"Select options to check: "<<endl;
        cout<<"1. Check Variable Syntex."<<endl;
        cout<<"2. Check Function Syntex."<<endl;
        cout<<"3. Check Function Definition"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>choice;
        int n;

        switch(choice){
            case 1:
             cout<<"Enter Variable: ";
             cin>>dt>>v;
             dataType(dt);
             variableName(v);
             break;
            case 2:
             cout<<"Enter Funtion: ";
             cin>>rt>>f;

             cout<<"The Function is: "<<rt<<" "<<f<<endl;

             returnType(rt);
             functionName(f);
             break;
             case 3:
             cout<<"Enter Function : ";
             cin>>fd>>a>>r>>w;
             functionDefinition(fd, a, r, w);
             break;
            case 4:
              n=1;
             break;
            default :
             cout<<"Please select right option"<<endl;
             cout<<"\n";
        
             }
             if(n==1){
                break;
             }
            
    }
    //bracket(b);
    return 0;
}
