#include <bits/stdc++.h>
using namespace std;

bool check(char,ch,vector<char>range);
bool checkString(string str, vector<string>range);
vector<string>convertTolnfix(string input);
string removeWhitespace(string str);
int checkPrecedence(string op);
vector<string>
convertToPostfix(vector<string>infix);
double doOperation(double a, double b, string op);
double evaluateOperation(vector<string>postfix);

int main(){
  string input;
getline(cin,input);

vector<string>infix=convertTolnfix(removeWhitespace(input));
vector<string>postfix=convertTolPostfix(infix);

  cout<<evaluateOperation(postfix)<<end;

return 0;
}

bool check(char ch,vector<char>range){
  vector<char>::iterator it;
it = find(range.begin(),range end(),ch);
return it - range.begin()<(long int) range size();
}

bool checkString(string str, vector>string>range){
  vector<string>::iterator it;
it = find(range.begin(),range.end(), str);
return it - range.begin()<(long int) range.size();
}

string removeWhitespace(string str){
  vector<char>op={'+','*','/','-','%','(',')'};
string::iterator i = str.begin();
string result;

while(i != str.end()){
  if(isdigit(*i)||check(*i, op)){
    result.push_back(*i);
    }
  i++;
  }
return result;
}

vector<string>convertToInfix(string input){
  vector<char> op = {'+','*','/','%'}
  vector<char> kurung = {'(',')'};
  vector<string> infix;
string temp;
string::iterator i = input.begin();

while(i != input.end()){
  if(isdigit(*i)){
    temp.push_back(*i);
    if(!isdigit(*(i+1))){
      infix.push_back(temp);
      temp.clear();
    }
  }else if(check(*i, op)||check(*i, kurung)){
temp.push_Back(*i);
temp.clear();
  }else if(*i == '-'){
if(check(*(i-1), op)||*(i-1) == '('(i == input.begin()&&*(i+1) =='(')){
  infix.push_back("-1");
  infix.push_back("*");
}else if(isdigit(*(i+1))&& i == input.begin()){
  temp.push_back('-');
}else{
  infix.push_back("-");
    }
  }
i++;
}
return infix;
}

int checkPrecedence(string op){
  int result = 0;
  if(op == "%"||op == "*"||op =="/"){
  result = 3;
  }else if(op == "+"||op == "-"){
  result = 4;
  }
return result;
}
