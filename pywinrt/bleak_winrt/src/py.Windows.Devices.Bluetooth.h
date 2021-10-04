// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-alpha.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Bluetooth.GenericAttributeProfile.h")
#include "py.Windows.Devices.Bluetooth.GenericAttributeProfile.h"
#endif

#if __has_include("py.Windows.Devices.Bluetooth.Rfcomm.h")
#include "py.Windows.Devices.Bluetooth.Rfcomm.h"
#endif

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
#endif

#if __has_include("py.Windows.Devices.Radios.h")
#include "py.Windows.Devices.Radios.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Networking.h")
#include "py.Windows.Networking.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Devices.Bluetooth.h>

namespace py::proj::Windows::Devices::Bluetooth
{}

namespace py::impl::Windows::Devices::Bluetooth
{}

namespace py::wrapper::Windows::Devices::Bluetooth
{
    using BluetoothAdapter = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothAdapter>;
    using BluetoothClassOfDevice = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothClassOfDevice>;
    using BluetoothDevice = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothDevice>;
    using BluetoothDeviceId = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothDeviceId>;
    using BluetoothLEAppearance = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearance>;
    using BluetoothLEAppearanceCategories = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearanceCategories>;
    using BluetoothLEAppearanceSubcategories = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearanceSubcategories>;
    using BluetoothLEDevice = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothLEDevice>;
    using BluetoothSignalStrengthFilter = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>;
    using BluetoothUuidHelper = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::BluetoothUuidHelper>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothAdapter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothClassOfDevice>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothDevice>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothDeviceId>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearance>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearanceCategories>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearanceSubcategories>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothLEDevice>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::BluetoothUuidHelper>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
