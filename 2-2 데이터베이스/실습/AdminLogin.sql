ALTER SESSION SET "_ORACLE_SCRIPT" = true; -- ����ǥ�����Ұ�

Create user AAA identified by aaa
DEFAULT TABLESPACE users
TEMPORARY TABLESPACE temp;

Grant connect, resource, create session, create view to AAA;

ALTER USER AAA default tablespace users quota unlimited on users;
