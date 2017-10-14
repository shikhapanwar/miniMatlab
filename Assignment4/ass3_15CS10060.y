%{
	#include <stdio.h>
	#include <string.h>
	extern FILE* yyin;
	extern int yylex();
	extern int yyparse();
	void yyerror(const char* s);

	#include "ass4_15CS10060_translator.h"
	quad_array *Q_arr = new quad_array;
	symbol_table *GT = new symbol_table;
	symbol_table *curr_symbol_table = GT;

%}

%union
{
	string *str_val;
	int int_val;
	float float_val;	
	char char_val ;
	expr_attr *expr;
	func_param_list *f_param_list;
	declar_list *dec_list;
	declar declara;
}

%token <str_val> IDENTIFIER
%token <str_val>STRING_LITERAL
%token <int_val> INTEGER_CONSTANT
%token <float_val> FLOATING_CONSTANT
%token <char_val> CHARACTER_CONSTANT
%token	<int_val> ZERO_CONSTANT
%token LEFT_CURL RCB
%token  ARROW PLUS_PLUS MINUS_MINUS NEW
%token LEFT_SHIFT RIGHTSH LE GE ET NE 
%token DAND DOR QM COL POW OR SCOL
%token ASSIGN MULTA DIVA REMA POWA PLUSA MINUSA LSA RSA ANDA ORA 
%token BREAK VOID CHAR INT FLOAT SHORT LONG UNSIGNED SIGNED RETURN IF DO SWITCH GOTO CASE
%token FOR WHILE BOOL CONTINUE DEFAULT  ELSE MATRIX DOUBLE
%start translation_unit
%define parse.error verbose

%type <char_val> unary_operator 

%type <dec_list> declaration
%type<expr> init_declarator
%type<expr> direct_declarator
%type<expr> declarator
%type  <declara> declaration_specifiers
%type <declara>type_specifiers
%type<dec_list> init_declarator_list
%type<f_param_list> argument_expression_list

%type<expr> primary_expression
%type <expr> postfix_expression
%type <expr> assignment_expression
%type <expr> unary_expression 
%type <expr> cast_expression
%type <expr> initializer
%type <expr>multiplicative_expression
%type <expr>additive_expression
%type <expr>shift_expression
%type <expr>relational_expression
%type <expr>and_expression
%type <expr>equality_expression
%type <expr>exclusive_or_expression
%type <expr>inclusive_or_expression
%type <expr>logical_or_expression
%type <expr>logical_and_expression
%type <expr>conditional_expression
%type<expr>expression
%type<expr>constant_expression

%type<expr> M
%type<expr> N


%%


M
:   
{
    $$ = new expr_attr;
    $$->instr = Q_arr->index;
}
;

N
:   
{
    //$$ = nextlist
    $$ = new expr_attr;
    $$->nextlist = makelist(Q_arr->index);
    Q_arr -> emit("","","", OP_GOTO);
}
;

primary_expression

			:IDENTIFIER													{
																			$$ = new expr_attr;
																			string t = *($1);
																			symbol_table_entry *s = curr_symbol_table->lookup(t);
																			$$->name= t;
																			printf("RULE : primary_expression \t->\t\t identifier\n");
																			cout <<$$->addr->name;
																		}
			|INTEGER_CONSTANT

 																		{
 																			cout <<"b"<<endl;
 																			$$ = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(INT_);
																			init_value tmp_init;
																			tmp_init.init_int = $1;
																			symbol_table_entry *ptr = curr_symbol_table->lookup(tmp);
																			ptr->initial_value = tmp_init;
																			ptr-> type = INT_ ;
																			$$->name= tmp;

																			quad * q = Q_arr -> emit(tmp, to_string($1), OP_COPY);
																			printf("RULE : primary_expression \t->\t\t constant\n");
																			cout <<$$->addr->name;
																		}
			|FLOATING_CONSTANT
 													{cout <<"c"<<endl;
																			$$ = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(DOUBLE_);
																			init_value tmp_init;
																			tmp_init.float = $1;
																			symbol_table_entry *ptr = curr_symbol_table->update(tmp, DOUBLE_, tmp_init, 0, NULL); // set offset

																			quad * q = Q_arr -> emit(tmp, to_string($1), OP_COPY);
																			printf("RULE : primary_expression \t->\t\t constant\n");
																			cout <<$$->addr->name;
																			}
			|CHARACTER_CONSTANT 													{cout <<"d"<<endl;
																			$$ = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(CHAR_);
																			init_value tmp_init;
																			tmp_init.init_char = $1;
																			symbol_table_entry *ptr = curr_symbol_table->update(tmp, CHAR_,tmp_init, 0, NULL); // set offset

																			quad * q = Q_arr -> emit(tmp, to_string($1), OP_COPY);

																			printf("RULE : primary_expression \t->\t\t constant\n");cout <<$$->addr->name;}
			|ZERO_CONSTANT 													{cout <<"a"<<endl;
																			$$ = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(INT_);
																			init_value tmp_init;
																			tmp_init.init_int = $1;
																			$$->addr = curr_symbol_table->update(tmp, INT_, tmp_init, 0, NULL); //  TO BE DONE set offset

																			quad * q = Q_arr -> emit(tmp, to_string($1), OP_COPY);

																			printf("RULE : primary_expression \t->\t\t constant\n");cout<<endl <<$$->addr->name<<endl;}
			|STRING_LITERAL												{
																			
																			$$ = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(PTR_);
																			$$->addr = curr_symbol_table->lookup(tmp); //  TO BE DONE set offset // TBD, STRING HANDLING!
																			$$->addr->type = PTR_;

																			quad * q = Q_arr -> emit(tmp, (*($1)), OP_COPY);																


																			printf("RULE : primary_expression \t->\t string_literal\n");}
																			|'(' expression ')'	{printf("primary_expression -\t->\t (expression)\n");cout<<endl <<$$->addr->name<<endl;
																			
																			}
			;

