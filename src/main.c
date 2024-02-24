#include <sqlite/sqlite3.h>

#include <stdio.h>

#define DATABASE_NAME "database_test"

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    for (int i = 0; i < argc; ++i) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

int main(int argc, char **argv) {
    sqlite3 *db;
    int rc;
    char *zErrMsg = 0;

    if( argc != 2 ){
        fprintf(stderr, "Usage: %s SQL-STATEMENT\n", argv[0]);
        return(1);
    }

    if (rc = sqlite3_open(DATABASE_NAME, &db)) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return(1);
    }

    if ((rc = sqlite3_exec(db, argv[1], callback, 0, &zErrMsg)) != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    sqlite3_close(db);
    return 0;

    return 0;
}