/*
Steps for Conversion of an infix expression to equivalent prefix expression

1.Input infix expression. 
    eg-((a+b)*c)-d
2.Reverse the string, this gives us
    d-)c*)b+a((\0
3.Replace all ')' with '(' & '(' with ')'
    d-(c*(b+a))\0
4.Now convert to postfix, gives us
    dcba+*-
5.Inverse the string, gives the equivalent prefix expression
    -*+abcd
*/