postfix_expression	
			: primary_expression 										{	
																				$$ = $1; printf("RULE:\t postfix_expression \t->\tprimary_expression\n");cout<<endl <<$1->addr->name<<endl;}

			| postfix_expression '[' expression ']' '[' expression ']' 	{// to be done

																				/* 
																				//$$ = new expr_attr;
																				$$->addr = curr_symbol_table->gen_temp();//$1 id matrix type, only double type matrix value

																				$$->addr -> type = DOUBLE_;
																				Q_arr->emit($$->addr, );
																				*/

																				/* to be done*/printf(" RULE:\tpostfix_expression \t->\t postfix_expression [ expression ]\n");cout<<endl <<$$->addr->name<<endl;
																		}

			| postfix_expression '(' argument_expression_list ')'		{	

			      /*  string f = $1->loc;
        symboltable *fsym = GT.lookup(f)->nested_table;
        func_list *flist = ($3);
        list<func_def*>::iterator it;
        int c = 0;
        for(it = flist->func_def_list.begin(); it!=flist->func_def_list.end();it++)
        {
            func_def *f = *it;
            c++;
            Q_arr.emit(PARAM, f->param_name,"","");
        }
        string s = to_string(c);
        	Q_arr.emit(CALL,f,s,"");

cout <<"CHECK1"<<endl;		*/	
																	        $$ = $1;
																	        cout <<string($1 -> addr->name);
																	        cout <<"CHECK1"<<endl;
																	        symbol_table *f_symbol = GT->lookup( $1->addr->name)->nested_table;

																	        func_param_list *flist = ($3);
																	        int i;
																	        cout <<"CHECK1"<<endl;	
																	        int c = 0;
																	        //cout <<&(f_list->vec)<<endl<<endl;;
																	        for(i=0;i < (flist->vec).size() ;i++)
																	        {
																	            c++;
																	            Q_arr->emit((flist->vec)[i].name,"","",OP_PARAM);
																	        }
																	        cout <<"CHECK1"<<endl;	
																	        string s = to_string(c);																        cout <<"CHECK2"<<endl;	
																	        cout <<$1-> addr->name<<endl;
																	        cout<<"sf"<<endl;
																	        	Q_arr->emit($1-> addr->name,s,"", OP_CALL);
																	        		cout <<"CHECK3"<<endl;	
																	        	printf(" RULE:\tpostfix_expression \t->\t postfix_expression ( argument_expression_list_opt )\n");cout<<endl <<$$->addr->name<<endl;
																	      }


			| postfix_expression '(' ')'								{
																			$$ = $1;
																			Q_arr->emit($1-> addr->name,0,"", OP_CALL);

																		printf(" RULE:\tpostfix_expression \t->\t postfix_expression ( )\n");cout<<endl <<$$->addr->name<<endl;}
			| postfix_expression '.' IDENTIFIER							{$$ =$1;
																			//not supported
																			printf(" RULE:\tpostfix_expression \t->\t postfix_expression . identifier\n");cout<<endl <<$$->addr->name<<endl;}
			| postfix_expression ARROW IDENTIFIER						{$$ = $1;printf(" RULE:\tpostfix_expression \t->\t postfix_expression -> identifier\n");cout<<endl <<$$->addr->name<<endl;}
			| postfix_expression PLUS_PLUS									{
																				 $$ = new expr_attr;

																		        //string s = $1->addr;
																		        symbol_table_entry * f = curr_symbol_table->lookup($1->addr->name);
																		        $$->addr = curr_symbol_table-> lookup(curr_symbol_table->gen_temp(f->type));														      

																		        printf(" RULE:\tpostfix_expression \t->\t postfix_expression ++\n");cout<<endl <<$$->addr->name<<endl;}
			| postfix_expression MINUS_MINUS									{
																				 $$ = new expr_attr;

																		        //string s = $1->addr;
																		        symbol_table_entry * f = curr_symbol_table->lookup($1->addr->name);
																		        $$->addr = curr_symbol_table-> lookup(curr_symbol_table->gen_temp(f->type));
																		        /*
																		        if(f->type.array_type.compare("array") == 0)
																		        {
																		            string temp = curr_sym->gentemp(f->type);
																		            Q_arr->emit(temp, $1->addr, *($1->inner), OP_ARRAY_ACCESS);
																		            Q_arr->emit($$->addr, temp, "", OP_COPY);
																		            Q_arr->emit(temp, temp, "1", OP_PLUS);
																		            Q_arr->emit($1->addr, temp, *($1->inner), ARRAY_DEREFERENCE);
																		        }
																		        */
																		        //else check once again
																		        //{
																		            Q_arr->emit( $$->addr->name, $1->addr->name, "", OP_COPY);
																		            Q_arr->emit($1->addr->name, $1->addr->name, "1", OP_MINUS);

																		        //}   //corrected
																		        printf(" RULE:\tpostfix_expression \t->\t postfix_expression --\n");cout<<endl <<$$->addr->name<<endl;}
			| postfix_expression NEW									{$$ = $1; printf(" RULE:\tpostfix_expression \t->\t postfix_expression .'");cout<<endl <<$$->addr->name<<endl;}
			;

