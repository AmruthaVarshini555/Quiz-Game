//Header file of the quiz game
#include<stdio.h>
//Declaration of macros
#define BUFFER_SIZE 20
#define PSWD_SIZE 8
#define QUESTION_BUFFER_SIZE 200

typedef struct admin_data
{
	char user_name[BUFFER_SIZE];
	char pswd[BUFFER_SIZE];
	struct admin_data *next ;
}admin_data;

typedef struct coordinator
{
        char name[BUFFER_SIZE];
        char userid[BUFFER_SIZE];
        char pswd[PSWD_SIZE];
        long int phone_num ;
        char Email_id[BUFFER_SIZE];
        struct coordinator *next;
}coordinator;

typedef struct contestant
{
	char user_id[BUFFER_SIZE];
	char user_name[BUFFER_SIZE];
	char email_id[BUFFER_SIZE] ;
	char phone_num[BUFFER_SIZE];
	char pswd[BUFFER_SIZE];
	int first_score;
	int second_socre ;
	int check ;
	int check_2 ;
	struct contestant *next ;
}contestant;

typedef struct question_ans
{
	int q_num ;
	char question[QUESTION_BUFFER_SIZE];
	char ans_string[4][BUFFER_SIZE];
	int ans_intiger[4] ;
	char ans_str[BUFFER_SIZE];
	int ans_int ;
	int check_flag ;
	struct question_ans *next ;	
}question_ans ;

//Declaration of functions
void design();
int main_menu();

void admin();
admin_data read_admin_file(admin_data);
coordinator *new_coordinator();
void adding_new_coordinator_to_file();
coordinator *create_list_for_cordinator(coordinator * ,coordinator);
coordinator data_extraction_from_cordinator_file(char * ,  coordinator);
void save_coordinator_data_into_file(coordinator *);
coordinator *update_coordinator(char *,coordinator *);
coordinator *delete_coordinator(char *,coordinator *);
void display_coordinator();
void adding_contestant_to_file();
void save_contestant_data_into_file(contestant *);

contestant data_extraction_from_contestant_file(char *,contestant);
void view_contestant();
contestant *delete_contestant(contestant * , char *);

void Coordinator();
question_ans *add_new_quiz(question_ans *,char *str); 
void adding_question_to_file(char *);
question_ans *create_list_for_QA(question_ans *, question_ans );
question_ans *update_quiz(question_ans * , char *str);
question_ans *delete_question(question_ans * , int);
void save_QA_info_into_file(question_ans * , char *str);

contestant * Contestant();
contestant *registration_contestant(contestant *);
contestant* play_quiz(char * , char *,contestant *,question_ans *);
void save_score_to_file(contestant *);
void check_score_contestants(contestant *);
contestant *continue_quize_game(char * , char *,contestant *,question_ans *);
void rules();
