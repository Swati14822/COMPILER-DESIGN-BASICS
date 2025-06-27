
#include <iostream>
#include <stack>
#include <sstream>
#include <cctype>
#include <map>

using namespace std;

// Function to return precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Apply operator to two numbers
int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : throw runtime_error("Division by zero");
    }
    return 0;
}

// Evaluate expression
int evaluate(const string& expr) {
    stack<int> values;
    stack<char> ops;

    for (size_t i = 0; i < expr.length(); i++) {
        if (isspace(expr[i])) continue;

        if (isdigit(expr[i])) {
            int val = 0;
            while (i < expr.length() && isdigit(expr[i])) {
                val = (val * 10) + (expr[i] - '0');
                i++;
            }
            values.push(val);
            i--;
        } else if (expr[i] == '(') {
            ops.push(expr[i]);
        } else if (expr[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(a, b, op));
            }
            if (!ops.empty()) ops.pop(); // remove '('
        } else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expr[i])) {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(a, b, op));
            }
            ops.push(expr[i]);
        }
    }

    while (!ops.empty()) {
        int b = values.top(); values.pop();
        int a = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOp(a, b, op));
    }

    return values.top();
}

int main() {
    cout << "Enter an arithmetic expression (e.g., 3 + 5 * (2 - 1)):\n> ";
    string input;
    getline(cin, input);

    try {
        int result = evaluate(input);
        cout << "Result = " << result << endl;
    } catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
