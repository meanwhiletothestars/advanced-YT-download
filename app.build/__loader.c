
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/tracing.h"
#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 24 > 0
static unsigned char *bytecode_data[24];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansitowin32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$initialise(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$win32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$winterm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_dist_ver(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_monitor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_tqdm_pandas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$cli(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$gui(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$std(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\Desktop\\1\\advanced-YT-download\\app.py"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\Desktop\\1\\advanced-YT-download\\app.py"
#endif
},
    {"colorama", modulecode_colorama, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\colorama\\__init__.py"
#endif
},
    {"colorama.ansi", modulecode_colorama$ansi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\colorama\\ansi.py"
#endif
},
    {"colorama.ansitowin32", modulecode_colorama$ansitowin32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\colorama\\ansitowin32.py"
#endif
},
    {"colorama.initialise", modulecode_colorama$initialise, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\colorama\\initialise.py"
#endif
},
    {"colorama.win32", modulecode_colorama$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\colorama\\win32.py"
#endif
},
    {"colorama.winterm", modulecode_colorama$winterm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\colorama\\winterm.py"
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\multiprocessing-postLoad.py"
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\multiprocessing-preLoad.py"
#endif
},
    {"requests", modulecode_requests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\__init__.py"
#endif
},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\__version__.py"
#endif
},
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\_internal_utils.py"
#endif
},
    {"requests.adapters", modulecode_requests$adapters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\adapters.py"
#endif
},
    {"requests.api", modulecode_requests$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\api.py"
#endif
},
    {"requests.auth", modulecode_requests$auth, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\auth.py"
#endif
},
    {"requests.certs", modulecode_requests$certs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\certs.py"
#endif
},
    {"requests.compat", modulecode_requests$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\compat.py"
#endif
},
    {"requests.cookies", modulecode_requests$cookies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\cookies.py"
#endif
},
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\exceptions.py"
#endif
},
    {"requests.hooks", modulecode_requests$hooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\hooks.py"
#endif
},
    {"requests.models", modulecode_requests$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\models.py"
#endif
},
    {"requests.packages", modulecode_requests$packages, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\packages.py"
#endif
},
    {"requests.sessions", modulecode_requests$sessions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\sessions.py"
#endif
},
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\status_codes.py"
#endif
},
    {"requests.structures", modulecode_requests$structures, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\structures.py"
#endif
},
    {"requests.utils", modulecode_requests$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\requests\\utils.py"
#endif
},
    {"tqdm", modulecode_tqdm, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\tqdm\\__init__.py"
#endif
},
    {"tqdm._dist_ver", modulecode_tqdm$_dist_ver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\tqdm\\_dist_ver.py"
#endif
},
    {"tqdm._monitor", modulecode_tqdm$_monitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\tqdm\\_monitor.py"
#endif
},
    {"tqdm._tqdm_pandas", modulecode_tqdm$_tqdm_pandas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\tqdm\\_tqdm_pandas.py"
#endif
},
    {"tqdm.cli", modulecode_tqdm$cli, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\tqdm\\cli.py"
#endif
},
    {"tqdm.gui", modulecode_tqdm$gui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\tqdm\\gui.py"
#endif
},
    {"tqdm.std", modulecode_tqdm$std, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\tqdm\\std.py"
#endif
},
    {"tqdm.utils", modulecode_tqdm$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\tqdm\\utils.py"
#endif
},
    {"tqdm.version", modulecode_tqdm$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\site-packages\\tqdm\\version.py"
#endif
},
    {"json", NULL, 0, 14243, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\json\\__init__.py"
#endif
},
    {"json.decoder", NULL, 1, 15210, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\json\\decoder.py"
#endif
},
    {"json.encoder", NULL, 2, 16832, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\json\\encoder.py"
#endif
},
    {"json.scanner", NULL, 3, 3670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\json\\scanner.py"
#endif
},
    {"multiprocessing", NULL, 4, 1132, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\__init__.py"
#endif
},
    {"multiprocessing.connection", NULL, 5, 49020, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\connection.py"
#endif
},
    {"multiprocessing.context", NULL, 6, 19576, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\context.py"
#endif
},
    {"multiprocessing.dummy", NULL, 7, 6261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\dummy\\__init__.py"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 8, 3996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\dummy\\connection.py"
#endif
},
    {"multiprocessing.forkserver", NULL, 9, 17039, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\forkserver.py"
#endif
},
    {"multiprocessing.heap", NULL, 10, 14705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\heap.py"
#endif
},
    {"multiprocessing.managers", NULL, 11, 73552, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\managers.py"
#endif
},
    {"multiprocessing.pool", NULL, 12, 47389, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\pool.py"
#endif
},
    {"multiprocessing.popen_spawn_win32", NULL, 13, 6701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\popen_spawn_win32.py"
#endif
},
    {"multiprocessing.process", NULL, 14, 19191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\process.py"
#endif
},
    {"multiprocessing.queues", NULL, 15, 20023, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\queues.py"
#endif
},
    {"multiprocessing.reduction", NULL, 16, 15004, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\reduction.py"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 17, 10002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\resource_sharer.py"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 18, 12728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\resource_tracker.py"
#endif
},
    {"multiprocessing.shared_memory", NULL, 19, 24563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\shared_memory.py"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 20, 12087, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\sharedctypes.py"
#endif
},
    {"multiprocessing.spawn", NULL, 21, 12740, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\spawn.py"
#endif
},
    {"multiprocessing.synchronize", NULL, 22, 22548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\synchronize.py"
#endif
},
    {"multiprocessing.util", NULL, 23, 20404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"C:\\Users\\admin\\AppData\\Local\\Programs\\Python\\Python311\\Lib\\multiprocessing\\util.py"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, (PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Calling _loadBytesCodesBlob.");
    _loadBytesCodesBlob(NULL);

    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Updating frozen module table sizes.");

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

