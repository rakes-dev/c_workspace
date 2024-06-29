#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* This function returns the relative precedance of the operators we have */
/* e.g divide (/) has higher precedance than multiply (*) */
int precedence (char c) {
	if (c == '^') {
		return 3;
    }
	else if (c == '/' || c == '*') {
		return 2;
    }
	else if (c == '+' || c == '-') {
		return 1;
    }
	else {
        return 0;
    }
}

/*Function check whether the given character is Operand or not*/
int isOperand (char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
		return 1;
	}
	return 0;
}

/*Function for converting a infix expression to postfix expression*/
void infixToPostfix (char s[], int n) {
	stack st;
	//st is a stack
	//assume that you have implemented stack in C with the following functions:
	// push()       => for pushing element into the stack
	// pop()		=> for popping element out of the stack
	// peek()       => for returning top element of the stack
	// isEmpty()    => returns true if stack is empty
	char postFix[n];
	int index = 0;

	for(int i = 0; i < n; i++) {
		if (isOperand(s[i])) {
            postFix[index++] = s[i];
        }
		else if (s[i] == '(') {
			st.push('(');
        }
		else if (s[i] == ')') {
			while(st.top() != '(') {
				postFix[index++] = st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while (!st.empty() && precedence(s[i]) <= precedence(st.top())) {
				postFix[index++] = st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}

	while (!st.empty()) {
		postFix[index++] = st.top();
		st.pop();
	}

    printf("PostFix expression : %s", postFix);
	return;
}
