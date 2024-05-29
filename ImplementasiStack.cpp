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
