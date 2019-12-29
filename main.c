                     #include <stdio.h>
                     #include <sqlite3.h>
                     #include <stdlib.h>
                     #include<string.h>
                     struct info
                     {
                     char id;
                     char num[10];
                     char name [20];
                     char sex [4];
                     char birthday[20];
                     char address[50];
                      int rc;
                     }teacher;

    struct TEACHER {
	char id[10];
	char num[10];
	char name[20];
	char sex[20];
	char bir[40];
	char address[20];
	char data[20];
	char field[20];
	int ret;
	int choose;
}T;
void initialize()///结构体初始化
{
	T.num[20] = 0;
	T.name[20] = 0;
	T.sex[20] = 0;
	T.bir[20] = 0;
	T.address[20] = 0;
	T.data[20] = 0;
	T.field[20] = 0;
	T.ret = 0;
	T.choose = 0;
}
		    sqlite3 *New(sqlite3 *);
			 sqlite3 *Create(sqlite3 *);

                    static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}
                     static int callback1(void *data, int argc, char **argv, char **azColName){
                        int i;
                        fprintf(stderr, "%s: ", (const char*)data);
                          for(i=0; i<argc; i++){
                           printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
                              }
                              printf("\n");
                              return 0;
                           }
/*void update(sqlite3 *db)
{
   int rc;
   char b;;
initialize();
	char *zErrMsg = 0;
        char sql[512];
	int len = 0;
	teacher .rc = sqlite3_open("teacherinfo.db",&db);
	if(teacher .rc != SQLITE_OK)
	{
		printf("zErrMsg = %s\n",zErrMsg);
		return -1;
	}
char *mistake;
char find[100];
char ch;
int p,k;
char id[10];
memset(sql,'\0',128);
for(;;){
printf("1.按id修改\n");
printf("2.按num修改\n");
printf("3.按name修改\n");
printf("4.按address修改\n");
fflush(stdin);
scanf("%d",&p);
switch(p)
{
case 1:printf("输入id：");
scanf("%s", &find); 
printf("请修改id") ;
scanf("%s", &T.id); 
printf("nnnnnn") ;
sprintf(sql,"UPDATE teacher set id='%s' WHERE id= '%d'",&T.id,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改num") ;
scanf("%s", &T.num); 
sprintf(sql,"UPDATE teacher set num='%s' WHERE id= '%d'",&T.num,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改name") ;
scanf("%s", &T.name); 
sprintf(sql,"UPDATE teacher set name='%s' WHERE id= '%d'",&T.name,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改sex") ;
scanf("%s", &T.sex); 
sprintf(sql,"UPDATE teacher set sex='%s' WHERE id= '%d'",&T.sex,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改birthday") ;
scanf("%s", &T.bir); 
sprintf(sql,"UPDATE teacher set birthday='%s' WHERE id= '%d'",&T.bir,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改address") ;
scanf("%s", &T.address); 
sprintf(sql,"UPDATE teacher set address='%s' WHERE id= '%d'",&T.address,&find);
rc = sqlite3_exec(p, sql, callback, 0, &mistake);
break;
case 2:printf("输入num：");
scanf("%s", &find);
scanf("%c", &ch);  //用scanf吸收回车
sprintf(sql,"SELECT  * from teachers where num='%s'",&find);
printf("请修改id") ;
scanf("%d", &T.id); 
sprintf(sql,"UPDATE teacher set id='%d' WHERE num= '%s'",&T.id,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改num") ;
scanf("%d", &T.num); 
sprintf(sql,"UPDATE teacher set num='%d' WHERE num= '%s'",&T.num,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改name") ;
scanf("%s", &T.name); 
sprintf(sql,"UPDATE teacher set name='%s' WHERE num= '%s'",&T.name,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改sex") ;
scanf("%s", &T.sex); 
sprintf(sql,"UPDATE teacher set sex='%s' WHERE num= '%s'",&T.sex,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改birthday") ;
scanf("%s", &T.bir); 
sprintf(sql,"UPDATE teacher set birthday='%s' WHERE num= '%s'",&T.bir,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改address") ;
scanf("%s", &T.address); 
sprintf(sql,"UPDATE teacher set address='%s' WHERE num= '%s'",&T.address,&find);
rc = sqlite3_exec(p, sql, callback, 0, &mistake);
break;
case 3:printf("输入name：");
scanf("%s", &find);
scanf("%c", &ch);  //用scanf吸收回车
printf("请修改id") ;
scanf("%d", &T.id); 
sprintf(sql,"UPDATE teacher set id='%d' WHERE name= '%s'",&T.id,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改num") ;
scanf("%d", &T.num); 
sprintf(sql,"UPDATE teacher set num='%d' WHERE name= '%s'",&T.num,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改name") ;
scanf("%s", &T.name); 
sprintf(sql,"UPDATE teacher set name='%s' WHERE name= '%s'",&T.name,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改sex") ;
scanf("%s", &T.sex); 
sprintf(sql,"UPDATE teacher set sex='%s' WHERE name= '%s'",&T.sex,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改birthday") ;
scanf("%s", &T.bir); 
sprintf(sql,"UPDATE teacher set birthday='%s' WHERE name= '%s'",&T.bir,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改address") ;
scanf("%s", &T.address); 
sprintf(sql,"UPDATE teacher set address='%s' WHERE name= '%s'",&T.address,&find);
rc = sqlite3_exec(p, sql, callback, 0, &mistake);
break;
case 4:printf("输入address：");
scanf("%s", &find);
scanf("%c", &ch);  //用scanf吸收回车
printf("请修改id") ;
scanf("%d", &T.id); 
sprintf(sql,"UPDATE teacher set id='%d' WHERE address= '%s'",&T.id,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改num") ;
scanf("%d", &T.num); 
sprintf(sql,"UPDATE teacher set num='%d' WHERE address= '%s'",&T.num,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改name") ;
scanf("%s", &T.name); 
sprintf(sql,"UPDATE teacher set name='%s' WHERE address= '%s'",&T.name,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改sex");
scanf("%s", &T.sex); 
sprintf(sql,"UPDATE teacher set sex='%s' WHERE address= '%s'",&T.sex,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改birthday") ;
scanf("%s", &T.bir);
sprintf(sql,"UPDATE teacher set birthday='%s' WHERE address= '%s'",&T.bir,&find);
sqlite3_exec(p, sql, callback, 0, &mistake);
printf("请修改address") ;
scanf("%s", &T.address); 
sprintf(sql,"UPDATE teacher set address='%s' WHERE address= '%s'",&T.address,&find);
rc = sqlite3_exec(p, sql, callback, 0, &mistake);
break;
default:printf("你的操作有问题"); break;
}
			if (rc != SQLITE_OK)
			{
				printf("\t\t修改失败！\n\a");
				fprintf(stderr, "\t\t失败原因：%s\n", mistake);
				sqlite3_free(mistake);
				getchar();
				continue;
			}
			else
				printf("\t\t修改成功\n");
			printf("\t\t是否继续修改Y/N");
			b = getchar();
			if (b == 'Y' || b == 'y')
				continue;
			else
				break;
     }
}
*/
void update(sqlite3 *p)//修改
{
   char ch;
	char b = 0;
	char address[20];
	char character[20];
	char sql[400];
	char *mistake;
	if (p == NULL)
	{
		fprintf(stderr, "SQL error!\n");
		
	}
	else
	{
		while (1)
		{
			system("clear");
			initialize();
			T.ret = 0;
			fflush(stdin);
			printf("\n\t\t请输入要修改教师的信息姓名:");
			scanf("%s", T.name);
			printf("\n\t\t请输入要修改教师的地址:");
			scanf("%s", address);
			sprintf(sql, "UPDATE teachers set address='%s' WHERE name= '%s';",address, T.name);
			T.ret = sqlite3_exec(p, sql, callback, 0, &mistake);
			if (T.ret != SQLITE_OK)
			{
				printf("\t\t修改失败！\n\a");
				fprintf(stderr, "\t\t失败原因：%s\n", mistake);
				sqlite3_free(mistake);
				getchar();
				continue;
			}
			else
			printf("\t\t修改成功\n");
			scanf("%c",&ch);
			printf("\t\t是否继续修改Y/N\n");
			b = getchar();
			if (b == 'Y' || b == 'y')
				continue;
			else
				break;
		}
	}
}

                     void AddPerson()
                     {
                        sqlite3 *db;
                        char *zErrMsg = 0;
                        /* Open database */
                       teacher.rc = sqlite3_open("teacherinfo.db", &db);
                        if(teacher.rc ){
                           fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
                           exit(0);
                        }else{
                           fprintf(stderr, "Opened database successfully\n");
                        }
                        while (getchar() != '\n') ;
                        char szId[20],sznum[30],szName[16],szSex[8],szbirthday[32],szAddress[256];
                        printf("输入id(回车结束):");
                        gets(szId);
                        printf("输入num(回车结束):");
                        gets(sznum);
                        printf("输入姓名(回车结束):");
                        gets(szName);
                        printf("输入性别(回车结束):");
                        gets(szSex);
                        printf("输入生日(回车结束):");
                        gets(szbirthday);
                        printf("输入地址(回车结束):");
                        gets(szAddress);
                        char *sql[512];
                        sprintf(sql,"INSERT INTO teachers VALUES('%s','%s','%s','%s','%s','%s');",szId,sznum,
                           szName,szSex,szbirthday,szAddress);
                             teacher.rc = sqlite3_exec(db, sql, callback1, 0, &zErrMsg);
                        if(teacher.rc != SQLITE_OK ){
                           fprintf(stderr, "SQL error: %s\n", zErrMsg);
                           sqlite3_free(zErrMsg);
                        }else{
                           fprintf(stdout, "Records created successfully\n");
                        }
getchar();
                     }

