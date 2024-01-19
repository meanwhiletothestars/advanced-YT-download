/* Generated code for Python module 'colorama$initialise'
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

/* The "module_colorama$initialise" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_colorama$initialise;
PyDictObject *moduledict_colorama$initialise;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[52];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[52];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("colorama.initialise"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 52; i++) {
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
void checkModuleConstants_colorama$initialise(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 52; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7a420c1f0cee259e26c8966f2089aded;
static PyCodeObject *codeobj_7c1983a763ded56e5dce8e60f92f2295;
static PyCodeObject *codeobj_c029c32054ebb8f24a6b7701049d5131;
static PyCodeObject *codeobj_c74376f568683e12f09809cb961fefaf;
static PyCodeObject *codeobj_6f6eaf4d6f47aaf536cca40f3a4554bd;
static PyCodeObject *codeobj_20a1bf6fd019f9985e84df75601616e4;
static PyCodeObject *codeobj_e2f4c92d0a8d0e4fef776643817c9a60;
static PyCodeObject *codeobj_0fc5e177395b31be1596a36ac824d889;
static PyCodeObject *codeobj_9deaa8f2f1581b5bfef7e35fcc7cbf92;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[30]; CHECK_OBJECT(module_filename_obj);
    codeobj_7a420c1f0cee259e26c8966f2089aded = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[46], mod_consts[46], NULL, NULL, 0, 0, 0);
    codeobj_7c1983a763ded56e5dce8e60f92f2295 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[41], NULL, NULL, 0, 0, 0);
    codeobj_c029c32054ebb8f24a6b7701049d5131 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[25], mod_consts[25], mod_consts[47], NULL, 0, 0, 0);
    codeobj_c74376f568683e12f09809cb961fefaf = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[24], mod_consts[24], NULL, NULL, 0, 0, 0);
    codeobj_6f6eaf4d6f47aaf536cca40f3a4554bd = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[48], NULL, 4, 0, 0);
    codeobj_20a1bf6fd019f9985e84df75601616e4 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[49], NULL, 0, 0, 0);
    codeobj_e2f4c92d0a8d0e4fef776643817c9a60 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], NULL, NULL, 0, 0, 0);
    codeobj_0fc5e177395b31be1596a36ac824d889 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[8], NULL, NULL, 0, 0, 0);
    codeobj_9deaa8f2f1581b5bfef7e35fcc7cbf92 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[50], NULL, 5, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_colorama$initialise$$$function__6_colorama_text$$$genobj__1_colorama_text(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__1__wipe_internal_state_for_tests();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__2_reset_all();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__3_init(PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__4_deinit();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__5_just_fix_windows_console();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__6_colorama_text();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__7_reinit();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__8_wrap_stream();


// The module function definitions.
static PyObject *impl_colorama$initialise$$$function__1__wipe_internal_state_for_tests(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7c1983a763ded56e5dce8e60f92f2295;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_7c1983a763ded56e5dce8e60f92f2295 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_6);
    }
    if (isFrameUnusable(cache_frame_7c1983a763ded56e5dce8e60f92f2295)) {
        Py_XDECREF(cache_frame_7c1983a763ded56e5dce8e60f92f2295);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c1983a763ded56e5dce8e60f92f2295 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c1983a763ded56e5dce8e60f92f2295 = MAKE_FUNCTION_FRAME(tstate, codeobj_7c1983a763ded56e5dce8e60f92f2295, module_colorama$initialise, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c1983a763ded56e5dce8e60f92f2295->m_type_description == NULL);
    frame_7c1983a763ded56e5dce8e60f92f2295 = cache_frame_7c1983a763ded56e5dce8e60f92f2295;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7c1983a763ded56e5dce8e60f92f2295);
    assert(Py_REFCNT(frame_7c1983a763ded56e5dce8e60f92f2295) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 26;

            goto try_except_handler_1;
        }
        frame_7c1983a763ded56e5dce8e60f92f2295->m_frame.f_lineno = 26;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_7c1983a763ded56e5dce8e60f92f2295, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_7c1983a763ded56e5dce8e60f92f2295, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 24;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7c1983a763ded56e5dce8e60f92f2295->m_frame) frame_7c1983a763ded56e5dce8e60f92f2295->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_no_1:;
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c1983a763ded56e5dce8e60f92f2295, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c1983a763ded56e5dce8e60f92f2295->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c1983a763ded56e5dce8e60f92f2295, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c1983a763ded56e5dce8e60f92f2295,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_7c1983a763ded56e5dce8e60f92f2295 == cache_frame_7c1983a763ded56e5dce8e60f92f2295) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c1983a763ded56e5dce8e60f92f2295);
        cache_frame_7c1983a763ded56e5dce8e60f92f2295 = NULL;
    }

    assertFrameObject(frame_7c1983a763ded56e5dce8e60f92f2295);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_colorama$initialise$$$function__2_reset_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0fc5e177395b31be1596a36ac824d889;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0fc5e177395b31be1596a36ac824d889 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0fc5e177395b31be1596a36ac824d889)) {
        Py_XDECREF(cache_frame_0fc5e177395b31be1596a36ac824d889);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0fc5e177395b31be1596a36ac824d889 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0fc5e177395b31be1596a36ac824d889 = MAKE_FUNCTION_FRAME(tstate, codeobj_0fc5e177395b31be1596a36ac824d889, module_colorama$initialise, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0fc5e177395b31be1596a36ac824d889->m_type_description == NULL);
    frame_0fc5e177395b31be1596a36ac824d889 = cache_frame_0fc5e177395b31be1596a36ac824d889;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0fc5e177395b31be1596a36ac824d889);
    assert(Py_REFCNT(frame_0fc5e177395b31be1596a36ac824d889) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_0fc5e177395b31be1596a36ac824d889->m_frame.f_lineno = 34;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_0fc5e177395b31be1596a36ac824d889->m_frame.f_lineno = 34;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[8]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0fc5e177395b31be1596a36ac824d889, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0fc5e177395b31be1596a36ac824d889->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0fc5e177395b31be1596a36ac824d889, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0fc5e177395b31be1596a36ac824d889,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0fc5e177395b31be1596a36ac824d889 == cache_frame_0fc5e177395b31be1596a36ac824d889) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0fc5e177395b31be1596a36ac824d889);
        cache_frame_0fc5e177395b31be1596a36ac824d889 = NULL;
    }

    assertFrameObject(frame_0fc5e177395b31be1596a36ac824d889);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_colorama$initialise$$$function__3_init(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_autoreset = python_pars[0];
    PyObject *par_convert = python_pars[1];
    PyObject *par_strip = python_pars[2];
    PyObject *par_wrap = python_pars[3];
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    struct Nuitka_FrameObject *frame_6f6eaf4d6f47aaf536cca40f3a4554bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd)) {
        Py_XDECREF(cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd = MAKE_FUNCTION_FRAME(tstate, codeobj_6f6eaf4d6f47aaf536cca40f3a4554bd, module_colorama$initialise, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd->m_type_description == NULL);
    frame_6f6eaf4d6f47aaf536cca40f3a4554bd = cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6f6eaf4d6f47aaf536cca40f3a4554bd);
    assert(Py_REFCNT(frame_6f6eaf4d6f47aaf536cca40f3a4554bd) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_wrap);
        tmp_operand_value_1 = par_wrap;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_autoreset);
        tmp_list_element_1 = par_autoreset;
        tmp_any_arg_1 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_any_arg_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_convert);
        tmp_list_element_1 = par_convert;
        PyList_SET_ITEM0(tmp_any_arg_1, 1, tmp_list_element_1);
        CHECK_OBJECT(par_strip);
        tmp_list_element_1 = par_strip;
        PyList_SET_ITEM0(tmp_any_arg_1, 2, tmp_list_element_1);
        tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        assert(!(tmp_capi_result_1 == NULL));
        tmp_and_right_value_1 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[10];
        frame_6f6eaf4d6f47aaf536cca40f3a4554bd->m_frame.f_lineno = 40;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 40;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_assign_source_1 == NULL));
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Nuitka_SysGetObject("stderr");
        assert(!(tmp_assign_source_2 == NULL));
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_3);
    }
    goto branch_end_2;
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_args_element_value_1 == NULL));
        CHECK_OBJECT(par_convert);
        tmp_args_element_value_2 = par_convert;
        CHECK_OBJECT(par_strip);
        tmp_args_element_value_3 = par_strip;
        CHECK_OBJECT(par_autoreset);
        tmp_args_element_value_4 = par_autoreset;
        CHECK_OBJECT(par_wrap);
        tmp_args_element_value_5 = par_wrap;
        frame_6f6eaf4d6f47aaf536cca40f3a4554bd->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_1 = tmp_assign_unpack_1__assign_source;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_5 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    branch_end_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_6);
    }
    goto branch_end_3;
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        assert(!(tmp_args_element_value_6 == NULL));
        if (par_convert == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = par_convert;
        if (par_strip == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = par_strip;
        if (par_autoreset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_9 = par_autoreset;
        if (par_wrap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_10 = par_wrap;
        frame_6f6eaf4d6f47aaf536cca40f3a4554bd->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assattr_value_2 = tmp_assign_unpack_2__assign_source;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
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

    Py_XDECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_8 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_8);
    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    branch_end_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        tmp_operand_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_operand_value_2 == NULL)) {
            tmp_operand_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6f6eaf4d6f47aaf536cca40f3a4554bd->m_frame.f_lineno = 61;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_True;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_9);
    }
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f6eaf4d6f47aaf536cca40f3a4554bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f6eaf4d6f47aaf536cca40f3a4554bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f6eaf4d6f47aaf536cca40f3a4554bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f6eaf4d6f47aaf536cca40f3a4554bd,
        type_description_1,
        par_autoreset,
        par_convert,
        par_strip,
        par_wrap
    );


    // Release cached frame if used for exception.
    if (frame_6f6eaf4d6f47aaf536cca40f3a4554bd == cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd);
        cache_frame_6f6eaf4d6f47aaf536cca40f3a4554bd = NULL;
    }

    assertFrameObject(frame_6f6eaf4d6f47aaf536cca40f3a4554bd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_autoreset);
    Py_DECREF(par_autoreset);
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);
    CHECK_OBJECT(par_strip);
    Py_DECREF(par_strip);
    CHECK_OBJECT(par_wrap);
    Py_DECREF(par_wrap);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_autoreset);
    Py_DECREF(par_autoreset);
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);
    CHECK_OBJECT(par_strip);
    Py_DECREF(par_strip);
    CHECK_OBJECT(par_wrap);
    Py_DECREF(par_wrap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$initialise$$$function__4_deinit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c74376f568683e12f09809cb961fefaf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c74376f568683e12f09809cb961fefaf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c74376f568683e12f09809cb961fefaf)) {
        Py_XDECREF(cache_frame_c74376f568683e12f09809cb961fefaf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c74376f568683e12f09809cb961fefaf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c74376f568683e12f09809cb961fefaf = MAKE_FUNCTION_FRAME(tstate, codeobj_c74376f568683e12f09809cb961fefaf, module_colorama$initialise, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c74376f568683e12f09809cb961fefaf->m_type_description == NULL);
    frame_c74376f568683e12f09809cb961fefaf = cache_frame_c74376f568683e12f09809cb961fefaf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c74376f568683e12f09809cb961fefaf);
    assert(Py_REFCNT(frame_c74376f568683e12f09809cb961fefaf) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assattr_value_1 == NULL)) {
            tmp_assattr_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_left_2 == NULL)) {
            tmp_cmp_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_2 == NULL)) {
            tmp_assattr_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c74376f568683e12f09809cb961fefaf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c74376f568683e12f09809cb961fefaf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c74376f568683e12f09809cb961fefaf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c74376f568683e12f09809cb961fefaf,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_c74376f568683e12f09809cb961fefaf == cache_frame_c74376f568683e12f09809cb961fefaf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c74376f568683e12f09809cb961fefaf);
        cache_frame_c74376f568683e12f09809cb961fefaf = NULL;
    }

    assertFrameObject(frame_c74376f568683e12f09809cb961fefaf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_colorama$initialise$$$function__5_just_fix_windows_console(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_new_stdout = NULL;
    PyObject *var_new_stderr = NULL;
    struct Nuitka_FrameObject *frame_20a1bf6fd019f9985e84df75601616e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_20a1bf6fd019f9985e84df75601616e4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_20a1bf6fd019f9985e84df75601616e4)) {
        Py_XDECREF(cache_frame_20a1bf6fd019f9985e84df75601616e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_20a1bf6fd019f9985e84df75601616e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_20a1bf6fd019f9985e84df75601616e4 = MAKE_FUNCTION_FRAME(tstate, codeobj_20a1bf6fd019f9985e84df75601616e4, module_colorama$initialise, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_20a1bf6fd019f9985e84df75601616e4->m_type_description == NULL);
    frame_20a1bf6fd019f9985e84df75601616e4 = cache_frame_20a1bf6fd019f9985e84df75601616e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_20a1bf6fd019f9985e84df75601616e4);
    assert(Py_REFCNT(frame_20a1bf6fd019f9985e84df75601616e4) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
        bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_cmp_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_cmp_expr_left_2 == NULL)) {
            tmp_cmp_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_tuple_element_1 == NULL));
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[20]);
        frame_20a1bf6fd019f9985e84df75601616e4->m_frame.f_lineno = 86;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_new_stdout == NULL);
        var_new_stdout = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_new_stdout);
        tmp_expression_value_1 = var_new_stdout;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_new_stdout);
        tmp_assattr_value_1 = var_new_stdout;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = Nuitka_SysGetObject("stderr");
        assert(!(tmp_tuple_element_2 == NULL));
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[20]);
        frame_20a1bf6fd019f9985e84df75601616e4->m_frame.f_lineno = 89;
        tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_new_stderr == NULL);
        var_new_stderr = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_new_stderr);
        tmp_expression_value_2 = var_new_stderr;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[15]);
        if (tmp_attribute_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_new_stderr);
        tmp_assattr_value_2 = var_new_stderr;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_20a1bf6fd019f9985e84df75601616e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20a1bf6fd019f9985e84df75601616e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20a1bf6fd019f9985e84df75601616e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_20a1bf6fd019f9985e84df75601616e4,
        type_description_1,
        var_new_stdout,
        var_new_stderr
    );


    // Release cached frame if used for exception.
    if (frame_20a1bf6fd019f9985e84df75601616e4 == cache_frame_20a1bf6fd019f9985e84df75601616e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_20a1bf6fd019f9985e84df75601616e4);
        cache_frame_20a1bf6fd019f9985e84df75601616e4 = NULL;
    }

    assertFrameObject(frame_20a1bf6fd019f9985e84df75601616e4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_True;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_new_stdout);
    var_new_stdout = NULL;
    Py_XDECREF(var_new_stderr);
    var_new_stderr = NULL;
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

    Py_XDECREF(var_new_stdout);
    var_new_stdout = NULL;
    Py_XDECREF(var_new_stderr);
    var_new_stderr = NULL;
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


static PyObject *impl_colorama$initialise$$$function__6_colorama_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_kwargs;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_colorama$initialise$$$function__6_colorama_text$$$genobj__1_colorama_text(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct colorama$initialise$$$function__6_colorama_text$$$genobj__1_colorama_text_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *colorama$initialise$$$function__6_colorama_text$$$genobj__1_colorama_text_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct colorama$initialise$$$function__6_colorama_text$$$genobj__1_colorama_text_locals *generator_heap = (struct colorama$initialise$$$function__6_colorama_text$$$genobj__1_colorama_text_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_c029c32054ebb8f24a6b7701049d5131, module_colorama$initialise, sizeof(void *)+sizeof(void *));
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
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[23]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__6_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_1 = Py_None;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "cc";
            goto try_except_handler_1;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cc";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 101;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 98;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cc";
    goto try_except_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 101;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

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
            generator->m_closure[0],
            generator->m_closure[1]
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
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_colorama$initialise$$$function__6_colorama_text$$$genobj__1_colorama_text(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        colorama$initialise$$$function__6_colorama_text$$$genobj__1_colorama_text_context,
        module_colorama$initialise,
        mod_consts[25],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_c029c32054ebb8f24a6b7701049d5131,
        closure,
        2,
#if 1
        sizeof(struct colorama$initialise$$$function__6_colorama_text$$$genobj__1_colorama_text_locals)
#else
        0
#endif
    );
}


static PyObject *impl_colorama$initialise$$$function__7_reinit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e2f4c92d0a8d0e4fef776643817c9a60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e2f4c92d0a8d0e4fef776643817c9a60 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e2f4c92d0a8d0e4fef776643817c9a60)) {
        Py_XDECREF(cache_frame_e2f4c92d0a8d0e4fef776643817c9a60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e2f4c92d0a8d0e4fef776643817c9a60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e2f4c92d0a8d0e4fef776643817c9a60 = MAKE_FUNCTION_FRAME(tstate, codeobj_e2f4c92d0a8d0e4fef776643817c9a60, module_colorama$initialise, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e2f4c92d0a8d0e4fef776643817c9a60->m_type_description == NULL);
    frame_e2f4c92d0a8d0e4fef776643817c9a60 = cache_frame_e2f4c92d0a8d0e4fef776643817c9a60;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e2f4c92d0a8d0e4fef776643817c9a60);
    assert(Py_REFCNT(frame_e2f4c92d0a8d0e4fef776643817c9a60) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_value_1 == NULL)) {
            tmp_assattr_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_cmp_expr_left_2 == NULL)) {
            tmp_cmp_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_value_2 == NULL)) {
            tmp_assattr_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e2f4c92d0a8d0e4fef776643817c9a60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e2f4c92d0a8d0e4fef776643817c9a60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e2f4c92d0a8d0e4fef776643817c9a60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e2f4c92d0a8d0e4fef776643817c9a60,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_e2f4c92d0a8d0e4fef776643817c9a60 == cache_frame_e2f4c92d0a8d0e4fef776643817c9a60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e2f4c92d0a8d0e4fef776643817c9a60);
        cache_frame_e2f4c92d0a8d0e4fef776643817c9a60 = NULL;
    }

    assertFrameObject(frame_e2f4c92d0a8d0e4fef776643817c9a60);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_colorama$initialise$$$function__8_wrap_stream(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_convert = python_pars[1];
    PyObject *par_strip = python_pars[2];
    PyObject *par_autoreset = python_pars[3];
    PyObject *par_wrap = python_pars[4];
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_9deaa8f2f1581b5bfef7e35fcc7cbf92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92)) {
        Py_XDECREF(cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92 = MAKE_FUNCTION_FRAME(tstate, codeobj_9deaa8f2f1581b5bfef7e35fcc7cbf92, module_colorama$initialise, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92->m_type_description == NULL);
    frame_9deaa8f2f1581b5bfef7e35fcc7cbf92 = cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9deaa8f2f1581b5bfef7e35fcc7cbf92);
    assert(Py_REFCNT(frame_9deaa8f2f1581b5bfef7e35fcc7cbf92) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_wrap);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_wrap);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream);
        tmp_kw_call_arg_value_0_1 = par_stream;
        CHECK_OBJECT(par_convert);
        tmp_kw_call_dict_value_0_1 = par_convert;
        CHECK_OBJECT(par_strip);
        tmp_kw_call_dict_value_1_1 = par_strip;
        CHECK_OBJECT(par_autoreset);
        tmp_kw_call_dict_value_2_1 = par_autoreset;
        frame_9deaa8f2f1581b5bfef7e35fcc7cbf92->m_frame.f_lineno = 113;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[26]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_wrapper);
        tmp_called_instance_1 = var_wrapper;
        frame_9deaa8f2f1581b5bfef7e35fcc7cbf92->m_frame.f_lineno = 115;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_wrapper);
        tmp_expression_value_1 = var_wrapper;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stream;
            assert(old != NULL);
            par_stream = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_no_1:;
    if (par_stream == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 117;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_stream;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9deaa8f2f1581b5bfef7e35fcc7cbf92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9deaa8f2f1581b5bfef7e35fcc7cbf92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9deaa8f2f1581b5bfef7e35fcc7cbf92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9deaa8f2f1581b5bfef7e35fcc7cbf92,
        type_description_1,
        par_stream,
        par_convert,
        par_strip,
        par_autoreset,
        par_wrap,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_9deaa8f2f1581b5bfef7e35fcc7cbf92 == cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92);
        cache_frame_9deaa8f2f1581b5bfef7e35fcc7cbf92 = NULL;
    }

    assertFrameObject(frame_9deaa8f2f1581b5bfef7e35fcc7cbf92);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_stream);
    par_stream = NULL;
    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;
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

    Py_XDECREF(par_stream);
    par_stream = NULL;
    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;
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
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);
    CHECK_OBJECT(par_strip);
    Py_DECREF(par_strip);
    CHECK_OBJECT(par_autoreset);
    Py_DECREF(par_autoreset);
    CHECK_OBJECT(par_wrap);
    Py_DECREF(par_wrap);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);
    CHECK_OBJECT(par_strip);
    Py_DECREF(par_strip);
    CHECK_OBJECT(par_autoreset);
    Py_DECREF(par_autoreset);
    CHECK_OBJECT(par_wrap);
    Py_DECREF(par_wrap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__1__wipe_internal_state_for_tests() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function__1__wipe_internal_state_for_tests,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c1983a763ded56e5dce8e60f92f2295,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__2_reset_all() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function__2_reset_all,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0fc5e177395b31be1596a36ac824d889,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__3_init(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function__3_init,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f6eaf4d6f47aaf536cca40f3a4554bd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__4_deinit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function__4_deinit,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c74376f568683e12f09809cb961fefaf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__5_just_fix_windows_console() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function__5_just_fix_windows_console,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_20a1bf6fd019f9985e84df75601616e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__6_colorama_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function__6_colorama_text,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c029c32054ebb8f24a6b7701049d5131,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__7_reinit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function__7_reinit,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e2f4c92d0a8d0e4fef776643817c9a60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function__8_wrap_stream() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function__8_wrap_stream,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9deaa8f2f1581b5bfef7e35fcc7cbf92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
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

static function_impl_code const function_table_colorama$initialise[] = {
    impl_colorama$initialise$$$function__1__wipe_internal_state_for_tests,
    impl_colorama$initialise$$$function__2_reset_all,
    impl_colorama$initialise$$$function__3_init,
    impl_colorama$initialise$$$function__4_deinit,
    impl_colorama$initialise$$$function__5_just_fix_windows_console,
    impl_colorama$initialise$$$function__6_colorama_text,
    impl_colorama$initialise$$$function__7_reinit,
    impl_colorama$initialise$$$function__8_wrap_stream,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_colorama$initialise);

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
        module_colorama$initialise,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_colorama$initialise,
        sizeof(function_table_colorama$initialise) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_colorama$initialise(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("colorama$initialise");

    // Store the module for future use.
    module_colorama$initialise = module;

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
        PRINT_STRING("colorama$initialise: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("colorama$initialise: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "colorama.initialise" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcolorama$initialise\n");

    moduledict_colorama$initialise = MODULE_DICT(module_colorama$initialise);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_colorama$initialise,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_colorama$initialise,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[51]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_colorama$initialise,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_colorama$initialise,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_colorama$initialise,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_colorama$initialise);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_colorama$initialise);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_7a420c1f0cee259e26c8966f2089aded;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_2);
    }
    frame_7a420c1f0cee259e26c8966f2089aded = MAKE_MODULE_FRAME(codeobj_7a420c1f0cee259e26c8966f2089aded, module_colorama$initialise);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7a420c1f0cee259e26c8966f2089aded);
    assert(Py_REFCNT(frame_7a420c1f0cee259e26c8966f2089aded) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[30];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_colorama$initialise;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[36];
        frame_7a420c1f0cee259e26c8966f2089aded->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[37];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_colorama$initialise;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[36];
        frame_7a420c1f0cee259e26c8966f2089aded->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[38];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_colorama$initialise;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[39];
        tmp_level_value_3 = mod_consts[40];
        frame_7a420c1f0cee259e26c8966f2089aded->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_colorama$initialise,
                mod_consts[9],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_colorama$initialise$$$function__1__wipe_internal_state_for_tests();

        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_colorama$initialise$$$function__2_reset_all();

        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[42];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_10 = MAKE_FUNCTION_colorama$initialise$$$function__3_init(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_colorama$initialise$$$function__4_deinit();

        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_colorama$initialise$$$function__5_just_fix_windows_console();

        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_colorama$initialise$$$function__6_colorama_text();

        frame_7a420c1f0cee259e26c8966f2089aded->m_frame.f_lineno = 95;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[44], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_colorama$initialise$$$function__7_reinit();

        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_colorama$initialise$$$function__8_wrap_stream();

        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_15);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_7a420c1f0cee259e26c8966f2089aded->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a420c1f0cee259e26c8966f2089aded, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a420c1f0cee259e26c8966f2089aded->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a420c1f0cee259e26c8966f2089aded, exception_lineno);
    }



    assertFrameObject(frame_7a420c1f0cee259e26c8966f2089aded);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("colorama$initialise", false);

    Py_INCREF(module_colorama$initialise);
    return module_colorama$initialise;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("colorama$initialise", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
