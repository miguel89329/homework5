#ifndef STRING_H
#define STRING_H
#include<ctype.h>
#include<iostream>
#include<string.h>
using namespace std;

class String{
    private:
        char *str;
        int  len;
    public:
        String();
        String(const char *);
        String(const String &);
        ~String();
        String& operator=(const String &);
        void operator+=(const String &);
        char operator[ ](int);
        String operator()(int, int);
        friend bool operator<(const String &, const String &);
        friend bool operator>(const String &, const String &);
        friend bool operator== (const String &, const String &);
        friend String operator+(const String &, const String &);
        friend ostream& operator<<(ostream&, String &);
        friend istream& operator>>(istream&, String &);
    };


#endif // STRING_H