void findl(sqlite3 *db)
{
        char buff[1024];	//存放读取到的数据结果
	char *zErrMsg = 0;
        char sql[512];
	 
	int len = 0;
	teacher .rc = sqlite3_open("teacherinfo.db",&db);
	if(	teacher .rc != SQLITE_OK)
	{
		printf("zErrMsg = %s\n",zErrMsg);
		return -1;
	}

int nrow = 0,ncolnum = 0;
char **azResult;	//存放查询结果
char find[100];
char ch;
int p,k;
memset(sql,'\0',128);
for(;;){
printf("1.按id查找\n");
printf("2.按num查找\n");
printf("3.按name查找\n");
printf("4.按address查找\n");
fflush(stdin);
scanf("%d",&p);
switch(p)
{
case 1:printf("输入id：");
scanf("%s", &find);  
sprintf(sql,"SELECT  * from teachers where id='%s'",&find);
break;
case 2:printf("输入num：");
scanf("%s", &find);
scanf("%c", &ch);  //用scanf吸收回车
sprintf(sql,"SELECT  * from teachers where num='%s'",&find);
break;
case 3:printf("输入name：");
scanf("%s", &find);
scanf("%c", &ch);  //用scanf吸收回车
sprintf(sql,"SELECT  * from teachers where name='%s'",&find);
break;
case 4:printf("输入address：");
scanf("%s", &find);
scanf("%c", &ch);  //用scanf吸收回车
sprintf(sql,"SELECT  * from teachers where address='%s'",&find);
break;
default:printf("你的操作有问题"); break;
}
	int i = 0;
   printf("你查找的信息如下：\n"); 
	for(i = ncolnum;i < (nrow+1)*ncolnum;i++)
	{
		printf("azResult[%d] = %s\n",i,azResult[i]);	//打印
		memcpy(buff+len,azResult[i],strlen(azResult[i])); //整条数据保存到另一个buff
		len+=strlen(azResult[i]);
	}
	for(i = 0;i < len;i++)
	{
		printf("%c ",buff[i]);
	}
		teacher .rc  = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
	if(	teacher .rc  != SQLITE_OK)
	{
		printf("zErrMsg = %s\n",zErrMsg);
		return -1;
	}
   scanf("%c", &ch);  //用scanf吸收回车
   printf("是否继续(1继续其他否)\n");
   scanf("%d",&k);
if(k==1)
continue;
else
break;
}
     }

