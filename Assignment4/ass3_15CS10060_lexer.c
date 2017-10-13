#include "y.tab.c"
extern int yylex();
 
int main()
{
	int x;
	while(1)
	{
		if( x = yylex() )
		{

			switch(x)
			{
				case IDENTIFIER:		{printf("<IDENTIFIER>\n");break;}
				case CONSTANT:			{printf("<CONSTANT>\n");break;}
				case STRING_LITERAL: 	{printf("<STRING_LITERAL\n");break;}
				case BREAK:							
				case UNSIGNED:
				case RETURN:
				case VOID:
				case CASE:
				case FLOAT:
				case SHORT:
				case CHAR:
				case FOR:
				case SIGNED:
				case WHILE:
				case GOTO:
				case BOOL:
				case CONTINUE:
				case IF:
				case DEFAULT:
				case DO:
				case INT:
				case SWITCH:
				case DOUBLE:
				case LONG:
				case ELSE:
				case MATRIX: 	{printf ("<KEYWORD>\n");break;}

				case PLUS_PLUS:
				case MINUS_MINUS:
				case ARROW:
				case NEW:
				case LEFT_CURL:
				case RCB:
				case LEFT_SHIFT:
				case RIGHTSH:
				case LE:
				case GE:
				case ET:
				case NE:
				case DAND:
				case DOR:
				case QM:
				case COL:
				case POW:
				case SCOL:
				case OR:
				case ASSIGN:
				case MULTA:
				case DIVA:
				case PLUSA:
				case MINUSA:
				case REMA:
				case POWA:
				case LSA:
				case RSA:
				case ANDA:
				case ORA: 	{printf ("<PUNCTUATOR>\n");break;}
				default:		{if(x >= 0 && x <= 255) printf ("<PUNCTUATOR>\n");
									else
									{
										printf("ERROR\n");
									}
								};
			}


		}
		else
		{
			break;
		}
	}
}

/*
int main(int argc, char **argv)
{
	printf("%d",yylex());
}
*/