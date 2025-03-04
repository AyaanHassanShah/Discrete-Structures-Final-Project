////
//#pragma once
//#include <iostream>
//#include <string>
//#include <cmath>
//#include<iomanip>
//using namespace std;
//
//class Stack {
//	int* array;
//	char* Character;
//	size_t maxsize;
//	int top;  // Integer stack top
//	int Top;  // Character stack top
//	char name;
//
//public:
//	Stack() : top(-1), Top(-1), array(nullptr), Character(nullptr), maxsize(0) {}
//
//	Stack(char source, int size) {
//		this->maxsize = size;
//		array = new int[maxsize];
//		Character = new char[maxsize];
//		top = -1;
//		Top = -1;
//		this->name = source;
//	}
//
//	~Stack() {
//		delete[] array;
//		delete[] Character;
//		cout << "Destructor called for Stack " << name << endl;
//	}
//
//	char get_name() {
//		return name;
//	}
//
//	void initialize(char source, int length) {
//		this->maxsize = length;
//		array = new int[maxsize];
//		Character = new char[maxsize];
//		top = -1;
//		Top = -1;
//		this->name = source;
//	}
//
//	void push(int val) {
//		array[++top] = val;
//	}
//
//	int pop() {
//		return array[top--];
//	}
//
//	int peek() {
//		return array[top];
//	}
//
//	void push(char Data) {
//		Character[++Top] = Data;
//	}
//
//	char pop_char() {
//		return Character[Top--];
//	}
//
//	char peek_char() {
//		return Character[Top];
//	}
//
//	bool is_empty_int() {
//		return top == -1;
//	}
//
//	bool is_empty_char() {
//		return Top == -1;
//	}
//
//	bool is_full() {
//		return top == maxsize - 1;
//	}
//
//	int* get_array() {
//		return this->array;
//	}
//
//	int* Arithmetic(int* op1, int* op2, char op, int maxsize) {
//		int* Result = new int[maxsize];
//		for (int i = 0; i < maxsize; i++) {
//			int val1 = op1[i];
//			int val2 = (op != '!') ? op2[i] : 0;
//			if (op == '&') Result[i] = val1 & val2;
//			else if (op == '|') Result[i] = val1 | val2;
//			else if (op == '^') Result[i] = (val1 == val2) ? 1 : 0;
//			else if (op == '>') Result[i] = (val1 == 0 || val2 == 1) ? 1 : 0;
//			else if (op == '!') Result[i] = (val1 == 1) ? 0 : 1;
//		}
//		return Result;
//	}
//
//	int* Popstack() {
//		int size = this->top;
//		int* arr2 = new int[size + 1];
//		for (int i = 0; i <= size; i++) {
//			arr2[i] = array[i];
//		}
//		return arr2;
//	}
//
//	void Push(int* arr, int size) {
//		this->initialize('#', size);
//		this->top = size - 1;
//		for (int i = 0; i < size; i++) {
//			this->array[i] = arr[i];
//		}
//	}
//	bool isoperator(char ch) {
//		return (ch == '!' || ch == '&' || ch == '|' || ch == '>' || ch == '^');
//	}
//
//};
//
//class Printing
//{
//public:
//
//	int** array_result;
//	string* results_name;
//	int count = 0;
//	Printing()
//	{
//		array_result = new int* [100];
//		results_name = new string[100];
//	}
//	void increase_count()
//	{
//		count = count + 1;
//	}
//
//	void initlize_array(int* array, int no_of_elements, string source)
//	{
//		int original = count;
//		results_name[count] = source;
//		array_result[count++] = new int[no_of_elements];
//
//		for (int i = 0; i < no_of_elements; i++)
//		{
//			array_result[original][i] = array[i];
//		}
//
//
//	}
//
//	void printing_of_array(int no_of_elements)
//	{
//		int size = 0;
//		int index = 0;
//		int arr[100]; //array to store size
//		cout << setw(2) << left << "Values" << endl;
//		cout << "-----------------------------------" << endl;
//		for (int i = 0; i < count; i++)
//		{
//			size = results_name[i].length();
//			if (size > 5) { size = size - 2; }
//			arr[index++] = size;
//			cout << setw(2 * size) << left << results_name[i];
//		}
//		cout << endl;
//		cout << "-----------------------------------" << endl;
//
//		//cout << "Table with all values" << endl;
//		for (int col = 0; col < no_of_elements; col++)
//		{
//			//cout << setw(5) << left << col;
//
//			for (int i = 0; i < count; i++)
//			{
//
//				cout << setw(2 * arr[i]) << left << array_result[i][col];
//			}
//			cout << endl;
//		}
//
//	}
//
//
//};
//
//class evaluation {
//	Stack* variables;
//
//public:
//	evaluation() : variables(nullptr) {}
//
//	bool isoperator(char ch) {
//		return (ch == '!' || ch == '&' || ch == '|' || ch == '>' || ch == '^');
//	}
//
//	int precedence(char ch) {
//		if (ch == '!') return 5;
//		else if (ch == '&') return 4;
//		else if (ch == '|') return 3;
//		else if (ch == '>') return 2;
//		else if (ch == '^') return 1;
//		return 0;
//	}
//
//	bool ValidParenthesis(const string& Infix) {
//		Stack Obj('P', Infix.size());
//		for (char ch : Infix) {
//			if (ch == '(') Obj.push(ch);
//			else if (ch == ')') {
//				if (Obj.is_empty_char()) return false;
//				Obj.pop_char();
//			}
//		}
//		return Obj.is_empty_char();
//	}
//
//	string InfixToPostfix(const string& Infix) {
//		Stack Obj('S', Infix.size());
//		string Postfix = "";
//
//		if (!ValidParenthesis(Infix)) {
//			cout << "Invalid Expression: Mismatched Parentheses\n";
//			return "";
//		}
//
//		for (char ch : Infix) {
//			if (ch == '(') Obj.push(ch);
//			else if (ch == ')') {
//				while (!Obj.is_empty_char() && Obj.peek_char() != '(') {
//					Postfix += Obj.pop_char();
//				}
//				Obj.pop_char();
//			}
//			else if (!isoperator(ch) && ch != '(' && ch != ')') {
//				Postfix += ch;
//			}
//			else if (isoperator(ch)) {
//				while (!Obj.is_empty_char() && precedence(ch) <= precedence(Obj.peek_char()) && Obj.peek_char() != '(') {
//					Postfix += Obj.pop_char();
//				}
//				Obj.push(ch);
//			}
//		}
//
//		while (!Obj.is_empty_char()) {
//			Postfix += Obj.pop_char();
//		}
//
//		return Postfix;
//	}
//	void Print(int* arr, int size, string name)
//	{
//		cout << setw(5) << left << "Table " << name << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cout << arr[i] << endl;
//		}
//		cout << "--------" << endl;
//	}
//	string pick_unique(const string& source) {
//		string result = "";
//		bool found[26] = { false };
//		for (char temp : source) {
//			char lower = tolower(temp);  // Normalize to lowercase
//			if (lower >= 'a' && lower <= 'z' && !found[lower - 'a']) {
//				result += temp;          // Store original case
//				found[lower - 'a'] = true;
//			}
//		}
//		return result;
//	}
//
//
//	void makeandfill(const string& source) {
//		int no_of_entries = pow(2, source.length());
//		variables = new Stack[source.length()];
//		for (size_t i = 0; i < source.length(); i++) {
//			variables[i].initialize(source[i], no_of_entries);
//		}
//
//		int half = no_of_entries / 2;
//		for (size_t i = 0; i < source.length(); i++) {
//			bool flag1 = true, flag0 = false;
//			int count = 0;
//			for (int j = 0; j < no_of_entries; j++) {
//				if (flag1) {
//					variables[i].push(1);
//					if (++count == half) flag0 = true, flag1 = false, count = 0;
//				}
//				else if (flag0) {
//					variables[i].push(0);
//					if (++count == half) flag1 = true, flag0 = false, count = 0;
//				}
//			}
//			half /= 2;
//		}
//
//	}
//
//	int* Evaluate(string St, int S, int maxsize)
//	{
//		int length = St.size();
//		string Store_name[100];
//		int store_count = 0;
//		Stack* obj;
//		Printing Print_obj;
//		obj = new Stack[St.length()];
//		int top = 0;
//		int max = maxsize;
//		string old = "";
//		string new_item = "";
//
//		for (char ch : St)
//		{
//			if (!obj[0].isoperator(ch))
//			{
//				for (int i = 0; i < S; i++)
//				{
//					if (tolower(this->variables[i].get_name() == ch))
//					{
//
//						obj[top] = variables[i];
//						top = top + 1;
//						string single_char(1, variables[i].get_name());
//						//	Store_name[store_count] = single_char;
//						//	store_count++;
//						////	Print(variables[i].get_array(), maxsize, single_char);
//						Print_obj.initlize_array(variables[i].get_array(), maxsize, single_char);
//					}
//				}
//			}
//			else if (ch == '!')
//			{
//				top = top - 1;
//				char temp_op2 = obj[top].get_name();
//				int* Op = obj[top].Popstack();
//				int* Result = obj[top].Arithmetic(Op, NULL, ch, max);
//				obj[top].Push(Result, max);
//				top = top + 1;
//				new_item = string(1, temp_op2) + ch;
//				Store_name[store_count++] = new_item;
//
//				old += new_item;
//
//				if (temp_op2 == '#')
//				{
//					store_count -= 1;
//
//					Print_obj.initlize_array(Result, maxsize, Store_name[store_count]);
//
//				}
//
//				else {
//
//					Print_obj.initlize_array(Result, maxsize, new_item);
//				}
//			}
//			else {
//				top = top - 1;
//				char OP2 = obj[top].get_name();
//				int* Op2 = obj[top].Popstack();
//				top = top - 1;
//				char OP1 = obj[top].get_name();
//				int* Op1 = obj[top].Popstack();
//				int* Result = obj[top].Arithmetic(Op1, Op2, ch, max);
//				obj[top].Push(Result, max);
//				top = top + 1;
//				new_item = string(1, OP1) + ch + string(1, OP2);
//
//				old += new_item;
//
//
//				if (OP2 == '#' && OP1 != '#')
//				{
//					store_count -= 1;
//
//					new_item = string(1, OP1) + ch + Store_name[store_count];
//					Store_name[store_count++] = new_item;
//
//					Print_obj.initlize_array(Result, maxsize, new_item);
//
//
//				}
//				else if (OP1 == '#' && OP2 != '#')
//				{
//					store_count -= 1;
//
//					new_item = Store_name[store_count] + ch + string(1, OP2);
//					Store_name[store_count++] = new_item;
//
//					Print_obj.initlize_array(Result, maxsize, new_item);
//
//				}
//				else if (OP2 == '#' && OP1 == '#')
//				{
//					int temp_count = store_count - 1;
//
//					store_count -= 2;
//					new_item = Store_name[store_count] + ch + Store_name[temp_count];
//					Store_name[store_count++] = new_item;
//
//					Print_obj.initlize_array(Result, maxsize, new_item);
//
//				}
//				else
//				{
//					Store_name[store_count++] = new_item;
//					Print_obj.initlize_array(Result, maxsize, new_item);
//				}
//			}
//
//			//			old = old + new_item;
//
//		}
//		top = top - 1;
//
//		Print_obj.printing_of_array(maxsize);
//		return obj[top].Popstack();
//
//	}
//
//};
//
//int main() {
//	evaluation obj1, obj2;
//
//	//string testInput = "((p>q)&(q>r))>(p>r)";
//	//string testInput = "(p&!q)";
//	//string testInput = "((p&q)>r)^(p>(q>r))";
//
////	cout << "Input Infix Expression: " << testInput << endl;
//
//	//cout << "Unique Variables: " << vars << endl;
//
//
//	/*string postfix = obj.InfixToPostfix(testInput);
//	if (!postfix.empty()) {
//		cout << "Postfix Expression: " << postfix << endl;
//	}*/
//
//
//	cout << "Instructions : use ! for NOT operations\n";
//	cout << "use & for AND operations\n";
//	cout << "use | for OR operations\n";
//	cout << "use > for Implies operations\n";
//	cout << "use ^ for Biconditional operations\n";
//	cout << "use only () parenthesis :\n";
//
//	string expression1, expression2;
//
//	cout << "Enter Expression 1: ";
//	//cin >> expression1;
//
//	cout << "Enter Expression 2: ";
//	//	cin >> expression2;
//
//	expression1 = "((p | q) > r)^(p >(q > r))";
//	expression2 = "((p > q) | (q > r)) > (p > r)";
//
//	string vars = obj1.pick_unique(expression1);
//	string vars2 = obj2.pick_unique(expression2);
//
//
//	if (vars.length() != vars2.length())
//	{
//		cout << "Both are not length expression, So they can't be evalvuated" << endl;
//	}
//
//
//	obj1.makeandfill(vars);
//	obj2.makeandfill(vars2);
//
//	string postfix1 = obj1.InfixToPostfix(expression1);
//	string postfix2 = obj2.InfixToPostfix(expression2);
//
//
//
//	int* Result = obj1.Evaluate(postfix1, vars.length(), pow(2, vars.length()));
//	int* Result2 = obj2.Evaluate(postfix2, vars2.length(), pow(2, vars2.length()));
//
//
//	bool same = true;
//	for (int i = 0; i < pow(2, vars2.length()); i++)
//	{
//		if (Result[i] != Result2[i])
//		{
//			same = false;
//		}
//	}
//
//
//	same ? cout << "Expressions are equivelant" << endl : cout << "Expressions are not Equivelenat" << endl;
//
//	return 0;
//}