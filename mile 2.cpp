created by Joshua Ngoto

on, feb 2022

C89 Compiler

MIT license

*/

#include <stdio.h>
#include <stdio.h>

int main()

  {
  	int action;
  	printf("select an action:\n");
  	printf("1.View users\n");
  	printf("2.add new user\n");
  	printf("3.edit user\n");
	printf("4.delete user\n");
    printf("5.change password\n");
    printf("6.log out\n");  
	printf("7.exit system\n");
	printf("your actions\n");
	scanf("%d",%action);
	if (action< 1 || action);
	    printf("invalid ction.Try again\n");
	    
	}
	return action;
	
	void execute action (int action)
	switch (action)
	{
	
	case 1:
		printf("view users\n");
		break;
		
     case 2:
     	printf("add new user\n");
     	break;
    
    case 3:
    	printf("edit user\n");
    	break;
    	
    case 4:
    	printf("delete user\n");
    	break;
    	
    case 5:
    	printf("change password\n");
    	break;
    	
    case 6:
    	printf("log out\n");
    	break;
    	
    case 7:
    	printf("exit action\n");
    	break;
    	
    case 8:
    	printf("exit system\n");
    	break;
    	
    	default:
    		printf("selected action\n");
}
	
	
	int main ()
	{
		printf("COUNTY LIBRARY SYSTEM\N");
		printf("welcome Mr Joshua Ngoto\n");
		execute action(menu());
		return 0
	}
