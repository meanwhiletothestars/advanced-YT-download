/* Generated code for Python module 'colorama$win32'
 * created by Nuitka version 1.9.7
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_colorama$win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_colorama$win32;
PyDictObject *moduledict_colorama$win32;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[108];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[108];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("colorama.win32"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 108; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_colorama$win32(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 108; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_66cf4032473797bdf29a535d4e2ab7e3;
static PyCodeObject *codeobj_6640319da6f6306a9d95873350c4b1a6;
static PyCodeObject *codeobj_c511c6d40c4c62e5aac2928cfc0d516f;
static PyCodeObject *codeobj_f255ed9684770b07ce4e9c458b95e059;
static PyCodeObject *codeobj_4b3962874abfc297ba7f1f7c68af008e;
static PyCodeObject *codeobj_3d1d958a26be4f9e5e6c2747e1d1a82b;
static PyCodeObject *codeobj_c49f009b63af15798117f6a40fc038b4;
static PyCodeObject *codeobj_06f5ae27b53c8df0d871dcd14c1fd4bd;
static PyCodeObject *codeobj_cafdaefa4198fb5e2784cb769d3fb3ac;
static PyCodeObject *codeobj_c9acd81af8283f900e89b2ce40e5dfba;
static PyCodeObject *codeobj_39e56b434f8141ae35b223e78aa58014;
static PyCodeObject *codeobj_e2af830dd31b9c1ef9129f4732e500b3;
static PyCodeObject *codeobj_127664175a04f81b1c19416922ea1ba8;
static PyCodeObject *codeobj_d6d6b83aad45ad4cbf724e1afb3c5b1f;
static PyCodeObject *codeobj_cadc683787a4c95bb38fddeffbfe1d2a;
static PyCodeObject *codeobj_9cff1c21510ec0ff5d0a8024803ff340;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[44]; CHECK_OBJECT(module_filename_obj);
    codeobj_66cf4032473797bdf29a535d4e2ab7e3 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[94], NULL, 1, 0, 0);
    codeobj_6640319da6f6306a9d95873350c4b1a6 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[58], mod_consts[58], mod_consts[95], NULL, 0, 0, 0);
    codeobj_c511c6d40c4c62e5aac2928cfc0d516f = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[58], mod_consts[58], mod_consts[95], NULL, 0, 0, 0);
    codeobj_f255ed9684770b07ce4e9c458b95e059 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[96], mod_consts[96], NULL, NULL, 0, 0, 0);
    codeobj_4b3962874abfc297ba7f1f7c68af008e = MAKE_CODE_OBJECT(module_filename_obj, 23, 0, mod_consts[12], mod_consts[12], mod_consts[97], NULL, 0, 0, 0);
    codeobj_3d1d958a26be4f9e5e6c2747e1d1a82b = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[86], mod_consts[86], mod_consts[98], NULL, 4, 0, 0);
    codeobj_c49f009b63af15798117f6a40fc038b4 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[92], mod_consts[92], mod_consts[99], NULL, 4, 0, 0);
    codeobj_06f5ae27b53c8df0d871dcd14c1fd4bd = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[89], mod_consts[89], mod_consts[100], NULL, 1, 0, 0);
    codeobj_cafdaefa4198fb5e2784cb769d3fb3ac = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[25], mod_consts[25], mod_consts[101], NULL, 1, 0, 0);
    codeobj_c9acd81af8283f900e89b2ce40e5dfba = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[84], mod_consts[84], mod_consts[102], NULL, 3, 0, 0);
    codeobj_39e56b434f8141ae35b223e78aa58014 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[100], NULL, 2, 0, 0);
    codeobj_e2af830dd31b9c1ef9129f4732e500b3 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[103], NULL, 2, 0, 0);
    codeobj_127664175a04f81b1c19416922ea1ba8 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[93], mod_consts[104], NULL, 1, 0, 0);
    codeobj_d6d6b83aad45ad4cbf724e1afb3c5b1f = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[75], mod_consts[75], mod_consts[105], NULL, 1, 0, 0);
    codeobj_cadc683787a4c95bb38fddeffbfe1d2a = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[18], mod_consts[18], mod_consts[106], NULL, 1, 0, 0);
    codeobj_9cff1c21510ec0ff5d0a8024803ff340 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[60], mod_consts[60], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__10_FillConsoleOutputAttribute();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__11_SetConsoleTitle();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__12_GetConsoleMode();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__13_SetConsoleMode();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__3___str__();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__4__winapi_test();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__5_winapi_test();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__6_GetConsoleScreenBufferInfo(PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__7_SetConsoleTextAttribute();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__8_SetConsoleCursorPosition(PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__9_FillConsoleOutputCharacter();


// The module function definitions.
static PyObject *impl_colorama$win32$$$function__3___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d6d6b83aad45ad4cbf724e1afb3c5b1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f)) {
        Py_XDECREF(cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f = MAKE_FUNCTION_FRAME(tstate, codeobj_d6d6b83aad45ad4cbf724e1afb3c5b1f, module_colorama$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f->m_type_description == NULL);
    frame_d6d6b83aad45ad4cbf724e1afb3c5b1f = cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d6d6b83aad45ad4cbf724e1afb3c5b1f);
    assert(Py_REFCNT(frame_d6d6b83aad45ad4cbf724e1afb3c5b1f) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(11);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[1]);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[4]);
            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[2]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[4]);
            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[3]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_9 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[5]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_11 = par_self;
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[6]);
            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[7]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_13 = par_self;
            tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[6]);
            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[8]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 6, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_15 = par_self;
            tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[6]);
            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[9]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 7, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_17 = par_self;
            tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[6]);
            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[10]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 8, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_19 = par_self;
            tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[11]);
            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[2]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 9, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_21 = par_self;
            tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[11]);
            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[3]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 10, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6d6b83aad45ad4cbf724e1afb3c5b1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6d6b83aad45ad4cbf724e1afb3c5b1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6d6b83aad45ad4cbf724e1afb3c5b1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6d6b83aad45ad4cbf724e1afb3c5b1f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d6d6b83aad45ad4cbf724e1afb3c5b1f == cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f);
        cache_frame_d6d6b83aad45ad4cbf724e1afb3c5b1f = NULL;
    }

    assertFrameObject(frame_d6d6b83aad45ad4cbf724e1afb3c5b1f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$win32$$$function__4__winapi_test(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_handle = python_pars[0];
    PyObject *var_csbi = NULL;
    PyObject *var_success = NULL;
    struct Nuitka_FrameObject *frame_cadc683787a4c95bb38fddeffbfe1d2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cadc683787a4c95bb38fddeffbfe1d2a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cadc683787a4c95bb38fddeffbfe1d2a)) {
        Py_XDECREF(cache_frame_cadc683787a4c95bb38fddeffbfe1d2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cadc683787a4c95bb38fddeffbfe1d2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cadc683787a4c95bb38fddeffbfe1d2a = MAKE_FUNCTION_FRAME(tstate, codeobj_cadc683787a4c95bb38fddeffbfe1d2a, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cadc683787a4c95bb38fddeffbfe1d2a->m_type_description == NULL);
    frame_cadc683787a4c95bb38fddeffbfe1d2a = cache_frame_cadc683787a4c95bb38fddeffbfe1d2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cadc683787a4c95bb38fddeffbfe1d2a);
    assert(Py_REFCNT(frame_cadc683787a4c95bb38fddeffbfe1d2a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cadc683787a4c95bb38fddeffbfe1d2a->m_frame.f_lineno = 109;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_csbi == NULL);
        var_csbi = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_1 = par_handle;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_csbi);
        tmp_args_element_value_3 = var_csbi;
        frame_cadc683787a4c95bb38fddeffbfe1d2a->m_frame.f_lineno = 111;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cadc683787a4c95bb38fddeffbfe1d2a->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_2;
    }
    {
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(var_success);
        tmp_value_value_1 = var_success;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cadc683787a4c95bb38fddeffbfe1d2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cadc683787a4c95bb38fddeffbfe1d2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cadc683787a4c95bb38fddeffbfe1d2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cadc683787a4c95bb38fddeffbfe1d2a,
        type_description_1,
        par_handle,
        var_csbi,
        var_success
    );


    // Release cached frame if used for exception.
    if (frame_cadc683787a4c95bb38fddeffbfe1d2a == cache_frame_cadc683787a4c95bb38fddeffbfe1d2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cadc683787a4c95bb38fddeffbfe1d2a);
        cache_frame_cadc683787a4c95bb38fddeffbfe1d2a = NULL;
    }

    assertFrameObject(frame_cadc683787a4c95bb38fddeffbfe1d2a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_csbi);
    Py_DECREF(var_csbi);
    var_csbi = NULL;
    CHECK_OBJECT(var_success);
    Py_DECREF(var_success);
    var_success = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_csbi);
    var_csbi = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$win32$$$function__5_winapi_test(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_9cff1c21510ec0ff5d0a8024803ff340;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9cff1c21510ec0ff5d0a8024803ff340 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9cff1c21510ec0ff5d0a8024803ff340)) {
        Py_XDECREF(cache_frame_9cff1c21510ec0ff5d0a8024803ff340);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9cff1c21510ec0ff5d0a8024803ff340 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9cff1c21510ec0ff5d0a8024803ff340 = MAKE_FUNCTION_FRAME(tstate, codeobj_9cff1c21510ec0ff5d0a8024803ff340, module_colorama$win32, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9cff1c21510ec0ff5d0a8024803ff340->m_type_description == NULL);
    frame_9cff1c21510ec0ff5d0a8024803ff340 = cache_frame_9cff1c21510ec0ff5d0a8024803ff340;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9cff1c21510ec0ff5d0a8024803ff340);
    assert(Py_REFCNT(frame_9cff1c21510ec0ff5d0a8024803ff340) == 2);

    // Framed code:
    {
        PyObject *tmp_any_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto frame_exception_exit_1;
            }
            tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_args_element_value_1 == NULL)) {
                tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
            }

            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto frame_exception_exit_1;
            }
            frame_9cff1c21510ec0ff5d0a8024803ff340->m_frame.f_lineno = 116;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_2;
                PyObject *tmp_args_element_value_2;
                PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
                tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_called_value_2 == NULL)) {
                    tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                }

                if (tmp_called_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;

                    goto tuple_build_exception_1;
                }
                tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_args_element_value_2 == NULL)) {
                    tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                }

                if (tmp_args_element_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;

                    goto tuple_build_exception_1;
                }
                frame_9cff1c21510ec0ff5d0a8024803ff340->m_frame.f_lineno = 116;
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;

                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_iter_arg_1);
            goto frame_exception_exit_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            assert(!(tmp_assign_source_1 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = BUILTIN_ANY(tstate, tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9cff1c21510ec0ff5d0a8024803ff340, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9cff1c21510ec0ff5d0a8024803ff340->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9cff1c21510ec0ff5d0a8024803ff340, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9cff1c21510ec0ff5d0a8024803ff340,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_9cff1c21510ec0ff5d0a8024803ff340 == cache_frame_9cff1c21510ec0ff5d0a8024803ff340) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9cff1c21510ec0ff5d0a8024803ff340);
        cache_frame_9cff1c21510ec0ff5d0a8024803ff340 = NULL;
    }

    assertFrameObject(frame_9cff1c21510ec0ff5d0a8024803ff340);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_locals {
    PyObject *var_h;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_locals *generator_heap = (struct colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_h = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_66cf4032473797bdf29a535d4e2ab7e3, module_colorama$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 115;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_h;
            generator_heap->var_h = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_h);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_h);
        tmp_args_element_value_1 = generator_heap->var_h;
        generator->m_frame->m_frame.f_lineno = 115;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 115;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_h
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_h);
    generator_heap->var_h = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_h);
    generator_heap->var_h = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_context,
        module_colorama$win32,
        mod_consts[19],
#if PYTHON_VERSION >= 0x350
        mod_consts[20],
#endif
        codeobj_66cf4032473797bdf29a535d4e2ab7e3,
        closure,
        1,
#if 1
        sizeof(struct colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_colorama$win32$$$function__6_GetConsoleScreenBufferInfo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *var_handle = NULL;
    PyObject *var_csbi = NULL;
    PyObject *var_success = NULL;
    struct Nuitka_FrameObject *frame_cafdaefa4198fb5e2784cb769d3fb3ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac)) {
        Py_XDECREF(cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac = MAKE_FUNCTION_FRAME(tstate, codeobj_cafdaefa4198fb5e2784cb769d3fb3ac, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac->m_type_description == NULL);
    frame_cafdaefa4198fb5e2784cb769d3fb3ac = cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cafdaefa4198fb5e2784cb769d3fb3ac);
    assert(Py_REFCNT(frame_cafdaefa4198fb5e2784cb769d3fb3ac) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_value_1 = par_stream_id;
        frame_cafdaefa4198fb5e2784cb769d3fb3ac->m_frame.f_lineno = 119;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cafdaefa4198fb5e2784cb769d3fb3ac->m_frame.f_lineno = 120;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_csbi == NULL);
        var_csbi = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_value_2 = var_handle;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_csbi);
        tmp_args_element_value_4 = var_csbi;
        frame_cafdaefa4198fb5e2784cb769d3fb3ac->m_frame.f_lineno = 122;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cafdaefa4198fb5e2784cb769d3fb3ac->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_3;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cafdaefa4198fb5e2784cb769d3fb3ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cafdaefa4198fb5e2784cb769d3fb3ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cafdaefa4198fb5e2784cb769d3fb3ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cafdaefa4198fb5e2784cb769d3fb3ac,
        type_description_1,
        par_stream_id,
        var_handle,
        var_csbi,
        var_success
    );


    // Release cached frame if used for exception.
    if (frame_cafdaefa4198fb5e2784cb769d3fb3ac == cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac);
        cache_frame_cafdaefa4198fb5e2784cb769d3fb3ac = NULL;
    }

    assertFrameObject(frame_cafdaefa4198fb5e2784cb769d3fb3ac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_csbi);
    tmp_return_value = var_csbi;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_csbi);
    Py_DECREF(var_csbi);
    var_csbi = NULL;
    CHECK_OBJECT(var_success);
    Py_DECREF(var_success);
    var_success = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_csbi);
    var_csbi = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$win32$$$function__7_SetConsoleTextAttribute(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *par_attrs = python_pars[1];
    PyObject *var_handle = NULL;
    struct Nuitka_FrameObject *frame_e2af830dd31b9c1ef9129f4732e500b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e2af830dd31b9c1ef9129f4732e500b3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e2af830dd31b9c1ef9129f4732e500b3)) {
        Py_XDECREF(cache_frame_e2af830dd31b9c1ef9129f4732e500b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e2af830dd31b9c1ef9129f4732e500b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e2af830dd31b9c1ef9129f4732e500b3 = MAKE_FUNCTION_FRAME(tstate, codeobj_e2af830dd31b9c1ef9129f4732e500b3, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e2af830dd31b9c1ef9129f4732e500b3->m_type_description == NULL);
    frame_e2af830dd31b9c1ef9129f4732e500b3 = cache_frame_e2af830dd31b9c1ef9129f4732e500b3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e2af830dd31b9c1ef9129f4732e500b3);
    assert(Py_REFCNT(frame_e2af830dd31b9c1ef9129f4732e500b3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_value_1 = par_stream_id;
        frame_e2af830dd31b9c1ef9129f4732e500b3->m_frame.f_lineno = 126;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_value_2 = var_handle;
        CHECK_OBJECT(par_attrs);
        tmp_args_element_value_3 = par_attrs;
        frame_e2af830dd31b9c1ef9129f4732e500b3->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e2af830dd31b9c1ef9129f4732e500b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e2af830dd31b9c1ef9129f4732e500b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e2af830dd31b9c1ef9129f4732e500b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e2af830dd31b9c1ef9129f4732e500b3,
        type_description_1,
        par_stream_id,
        par_attrs,
        var_handle
    );


    // Release cached frame if used for exception.
    if (frame_e2af830dd31b9c1ef9129f4732e500b3 == cache_frame_e2af830dd31b9c1ef9129f4732e500b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e2af830dd31b9c1ef9129f4732e500b3);
        cache_frame_e2af830dd31b9c1ef9129f4732e500b3 = NULL;
    }

    assertFrameObject(frame_e2af830dd31b9c1ef9129f4732e500b3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_handle);
    var_handle = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$win32$$$function__8_SetConsoleCursorPosition(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *par_position = python_pars[1];
    PyObject *par_adjust = python_pars[2];
    PyObject *var_adjusted_position = NULL;
    PyObject *var_sr = NULL;
    PyObject *var_handle = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    struct Nuitka_FrameObject *frame_c9acd81af8283f900e89b2ce40e5dfba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_c9acd81af8283f900e89b2ce40e5dfba = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c9acd81af8283f900e89b2ce40e5dfba)) {
        Py_XDECREF(cache_frame_c9acd81af8283f900e89b2ce40e5dfba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9acd81af8283f900e89b2ce40e5dfba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9acd81af8283f900e89b2ce40e5dfba = MAKE_FUNCTION_FRAME(tstate, codeobj_c9acd81af8283f900e89b2ce40e5dfba, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c9acd81af8283f900e89b2ce40e5dfba->m_type_description == NULL);
    frame_c9acd81af8283f900e89b2ce40e5dfba = cache_frame_c9acd81af8283f900e89b2ce40e5dfba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c9acd81af8283f900e89b2ce40e5dfba);
    assert(Py_REFCNT(frame_c9acd81af8283f900e89b2ce40e5dfba) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_position);
        tmp_dircall_arg2_1 = par_position;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__7_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_position;
            assert(old != NULL);
            par_position = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_position);
        tmp_expression_value_1 = par_position;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[23];
        tmp_or_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_position);
        tmp_expression_value_2 = par_position;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[23];
        tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_position);
        tmp_expression_value_3 = par_position;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[2]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[24];
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_position);
        tmp_expression_value_4 = par_position;
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_2 = mod_consts[24];
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_c9acd81af8283f900e89b2ce40e5dfba->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_adjusted_position == NULL);
        var_adjusted_position = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_adjust);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_adjust);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_c9acd81af8283f900e89b2ce40e5dfba->m_frame.f_lineno = 140;
        tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[6]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sr == NULL);
        var_sr = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_adjusted_position);
        tmp_expression_value_6 = var_adjusted_position;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[2]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_sr);
        tmp_expression_value_7 = var_sr;
        tmp_iadd_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[7]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_adjusted_position);
        tmp_assattr_target_1 = var_adjusted_position;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_adjusted_position);
        tmp_expression_value_8 = var_adjusted_position;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[3]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_2__value == NULL);
        tmp_inplace_assign_2__value = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_iadd_expr_left_2 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(var_sr);
        tmp_expression_value_9 = var_sr;
        tmp_iadd_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[8]);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_2;
        tmp_inplace_assign_2__value = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_2 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(var_adjusted_position);
        tmp_assattr_target_2 = var_adjusted_position;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_value_4 = par_stream_id;
        frame_c9acd81af8283f900e89b2ce40e5dfba->m_frame.f_lineno = 144;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_value_5 = var_handle;
        if (var_adjusted_position == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 145;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_adjusted_position;
        frame_c9acd81af8283f900e89b2ce40e5dfba->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9acd81af8283f900e89b2ce40e5dfba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9acd81af8283f900e89b2ce40e5dfba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9acd81af8283f900e89b2ce40e5dfba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9acd81af8283f900e89b2ce40e5dfba,
        type_description_1,
        par_stream_id,
        par_position,
        par_adjust,
        var_adjusted_position,
        var_sr,
        var_handle
    );


    // Release cached frame if used for exception.
    if (frame_c9acd81af8283f900e89b2ce40e5dfba == cache_frame_c9acd81af8283f900e89b2ce40e5dfba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c9acd81af8283f900e89b2ce40e5dfba);
        cache_frame_c9acd81af8283f900e89b2ce40e5dfba = NULL;
    }

    assertFrameObject(frame_c9acd81af8283f900e89b2ce40e5dfba);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_position);
    Py_DECREF(par_position);
    par_position = NULL;
    Py_XDECREF(var_adjusted_position);
    var_adjusted_position = NULL;
    Py_XDECREF(var_sr);
    var_sr = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_position);
    par_position = NULL;
    Py_XDECREF(var_adjusted_position);
    var_adjusted_position = NULL;
    Py_XDECREF(var_sr);
    var_sr = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    CHECK_OBJECT(par_adjust);
    Py_DECREF(par_adjust);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    CHECK_OBJECT(par_adjust);
    Py_DECREF(par_adjust);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$win32$$$function__9_FillConsoleOutputCharacter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *par_char = python_pars[1];
    PyObject *par_length = python_pars[2];
    PyObject *par_start = python_pars[3];
    PyObject *var_handle = NULL;
    PyObject *var_num_written = NULL;
    PyObject *var_success = NULL;
    struct Nuitka_FrameObject *frame_c49f009b63af15798117f6a40fc038b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c49f009b63af15798117f6a40fc038b4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c49f009b63af15798117f6a40fc038b4)) {
        Py_XDECREF(cache_frame_c49f009b63af15798117f6a40fc038b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c49f009b63af15798117f6a40fc038b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c49f009b63af15798117f6a40fc038b4 = MAKE_FUNCTION_FRAME(tstate, codeobj_c49f009b63af15798117f6a40fc038b4, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c49f009b63af15798117f6a40fc038b4->m_type_description == NULL);
    frame_c49f009b63af15798117f6a40fc038b4 = cache_frame_c49f009b63af15798117f6a40fc038b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c49f009b63af15798117f6a40fc038b4);
    assert(Py_REFCNT(frame_c49f009b63af15798117f6a40fc038b4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_value_1 = par_stream_id;
        frame_c49f009b63af15798117f6a40fc038b4->m_frame.f_lineno = 148;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_char);
        tmp_expression_value_1 = par_char;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_c49f009b63af15798117f6a40fc038b4->m_frame.f_lineno = 149;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_c49f009b63af15798117f6a40fc038b4->m_frame.f_lineno = 149;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_char;
            assert(old != NULL);
            par_char = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_length);
        tmp_args_element_value_3 = par_length;
        frame_c49f009b63af15798117f6a40fc038b4->m_frame.f_lineno = 150;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[31], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_length;
            assert(old != NULL);
            par_length = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_c49f009b63af15798117f6a40fc038b4->m_frame.f_lineno = 151;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_written == NULL);
        var_num_written = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_value_4 = var_handle;
        CHECK_OBJECT(par_char);
        tmp_args_element_value_5 = par_char;
        CHECK_OBJECT(par_length);
        tmp_args_element_value_6 = par_length;
        CHECK_OBJECT(par_start);
        tmp_args_element_value_7 = par_start;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num_written);
        tmp_args_element_value_9 = var_num_written;
        frame_c49f009b63af15798117f6a40fc038b4->m_frame.f_lineno = 154;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_c49f009b63af15798117f6a40fc038b4->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_5;
    }
    {
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_num_written);
        tmp_expression_value_2 = var_num_written;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[34]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c49f009b63af15798117f6a40fc038b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c49f009b63af15798117f6a40fc038b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c49f009b63af15798117f6a40fc038b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c49f009b63af15798117f6a40fc038b4,
        type_description_1,
        par_stream_id,
        par_char,
        par_length,
        par_start,
        var_handle,
        var_num_written,
        var_success
    );


    // Release cached frame if used for exception.
    if (frame_c49f009b63af15798117f6a40fc038b4 == cache_frame_c49f009b63af15798117f6a40fc038b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c49f009b63af15798117f6a40fc038b4);
        cache_frame_c49f009b63af15798117f6a40fc038b4 = NULL;
    }

    assertFrameObject(frame_c49f009b63af15798117f6a40fc038b4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_char);
    Py_DECREF(par_char);
    par_char = NULL;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_num_written);
    Py_DECREF(var_num_written);
    var_num_written = NULL;
    CHECK_OBJECT(var_success);
    Py_DECREF(var_success);
    var_success = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_char);
    par_char = NULL;
    Py_XDECREF(par_length);
    par_length = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_num_written);
    var_num_written = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$win32$$$function__10_FillConsoleOutputAttribute(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *par_attr = python_pars[1];
    PyObject *par_length = python_pars[2];
    PyObject *par_start = python_pars[3];
    PyObject *var_handle = NULL;
    PyObject *var_attribute = NULL;
    PyObject *var_num_written = NULL;
    struct Nuitka_FrameObject *frame_3d1d958a26be4f9e5e6c2747e1d1a82b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b)) {
        Py_XDECREF(cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b = MAKE_FUNCTION_FRAME(tstate, codeobj_3d1d958a26be4f9e5e6c2747e1d1a82b, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b->m_type_description == NULL);
    frame_3d1d958a26be4f9e5e6c2747e1d1a82b = cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3d1d958a26be4f9e5e6c2747e1d1a82b);
    assert(Py_REFCNT(frame_3d1d958a26be4f9e5e6c2747e1d1a82b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_value_1 = par_stream_id;
        frame_3d1d958a26be4f9e5e6c2747e1d1a82b->m_frame.f_lineno = 159;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attr);
        tmp_args_element_value_2 = par_attr;
        frame_3d1d958a26be4f9e5e6c2747e1d1a82b->m_frame.f_lineno = 160;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[35], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_attribute == NULL);
        var_attribute = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_length);
        tmp_args_element_value_3 = par_length;
        frame_3d1d958a26be4f9e5e6c2747e1d1a82b->m_frame.f_lineno = 161;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[31], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_length;
            assert(old != NULL);
            par_length = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d1d958a26be4f9e5e6c2747e1d1a82b->m_frame.f_lineno = 162;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_written == NULL);
        var_num_written = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_value_4 = var_handle;
        CHECK_OBJECT(var_attribute);
        tmp_args_element_value_5 = var_attribute;
        CHECK_OBJECT(par_length);
        tmp_args_element_value_6 = par_length;
        CHECK_OBJECT(par_start);
        tmp_args_element_value_7 = par_start;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num_written);
        tmp_args_element_value_9 = var_num_written;
        frame_3d1d958a26be4f9e5e6c2747e1d1a82b->m_frame.f_lineno = 165;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3d1d958a26be4f9e5e6c2747e1d1a82b->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3d1d958a26be4f9e5e6c2747e1d1a82b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d1d958a26be4f9e5e6c2747e1d1a82b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d1d958a26be4f9e5e6c2747e1d1a82b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d1d958a26be4f9e5e6c2747e1d1a82b,
        type_description_1,
        par_stream_id,
        par_attr,
        par_length,
        par_start,
        var_handle,
        var_attribute,
        var_num_written
    );


    // Release cached frame if used for exception.
    if (frame_3d1d958a26be4f9e5e6c2747e1d1a82b == cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b);
        cache_frame_3d1d958a26be4f9e5e6c2747e1d1a82b = NULL;
    }

    assertFrameObject(frame_3d1d958a26be4f9e5e6c2747e1d1a82b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_attribute);
    Py_DECREF(var_attribute);
    var_attribute = NULL;
    CHECK_OBJECT(var_num_written);
    Py_DECREF(var_num_written);
    var_num_written = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_length);
    par_length = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_attribute);
    var_attribute = NULL;
    Py_XDECREF(var_num_written);
    var_num_written = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$win32$$$function__11_SetConsoleTitle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    struct Nuitka_FrameObject *frame_127664175a04f81b1c19416922ea1ba8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_127664175a04f81b1c19416922ea1ba8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_127664175a04f81b1c19416922ea1ba8)) {
        Py_XDECREF(cache_frame_127664175a04f81b1c19416922ea1ba8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_127664175a04f81b1c19416922ea1ba8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_127664175a04f81b1c19416922ea1ba8 = MAKE_FUNCTION_FRAME(tstate, codeobj_127664175a04f81b1c19416922ea1ba8, module_colorama$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_127664175a04f81b1c19416922ea1ba8->m_type_description == NULL);
    frame_127664175a04f81b1c19416922ea1ba8 = cache_frame_127664175a04f81b1c19416922ea1ba8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_127664175a04f81b1c19416922ea1ba8);
    assert(Py_REFCNT(frame_127664175a04f81b1c19416922ea1ba8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_title);
        tmp_args_element_value_1 = par_title;
        frame_127664175a04f81b1c19416922ea1ba8->m_frame.f_lineno = 168;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_127664175a04f81b1c19416922ea1ba8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_127664175a04f81b1c19416922ea1ba8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_127664175a04f81b1c19416922ea1ba8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_127664175a04f81b1c19416922ea1ba8,
        type_description_1,
        par_title
    );


    // Release cached frame if used for exception.
    if (frame_127664175a04f81b1c19416922ea1ba8 == cache_frame_127664175a04f81b1c19416922ea1ba8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_127664175a04f81b1c19416922ea1ba8);
        cache_frame_127664175a04f81b1c19416922ea1ba8 = NULL;
    }

    assertFrameObject(frame_127664175a04f81b1c19416922ea1ba8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$win32$$$function__12_GetConsoleMode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_handle = python_pars[0];
    PyObject *var_mode = NULL;
    PyObject *var_success = NULL;
    struct Nuitka_FrameObject *frame_06f5ae27b53c8df0d871dcd14c1fd4bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd)) {
        Py_XDECREF(cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd = MAKE_FUNCTION_FRAME(tstate, codeobj_06f5ae27b53c8df0d871dcd14c1fd4bd, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd->m_type_description == NULL);
    frame_06f5ae27b53c8df0d871dcd14c1fd4bd = cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_06f5ae27b53c8df0d871dcd14c1fd4bd);
    assert(Py_REFCNT(frame_06f5ae27b53c8df0d871dcd14c1fd4bd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_06f5ae27b53c8df0d871dcd14c1fd4bd->m_frame.f_lineno = 171;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[31]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_mode == NULL);
        var_mode = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_1 = par_handle;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mode);
        tmp_args_element_value_3 = var_mode;
        frame_06f5ae27b53c8df0d871dcd14c1fd4bd->m_frame.f_lineno = 172;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_06f5ae27b53c8df0d871dcd14c1fd4bd->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_success);
        tmp_operand_value_1 = var_success;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        frame_06f5ae27b53c8df0d871dcd14c1fd4bd->m_frame.f_lineno = 174;
        tmp_raise_type_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[41]);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 174;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_mode);
        tmp_expression_value_1 = var_mode;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_06f5ae27b53c8df0d871dcd14c1fd4bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_06f5ae27b53c8df0d871dcd14c1fd4bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_06f5ae27b53c8df0d871dcd14c1fd4bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_06f5ae27b53c8df0d871dcd14c1fd4bd,
        type_description_1,
        par_handle,
        var_mode,
        var_success
    );


    // Release cached frame if used for exception.
    if (frame_06f5ae27b53c8df0d871dcd14c1fd4bd == cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd);
        cache_frame_06f5ae27b53c8df0d871dcd14c1fd4bd = NULL;
    }

    assertFrameObject(frame_06f5ae27b53c8df0d871dcd14c1fd4bd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_mode);
    Py_DECREF(var_mode);
    var_mode = NULL;
    CHECK_OBJECT(var_success);
    Py_DECREF(var_success);
    var_success = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_mode);
    var_mode = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$win32$$$function__13_SetConsoleMode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_handle = python_pars[0];
    PyObject *par_mode = python_pars[1];
    PyObject *var_success = NULL;
    struct Nuitka_FrameObject *frame_39e56b434f8141ae35b223e78aa58014;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_39e56b434f8141ae35b223e78aa58014 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_39e56b434f8141ae35b223e78aa58014)) {
        Py_XDECREF(cache_frame_39e56b434f8141ae35b223e78aa58014);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39e56b434f8141ae35b223e78aa58014 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39e56b434f8141ae35b223e78aa58014 = MAKE_FUNCTION_FRAME(tstate, codeobj_39e56b434f8141ae35b223e78aa58014, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_39e56b434f8141ae35b223e78aa58014->m_type_description == NULL);
    frame_39e56b434f8141ae35b223e78aa58014 = cache_frame_39e56b434f8141ae35b223e78aa58014;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_39e56b434f8141ae35b223e78aa58014);
    assert(Py_REFCNT(frame_39e56b434f8141ae35b223e78aa58014) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_1 = par_handle;
        CHECK_OBJECT(par_mode);
        tmp_args_element_value_2 = par_mode;
        frame_39e56b434f8141ae35b223e78aa58014->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_success);
        tmp_operand_value_1 = var_success;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_39e56b434f8141ae35b223e78aa58014->m_frame.f_lineno = 180;
        tmp_raise_type_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[41]);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 180;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39e56b434f8141ae35b223e78aa58014, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39e56b434f8141ae35b223e78aa58014->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39e56b434f8141ae35b223e78aa58014, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39e56b434f8141ae35b223e78aa58014,
        type_description_1,
        par_handle,
        par_mode,
        var_success
    );


    // Release cached frame if used for exception.
    if (frame_39e56b434f8141ae35b223e78aa58014 == cache_frame_39e56b434f8141ae35b223e78aa58014) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_39e56b434f8141ae35b223e78aa58014);
        cache_frame_39e56b434f8141ae35b223e78aa58014 = NULL;
    }

    assertFrameObject(frame_39e56b434f8141ae35b223e78aa58014);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_success);
    Py_DECREF(var_success);
    var_success = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_success);
    var_success = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__10_FillConsoleOutputAttribute() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__10_FillConsoleOutputAttribute,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d1d958a26be4f9e5e6c2747e1d1a82b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__11_SetConsoleTitle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__11_SetConsoleTitle,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_127664175a04f81b1c19416922ea1ba8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__12_GetConsoleMode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__12_GetConsoleMode,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_06f5ae27b53c8df0d871dcd14c1fd4bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__13_SetConsoleMode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__13_SetConsoleMode,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_39e56b434f8141ae35b223e78aa58014,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6640319da6f6306a9d95873350c4b1a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c511c6d40c4c62e5aac2928cfc0d516f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__3___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__3___str__,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_d6d6b83aad45ad4cbf724e1afb3c5b1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__4__winapi_test() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__4__winapi_test,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cadc683787a4c95bb38fddeffbfe1d2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__5_winapi_test() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__5_winapi_test,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9cff1c21510ec0ff5d0a8024803ff340,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__6_GetConsoleScreenBufferInfo(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__6_GetConsoleScreenBufferInfo,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cafdaefa4198fb5e2784cb769d3fb3ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__7_SetConsoleTextAttribute() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__7_SetConsoleTextAttribute,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e2af830dd31b9c1ef9129f4732e500b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__8_SetConsoleCursorPosition(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__8_SetConsoleCursorPosition,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c9acd81af8283f900e89b2ce40e5dfba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__9_FillConsoleOutputCharacter() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__9_FillConsoleOutputCharacter,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c49f009b63af15798117f6a40fc038b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_colorama$win32[] = {
    impl_colorama$win32$$$function__3___str__,
    impl_colorama$win32$$$function__4__winapi_test,
    impl_colorama$win32$$$function__5_winapi_test,
    impl_colorama$win32$$$function__6_GetConsoleScreenBufferInfo,
    impl_colorama$win32$$$function__7_SetConsoleTextAttribute,
    impl_colorama$win32$$$function__8_SetConsoleCursorPosition,
    impl_colorama$win32$$$function__9_FillConsoleOutputCharacter,
    impl_colorama$win32$$$function__10_FillConsoleOutputAttribute,
    impl_colorama$win32$$$function__11_SetConsoleTitle,
    impl_colorama$win32$$$function__12_GetConsoleMode,
    impl_colorama$win32$$$function__13_SetConsoleMode,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_colorama$win32);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_colorama$win32,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_colorama$win32,
        sizeof(function_table_colorama$win32) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_colorama$win32(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("colorama$win32");

    // Store the module for future use.
    module_colorama$win32 = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("colorama$win32: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("colorama$win32: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "colorama.win32" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcolorama$win32\n");

    moduledict_colorama$win32 = MODULE_DICT(module_colorama$win32);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_colorama$win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_colorama$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[107]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_colorama$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_colorama$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_colorama$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_colorama$win32);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_colorama$win32);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_f255ed9684770b07ce4e9c458b95e059;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4b3962874abfc297ba7f1f7c68af008e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_2);
    }
    frame_f255ed9684770b07ce4e9c458b95e059 = MAKE_MODULE_FRAME(codeobj_f255ed9684770b07ce4e9c458b95e059, module_colorama$win32);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f255ed9684770b07ce4e9c458b95e059);
    assert(Py_REFCNT(frame_f255ed9684770b07ce4e9c458b95e059) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[44];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[47], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[48], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_6);
    }
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[54],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[54]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        assert(!(tmp_called_value_1 == NULL));
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[55]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        frame_f255ed9684770b07ce4e9c458b95e059->m_frame.f_lineno = 12;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_11);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_12;
        tmp_assign_source_12 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_12;
    }
    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f255ed9684770b07ce4e9c458b95e059, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f255ed9684770b07ce4e9c458b95e059, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = mod_consts[57];
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_colorama$win32$$$function__1_lambda();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_colorama$win32$$$function__2_lambda();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_15);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 9;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f255ed9684770b07ce4e9c458b95e059->m_frame) frame_f255ed9684770b07ce4e9c458b95e059->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_16 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_16);
        tmp_import_from_1__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[14],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[14]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[61],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[61]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[28],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[28]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[62],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[62]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_20);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[63]);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_21);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_assign_source_22 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_23 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[23];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[64]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[64]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[12];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f255ed9684770b07ce4e9c458b95e059->m_frame.f_lineno = 23;
        tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[65]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[66];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_name_value_1 = mod_consts[67];
        tmp_default_value_1 = mod_consts[68];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_1, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_8 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[67]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[70], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[12];
        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        frame_4b3962874abfc297ba7f1f7c68af008e_2 = MAKE_CLASS_FRAME(tstate, codeobj_4b3962874abfc297ba7f1f7c68af008e, module_colorama$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4b3962874abfc297ba7f1f7c68af008e_2);
        assert(Py_REFCNT(frame_4b3962874abfc297ba7f1f7c68af008e_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[1];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[22]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto tuple_build_exception_2;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[4];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[22]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[5];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_9;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                    tmp_expression_value_9 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[30]);

                    if (tmp_expression_value_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

                            if (unlikely(tmp_expression_value_9 == NULL)) {
                                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                            }

                            if (tmp_expression_value_9 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 28;
                                type_description_2 = "o";
                                goto tuple_build_exception_4;
                            }
                            Py_INCREF(tmp_expression_value_9);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[35]);
                    Py_DECREF(tmp_expression_value_9);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_7 = mod_consts[6];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_10;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                    tmp_expression_value_10 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[30]);

                    if (tmp_expression_value_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

                            if (unlikely(tmp_expression_value_10 == NULL)) {
                                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                            }

                            if (tmp_expression_value_10 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 29;
                                type_description_2 = "o";
                                goto tuple_build_exception_5;
                            }
                            Py_INCREF(tmp_expression_value_10);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[73]);
                    Py_DECREF(tmp_expression_value_10);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 29;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
                tmp_tuple_element_8 = mod_consts[11];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[22]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 30;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_colorama$win32$$$function__3___str__();

        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4b3962874abfc297ba7f1f7c68af008e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4b3962874abfc297ba7f1f7c68af008e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4b3962874abfc297ba7f1f7c68af008e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4b3962874abfc297ba7f1f7c68af008e_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_4b3962874abfc297ba7f1f7c68af008e_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_9 = mod_consts[12];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_9 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f255ed9684770b07ce4e9c458b95e059->m_frame.f_lineno = 23;
            tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_28 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23);
        locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23);
        locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_23 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 23;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_28);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[78]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[79]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[31]);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_2);
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[80], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[81]);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[82], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[78]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[25]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_list_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[81]);
        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_2;
            PyList_SET_ITEM(tmp_assattr_value_5, 0, tmp_list_element_3);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto list_build_exception_2;
            }
            tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_args_element_value_2 == NULL)) {
                tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto list_build_exception_2;
            }
            frame_f255ed9684770b07ce4e9c458b95e059->m_frame.f_lineno = 50;
            tmp_list_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 1, tmp_list_element_3);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[80], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_assattr_target_6;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[83]);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[82], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[78]);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[59]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_list_element_4;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_assattr_target_7;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_list_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[81]);
        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyList_SET_ITEM(tmp_assattr_value_7, 0, tmp_list_element_4);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto list_build_exception_3;
            }
            tmp_list_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[35]);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_value_7, 1, tmp_list_element_4);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[80], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[83]);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[82], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[78]);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[84]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_list_element_5;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_assattr_target_9;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_list_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[81]);
        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_9 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_assattr_value_9, 0, tmp_list_element_5);
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_value_9, 1, tmp_list_element_5);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[80], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_assattr_target_10;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[83]);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[82], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[78]);
        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[85]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_list_element_6;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_assattr_target_11;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_list_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[81]);
        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_32;
            PyList_SET_ITEM(tmp_assattr_value_11, 0, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_assattr_value_11, 1, tmp_list_element_6);
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto list_build_exception_5;
            }
            tmp_list_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[31]);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_value_11, 2, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_assattr_value_11, 3, tmp_list_element_6);
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto list_build_exception_5;
            }
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto list_build_exception_5;
            }
            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[31]);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto list_build_exception_5;
            }
            frame_f255ed9684770b07ce4e9c458b95e059->m_frame.f_lineno = 74;
            tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_value_11, 4, tmp_list_element_6);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_value_11);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[80], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_assattr_target_12;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[83]);
        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[82], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[78]);
        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[86]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_list_element_7;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_assattr_target_13;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_list_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[81]);
        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_expression_value_39;
            PyList_SET_ITEM(tmp_assattr_value_13, 0, tmp_list_element_7);
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_6;
            }
            tmp_list_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[35]);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_value_13, 1, tmp_list_element_7);
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_6;
            }
            tmp_list_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[31]);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_value_13, 2, tmp_list_element_7);
            tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_list_element_7 == NULL)) {
                tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM0(tmp_assattr_value_13, 3, tmp_list_element_7);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_6;
            }
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_6;
            }
            tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[31]);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_6;
            }
            frame_f255ed9684770b07ce4e9c458b95e059->m_frame.f_lineno = 84;
            tmp_list_element_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_value_13, 4, tmp_list_element_7);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[80], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_assattr_target_14;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[83]);
        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[82], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[78]);
        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[87]);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_list_element_8;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_assattr_target_15;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_list_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[88]);
        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_15 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_15, 0, tmp_list_element_8);
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[80], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_assattr_target_16;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[83]);
        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[82], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[78]);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[89]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_list_element_9;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_assattr_target_17;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_list_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[81]);
        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_17 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_48;
            PyList_SET_ITEM(tmp_assattr_value_17, 0, tmp_list_element_9);
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_7;
            }
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_7;
            }
            tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[31]);
            if (tmp_args_element_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_7;
            }
            frame_f255ed9684770b07ce4e9c458b95e059->m_frame.f_lineno = 97;
            tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_17, 1, tmp_list_element_9);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_17);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[80], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_assattr_target_18;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[83]);
        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[82], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_expression_value_51;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[78]);
        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[90]);
        Py_DECREF(tmp_expression_value_50);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_list_element_10;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_assattr_target_19;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_list_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[81]);
        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_19 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_53;
            PyList_SET_ITEM(tmp_assattr_value_19, 0, tmp_list_element_10);
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_8;
            }
            tmp_list_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[31]);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_assattr_value_19, 1, tmp_list_element_10);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[80], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_assattr_target_20;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[83]);
        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[82], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_colorama$win32$$$function__4__winapi_test();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_colorama$win32$$$function__5_winapi_test();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_10);


        tmp_assign_source_41 = MAKE_FUNCTION_colorama$win32$$$function__6_GetConsoleScreenBufferInfo(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_colorama$win32$$$function__7_SetConsoleTextAttribute();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[91];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_43 = MAKE_FUNCTION_colorama$win32$$$function__8_SetConsoleCursorPosition(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_colorama$win32$$$function__9_FillConsoleOutputCharacter();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_colorama$win32$$$function__10_FillConsoleOutputAttribute();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_colorama$win32$$$function__11_SetConsoleTitle();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_colorama$win32$$$function__12_GetConsoleMode();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_colorama$win32$$$function__13_SetConsoleMode();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_48);
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f255ed9684770b07ce4e9c458b95e059, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f255ed9684770b07ce4e9c458b95e059->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f255ed9684770b07ce4e9c458b95e059, exception_lineno);
    }



    assertFrameObject(frame_f255ed9684770b07ce4e9c458b95e059);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("colorama$win32", false);

    Py_INCREF(module_colorama$win32);
    return module_colorama$win32;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("colorama$win32", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
