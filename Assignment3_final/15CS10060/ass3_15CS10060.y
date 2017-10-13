%{
	#include <stdio.h>
	#include <string.h>
	extern FILE* yyin;
	extern int yylex();
	extern int yyparse();
	void yyerror(const char* s);
%}

%token IDENTIFIER CONSTANT STRING_LITERAL LEFT_CURL RCB
%token  ARROW PLUS_PLUS MINUS_MINUS NEW
%token LEFT_SHIFT RIGHTSH LE GE ET NE 
%token DAND DOR QM COL POW OR SCOL
%token ASSIGN MULTA DIVA REMA POWA PLUSA MINUSA LSA RSA ANDA ORA 
%token BREAK VOID CHAR INT FLOAT SHORT LONG UNSIGNED SIGNED RETURN IF DO SWITCH GOTO CASE
%token FOR WHILE BOOL CONTINUE DEFAULT  ELSE MATRIX DOUBLE
%start translation_unit
%define parse.error verbose

%%

primary_expression
			:IDENTIFIER													{printf("RULE : primary_expression \t->\t\t identifier\n");}
			|CONSTANT 													{printf("RULE : primary_expression \t->\t\t constant\n");}
			|STRING_LITERAL												{printf("RULE : primary_expression \t->\t string_literal\n");}
			|'(' expression ')'	{printf("primary_expression -\t->\t (expression)\n");}
			;

postfix_expression	
			: primary_expression 										{printf("RULE:\t postfix_expression \t->\tprimary_expression\n");}
			| postfix_expression '[' expression ']' 					{printf(" RULE:\tpostfix_expression \t->\t postfix_expression [ expression ]\n");}
			| postfix_expression '(' argument_expression_list ')'		{printf(" RULE:\tpostfix_expression \t->\t postfix_expression ( argument_expression_list_opt )\n");}
			| postfix_expression '(' ')'								{printf(" RULE:\tpostfix_expression \t->\t postfix_expression ( )\n");}
			| postfix_expression '.' IDENTIFIER							{printf(" RULE:\tpostfix_expression \t->\t postfix_expression . identifier\n");}
			| postfix_expression ARROW IDENTIFIER						{printf(" RULE:\tpostfix_expression \t->\t postfix_expression -> identifier\n");}
			| postfix_expression PLUS_PLUS									{printf(" RULE:\tpostfix_expression \t->\t postfix_expression ++\n");}
			| postfix_expression MINUS_MINUS									{printf(" RULE:\tpostfix_expression \t->\t postfix_expression --\n");}
			| postfix_expression NEW									{printf(" RULE:\tpostfix_expression \t->\t postfix_expression .'");}
			;

argument_expression_list
			: assignment_expression								  		{printf(" RULE:\targument_expression_list \t->\t assignment_expression\n");}
			| argument_expression_list ',' assignment_expression {printf(" RULE:\targument_expression_list \t->\t argument_expression_list , assignment_expression\n");}
			;

unary_expression
		:postfix_expression												{printf(" RULE:\tunary_expression \t->\t postfix_expression\n");}
		| PLUS_PLUS unary_expression 										{printf(" RULE:\tunary_expression \t->\t ++ unary_expression\n");}
		| MINUS_MINUS unary_expression 										{printf(" RULE:\tunary_expression \t->\t -- unary_expression\n");}
		| unary_operator cast_expression								{printf(" RULE:\tunary_expression \t->\t unary_operator cast_expression\n");}
		;

unary_operator
		: '&' 															{printf(" RULE:\tunary_operator \t->\t & \n");}
		| '*' 															{printf(" RULE:\tunary_operator \t->\t * \n");}
		| '+' 															{printf(" RULE:\tunary_operator \t->\t + \n");}
		| '-' 															{printf(" RULE:\tunary_operator \t->\t - \n");}
		;

cast_expression
		: unary_expression 												{printf(" RULE:\tcast_expression \t->\t unary_expression\n");}
		;

