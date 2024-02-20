#include<string>
#include<iostream>
using namespace std;

string remove_extraspaces(string str){
    string result=" ";
   for(char ch:str){
     if(ch != ' '){
            result += ch;
     }
   }
   return result;
 }

int main(){
    string str="sdgt shgsys jshks ";
    cout<<"Character without spaces :"<< remove_extraspaces(str);
    return 0;
}