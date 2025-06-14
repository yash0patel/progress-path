CREATE OR REPLACE PROCEDURE P1_2
(DEPT_ID IN EMPLOYEES.DEPARTMENT_ID%TYPE) 
IS
	DEPT_NAME DEPARTMENTS.DEPARTMENT_NAME%TYPE;
BEGIN
	SELECT DEPARTMENT_NAME INTO DEPT_NAME FROM DEPARTMENTS WHERE DEPARTMENT_ID = DEPT_ID;
	DBMS_OUTPUT.PUT_LINE('DEPARTMENT_NAME : ' || DEPT_NAME);
	P2_2(DEPT_ID);
EXCEPTION
	WHEN NO_DATA_FOUND THEN
		RAISE_APPLICATION_ERROR(-20000,'DATA NOT FOUND -- P1');
	WHEN OTHERS THEN
		DBMS_OUTPUT.PUT_LINE('ERROR HANDLE BY P1 OTHERS BLOCK');
END;
/