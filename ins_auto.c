#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
   int i;
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int main()
{

   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char *sql;

   /* Open database */
   rc = sqlite3_open("teacherinfo.db", &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      exit(0);
   }else{
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "INSERT INTO teachers (id,num,name,sex,birthday,address) "  \
         "VALUES (1, 1001, '张三', '男', 1994-11-08, '北京市海淀区' ); " \
 "INSERT INTO teachers (id,num,name,sex,birthday,address) "  \
         "VALUES (2, 1002, '李四', '男', 1970-01-21, '北京市昌平区' ); " \
"INSERT INTO teachers (id,num,name,sex,birthday,address) "  \
         "VALUES (3, 1003, '王五', '女', 1976-10-30, '湖南省永州市' ); " \
"INSERT INTO teachers (id,num,name,sex,birthday,address) "  \
         "VALUES (4, 1004, '赵六', '男', 1990-06-05, '辽宁省阜新市'); " ;

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "Records created successfully\n");
   }
   sqlite3_close(db);
   return 0;
}