void Delete( sqlite3 *db)
{
char find[100];
char ch;
int p,k;
int i;
int j;
   char *zErrMsg = 0;
   int rc;
   char *sql[512];
   const char* data = "Callback function called";
char name ;
   /* Open database */
   rc = sqlite3_open("teacherinfo.db", &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      exit(0);
   }else{
      fprintf(stderr, "Opened database successfully\n");
   }
for(;;){
memset(sql,'\0',128);
printf("1.按id删除\n");
printf("2.按num删除\n");
printf("3.按name删除\n");
printf("4.按address删除\n");
fflush(stdin);
scanf("%d",&p);
switch(p)
{
case 1:printf("输入id：");
scanf("%s", &find);  
sprintf(sql,"DELETE from teachers where id='%s'",&find);
break;
case 2:printf("输入num：");
scanf("%s", &find);
scanf("%c", &ch);  //用scanf吸收回车
sprintf(sql,"DELETE from teachers where num='%s'",&find);
break;
case 3:printf("输入name：");
scanf("%s", &find);
scanf("%c", &ch);  //用scanf吸收回车
sprintf(sql,"DELETE from teachers where name='%s'",&find);
break;
case 4:printf("输入address：");
scanf("%s", &find);
scanf("%c", &ch);  //用scanf吸收回车
sprintf(sql,"DELETE from teachers where address='%s'",&find);
break;
default:printf("你的操作有问题"); break;
}
teacher.rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

   if( teacher.rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "Delete done successfully\n");
   }
     printf("是否继续(1继续其他否)\n");
   scanf("%d",&k);
if(k==1)
continue;
else
break;
}
}
int View(sqlite3 *db)
{
int a;
   char *zErrMsg = 0;
   int rc;
   char *sql;
   const char* data = "Callback function called";
char ziduan[10];
char juje[10];
   /* Open database */
   rc = sqlite3_open("teacherinfo.db", &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      exit(0);
   }else{
      fprintf(stderr, "Opened database successfully\n");
   }
   sql="CREATE VIEW Teachers_view as SELECT *FROM teachers where sex='男';";
   //sprintf(sql, "CREATE VIEW Teachers_view AS SELECT * FROM eachers where sex =男;",ziduan, juje);
/*printf("\n\t\t请输入要加限定的字段:");
scanf("%s", ziduan);
printf("\n\t\t请输入条件：");
scanf("%s", juje);
sprintf(sql, "CREATE VIEW Teachers_view AS SELECT * FROM eachers where ' %s' = '%s' ;",ziduan, juje);
printf("\n\t\t%s",sql);
*/
//"SELECT * FROM teacher_view;";
   /* Execute SQL statement */

   rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "CREATE done successfully\n");
   }
   sqlite3_close(db);getchar();
   return 0;
}
int view_p(sqlite3 *p,char *statement )
{
 //char statement[100] ;
	char *mistake;
    teacher.rc = sqlite3_open("teacherinfo.db", &p);
                        if( teacher.rc){
                           fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(p));
                           exit(0);
                        }else{
                           fprintf(stderr, "Opened database successfully\n");
                        }
	if (p == NULL)
	{
		fprintf(stderr, "未连接数据库\n");
	}
	else
	{
		teacher.rc= sqlite3_exec(p, statement, callback, NULL, &mistake);
		if (	teacher.rc!= SQLITE_OK)
		{
			fprintf(stderr, "错误：%s\n", mistake);
		}
		getchar();
	}
   	getchar();
}
int del_view(sqlite3 *db)
{
   char *zErrMsg = 0;
   int rc;
   char *sql;
   /* Open database */
   rc = sqlite3_open("test.db", &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      exit(0);
   }else{
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "DROP VIEW Teachers_view;";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "delete view successfully\n");
   }
   sqlite3_close(db);
