--STAFFORD�� ��ġ�� ��� ������Ʈ�� ���ؼ�, ������Ʈ ��ȣ, ��� �μ� ��ȣ, �μ� �������� ��, �ּ�, ��������� �˻��Ͻÿ�
SELECT Pnumber, Dnumber, Lname, Address, Bdate 
FROM PROJECT, DEPARTMENT, EMPLOYEE
WHERE UPPER(Plocation)='STAFFORD' AND Dnumber = Dnum AND Ssn = Mgrssn;

--4��  �μ��� ����ϴ� ������Ʈ�� �����ϴ� ������� �̸��� �˻��϶�(�������� �̸��̶� �Ͻø� �׻� Lname & Fname �Ѵ���)
SELECT Lname, Fname
FROM PROJECT, EMPLOYEE, WORKS_ON
WHERE Dnum=4 AND Pnumber=Pno AND Essn=Ssn;

--����� �����ϴ� ������Ʈ���� �˻��ϴµ�, ����� ���� �μ� �̸�, Lname, Fname, ���� Project �̸���  �˻��϶�
SELECT Dname, Lname, Fname, Pname
FROM PROJECT, EMPLOYEE, WORKS_ON, DEPARTMENT
WHERE Dno = Dnumber AND Ssn = Essn AND Pno = Pnumber
ORDER BY Dname, Lname, Fname;

--WHERE ���� ���� ���� ���
SELECT Ssn, Dname
FROM EMPLOYEE, DEPARTMENT;

--�ּҰ� 'HOUSTON, TX'�� ��� ����� �˻��϶�
SELECT Lname, Fname, Address
FROM EMPLOYEE
WHERE lower(Address) like '%houston, tx%';

--���䰡 ���� ������ �̸��� �˻��϶�
SELECT Fname, Lname
FROM EMPLOYEE
WHERE Superssn is NULL;

 --������ �̸��� ���۹������� �̸��� �˻��϶�(��������) my : �̰� �� ������ �Ѥ�
SELECT E.Fname AS 'Employee_Fname', E.Lname AS 'Employee_Lname', S.Fname AS 'S_Fname', S.Lname AS 'S_Lname'
FROM EMPLOYEE E, EMPLOYEE S
WHERE S.Ssn=E.Superssn;

-- insert�� ����
SELECT * 
FROM EMPLOYEE;

-- order = ssn? primary key ��½��..
SELECT Ssn 
FROM EMPLOYEE;