multiplicative_expression
		: cast_expression 													{printf(" RULE:\tmultiplicative_expression \t->\t cast_expression\n");}
		| multiplicative_expression '*' cast_expression 					{printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression * cast_expression\n");}
		| multiplicative_expression '/' cast_expression 					{printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression / cast_expression\n");}
		| multiplicative_expression '%' cast_expression 					{printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression %% cast_expression\n");}
		;

additive_expression
		: multiplicative_expression											{printf(" RULE:\tadditive_expression \t->\t multiplicative_expression\n");}
		| additive_expression '+' multiplicative_expression 				{printf(" RULE:\tadditive_expression \t->\t additive_expression + multiplicative_expression\n");}
		| additive_expression '-' multiplicative_expression 				{printf(" RULE:\tadditive_expression \t->\t additive_expression - multiplicative_expression\n");}
		;

shift_expression
		: additive_expression 												{printf(" RULE:\tshift_expression \t->\t additive_expression\n");}
		| shift_expression LEFT_SHIFT additive_expression 						{printf(" RULE:\tshift_expression \t->\t shift_expression << additive_expression\n");}
		| shift_expression RIGHTSH additive_expression 						{printf(" RULE:\tshift_expression \t->\t shift_expression >> additive_expression\n");}
		;

relational_expression
		: shift_expression 													{printf(" RULE:\trelational_expression \t->\t shift_expression\n");}
		| relational_expression '<' shift_expression 						{printf(" RULE:\trelational_expression \t->\t relational_expression < shift_expression\n");}
		| relational_expression '>' shift_expression 						{printf(" RULE:\trelational_expression \t->\t relational_expression > shift_expression\n");}
		| relational_expression LE shift_expression 						{printf(" RULE:\trelational_expression \t->\t relational_expression <= shift_expression\n");}
		| relational_expression GE shift_expression 						{printf(" RULE:\trelational_expression \t->\t relational_expression >= shift_expression\n");}
		;

equality_expression
		:  relational_expression 											{printf(" RULE:\tequality_expression \t->\t relational_expression\n");}
		| equality_expression ET relational_expression 						{printf(" RULE:\tequality_expression \t->\t equality_expression == relational_expression\n");}
		| equality_expression NE relational_expression 						{printf(" RULE:\tequality_expression \t->\t equality_expression != relational_expression\n");}
		;

and_expression
		: equality_expression 												{printf(" RULE:\tand_expression \t->\t equality_expression\n");}
		| and_expression '&' equality_expression 							{printf(" RULE:\tand_expression \t->\t and_expression & equality_expression\n");}
		;

exclusive_or_expression
		:and_expression 													{printf(" RULE:\texclusive_or_expression \t->\t and_expression\n");}
		| exclusive_or_expression POW and_expression 						{printf(" RULE:\texclusive_or_expression \t->\t exclusive_or_expression ^ and_expression\n");}
		;

inclusive_or_expression
		:exclusive_or_expression 											{printf(" RULE:\tinclusive_or_expression \t->\t exclusive_or_expression\n");}
		| inclusive_or_expression OR exclusive_or_expression 				{printf(" RULE:\tinclusive_or_expression \t->\t inclusive_or | exclusive_or_expression\n");}
		;

logical_and_expression
		: inclusive_or_expression 											{printf(" RULE:\tlogical_and_expression \t->\t inclusive_or_expression\n");}
		| logical_and_expression DAND inclusive_or_expression 				{printf(" RULE:\tlogical_and_expression \t->\t logical_and_expression && inclusive_or_expression\n");}
		;

logical_or_expression
		:	logical_and_expression 											{printf(" RULE:\tlogical_or_expression \t->\t logical_and_expression\n");}
		| logical_or_expression DOR logical_and_expression 					{printf(" RULE:\tlogical_or_expression \t->\t logical_or_expression || logical_and_expression\n");}
		;

conditional_expression
		: logical_or_expression 											{printf(" RULE:\tconditional_expression \t->\t logical_or_expression\n");}
		| logical_or_expression QM expression COL conditional_expression {printf(" RULE:\tconditional_expression \t->\t logical_or_expression ? expression : conditional_expression\n");}
		;

assignment_expression
		: conditional_expression 											{printf(" RULE:\tassignment_expression \t->\t conditional_expression\n");}
		| unary_expression assignment_operator assignment_expression {printf(" RULE:\tassignment_expression \t->\t unary_expression assignment_operator assignment_expression\n");}
		;

assignment_operator
		: ASSIGN 							{printf(" RULE:\tassignment_operator \t->\t = \n");}
		| MULTA 							{printf(" RULE:\tassignment_operator \t->\t *= \n");}
		| DIVA 								{printf(" RULE:\tassignment_operator \t->\t /= \n");}
		| REMA 								{printf(" RULE:\tassignment_operator \t->\t %%= \n");}
		| PLUSA 							{printf(" RULE:\tassignment_operator \t->\t += \n");}
		| MINUSA 							{printf(" RULE:\tassignment_operator \t->\t -= \n");}
		| LSA 								{printf(" RULE:\tassignment_operator \t->\t <<= \n");}
		| RSA 								{printf(" RULE:\tassignment_operator \t->\t >>= \n");}
		| ANDA 								{printf(" RULE:\tassignment_operator \t->\t &=  \n");}
		| POWA 								{printf(" RULE:\tassignment_operator \t->\t ^= \n");}
		| ORA 								{printf(" RULE:\tassignment_operator \t->\t |=  \n");}
		;

expression
		:  assignment_expression 											{printf(" RULE:\texpression \t->\t assignment_expression\n");}
		| expression ',' assignment_expression 								{printf(" RULE:\texpression \t->\t expression, assignment_expression\n");}
		;

constant_expression
		: conditional_expression 											{printf(" RULE:\tconstant_expression \t->\t conditional_expression\n");}
		;

declaration
		: declaration_specifiers SCOL										{printf(" RULE:\tdeclaration \t->\t declaration_specifiers ;\n");}
		| declaration_specifiers init_declarator_list SCOL					{printf(" RULE:\tdeclaration \t->\t declaration_specifiers init_declarator_list ; \n");}
		;

declaration_specifiers
		: type_specifiers declaration_specifiers_opt 						{printf(" RULE:\tdeclaration_specifiers \t->\t type_specifiers declaration_specifiers_opt\n");}
		;

declaration_specifiers_opt
		:	 																{printf(" RULE:\tdeclaration_specifiers_opt \t->\t empty\n");}
		|declaration_specifiers 											{printf(" RULE:\tdeclaration_specifiers_opt \t->\t declaration_specifiers\n");}

init_declarator_list
		: init_declarator 													{printf(" RULE:\tinit_declarator_list \t->\t init_declarator\n");}
		| init_declarator_list ',' init_declarator 							{printf(" RULE:\tinit_declarator_list \t->\t init_declarator_list, init_declarator\n");}
		;

init_declarator
		:declarator 														{printf(" RULE:\tinit_declarator \t->\t declarator\n");}
		| declarator ASSIGN initializer 									{printf(" RULE:\tinit_declarator \t->\t declarator = initializer\n");}
		;

type_specifiers
		: VOID 							{printf(" RULE:\ttype_specifiers \t->\t  VOID\n");}
		| CHAR 						{printf(" RULE:\ttype_specifiers \t->\t CHAR \n");}
		| SHORT 						{printf(" RULE:\ttype_specifiers \t->\t SHORT \n");}
		| INT 						{printf(" RULE:\ttype_specifiers \t->\t INT \n");}
		| LONG 						{printf(" RULE:\ttype_specifiers \t->\t LONG \n");}
		| FLOAT 						{printf(" RULE:\ttype_specifiers \t->\t FLOAT \n");}
		| DOUBLE 					{printf(" RULE:\ttype_specifiers \t->\t DOUBLE \n");}
		| MATRIX 					{printf(" RULE:\ttype_specifiers \t->\t MATRIX \n");}
		| SIGNED 						{printf(" RULE:\ttype_specifiers \t->\t SIGNED  \n");}
		| UNSIGNED 						{printf(" RULE:\ttype_specifiers \t->\t UNSIGNED \n");}
		| BOOL 						{printf(" RULE:\ttype_specifiers \t->\t BOOL  \n");}
		;

declarator
		:direct_declarator 												{printf(" RULE:\tdeclarator \t->\t direct_declarator\n");}
		| pointer direct_declarator 									{printf(" RULE:\tdeclarator \t->\t pointer_opt direct_declarator\n");}
		;

direct_declarator
		: IDENTIFIER 											{printf(" RULE:\tdirect_declarator \t->\t identifier\n");}
		| '(' declarator ')' 									{printf(" RULE:\tdirect_declarator \t->\t (declarator)");}
		| direct_declarator '[' ']' 							{printf(" RULE:\tdirect_declarator \t->\t direct_declarator[]");}
		| direct_declarator '[' assignment_expression ']' 		{printf(" RULE:\tdirect_declarator \t->\t direct_declarator[assignment_expression]\n");}
		| direct_declarator '(' parameter_type_list ')' 		{printf(" RULE:\tdirect_declarator \t->\t direct_declarator(parameter_type_list)\n");}
		| direct_declarator '(' ')' 							{printf(" RULE:\tdirect_declarator \t->\t direct_declarator()\n");}
		| direct_declarator '(' identifier_list ')' 			{printf(" RULE:\tdirect_declarator \t->\t direct_declarator(identifier_list)\n");}
		;

pointer 
		:'*' 																{printf(" RULE:\tpointer \t->\t *\n");}
		|'*' pointer 														{printf(" RULE:\tpointer \t->\t * pointer\n");}
		;

parameter_type_list
		:parameter_list 											{printf(" RULE:\tparameter_type_list \t->\t parameter_list\n");}
		;

parameter_list
		:parameter_declaration 										{printf(" RULE:\tparameter_list \t->\t parameter_declaration\n");}
		| parameter_list ',' parameter_declaration 				{printf(" RULE:\tparameter_list \t->\t parameter_list, parameter_declaration\n");}
		;

parameter_declaration
		:declaration_specifiers declarator 							{printf(" RULE:\tparameter_declaration \t->\t declaration_specifiers declarator\n");}
		| declaration_specifiers  									{printf(" RULE:\tparameter_declaration \t->\t declaration_specifiers\n");}
		;

identifier_list
		:IDENTIFIER 													{printf(" RULE:\tidentifier_list \t->\t identifier\n");}
		| identifier_list ',' IDENTIFIER 							{printf(" RULE:\tidentifier_list \t->\t identifier_list, identifier\n");}
		;

initializer
		:assignment_expression 											{printf(" RULE:\tinitializer \t->\t assignment_expression \n");}
		| LEFT_CURL initializer_row_list RCB  								{printf(" RULE:\tinitializer \t->\t { initializer_row_list } \n");}
		;

initializer_row_list
		:initializer_row 										{printf(" RULE:\tinitializer_row_list \t->\t initializer_row\n");}
		| initializer_row_list SCOL initializer_row 			{printf(" RULE:\tinitializer_row_list \t->\t initializer_row_list ; initializer_row \n");}
		;

initializer_row
		:initializer 												{printf(" RULE:\tinitializer_row \t->\t initializer\n");}
		| designation initializer 									{printf(" RULE:\tinitializer_row \t->\t designation initializer\n");}
		| initializer_row ',' initializer 							{printf(" RULE:\tinitializer_row \t->\t initializer_row, initializer\n");}
		| initializer_row ',' designation initializer 				{printf(" RULE:\tinitializer_row \t->\t initializer_row, designation initializer\n");}
		;

designation
		:designator_list ASSIGN 											{printf(" RULE:\tdesignation \t->\t designator_list = \n");}
		;

designator_list
		:designator 													{printf(" RULE:\tdesignator_list \t->\t designator\n");}
		| designator_list designator 								{printf(" RULE:\tdesignator_list \t->\t designator_list designator\n");}
		;

designator
		:'[' constant_expression ']' 									{printf(" RULE:\tdesignator \t->\t [ constant_expression ] \n");}
		| '.' IDENTIFIER 												{printf(" RULE:\tdesignator \t->\t .identifier\n");}
		;

statement
		:labeled_statement 													{printf(" RULE:\tstatement \t->\t labeled_statement\n");}
		| compound_statement 												{printf(" RULE:\tstatement \t->\t compound_statement\n");}
		| expression_statement 												{printf(" RULE:\tstatement \t->\t expression_statement\n");}
		| selection_statement 												{printf(" RULE:\tstatement \t->\t selection_statement\n");}
		| iteration_statement 												{printf(" RULE:\tstatement \t->\t iteration_statement\n");}
		| jump_statement 													{printf(" RULE:\tstatement \t->\t jump_statement\n");}
		;

labeled_statement
		:IDENTIFIER COL statement 							 	{printf(" RULE:\tlabeled_statement \t->\t identifier : statement\n");}
		| CASE constant_expression COL statement 				{printf(" RULE:\tlabeled_statement \t->\t case constant_expression : statement\n");}
		| DEFAULT COL statement 								{printf(" RULE:\tlabeled_statement \t->\t default : statement\n");}
		;

compound_statement 
		:LEFT_CURL RCB 												{printf(" RULE:\tcompound_statement \t->\t {}\n");}
		| LEFT_CURL block_item_list RCB 								{printf(" RULE:\tcompound_statement \t->\t { block_item_list } \n");}
		;

block_item_list
		:block_item 													{printf(" RULE:\tblock_item_list \t->\t block_item\n");}
		| block_item_list block_item 								{printf(" RULE:\tblock_item_list \t->\t block_item_list block_item\n");}
		;

block_item
		:declaration 													{printf(" RULE:\tblock_item \t->\t declaration\n");}
		| statement 													{printf(" RULE:\tblock_item \t->\t statement\n");}
		;

expression_statement
		:SCOL 													{printf(" RULE:\texpression_statement \t->\t ;");}
		| expression SCOL 										{printf(" RULE:\texpression_statement \t->\t expression;");}
		;
selection_statement
		:IF '(' expression ')' statement 						{printf(" RULE:\tselection_statement \t->\t if(expression) statement\n");}
		| IF '(' expression ')' statement ELSE statement    {printf(" RULE:\tselection_statement \t->\t if(expression) statement else statement\n");}
		| SWITCH '(' expression ')' statement 				{printf(" RULE:\tselection_statement \t->\t switch(expression) statement\n");}
		;

iteration_statement
		:WHILE '(' expression ')' statement 					{printf(" RULE:\titeration_statement \t->\t while(expression) statement\n");}
		| DO statement WHILE '(' expression ')' 			{printf(" RULE:\titeration_statement \t->\t do statement while (expression)\n");}
		| FOR '(' expression SCOL expression SCOL expression ')' statement {printf(" RULE:\titeration_statement \t->\t for(expression;expression;expression)\n");}
		| FOR '(' SCOL expression SCOL expression ')' statement {printf(" RULE:\titeration_statement \t->\t for(;expression;expression)\n");}
		| FOR '(' expression SCOL SCOL expression ')' statement {printf(" RULE:\titeration_statement \t->\t for(expression;;expression)\n");}
		| FOR '(' expression SCOL expression SCOL ')' statement {printf(" RULE:\titeration_statement \t->\t for(expression;expression;)\n");}
		| FOR '(' SCOL SCOL expression ')' statement 			{printf(" RULE:\titeration_statement \t->\t for(;;expression)\n");}
		| FOR '(' expression SCOL SCOL ')' statement 			{printf(" RULE:\titeration_statement \t->\t for(expression;;)\n");}
		| FOR '(' SCOL expression SCOL ')' statement 			{printf(" RULE:\titeration_statement \t->\t for(;expression;)\n");}
		| FOR '(' SCOL SCOL ')' statement 						{printf(" RULE:\titeration_statement \t->\t for(;;)\n");}
		| FOR '(' declaration expression SCOL expression ')' statement {printf(" RULE:\titeration_statement \t->\t for(declaration expression; expression)\n");}
		| FOR '(' declaration SCOL expression ')' statement 	{printf(" RULE:\titeration_statement \t->\t for(declaration;expression)\n");}
		| FOR '(' declaration expression SCOL ')' statement 	{printf(" RULE:\titeration_statement \t->\t for(declaration expression;)\n");}
		| FOR '(' declaration SCOL ')' statement 				{printf(" RULE:\titeration_statement \t->\t for(declaration ; )\n");}
		;
jump_statement
		:GOTO IDENTIFIER SCOL 										{printf(" RULE:\tjump_statement \t->\t goto identifier;\n");}
		| CONTINUE SCOL 											{printf(" RULE:\tjump_statement \t->\t continue;\n");}
		| BREAK SCOL 												{printf(" RULE:\tjump_statement \t->\t break;\n");}
		| RETURN SCOL 												{printf(" RULE:\tjump_statement \t->\t return;\n");}
		| RETURN expression SCOL 									{printf(" RULE:\tjump_statement \t->\t return expression;\n");}
		;

translation_unit
		:external_decalaration 										{printf(" RULE:\ttranslation_unit \t->\t external_decalaration\n");}
		| translation_unit external_decalaration 					{printf(" RULE:\ttranslation_unit \t->\t translation_unit external_decalaration\n");}
		;

external_decalaration
		:function_definition 								{printf(" RULE:\texternal_decalaration \t->\t function_definition\n");}
		| declaration 										{printf(" RULE:\texternal_decalaration \t->\t declaration\n");}
		;

function_definition
		:declaration_specifiers declarator compound_statement 			{printf(" RULE:\tfunction_definition \t->\t declaration_specifiers declarator compound_statement\n");}
		| declaration_specifiers declarator declaration_list compound_statement  {printf(" RULE:\tfunction_definition \t->\t declaration_specifiers declarator declaration_list compound_statement\n");}
		;

declaration_list
		:declaration  												{printf(" RULE:\tdeclaration_list \t->\t declaration\n");}
		| declaration_list declaration 								{printf(" RULE:\tdeclaration_list \t->\t declaration_list declaration\n");}
		;

%%
#include "lex.yy.c"
