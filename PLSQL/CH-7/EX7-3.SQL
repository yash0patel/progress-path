DECLARE
	DEPT_NAME DEPARTMENTS.DEPARTMENT_NAME%TYPE:= 'IT';
	TOTAL_SAL NUMBER:= 0;
BEGIN
	DBMS_OUTPUT.PUT_LINE('.');
	TOTAL_SAL := GET_DEPT_TOTAL_SAL(DEPT_NAME);
	DBMS_OUTPUT.PUT_LINE('TOTAL SALARY : ' || TOTAL_SAL);
EXCEPTION
	WHEN OTHERS THEN
		DBMS_OUTPUT.PUT_LINE('ERROR HANDLE BY CALLING PROGRAM');
END;
/