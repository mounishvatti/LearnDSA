#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to return precedence of operators
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// Function to return associativity of operators
char associativity(char c)
{
    if (c == '^')
        return 'R';
    return 'L'; // Default to left-associative
}

// The main function to convert infix expression
// to postfix expression
void infixToPostfix(string s)
{
    stack<char> st;
    string result;
    for (int i = 0; i < (int)s.length(); i++)
    {
        char c = s[i];

        // If the scanned character is an operand, add it to output.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        // If the scanned character is '(', push it to the stack.
        else if (c == '(')
            st.push(c);

        // If scanned character is ')', pop until '(' is found.
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                result += st.top();
                st.pop();
            }

            if (!st.empty())
                st.pop(); // Pop '('
        }
        // If an operator is scanned.
        else
        {
            while (!st.empty() && ((prec(c) < prec(st.top())) || (prec(c) == prec(st.top()) && associativity(c) == 'L')))
            {
                result += st.top();
                st.pop();
            }

            st.push(c);
        }
    }

    // Pop all the remaining elements from the stack.
    while (!st.empty())
    {
        if (st.top() != '(')
            result += st.top();
        st.pop();
    }

    cout << result << endl;
}

// Driver code
int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    // Function call
    infixToPostfix(exp);
    return 0;
}