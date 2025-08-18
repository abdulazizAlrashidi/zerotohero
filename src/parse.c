#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include "common.h"
#include "parse.h"

void list_employees(struct dbheader_t *dbhdr, struct employee_t *employees) {

}

int add_employee(struct dbheader_t *dbhdr, struct employee_t *employees, char *addstring) {

}

int read_employees(int fd, struct dbheader_t *dbhdr, struct employee_t **employeesOut) {

}

int output_file(int fd, struct dbheader_t *dbhdr, struct employee_t *employees) {

}	

int validate_db_header(int fd, struct dbheader_t **headerOut) {

}

int create_db_header(int fd, struct dbheader_t **headerOut) {
    struct dbheader_t* header = calloc(1, sizeof(struct dbheader_t));
    if (header == NULL) {
        perror("calloc");
        return STATUS_ERROR;
    }

    header->magic = HEADER_MAGIC;
    header->version = 1;
    header->count = 0;
    header->filesize = 12;

    *headerOut = header;

    return STATUS_SUCCESS;

}


