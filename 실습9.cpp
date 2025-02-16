#include <stdio.h>
#include <string.h>
#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {
    int type;
    union {
        int stu_number;           // �й�
        char reg_number[15];      // �ֹε�Ϲ�ȣ
    } id;
    char name[20];
};

void print(struct student s) {
    switch (s.type) {
    case STU_NUMBER:
        printf("�й�: %d\n", s.id.stu_number);
        printf("�̸�: %s\n", s.name);
        break;
    case REG_NUMBER:
        printf("�ֹε�Ϲ�ȣ: %s\n", s.id.reg_number);
        printf("�̸�: %s\n", s.name);
        break;
    default:
        printf("Ÿ�� ����\n");
        break;
    }
}

int main(void) {
    struct student s1, s2;

    s1.type = STU_NUMBER;
    s1.id.stu_number = 20190001;
    strcpy_s(s1.name, sizeof(s1.name), "ȫ�浿");

    s2.type = REG_NUMBER;
    strcpy_s(s2.id.reg_number, sizeof(s2.id.reg_number), "860101-1056076");
    strcpy_s(s2.name, sizeof(s2.name), "��ö��");

    print(s1);
    print(s2);

    return 0;
}