argument_expression_list
			: assignment_expression								  		{
			/*func_param *f = new func_param;
        f->param_name = $1->addr->name;
        $$ = new func_param_list;
        f->type = (curr_symbol_table->lookup(f->param_name)->type);
        $$->vec.push_back(f);*/
																				/*
																				$$ = new func_param_list;
																				func_param f;
																				cout <<"a"<<endl;
																				cout <<$1->addr<<endl;
																				f.name = ($1->addr) -> name;
																				f.type  = ($1->addr) -> type;
																				cout <<"b"<<endl;
																				($$->vec).push_back(f);*/

																				printf(" RULE:\targument_expression_list \t->\t assignment_expression\n");
																		}

			| argument_expression_list ',' assignment_expression 		{//done
																					
																			$$ = $1 ;
																			func_param f;
																			f.name = ($3->addr) -> name;
																			f.type  = ($3->addr) -> type;
																			($$->vec).push_back(f);
																			
																			printf(" RULE:\targument_expression_list \t->\t argument_expression_list , assignment_expression\n");
																		}
			;

unary_expression
		:postfix_expression												{$$ = $1; printf(" RULE:\tunary_expression \t->\t postfix_expression\n");}
		| PLUS_PLUS unary_expression 										{//Done
																				$$ = new expr_attr;
																				string tmp = curr_symbol_table -> gen_temp($2->addr->type);
																				init_value tmp_init;
																			
																				$$->addr = curr_symbol_table->update(tmp, $2->addr->type, tmp_init, 0, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																				quad *q = Q_arr -> emit(tmp, $2->addr->name, OP_UNARY_PLUS);


																				printf(" RULE:\tunary_expression \t->\t ++ unary_expression\n");cout<<endl <<$$->addr->name<<endl;}

		| MINUS_MINUS unary_expression 										{//done
																				$$ = new expr_attr;
																				string tmp = curr_symbol_table -> gen_temp($2->addr->type);
																				init_value tmp_init;
																			
																				$$->addr = curr_symbol_table->update(tmp, $2->addr->type, tmp_init, 0, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																				quad *q = Q_arr -> emit(tmp, $2->addr->name, OP_UNARY_MINUS);
																				printf(" RULE:\tunary_expression \t->\t -- unary_expression\n");cout<<endl <<$$->addr->name<<endl;}

		| unary_operator cast_expression								{//done
																				$$ = new expr_attr;
																				string tmp = curr_symbol_table -> gen_temp($2->addr->type);
																				init_value tmp_init;							

																				switch($1)
																				{
																					case '&': 
																					{
																						$$->addr = curr_symbol_table->update(tmp, PTR_, tmp_init, 0, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																						Q_arr ->emit(tmp, $2->addr->name,OP_REFERENCE);
																						break;
																					}
																					case '*': 
																					{
																						$$->addr = curr_symbol_table->update(tmp, UNKNOWN_, tmp_init, 0, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																						Q_arr ->emit(tmp, $2->addr->name,OP_DEREFERENCE);
																						break;
																					}
																					case '-': 
																					{
																						$$->addr = curr_symbol_table->update(tmp, $2->addr-> type, tmp_init, 0, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																						Q_arr ->emit(tmp, $2->addr->name,OP_UNARY_MINUS);
																						break;
																					}
																					default :
																					$$ = $2;


																				}
																			printf(" RULE:\tunary_expression \t->\t unary_operator cast_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

unary_operator
		: '&' 															{ $$ = '&';printf(" RULE:\tunary_operator \t->\t & \n");}
		| '*' 															{ $$ = '*'; printf(" RULE:\tunary_operator \t->\t * \n");}
		| '+' 															{$$ = '+';printf(" RULE:\tunary_operator \t->\t + \n");}
		| '-' 															{$$ = '-'; printf(" RULE:\tunary_operator \t->\t - \n");}
		;

cast_expression
		: unary_expression 												{
																			$$ = $1;
																			printf(" RULE:\tcast_expression \t->\t unary_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

multiplicative_expression
		: cast_expression 									{	

																/*to be done, doubt  what are cast expression for ?*/
																				$$ = $1;
																				printf(" RULE:\tmultiplicative_expression \t->\t cast_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| multiplicative_expression '*' cast_expression 					{																															   $$ = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup($1->addr->name)->type;
												        type2 = curr_symbol_table->lookup($3->addr->name)->type;
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,$3);
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,$1);
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,$3);
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,$1);
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$1);
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$3);
												            type = type1;

												            
												        }
												        
												        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp(type));
												        Q_arr->emit($$->addr->name, $1->addr->name, $3->addr->name, OP_MULT);

													printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression * cast_expression\n");cout<<endl <<$$->addr->name<<endl;}


		| multiplicative_expression '/' cast_expression 					{
																				 $$ = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup($1->addr->name)->type;
												        type2 = curr_symbol_table->lookup($3->addr->name)->type;
												   
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->addr->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,$3);
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,$1);
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,$3);
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,$1);
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$1);
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$3);
												            type = type1;

												            
												        }
												        
												        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp(type));
												        Q_arr->emit($$->addr->name, $1->addr->name, $3->addr->name, OP_DIVIDE);


printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression / cast_expression\n");cout<<endl <<$$->addr->name<<endl;}


		| multiplicative_expression '%' cast_expression 					{

																				 $$ = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup($1->addr->name)->type;
												        type2 = curr_symbol_table->lookup($3->addr->name)->type;							   
												   
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,$3);
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,$1);
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,$3);
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,$1);
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$1);
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$3);
												            type = type1;

												            
												        }
												        
												        $$->addr= curr_symbol_table->lookup(curr_symbol_table->gen_temp(type));
												        Q_arr->emit($$->addr->name, $1->addr->name, $3->addr->name, OP_MODULO);


printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression %% cast_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

additive_expression
		: multiplicative_expression											{$$ = $1;printf(" RULE:\tadditive_expression \t->\t multiplicative_expression\n");}

		| additive_expression '+' multiplicative_expression 				{
																			 $$ = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup($1->addr->name)->type;
												        type2 = curr_symbol_table->lookup($3->addr->name)->type;
												   
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->addr->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,$3);
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,$1);
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,$3);
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,$1);
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$1);
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$3);
												            type = type1;

												            
												        }
												        
												        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp(type));
												        Q_arr->emit($$->addr->name, $1->addr->name, $3->addr->name, OP_PLUS);

printf(" RULE:\tadditive_expression \t->\t additive_expression + multiplicative_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| additive_expression '-' multiplicative_expression 				{
																				printf(" RULE:\tadditive_expression \t->\t additive_expression - multiplicative_expression\n");

																				 $$ = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup($1->addr->name)->type;
												        type2 = curr_symbol_table->lookup($3->addr->name)->type;
												   
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->addr->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,$3);
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,$1);
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,$3);
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,$1);
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$1);
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$3);
												            type = type1;

												            
												        }
												        
												        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp(type));
												        Q_arr->emit($$->addr->name, $1->addr->name, $3->addr->name, OP_MINUS);
cout<<endl <<"rulent written"<<$$->addr->name<<endl;
														}
		;

