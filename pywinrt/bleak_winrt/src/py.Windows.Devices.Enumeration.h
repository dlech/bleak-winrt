// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-alpha.1

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Background.h")
#include "py.Windows.ApplicationModel.Background.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#if __has_include("py.Windows.UI.Popups.h")
#include "py.Windows.UI.Popups.h"
#endif

#include <winrt/Windows.Devices.Enumeration.h>

namespace py::proj::Windows::Devices::Enumeration
{}

namespace py::impl::Windows::Devices::Enumeration
{}

namespace py::wrapper::Windows::Devices::Enumeration
{
    using DeviceAccessChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceAccessChangedEventArgs>;
    using DeviceAccessInformation = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceAccessInformation>;
    using DeviceConnectionChangeTriggerDetails = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails>;
    using DeviceDisconnectButtonClickedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs>;
    using DeviceInformation = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceInformation>;
    using DeviceInformationCollection = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceInformationCollection>;
    using DeviceInformationCustomPairing = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceInformationCustomPairing>;
    using DeviceInformationPairing = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceInformationPairing>;
    using DeviceInformationUpdate = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceInformationUpdate>;
    using DevicePairingRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DevicePairingRequestedEventArgs>;
    using DevicePairingResult = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DevicePairingResult>;
    using DevicePicker = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DevicePicker>;
    using DevicePickerAppearance = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DevicePickerAppearance>;
    using DevicePickerFilter = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DevicePickerFilter>;
    using DeviceSelectedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceSelectedEventArgs>;
    using DeviceThumbnail = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceThumbnail>;
    using DeviceUnpairingResult = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceUnpairingResult>;
    using DeviceWatcher = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceWatcher>;
    using DeviceWatcherEvent = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceWatcherEvent>;
    using DeviceWatcherTriggerDetails = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::DeviceWatcherTriggerDetails>;
    using EnclosureLocation = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::EnclosureLocation>;
    using IDevicePairingSettings = py::winrt_wrapper<winrt::Windows::Devices::Enumeration::IDevicePairingSettings>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceAccessChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceAccessInformation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceInformation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceInformationCollection>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceInformationCustomPairing>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceInformationPairing>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceInformationUpdate>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DevicePairingRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DevicePairingResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DevicePicker>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DevicePickerAppearance>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DevicePickerFilter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceSelectedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceThumbnail>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceUnpairingResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceWatcher>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceWatcherEvent>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::DeviceWatcherTriggerDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::EnclosureLocation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Enumeration::IDevicePairingSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
