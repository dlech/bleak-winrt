# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-alpha.5

from . import _winrt
_winrt.init_apartment(_winrt.MTA)

def _import_ns_module(ns):
    import importlib.machinery
    import importlib.util

    try:
        module_name = "_bleak_winrt_" + ns.replace('.', '_')

        loader = importlib.machinery.ExtensionFileLoader(module_name, _winrt.__file__)
        spec = importlib.util.spec_from_loader(module_name, loader)
        module = importlib.util.module_from_spec(spec)
        loader.exec_module(module)
        return module
    except Exception:
        return None
