-- RESEARCH �μ����� ���ϴ� ����� FNAME, LNAME, SSN, DNAME�� �˻��϶�,  UPPER ���� �ڿ��� ���� �빮�ڷ� ���� ��ҹ��� �Ű� �� �ᵵ �˴ϴ�. ������ ��������ǥ �ȿ� ��ҹ��� �Ű澲�����ؿ�
SELECT Fname, Lname, SSN, Dname 
FROM EMPLOYEE, DEPARTMENT
WHERE DNO=DNUMBER AND UPPER(Dname)='RESEARCH';