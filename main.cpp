#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

int main() {


    string str ="john123@gmail.com";
    int i= str.find('@');
    cout<<str.substr(0,i);

    // int count=0;
    // string str = "madam";
    // string str2 = "";
    // int len = (int)str.length();
    // str2.resize(len);
    //
    // for (int i=0,j=len-1; i<len; i++,j--) {
    //
    //     str2[i] =str[j];
    // }
    // if(str.compare(str2)==0) {
    //     cout<<"it is a palindrome";
    // }

    // for (int i=0;str[i]!='\0';i++) {
    //     if (str[i]>=65 && str[i]<90)
    //         str[i] =str[i] + 32;
    // }
    // cout<<str;

    // string::iterator it;
    // for(it=str.begin();it!=str.end();it++)
    //     count++;
    // cout<<count;

    // for(int i=0; str[i]!='\0'; i++) {
    //     count++;
    // }



    // string str ="today";
    // string::iterator it;
    // for (it=str.begin(); it!=str.end();it++) {
    //     *it=*it-32; //ta kanei kefalaia ena ena
    //     //cout<<*it;
    // }
    // string str ="today";
    // string::reverse_iterator it; //auto kai to apo katw kanei anapoda
    // for (it=str.rbegin(); it!=str.rend();it++) {
    //     //*it=*it-32; //ta kanei kefalaia ena ena
    //     cout<<*it;
    // }
    // //cout<<str;
    // cout<<endl;
    // string str= "Programming";
    //
    // str[4]='M';
    // cout<<str<<endl;
    // string str= "Hello World";
    // cout<<str.find_first_of("le");


    // char s1[10]="235";
    // char s2[10]="54.78";
    //
    //
    // long int x=strtol(s1,NULL, 10);
    // float y =strtof(s2,NULL);
    //
    // cout<<x+10<<endl<<y<<endl;
    // char s1[20] ="Porgramming";
    // cout<<strchr(s1,'g')<<endl;


    // char s1[20] ="Good";
    // char s2[10]="";
    // strncpy(s2,s1,2);
    // cout<<s2<<endl;
    // cout<<strlen(s2)<<endl;
// char S[]="Hello";
    //char S[]={'H','e','l','l','o','\0', 'p','p','p'};
    // char *S ="Hello";
    // string s= "Hello";
    // char s[100];
    // char s2[100];
    // cout<<"Enter your name";
    // // cin>>s;
    // //cin.get(s,20);
    // cin.get(s,100);
    // cout<<"Welcome "<<s<<endl;
    // cin.ignore();
    // cout<<"Enter your name again";
    // cin.get(s2,100);
    // cout<<"Welcome "<<s2<<endl;
return 0;
}
