//2d matrix multiplication
#include <stdio.h>
 
int main()
{
  int mat1_rows = 0, mat2_rows = 0, mat1_col = 0, mat2_col = 0;
  int i = 0, j =0, x =0, sum = 0;
/////////////////////////////////////////matrix 1/////////////////////////////////////////// 
  //read rows and coulmns for matrix 1
  printf("Enter the number of rows for matrix 1: ");
  scanf("%d",&mat1_rows);
  printf("\nEnter the number of columns for matrix 1: ");
  scanf("%d",&mat1_col); 
  
  int mat1[mat1_rows][mat1_col];  //create matrix 1 based on number of rows and columns
  printf("\nEnter the matrix 1 elements row wise:\n");
  //read matrix 1 elements
  for(i = 0; i<mat1_rows;i++)
  {
  	for(j = 0; j<mat1_col; j++)
  	{
		  scanf("%d", &mat1[i][j]);
	}
  }
  //display the matrix 1 elements
  printf("\nThe matrix 1 elements are:\n");
  for(i = 0; i<mat1_rows;i++)
  {
  	for(j = 0; j<mat1_col; j++)
  	{
  		printf("%d ",mat1[i][j]);
	}
	printf("\n");
  }
/////////////////////////////////////////matrix 2/////////////////////////////////////////// 
  //read rows and coulmns for matrix 2
  printf("\nEnter the number of rows for matrix 2: ");
  scanf("%d",&mat2_rows);
  printf("\nEnter the number of columns for matrix 2: ");
  scanf("%d",&mat2_col);  
  
  int mat2[mat2_rows][mat2_col];  //create matrix 2 based on number of rows and columns
  printf("\nEnter the matrix 2 elements row wise:\n");
  //read matrix 2 elements
  for(i = 0; i<mat2_rows;i++)
  {
  	for(j = 0; j<mat2_col; j++)
  	{
		  scanf("%d", &mat2[i][j]);
	}
  }
  //display the matrix 2 elements
  printf("\nThe matrix 2 elements are:\n");
  for(i = 0; i<mat2_rows;i++)
  {
  	for(j = 0; j<mat2_col; j++)
  	{
  		printf("%d ",mat2[i][j]);
	}
	printf("\n");
  }
/////////////////////////////////////////matrix multiplication/////////////////////////////////////////// 
int matrix_result[mat1_rows][mat2_col];
if(mat1_col != mat2_rows)
{
	printf("\nMatrix multiplication is not possible\n");
}
else
{
	for(i = 0;i<mat1_rows;i++)
	{
		for(j = 0;j<mat2_col;j++)
		{
			for(x = 0;x<mat1_col;x++)  //or 	for(x = 0;x<mat2_rows;x++) since mat1_col = mat2_rows
			{
				sum = sum + mat1[i][x] * mat2[x][j];
			}
			matrix_result[i][j] = sum;
			sum = 0;
		}
	}
/////////////////////////////////////////display result matrix/////////////////////////////////////////// 
  printf("\nThe multiplication resultant matrix is:\n");
  for(i = 0; i<mat1_rows;i++)
  {
  	for(j = 0; j<mat2_col; j++)
  	{
  		printf("%d ",matrix_result[i][j]);
	}
	printf("\n");
  }
}  //end for else

}
/*Output1:
Enter the number of rows for matrix 1: 2

Enter the number of columns for matrix 1: 3

Enter the matrix 1 elements row wise:
1
2
3
4
5
6

The matrix 1 elements are:
1 2 3
4 5 6

Enter the number of rows for matrix 2: 3

Enter the number of columns for matrix 2: 2

Enter the matrix 2 elements row wise:
7
8
9
10
11
12

The matrix 2 elements are:
7 8
9 10
11 12

The multiplication resultant matrix is:
58 64
139 154

Output 2:
Enter the number of rows for matrix 1: 2

Enter the number of columns for matrix 1: 2

Enter the matrix 1 elements row wise:
1
2
1
2

The matrix 1 elements are:
1 2
1 2

Enter the number of rows for matrix 2: 2

Enter the number of columns for matrix 2: 2

Enter the matrix 2 elements row wise:
1
2
1
2

The matrix 2 elements are:
1 2
1 2

The multiplication resultant matrix is:
3 6
3 6
*/