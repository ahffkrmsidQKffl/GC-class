-- ���� 1 : ���� ���� �ٹ��� ����� ���� ��� �����͸� �˻��϶�.
SELECT *
FROM EMPLOYEE
ORDER BY HIREDATE
FETCH FIRST 1ROW ONLY;

-- ���� 2 : ����ö�� ���� �μ��� �ٹ��ϴ� ����� ���� ��� �����͸� �˻��϶�.
SELECT *
FROM EMPLOYEE
WHERE DNO = 
(SELECT DNO
FROM EMPLOYEE
WHERE EMPNAME = '����ö');

-- ���� 3 : ȸ���� ��ü ��� ���� �˻��϶�
SELECT COUNT(*)
FROM EMPLOYEE;

-- ���� 4 : ȸ�翡 ��  ���� �μ��� �ִ°��� �˻��϶�
SELECT COUNT(*)
FROM DEPARTMENT;

-- ���� 5 : ��ȹ�ο� �ٹ��ϴ� ������� �̸��� ������ �˻��϶�.
SELECT EMPNAME, TITLE
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = DEPTNO AND DEPTNAME = '��ȹ';

-- ���� 6 : �� �� �̻��� ����� �ٹ��ϴ� �μ��� ������ �˻��϶�
SELECT COUNT(DISTINCT DEPTNO)
FROM DEPARTMENT, EMPLOYEE
WHERE DNO = DEPTNO
GROUP BY DEPTNO
HAVING COUNT(EMPNO) > 1;

-- ���� 7 : ����� �� �� �ٹ����� �ʴ� �μ��� �˻��϶�
SELECT DEPTNAME
FROM DEPARTMENT
WHERE NOT EXISTS 
(SELECT *
FROM EMPLOYEE
WHERE DNO = DEPTNO
)

-- ���� 8 : ����� �� �� �̻� ���� �μ��� ���ؼ� ��� �޿��� �˻��϶�.
SELECT AVG(SALARY)
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = DEPTNO
GROUP BY DEPTNO
HAVING COUNT(EMPNO) > 1;

-- ���� 9 : �μ��� ���� ������� ��� �޿��� ���� ���� �μ��� �̸��� ��� �޿��� �˻��϶�.
SELECT DEPTNAME, AVG(SALARY)
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = DEPTNO
GROUP BY DEPTNAME
ORDER BY AVG(SALARY)
FETCH FIRST 1ROW ONLY;

-- ���� 10 : EMPLOYEE�� DEPARTMENT �����̼��� �����ϰ�, �μ���ȣ ������ ���� �����϶�
SELECT *
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = DEPTNO
ORDER BY DNO;

-- ���� 11 : ��� ������� ���޺��� �׷�ȭ�ϰ�, �� �׷캰 ��� ���� ��� �޿��� �˻��϶�.
SELECT TITLE, COUNT(*), AVG(SALARY)
FROM EMPLOYEE
GROUP BY TITLE;

-- ���� 12 : ��� ������� ���޺��� �׷�ȭ�ϰ�, ���� ������ ���� ��� ���� 2�� �̻��� ���޿� ���ؼ� ����, ��� ��, ���� �޿��� �˻��϶�. 
SELECT TITLE, COUNT(*), SUM(SALARY)*12 AS ANNUAL_SALARY
FROM EMPLOYEE
GROUP BY TITLE
HAVING COUNT(*) >= 2;

-- ���� 13 : ������ �븮�� ����� ��� 2�� �̻� ���� �μ��� �̸��� �˻��϶�
SELECT DEPTNAME
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = DEPTNO AND TITLE = '�븮'
GROUP BY DEPTNAME
HAVING COUNT(*) >= 2;

-- ���� 14 : ��� �μ��� ���ؼ� �̸�, ��, �� �μ��� �ٹ��ϴ� ��� ���� �˻��϶�. ����� ���� �μ��� ���Խ��Ѷ�
SELECT DEPTNAME, FLOOR, COUNT(EMPNO)
FROM DEPARTMENT
LEFT JOIN EMPLOYEE ON DEPTNO = DNO
GROUP BY DEPTNAME, FLOOR;

-- ���� 15 : �μ� 1, 2, 3�� �������� �ִ� ������ �˻��϶�.
SELECT TITLE
FROM DEPARTMENT, EMPLOYEE
WHERE DEPTNO = DNO 
GROUP BY TITLE
HAVING COUNT(DISTINCT DEPTNO)=3;

