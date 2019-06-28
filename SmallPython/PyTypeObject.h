#pragma once

#include "PyObject.h"

// ��ӡ
typedef void (*PrintFun)(PyObject* object);
// ���
typedef PyObject* (*AddFun)(PyObject* left, PyObject* right);
// ȡhashֵ
typedef long (*HashFun)(PyObject* object);

typedef struct tagPyTypeObject
{
	PyObject_HEAD;
	char* name;
	PrintFun print;
	AddFun add;
	HashFun hash;
}PyTypeObject;

PyTypeObject PyType_Type;