getchar();
   return 0;
}
void Del_table(sqlite3 *p)///删除
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "Callback function called";

	/* Open database */
	rc = sqlite3_open("teacherinfo.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		exit(0);
	}
	else {
		fprintf(stderr, "Opened database successfully\n");
	}

	/* Create SQL statement */

	sql = "DROP TABLE teachers";
	/* Execute SQL statement */
	rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Operation done successfully\n");
	}
fflush(stdin);
	getchar();
}

                     int main()
                     {
                        sqlite3 *db;
                        char *zErrMsg = 0;
                        char *sql;
                        char *sql1;
                        int i;
                     /* Open database */
                     create:  teacher.rc = sqlite3_open("teacherinfo.db", &db);
                        if( teacher.rc){
                           fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
                           exit(0);
                        }else{
                           fprintf(stderr, "Opened database successfully\n");
                        }
                           /* Create SQL statement */
                        sql ="CREATE TABLE teachers ("\
                     " `id`INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE ,"\
                     "  `num` INT(10) UNIQUE NOT NULL,"\
                     " `name` VARCHAR(20) NOT NULL,"\
                     " `sex` VARCHAR(4) NOT NULL,"\
                     " `birthday` DATETIME NULL,"\
                     " `address` VARCHAR(50) NULL);";

                        /* Execute SQL statement */
                       teacher.rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
                        if(teacher.rc != SQLITE_OK ){
                        fprintf(stderr, "SQL error: %s\n", zErrMsg);
                           sqlite3_free(zErrMsg);
                        }else{
                           fprintf(stdout, "Table created successfully\n");
                        }
                     fflush(stdin);
                        while (1)
                        {
                           system("clear");
                        fflush(stdin);
                        printf("\t\t\t*******************\n");
                        printf("\t\t\t* 教师信息管理系统*\n");
                        printf("\t\t\t*******************\n\n\n");
                        printf("\t\t***********************************\n");
                        printf("\t\t*1.添加信息\t\t");printf("2.修改信息*\n\t\t***\t\t\t\t***\n\t\t***\t\t\t\t***\n");
                        printf("\t\t*3.查找信息\t\t");printf("4.删除信息*\n\t\t***\t\t\t\t***\n\t\t***\t\t\t\t***\n");
                        printf("\t\t*5.创建视图\t\t");printf("6.显示视图*\n\t\t***\t\t\t\t***\n\t\t***\t\t\t\t***\n");
                        printf("\t\t*7.删除视图\t\t");printf("8.显示所有*\n\t\t***\t\t\t\t***\n\t\t***\t\t\t\t***\n");
                        printf("\t\t*9.删除表\t");printf("\ta.显示表  *\n\t\t***\t\t\t\t***\n\t\t***\t\t\t\t***\n");
                         printf("\t\t*0.退出\t\t");printf("\tb.创建表  *\n\t\t***\t\t\t\t***\n\t\t***\t\t\t\t***\n");
                        printf("\t\t***********************************\n");
                       i=getchar();
                        switch (i)
                        {
                        case '1':AddPerson();
                              break;
                           case '2':update(db);
                              break;
                              case '3': findl(db);
                              break;
                              case '4':Delete(db);
                              break;
                              case '5':View(db);
                              break;
                                  case '6':sql1="SELECT * FROM Teachers_view;";view_p(db,sql1);
                              break;
                                  case '7':del_view(db);
                              break;
                                  case '8':sql1="SELECT * FROM teachers;";view_p(db,sql1);
                              break;
                              case '0': exit(1);
                              case '9':Del_table(db);
			break;
		              case 'a':sql1="SELECT name FROM sqlite_sequence;";view_p(db,sql1);
			break;
				case 'b':goto create;	
				
                        default:printf("你的操作有问题");
                              break;
                        }
                        }
                     }
                     

              

