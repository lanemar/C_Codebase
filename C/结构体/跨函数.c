#include <stdio.h>
#include <stdlib.h>

void Inputstruct_Std(struct std_S1 *) ;

struct std_S1{
	int std_Number;
	char std_Name;
	//char a[100];
};

int main(void){
	struct std_S1 std_Var;
	//struct std_S1 * std_Ptr = &std_Var;
	//printf("%d\n",sizeof(std_Var));
	struct std_S1 * ptr = &std_Var;
	Inputstruct_Std(ptr); 
	printf("%d,%c\n",std_Var.std_Number,std_Var.std_Name);
	return 0;
}

void Inputstruct_Std(struct std_S1 * std_Ptr){
	std_Ptr=malloc(sizeof(*std_Ptr));
	std_Ptr->std_Number=1;
	std_Ptr->std_Name='a';
	//std_Ptr->a="¹þ¹þ¹þ";
}
