//*___________________________File-mode parameters and open Functions____________________________________________*//

/*
We have used ifstream and ofstream in constructors and the function 'open' to create new files as well as to open
the existing files. Remember in both this methods we used only one argument that was file name however this functions
can take 2 arguments. The second one for specifying file mode, the general form of funciton open with 2 arguments is
^                             <stream_object>.open("filename",mode);
the second argument mode specifies the purpose for which the file is opened. The prototype of these class member
fucntions contain default values for the second argument and therefore they use the default values in the absence of 
actual values. The default values are as follows
.    ios::in        open file for read only
.    ios::out       open file for wrtie only
.    ios::app       Append to the end of file
.    ios::ate       Go to the end of file on opening
.    ios::binary    binary file
.    ios::nocreate  open fails if the file does not exist
.    ios::noreplace open fails if the file already exists
.    ios::trunc     delete the contents of the file if it exists
*/

/*
File Pointers and there Manipulations
each file has 2 associated pointers known as the file pointers. One of them is called input pointer or get pointer
and the other is called the output pointer or put pointer. We can use these pointers to move through the files while 
reading or writing. The input pointer is used for reading the contents of the given file location.And the output 
pointer is used for writing to a given file location. Each time an input or output operation takes place the appropriate
pointer is automatically advanced 

Default Actions
When we open a file in read only mode the input pointer is automatically set at the beginning.
When we open a file in write only mode the existing contents are deleted and the output pointer is set at the begining.
When we want to open an existing file to add more data the file is opened in append mode.
*/

/*
Functions for Manipulation of File Pointers
All the actions on the file pointers as discussed above takes place automatically by default. How do we then move a 
file pointer to any other desired position. Inside the file this is possible only if we can take control of the moment
of the file pointers ourselfs. The stream classes supports following functions to manage such situations
.   1) seekg() -Moves get pointer to a specified location
    2) seekp() -Moves put pointer to a specified location
    3) tellg() -Gives current position of the get pointer in bits from begin of the file.
    4) tellp() -Gives current position of the put pointer in bits from begin of the file.
*/