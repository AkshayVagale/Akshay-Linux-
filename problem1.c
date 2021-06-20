1. Write a simple program for nested comments. what is the error & how we resolve it?
Ans-
/*
comment1
/*
comment2
*/
comment3
*/
Once block comment is opened compiler will search for nearest closing block comment. 
Therefore in nested comments some of the content will be un commented which will show error.
To resolve we can go for line by line comment or we should not use nested comments.