-- ���� 16 : ���ߺμ��� �ٹ��ϴ� ������� ���ް� ���޺� ��� ���� �˻��϶�. ��� ���� ���� ���޺��� ǥ���϶�.
SELECT TITLE, COUNT(EMPNO)
FROM DEPARTMENT, EMPLOYEE
WHERE DEPTNO = DNO 
GROUP BY TITLE
ORDER BY COUNT(EMPNO) DESC;

-- ���� 17 : ��� �޿��� ���� ���� �μ��� �μ���ȣ�� �� �μ��� ���� �޿��� �˻��϶�.
SELECT DNO, MIN(SALARY)
FROM EMPLOYEE
GROUP BY DNO
ORDER BY AVG(SALARY) DESC
FETCH FIRST 1 ROW ONLY;

-- ���� 18 : �Ҽ� ��� ���� 4�� ������ �μ��� �̸��� ��� ���� �˻��϶�.
SELECT DEPTNAME, COUNT(EMPNO)
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = DEPTNO
GROUP BY DEPTNAME
HAVING COUNT(EMPNO) <= 4;

-- ���� 19 : �ڽ��� ���� �μ��� ��� �޿����� ���� �޴� ����� �̸�, �μ���ȣ, �޿��� �˻��϶� (�ڽ��� ��â���̶� ����)
SELECT EMPNAME, SALARY, DNO
FROM EMPLOYEE
WHERE SALARY > 
(SELECT AVG(SALARY)
FROM EMPLOYEE
GROUP BY DNO
HAVING DNO = 
(SELECT DNO
FROM EMPLOYEE
WHERE EMPNAME = '��â��'
)
);

-- ���� 20 : �� �μ����� ���� ���� �޿��� �޴� ������� �̸�, �޿�, �μ���ȣ�� �˻��϶�.
SELECT EMPNAME, SALARY, DNO
FROM EMPLOYEE
WHERE (DNO, SALARY) IN (
SELECT DNO, MAX(SALARY)
FROM EMPLOYEE
GROUP BY DNO
);

--���� 21 : ��� ����� ���ؼ� �����ȣ, �̸�, �޿�, �μ���ȣ, �Ҽ� �μ��� ��� �޿��� �˻��϶�.
SELECT
    E.EMPNO, E.EMPNAME, E.SALARY, E.DNO, D.AVG_SALARY
FROM EMPLOYEE E
JOIN (
    SELECT DNO, AVG(SALARY) AS AVG_SALARY
    FROM EMPLOYEE
    GROUP BY DNO
) D ON E.DNO = D.DNO;

--���� 22 :  ����ö �Ǵ� �̼��ΰ� ���� ������ ���� ��� ����� ���ؼ� ����� �̸��� ������ �˻��϶�.
SELECT EMPNAME, TITLE
FROM EMPLOYEE
WHERE TITLE = (SELECT TITLE FROM EMPLOYEE WHERE EMPNAME = '����ö') OR TITLE = (SELECT TITLE FROM EMPLOYEE WHERE EMPNAME = '�̼���')
ORDER BY TITLE;












-- ���� 23 : ��ȹ �Ǵ� �ѹ� �μ��� �ٹ����� �ʴ� ��� ������� �̸��� �˻��϶�.
SELECT EMPNAME
FROM DEPARTMENT, EMPLOYEE
WHERE DNO = DEPTNO AND DEPTNAME NOT IN ('��ȹ', '�ѹ�');


-- ���� 24 : DEPARTMENT �����̼ǿ� ���� (5, 'ȫ��', 8)�� �����϶�
INSERT INTO DEPARTMENT VALUES (5, 'ȫ��', 8)

-- ���� 25 : EMPLOYEE �����̼ǿ��� �μ���ȣ 3�� �ٹ��ϴ� ������� �����϶�
SELECT CONSTRAINT_NAME, DELETE_RULE
FROM USER_CONSTRAINTS
WHERE TABLE_NAME = 'EMPLOYEE' AND CONSTRAINT_TYPE = 'R';

ALTER TABLE EMPLOYEE
DROP CONSTRAINT SYS_C007460;

ALTER TABLE EMPLOYEE
ADD CONSTRAINT MYCONSTRAINT0001
FOREIGN KEY (MANAGER)
REFERENCES EMPLOYEE(EMPNO)
ON DELETE SET NULL;

DELETE FROM EMPLOYEE WHERE DNO = 3;














