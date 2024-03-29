#include<iostream>
#include<string>
using namespace std;

string parcing(string s) { 
string str = ""; 
for (int i = 0; i < s.size(); i++) { 
if ((s[i] >= '0') && s[i] <= '9') { 
str = str + s[i]; 
} 
} 
return str; 
}

int prior(char x)
{
	if ((x = '*') || (x = '/')) return 2;
	if ((x = '+') || (x = '-')) return 1;
	if ((x = '(') || (x = ')')) return 0;
}

class stack
{
	int top;
	char body[100];
public:
	stack() { top = 0; }
	bool empty() { return top == 0; }
	char get_top_element() { return body[top]; }
	int top_prior() { return prior(body[top]); }
	void push(char x)
	{
		top++;
		body[top] = x;
	}
	char pop()
	{
		top--;
		return body[top + 1];
	}

};



int main()
{
	char note[100], pnote[100];
	int i, p = 0;
	stack s;
	cin >> note;

	for (i = 0; i<strlen(note); i++)
	{
		if (note[i] == '(') s.push(note[i]);
		else if ((note[i] == '+') || (note[i] == '-') || (note[i] == '/') || (note[i] == '*'))
		{
			while ((!s.empty()) && (s.top_prior()>prior(note[i])))
			{
				p++;
				pnote[p] = s.pop();
			}
			s.push(note[i]);
		}
		else if (note[i] == ')')
		{
			while ((!s.empty()) && (s.get_top_element() != '('))
			{
				p++;
				pnote[p] = s.pop();
			}
			s.pop();
		}
		else
		{
			p++;
			pnote[p] = note[i];
		}
	}
	while (!s.empty())
	{
		p++;
		pnote[p] = s.pop();
	}
	for (i = 1; i <= p; i++)
		cout << pnote[i];
	cout << endl;
	return 0;
}
