bool isValid(string s) {
    stack<char> myStack;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            myStack.push(s[i]);
        } else {
            if (myStack.empty()) {
                return false;
            }

            char top = myStack.top();
            if ((s[i] == ')' && top != '(') ||
                (s[i] == ']' && top != '[') ||
                (s[i] == '}' && top != '{')) {
                return false;
            }

            myStack.pop();
        }
    }

    return myStack.empty();
}
