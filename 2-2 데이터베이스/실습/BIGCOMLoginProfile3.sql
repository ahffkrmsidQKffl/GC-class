--john smith�� �����ϴ� ������Ʈ NO�� �˻��϶�
SELECT Pno
FROM EMPLOYEE, WORKS_ON
WHERE UPPER(Fname) = 'JOHN' AND UPPER(Lname) = 'SMITH' AND   Essn = Ssn;

--john smith�� �����ϴ� ������Ʈ�� �����ϴ� ������ fname, Lname�� �˻��϶�(uncorrelated)
SELECT Fname, Lname
FROM EMPLOYEE, WORKS_ON
WHERE Essn = Ssn AND Pno in (
SELECT Pno
FROM EMPLOYEE, WORKS_ON
WHERE UPPER(Fname) = 'JOHN' AND UPPER(Lname) = 'SMITH' AND   Essn = Ssn
);

--john smith�� �����ϴ� ������Ʈ�� ��� �����ϴ� ������ fname, lname�� �˻��϶�
SELECT Fname, Lname
FROM EMPLOYEE E
WHERE NOT EXISTS (
(SELECT Pno
FROM EMPLOYEE, WORKS_ON
WHERE UPPER(Fname) = 'JOHN' AND UPPER(Lname) = 'SMITH' AND   Essn = Ssn) --JOHN SMITH�� �����ϴ� ������Ʈ
MINUS
(SELECT PNO
FROM WORKS_ON
WHERE E.SSN = ESSN) --EACH EMPLOYEE�� �����ϴ� ������Ʈ
);

--6�� �μ��� ����ϴ� ������Ʈ�� �����ϴ� ����� ����̸��� �˻��϶�
SELECT Lname, Fname
FROM EMPLOYEE, WORKS_ON
WHERE UPPER(Fname) = 'JOHN' AND UPPER(Lname) = 'SMITH' AND   Essn = Ssn;

--6�� �μ��� �������ϴ� ������Ʈ�� ��� ���������ϴ� ���=��=


--6�� �μ��� �����ϤѤ� ////                                                                                                                                                                                                               