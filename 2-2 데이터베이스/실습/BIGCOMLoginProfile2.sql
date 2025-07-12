-- ��� ����� �޿��� ��, �ְ�޿�, �����޿�, ��ձ޿��� ���϶�
-- research �μ����� �ٹ��ϴ� ����� �޿��� ��, �ְ�޿�, �����޿�, ��ձ޿��� ���϶�
-- research �μ����� �ٹ��ϴ� �� ����� ���� ���϶�
-- �� �μ��� ���ؼ� �μ���ȣ, �� �μ��� ���� ������� ���� ��ձ޿��� �˻��϶�

SELECT SUM(SALARY), MAX(SALARY), MIN(SALARY), ROUND(AVG(SALARY))
FROM EMPLOYEE;

SELECT SUM(SALARY), MAX(SALARY), MIN(SALARY), ROUND(AVG(SALARY))
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = Dnumber and UPPER(Dname) = 'RESEARCH';

SELECT COUNT(*)
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = Dnumber and UPPER(Dname) = 'RESEARCH';

SELECT DNO, COUNT(*), ROUND(AVG(SALARY))
FROM EMPLOYEE
GROUP BY DNO;

-- �� �μ��� ���ؼ� �μ���ȣ, �μ��̸�, �� �μ��� ���� ������� ���� ��ձ޿��� �˻��϶�
SELECT DNO, Dname, COUNT(*), ROUND(AVG(SALARY))
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = Dnumber
GROUP BY DNO Dname;

--�� ������Ʈ�� ���ؼ� ������Ʈ ��ȣ, �̸� �� ������Ʈ���� �ٹ��ϴ� ����� ���� �˻��϶�
SELECT Pnumber, Pname, COUNT(*)
FROM PROJECT, WORKS_ON
WHERE Pnumber = Pno
GROUP BY Pnumber, Pname;

--���� �̻��� ����� �ٹ��ϴ� �� ������Ʈ�� ���ؼ� ������Ʈ ��ȣ, �̸�, �� ������Ʈ���� �ٹ��ϴ� ����� ���� �˻��϶�
SELECT Pnumber, Pname, COUNT(*)
FROM PROJECT, WORKS_ON
WHERE DNO = Dnumber
GROUP BY DNO Dname;