1. Start the program.
2. Initialize the arrays for taking input from the user.
3. Prompt the user to input the no. of non-terminals having left recursion and no. of productions for these non-terminals.
4. Prompt the user to input the production for non-terminals.
5. Eliminate left recursion using the following rules:-
A->Aα1| Aα2 | . . . . . |Aαm
A->β1| β2| . . . . .| βn
Then replace it by
A-> βi A’ i=1,2,3,…..m
A’-> αj A’ j=1,2,3,…..n
A’-> Ɛ
6. After eliminating the left recursion by applying these rules, display the productions without left recursion
7. Stop.
