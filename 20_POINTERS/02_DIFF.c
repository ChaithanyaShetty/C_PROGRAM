//2 Note down the differences between Call by Value and Call by Reference and when to use what.


CALL BY VALUE:

A copy of the variable is passed to the function

Do NOT affect original variable

Separate memory is used for function parameters

Only one value can be returned 

Safer – original data is protected

When original data should NOT be modified


CALL BY REFERENCE:

The address of the variable is passed to the function

Yes – changes directly affect original variable

Same memory location is accessed  

Multiple values can be modified/returned via pointers

Riskier – accidental changes can affect original data  

When function needs to modify the original data
