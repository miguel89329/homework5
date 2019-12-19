#include <string.h>
#include <ctype.h>
#include<iostream>
using namespace std;

class STRING{
    private:
        char *str;
        int  len;
    public:
        STRING();
        STRING(const char *);
        STRING(const STRING &);
        ~STRING();
        STRING& operator=(const STRING &);
        void operator+=(const STRING &);
        char operator[ ](int);
        STRING operator()(int, int);
        friend bool operator<(const STRING &, const STRING &);
        friend bool operator>(const STRING &, const STRING &);
        friend bool operator== (const STRING &, const STRING &);
        friend STRING operator+(const STRING &, const STRING &);
        friend ostream& operator<<(ostream&, STRING &);
        friend istream& operator>>(istream&, STRING &);
    };

STRING::STRING()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
}

STRING::STRING(const char *in)
{
    len = 0;
    while(in[len] != '\0'){
        len++;
    }
    str = new char [len+1];
    for(int i = 0; i <= len; i++){
        str[i] = in[i];
    }
}

STRING::STRING(const STRING &s)
{
    len = s.len;
    str = s.str;
}

STRING::~STRING(){

}



STRING& STRING:: operator=(const STRING &s)
{
    if(this != &s){
        len = s.len;
        str = s.str;
    }
    return *this;
}

void STRING :: operator+=(const STRING &s)
{
    char *temp;
    temp = new char[len+s.len + 1];

    for(int i = 0;i < len; i++){
        temp[i] = str[i];
    }
    for(int i = 0; i <= s.len; i++){
        temp[i+len] = s.str[i];
    }
    len += s.len;

    str = temp;
}

char STRING:: operator[](int pos){
    return str[pos];
}


STRING STRING :: operator()(int fromLoc, int Loc)
{
    char *temp;
    int tlen;
    tlen = Loc - fromLoc + 1;
    temp = new char [tlen + 1];
    for(int i = 0; i < tlen ; i++){
        temp[i] = str[fromLoc + i];
    }
    temp[tlen] = '\0';
    STRING s1;
    s1.str = temp;
    s1.len = tlen;
    return s1;

}


bool operator<(const STRING &s1, const STRING &s2)
{
    int tlen;
    s1.len > s2.len? tlen = s1.len:tlen = s2.len;
    for(int i = 0; i < tlen; i++){
        if(s1.str[i]>s2.str[i]){
            return 0;
        }
        if(s1.str[i]<s2.str[i]){
            return 1;
        }
    }
    if(s2.len > s1.len)
        return 1;
    else
        return 0;

}

bool operator>(const STRING &s1, const STRING &s2){
    int tlen;
    s1.len > s2.len? tlen = s1.len:tlen = s2.len;
    for(int i = 0; i < tlen; i++){
        if(s1.str[i]>s2.str[i]){
            return 1;
        }
        if(s1.str[i]<s2.str[i]){
            return 0;
        }
    }
    if(s2.len < s1.len)
        return 1;
    else
        return 0;
}

bool operator==(const STRING &s1, const STRING &s2)
{
    if(s1.len != s2.len)
        return 0;
    for(int i = 0; i < s1.len; i++){
        if(s1.str[i] != s2.str[i])
            return 0;
    }
    return 1;
}


STRING  operator+(const STRING &s1, const STRING &s2)
{
    STRING s;
    s = s1;
    s += s2;
    return  s;
}


ostream& operator<<(ostream &outst, STRING &s)
{
    outst << s.str;
    return outst;
}



istream& operator>>(istream &intst, STRING &s)
{
    int i = 0;
    char t[1000];
    for(int i = 0; i < 1000;i++){
        t[i] = '\0';
    }
    intst >> t;
    STRING s1(t);
    s = s1;
    return intst;
}

int main()
{
    STRING s1,s2;
    cin >> s1>>s2;
    cout << s1 << s2;
    if(s1 > s2)
        cout << "s1 > s2"<<endl;
    if(s1 < s2)
        cout << "s2 > s1"<<endl;
    if(s1 == s2)
        cout << "s1 = s2"<< endl;
    s1 = s1 + s2;
    cout << s1 << endl;
    s1 += s2;
    cout << s1 << endl;

    STRING s3;
    int pos,fromLoc,toLoc;
    cin >> s3 >> pos >> fromLoc >> toLoc;
    STRING t;
    t = s3(fromLoc,toLoc);
    cout << t ;
    return 0;
}