shift_expression
		: additive_expression 												{$$= $1;printf(" RULE:\tshift_expression \t->\t additive_expression\n");}
		| shift_expression LEFT_SHIFT additive_expression 						{
																					 $$ = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup($1->addr->name)->type;
												        type2 = curr_symbol_table->lookup($3->addr->name)->type;
												   
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->addr->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,$3);
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,$1);
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,$3);
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,$1);
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$1);
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$3);
												            type = type1;

												            
												        }
												        
												        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp(type));
												        Q_arr->emit($$->addr->name, $1->addr->name, $3->addr->name, OP_SHIFT_LEFT);


																					//not supported
																					printf(" RULE:\tshift_expression \t->\t shift_expression << additive_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| shift_expression RIGHTSH additive_expression 						{//done
																					 $$ = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup($1->addr->name)->type;
												        type2 = curr_symbol_table->lookup($3->addr->name)->type;
												   
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->addr->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,$3);
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,$1);
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,$3);
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,$1);
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$1);
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,$3);
												            type = type1;

												            
												        }
												        
												        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp(type));
												        Q_arr->emit($$->addr->name, $1->addr->name, $3->addr->name, OP_SHIFT_RIGHT);

																				printf(" RULE:\tshift_expression \t->\t shift_expression >> additive_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

relational_expression
		: shift_expression 													{$$ =$1;

																				printf(" RULE:\trelational_expression \t->\t shift_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| relational_expression '<' shift_expression 						{

																				$$ = new expr_attr;
																		        $$->addr->type = BOOL_;
																		        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp($$->addr->type));
																		        $$->truelist = makelist(Q_arr->index);
																		        $$->falselist = makelist(Q_arr->index + 1);
																		        Q_arr -> emit("", $1->addr->name, $3->addr->name, OP_IF_LESS);
																		        Q_arr-> emit("","","", OP_GOTO);

																			printf(" RULE:\trelational_expression \t->\t relational_expression < shift_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| relational_expression '>' shift_expression 						{
																				$$ = new expr_attr;
																		        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp($1->addr->type));
																		        $$->truelist = makelist(Q_arr->index);
																		        $$->falselist = makelist(Q_arr->index + 1);
																		        Q_arr -> emit("", $1->addr->name, $3->addr->name, OP_IF_GREATER);
																		        Q_arr->emit("","","",OP_GOTO);
																		        printf(" RULE:\trelational_expression \t->\t relational_expression > shift_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| relational_expression LE shift_expression 						{

																				$$ = new expr_attr;
																		        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp($1->addr->type));
																		        $$->truelist = makelist(Q_arr->index);
																		        $$->falselist = makelist(Q_arr->index + 1);
																		        Q_arr -> emit("", $1->addr->name, $3->addr->name, OP_IF_LESS_EQUAL);
																		        Q_arr-> emit("","","", OP_GOTO);
																		        printf(" RULE:\trelational_expression \t->\t relational_expression <= shift_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| relational_expression GE shift_expression 						{	$$ = new expr_attr;
																		        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp($1->addr->type));
																		        $$->truelist = makelist(Q_arr->index);
																		        $$->falselist = makelist(Q_arr->index + 1);
																		        Q_arr -> emit("", $1->addr->name, $3->addr->name, OP_IF_GREATER_EQUAL);
																		        Q_arr-> emit("","","", OP_GOTO);
																				printf(" RULE:\trelational_expression \t->\t relational_expression >= shift_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

equality_expression
		:  relational_expression 											{	$$=$1;printf(" RULE:\tequality_expression \t->\t relational_expression\n");}
		| equality_expression ET relational_expression 						{
																				$$ = new expr_attr;
																		        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp(BOOL_));
																		        $$->truelist = makelist(Q_arr->index);
																		        $$->falselist = makelist(Q_arr->index + 1);
																		        Q_arr -> emit("", $1->addr->name, $3->addr->name, OP_IF_IS_EQUAL);
																		        Q_arr-> emit("","","", OP_GOTO);

																		       	printf(" RULE:\tequality_expression \t->\t equality_expression == relational_expression\n");cout<<endl <<$$->addr->name<<endl;}

		| equality_expression NE relational_expression 						{
																				$$ = new expr_attr;
																		        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp(BOOL_));
																		        $$->truelist = makelist(Q_arr->index);
																		        $$->falselist = makelist(Q_arr->index + 1);
																		        Q_arr -> emit("", $1->addr->name, $3->addr->name, OP_IF_NOT_EQUAL);
																		        Q_arr-> emit("","","", OP_GOTO);
																		        
																		        printf(" RULE:\tequality_expression \t->\t equality_expression != relational_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

and_expression
		: equality_expression 												{$$=$1;

        																		printf(" RULE:\tand_expression \t->\t equality_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| and_expression '&' equality_expression 							{
																																										/*
																		       /*
																		        if(type2.array_type.compare("array") == 0)
																		        {
																		            string temp = curr_sym->gentemp(type2);
																		            Q_arr.emit(ARRAY_ACCESS, temp, $3->loc, *($3->inner));
																		            $3->loc = temp;
																		            $3->type.array_type = ""; //check
																		        }
																		        
																		        if(type1.array_type.compare("array") == 0)
																		        {
																		            string temp = curr_sym->gentemp(type1);
																		            Q_arr.emit(ARRAY_ACCESS, temp, $1->loc, *($1->inner));
																		            $1->loc = temp;
																		            $1->type.array_type = ""; //check
																		        }
																		        */

																		        /*
																		        $$ = new expr_attr;
																		        symbol_table_entry *f = curr_symbol_table->lookup($1->addr -> name);//check
																		        data_type t;
																		        t = f->type;
																		        $$->addr = curr_symbol_table->lookup( curr_symbol_table->gen_temp(t));
																		        Q_arr->emit($$->loc, $1->addr->name, $3->name, OP_LOGICAL_AND);printf(" RULE:\tand_expression \t->\t and_expression & equality_expression\n");
																		        */
cout<<endl <<$$->addr->name<<endl;
																		        }
		;

exclusive_or_expression
		:and_expression 													{$$ =$1;printf(" RULE:\texclusive_or_expression \t->\t and_expression\n");}
		| exclusive_or_expression POW and_expression 						{
																				/*
																				$$ = new expr_attr;
																		        symtab *f = curr_symbol_table->lookup($1->addr);//check
																		        data_type t;
																		        t = f->addr->type;
																		        $$->addr = curr_symbol_table->lookup( curr_symbol_table->gen_temp(t));

																		        Q_arr.emit($$->loc, $1->addr->name, $3->name, OP_XOR);
																		        */

																		        printf(" RULE:\texclusive_or_expression \t->\t exclusive_or_expression ^ and_expression\n");cout<<endl <<$$->addr->name<<endl;
																		       }
		;

inclusive_or_expression
		:exclusive_or_expression 											{$$ = $1;printf(" RULE:\tinclusive_or_expression \t->\t exclusive_or_expression\n");}
		| inclusive_or_expression OR exclusive_or_expression 				{
																				 $$ = new expr_attr;
																		        symbol_table_entry *f = curr_symbol_table->lookup($1->addr->name);//check
																		        data_type t;
																		        t = f->type;
																		        $$->addr = curr_symbol_table -> lookup(curr_symbol_table->gen_temp(t));
																		        Q_arr->emit($$->addr->name, $1->addr->name, $3->addr->name, OP_OR);

																		        printf(" RULE:\tinclusive_or_expression \t->\t inclusive_or | exclusive_or_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

logical_and_expression
		: inclusive_or_expression 											{$$ =$1; cout << $$->addr->name<<endl;printf(" RULE:\tlogical_and_expression \t->\t inclusive_or_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| logical_and_expression N DAND M inclusive_or_expression 	N			{//DONE
																					data_type type;
																			        type = BOOL_;
																			        $$ = new expr_attr;
																			        $$->addr = curr_symbol_table -> lookup( curr_symbol_table->gen_temp(type));
																			        //check
																			         Q_arr->backpatch($2->nextlist, Q_arr->index);
																			        Q_arr->convInt2Bool($1);

																			        Q_arr->backpatch($6->nextlist, Q_arr->index);
																			        Q_arr->convInt2Bool($5);
																			        Q_arr-> emit($$->addr->name, $$->addr->name, $$->addr->name, OP_LOGICAL_AND);
																					Q_arr->backpatch($1->falselist, $4->instr);
																			        $$->truelist = merge($1->truelist, $5->truelist);
																			        $$->falselist = $5->falselist;

printf(" RULE:\tlogical_and_expression \t->\t logical_and_expression && inclusive_or_expression\n");cout<<endl <<$$->addr->name<<endl;
																			}
		;

logical_or_expression
		:	logical_and_expression 											{$$ =$1;printf(" RULE:\tlogical_or_expression \t->\t logical_and_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| logical_or_expression N DOR M logical_and_expression N 					{//done
																						data_type type;
																			        type = BOOL_;
																			        $$ = new expr_attr;
																			        $$->addr = curr_symbol_table -> lookup( curr_symbol_table->gen_temp(type));
																			        //check
																			         Q_arr->backpatch($2->nextlist, Q_arr->index);
																			        Q_arr->convInt2Bool($1);

																			        Q_arr->backpatch($6->nextlist, Q_arr->index);
																			        Q_arr->convInt2Bool($5);
																			        Q_arr-> emit($$->addr->name, $$->addr->name, $$->addr->name, OP_LOGICAL_OR);
																					Q_arr->backpatch($1->falselist, $4->instr);
																			        $$->truelist = merge($1->truelist, $5->truelist);
																			        $$->falselist = $5->falselist;

        printf(" RULE:\tlogical_or_expression \t->\t logical_or_expression || logical_and_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

conditional_expression
		: logical_or_expression 											{$$=$1;printf(" RULE:\tconditional_expression \t->\t logical_or_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| logical_or_expression N QM M expression N COL M conditional_expression {

																		        $$ = new expr_attr;
																		        list<int> I;
																		        data_type type;
																		        type = $5->addr->type;
																		        $$->addr = curr_symbol_table->lookup(curr_symbol_table->gen_temp(type));
																		        Q_arr->emit($$->addr->name, $9->addr->name,"", OP_COPY);
																		        I = makelist(Q_arr->index);
																		        Q_arr->emit("","","",OP_GOTO);
																		        Q_arr->backpatch($6->nextlist, Q_arr->index);
																		        Q_arr->emit( $$->addr->name, $5->addr->name, "", OP_COPY);
																		        I = merge(I, makelist(Q_arr->index));
																		        Q_arr->emit("", "", "", OP_GOTO);
																		        Q_arr -> backpatch($2->nextlist, Q_arr -> index);
																		        Q_arr -> convInt2Bool($1);
																		        Q_arr -> backpatch($1->truelist, $4->instr);
																		        Q_arr -> backpatch($1->falselist, $8->instr);
																		        Q_arr -> backpatch(I, Q_arr -> index);

        printf(" RULE:\tconditional_expression \t->\t logical_or_expression ? expression : conditional_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

assignment_expression
		: conditional_expression 											{$$ = $1;printf(" RULE:\tassignment_expression \t->\t conditional_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| unary_expression assignment_operator assignment_expression {

																        Q_arr->emit($1->addr->name, $3->addr->name, "", OP_COPY);
																        $$ = $1;


        printf(" RULE:\tassignment_expression \t->\t unary_expression assignment_operator assignment_expression\n");cout<<endl <<$$->addr->name<<endl;}
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
		:  assignment_expression 											{ $$ = $1;

		printf(" RULE:\texpression \t->\t assignment_expression\n");cout<<endl <<$$->addr->name<<endl;}
		| expression ',' assignment_expression 								{$$ = $1;printf(" RULE:\texpression \t->\t expression, assignment_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

constant_expression
		: conditional_expression 											{$$ = $1;printf(" RULE:\tconstant_expression \t->\t conditional_expression\n");cout<<endl <<$$->addr->name<<endl;}
		;

declaration
		: declaration_specifiers SCOL										{
																					// not supported
																					// consider only 1 declaration specifier
																					// TO BE DONE PERHAPS FOR function
																				printf(" RULE:\tdeclaration \t->\t declaration_specifiers ;\n");}
		| declaration_specifiers init_declarator_list SCOL					{         															
																	              	//done
																	              	$$ = $2;
																	              	vector<expr_attr>::iterator it;
																	              	symbol_table_entry *ptr;
																	              	
																	              	for(it = ($2->vec).begin() ; it != ($2->vec).end(); ++it )
																	              	{
																	              		ptr = curr_symbol_table->lookup(it->name);


																						if (ptr->type == UNKNOWN_)
																						{
																							ptr->type = $1.type;
																							ptr->offset = curr_symbol_table -> offset;
																							curr_symbol_table -> offset += size_of_type($1.type);
																						}
																						
																	              	}
																	              	delete $2;
																					printf(" RULE:\tdeclaration \t->\t declaration_specifiers init_declarator_list ; \n");
																			}
		;

declaration_specifiers
		: type_specifiers declaration_specifiers_opt 						{//done
																				$$ = $1;

																				printf(" RULE:\tdeclaration_specifiers \t->\t type_specifiers declaration_specifiers_opt\n");}
		;

declaration_specifiers_opt
		:	 																{printf(" RULE:\tdeclaration_specifiers_opt \t->\t empty\n");}
		|declaration_specifiers 											{// not supported
																				printf(" RULE:\tdeclaration_specifiers_opt \t->\t declaration_specifiers\n");}

init_declarator_list
		: init_declarator 													{//done
		cout << "currtable, GT "<<curr_symbol_table<<"\t"<<GT<<endl;
		int i;

		
		 
																				$$ = new declar_list;
																				cout <<"$$ ="<< $$<<endl;
																				($$->vec).push_back(*($1));
cout <<"0th elem is " <<($$->vec).begin()->addr	<<endl;
																				cout <<"Pushing "<<($$->vec)[($$->vec).size()-1].addr->name<<endl<<endl<<endl;

																				printf(" RULE:\tinit_declarator_list \t->\t init_declarator\n");}
		| init_declarator_list ',' init_declarator 							{//done
		cout << "currtable, GT "<<curr_symbol_table<<"\t"<<GT<<endl;
		//print symbol table
		int i;
		
																				cout <<"$1 = "<<$1 <<endl;cout <<"0th elem is " <<($1->vec).begin()->addr	<<endl;

																					$$ = $1;
																					cout <<"0th elem is " <<($1->vec).begin()->addr	<<endl;
																					cout <<"$$ = "<<$$<<endl;
																					($$->vec).push_back(*($3));
      																			  cout <<"Pushing "<<($$->vec)[($$->vec).size()-1].addr->name<<endl<<endl<<endl;

																	              	
																	              	
																	              	



																				  

																				printf(" RULE:\tinit_declarator_list \t->\t init_declarator_list, init_declarator\n");}
		;

init_declarator
		:declarator 														{//done
																				$$ = $1;
																				cout <<"here loc ="<<$$<<endl;
																				printf(" RULE:\tinit_declarator \t->\t declarator\n");}
		| declarator ASSIGN initializer 									{//done
																				 $$ = $1;
																				// to be done typecheck														
																				Q_arr->emit($1->name, $3->name, OP_COPY);
																				$1-> addr -> initial_value = $1 -> addr -> initial_value;
																				printf(" RULE:\tinit_declarator \t->\t declarator = initializer\n");

																				}
		;

type_specifiers
		: VOID 							{
											//done
											$$.type = VOID_;
											$$.width = SIZE_OF_VOID;
											printf(" RULE:\ttype_specifiers \t->\t  VOID\n");
										}
		| CHAR 						{
											$$.type = CHAR_;
											$$.width = SIZE_OF_CHAR;
										printf(" RULE:\ttype_specifiers \t->\t CHAR \n");}
		| SHORT 						{printf(" RULE:\ttype_specifiers \t->\t SHORT \n");}
		| INT 						{ $$.type = INT_; $$.width = SIZE_OF_INT; printf(" RULE:\ttype_specifiers \t->\t INT \n");}
		| LONG 						{printf(" RULE:\ttype_specifiers \t->\t LONG \n");}
		| FLOAT 						{printf(" RULE:\ttype_specifiers \t->\t FLOAT \n");}
		| DOUBLE 					{ $$.type = DOUBLE_; $$.width = SIZE_OF_DOUBLE;  printf(" RULE:\ttype_specifiers \t->\t DOUBLE \n");}
		| MATRIX 					{$$.type = MATRIX_;/*to be done*/ $$.type = MATRIX_;   printf(" RULE:\ttype_specifiers \t->\t MATRIX \n");}
		| SIGNED 						{ printf(" RULE:\ttype_specifiers \t->\t SIGNED  \n");}
		| UNSIGNED 						{printf(" RULE:\ttype_specifiers \t->\t UNSIGNED \n");}
		| BOOL 						{$$.type = BOOL_; $$.width = SIZE_OF_BOOL; printf(" RULE:\ttype_specifiers \t->\t BOOL  \n");}
		;

declarator
		:direct_declarator 												{//done
																		$$ = $1;
																		cout <<"here loc ="<<$$<<endl;
																			 printf(" RULE:\tdeclarator \t->\t direct_declarator\n");}
		| pointer direct_declarator 									{//done	
																			$$ = $2;
																			symbol_table_entry *ptr = curr_symbol_table->lookup($2->name);
																			if(ptr != NULL)ptr->type = PTR_;							
																			printf(" RULE:\tdeclarator \t->\t pointer_opt direct_declarator\n");
																		}
		;

direct_declarator
		: IDENTIFIER 											{//done

																	
																	$$ = new expr_attr;
																	$$ ->addr = curr_symbol_table->lookup((*$1));
																	$$->name = (*$1);
																	//cout <<$$->addr->name<<endl;
																	cout << type_string( $$ -> addr -> type)<<endl;
																	//$$->addr->type = UNKNOWN_; // default type
																	cout <<"here loc ="<<$$<<endl;
																	printf(" RULE:\tdirect_declarator \t->\t identifier\n");}
		| '(' declarator ')' 									{printf(" RULE:\tdirect_declarator \t->\t (declarator)");}
		| direct_declarator '[' ']' 							{printf(" RULE:\tdirect_declarator \t->\t direct_declarator[]");}
		| direct_declarator '[' assignment_expression ']' 		{
																	// to be done for matrix
																	printf(" RULE:\tdirect_declarator \t->\t direct_declarator[assignment_expression]\n");}
		| direct_declarator '(' parameter_type_list ')' 		{
																	// to be done for function
																	printf(" RULE:\tdirect_declarator \t->\t direct_declarator(parameter_type_list)\n");}
		| direct_declarator '(' ')' 							{
																		// to be done for function
																		printf(" RULE:\tdirect_declarator \t->\t direct_declarator()\n");}
		| direct_declarator '(' identifier_list ')' 			{
																	// to be done for function
																	printf(" RULE:\tdirect_declarator \t->\t direct_declarator(identifier_list)\n");}
		;

pointer 
		:'*' 																{
																				// to be done - pointer
																				printf(" RULE:\tpointer \t->\t *\n");}
		|'*' pointer 														{printf(" RULE:\tpointer \t->\t * pointer\n");}
		;

parameter_type_list
		:parameter_list 											{// to be done for function
																		printf(" RULE:\tparameter_type_list \t->\t parameter_list\n");
																	}
		;

parameter_list
		:parameter_declaration 										{// to be done for function;
																		printf(" RULE:\tparameter_list \t->\t parameter_declaration\n");}
		| parameter_list ',' parameter_declaration 				{/*to be done*/printf(" RULE:\tparameter_list \t->\t parameter_list, parameter_declaration\n");}
		;

parameter_declaration
		:declaration_specifiers declarator 							{/*to be done*/printf(" RULE:\tparameter_declaration \t->\t declaration_specifiers declarator\n");}
		| declaration_specifiers  									{/*to be done*/printf(" RULE:\tparameter_declaration \t->\t declaration_specifiers\n");}
		;

identifier_list
		:IDENTIFIER 													{/*to be done*/printf(" RULE:\tidentifier_list \t->\t identifier\n");}
		| identifier_list ',' IDENTIFIER 							{/*to be done*/printf(" RULE:\tidentifier_list \t->\t identifier_list, identifier\n");}
		;

initializer
		:assignment_expression 											{$$ = $1; printf(" RULE:\tinitializer \t->\t assignment_expression \n");}
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
void yyerror(const char* s)
{
	cout << s<<endl;
}