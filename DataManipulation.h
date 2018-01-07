#pragma once


class DataManipulation {
public:
		virtual void insertData(int data) = 0;
		virtual void deleteData(void) = 0;

		DataManipulation *getInstance();
};