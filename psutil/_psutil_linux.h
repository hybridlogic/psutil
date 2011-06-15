/*
 * $Id$
 *
 * LINUX specific module methods for _psutil_linux
 */

#include <Python.h>

static PyObject* linux_ioprio_get(PyObject* self, PyObject* args);
static PyObject* linux_ioprio_set(PyObject* self, PyObject* args);
static PyObject* get_disk_partitions(PyObject* self, PyObject* args);

