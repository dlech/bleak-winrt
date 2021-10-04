# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-alpha.5

import enum
import typing
import uuid

import bleak_winrt._winrt as _winrt
try:
    import bleak_winrt.windows.devices.bluetooth
except Exception:
    pass

try:
    import bleak_winrt.windows.foundation
except Exception:
    pass

try:
    import bleak_winrt.windows.foundation.collections
except Exception:
    pass

try:
    import bleak_winrt.windows.storage.streams
except Exception:
    pass

class BluetoothLEAdvertisementFlags(enum.IntFlag):
    NONE = 0
    LIMITED_DISCOVERABLE_MODE = 0x1
    GENERAL_DISCOVERABLE_MODE = 0x2
    CLASSIC_NOT_SUPPORTED = 0x4
    DUAL_MODE_CONTROLLER_CAPABLE = 0x8
    DUAL_MODE_HOST_CAPABLE = 0x10

class BluetoothLEAdvertisementPublisherStatus(enum.IntEnum):
    CREATED = 0
    WAITING = 1
    STARTED = 2
    STOPPING = 3
    STOPPED = 4
    ABORTED = 5

class BluetoothLEAdvertisementType(enum.IntEnum):
    CONNECTABLE_UNDIRECTED = 0
    CONNECTABLE_DIRECTED = 1
    SCANNABLE_UNDIRECTED = 2
    NON_CONNECTABLE_UNDIRECTED = 3
    SCAN_RESPONSE = 4

class BluetoothLEAdvertisementWatcherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    STOPPING = 2
    STOPPED = 3
    ABORTED = 4

class BluetoothLEScanningMode(enum.IntEnum):
    PASSIVE = 0
    ACTIVE = 1

class BluetoothLEAdvertisement(_winrt.winrt_base):
    ...
    local_name: str
    flags: bleak_winrt.windows.foundation.IReference[BluetoothLEAdvertisementFlags]
    data_sections: bleak_winrt.windows.foundation.collections.IVector[BluetoothLEAdvertisementDataSection]
    manufacturer_data: bleak_winrt.windows.foundation.collections.IVector[BluetoothLEManufacturerData]
    service_uuids: bleak_winrt.windows.foundation.collections.IVector[uuid.UUID]
    def get_manufacturer_data_by_company_id(company_id: int) -> bleak_winrt.windows.foundation.collections.IVectorView[BluetoothLEManufacturerData]:
        ...
    def get_sections_by_type(type: int) -> bleak_winrt.windows.foundation.collections.IVectorView[BluetoothLEAdvertisementDataSection]:
        ...

class BluetoothLEAdvertisementBytePattern(_winrt.winrt_base):
    ...
    offset: int
    data_type: int
    data: bleak_winrt.windows.storage.streams.IBuffer

class BluetoothLEAdvertisementDataSection(_winrt.winrt_base):
    ...
    data_type: int
    data: bleak_winrt.windows.storage.streams.IBuffer

class BluetoothLEAdvertisementDataTypes(_winrt.winrt_base):
    ...
    advertising_interval: int
    appearance: int
    complete_local_name: int
    complete_service128_bit_uuids: int
    complete_service16_bit_uuids: int
    complete_service32_bit_uuids: int
    flags: int
    incomplete_service128_bit_uuids: int
    incomplete_service16_bit_uuids: int
    incomplete_service32_bit_uuids: int
    manufacturer_specific_data: int
    public_target_address: int
    random_target_address: int
    service_data128_bit_uuids: int
    service_data16_bit_uuids: int
    service_data32_bit_uuids: int
    service_solicitation128_bit_uuids: int
    service_solicitation16_bit_uuids: int
    service_solicitation32_bit_uuids: int
    shortened_local_name: int
    slave_connection_interval_range: int
    tx_power_level: int

class BluetoothLEAdvertisementFilter(_winrt.winrt_base):
    ...
    advertisement: BluetoothLEAdvertisement
    byte_patterns: bleak_winrt.windows.foundation.collections.IVector[BluetoothLEAdvertisementBytePattern]

class BluetoothLEAdvertisementPublisher(_winrt.winrt_base):
    ...
    advertisement: BluetoothLEAdvertisement
    status: BluetoothLEAdvertisementPublisherStatus
    def start() -> None:
        ...
    def stop() -> None:
        ...
    def add_status_changed(handler: bleak_winrt.windows.foundation.TypedEventHandler[BluetoothLEAdvertisementPublisher, BluetoothLEAdvertisementPublisherStatusChangedEventArgs]) -> bleak_winrt.windows.foundation.EventRegistrationToken:
        ...
    def remove_status_changed(token: bleak_winrt.windows.foundation.EventRegistrationToken) -> None:
        ...

class BluetoothLEAdvertisementPublisherStatusChangedEventArgs(_winrt.winrt_base):
    ...
    error: bleak_winrt.windows.devices.bluetooth.BluetoothError
    status: BluetoothLEAdvertisementPublisherStatus

class BluetoothLEAdvertisementReceivedEventArgs(_winrt.winrt_base):
    ...
    advertisement: BluetoothLEAdvertisement
    advertisement_type: BluetoothLEAdvertisementType
    bluetooth_address: int
    raw_signal_strength_in_d_bm: int
    timestamp: bleak_winrt.windows.foundation.DateTime

class BluetoothLEAdvertisementWatcher(_winrt.winrt_base):
    ...
    signal_strength_filter: bleak_winrt.windows.devices.bluetooth.BluetoothSignalStrengthFilter
    scanning_mode: BluetoothLEScanningMode
    advertisement_filter: BluetoothLEAdvertisementFilter
    max_out_of_range_timeout: bleak_winrt.windows.foundation.TimeSpan
    max_sampling_interval: bleak_winrt.windows.foundation.TimeSpan
    min_out_of_range_timeout: bleak_winrt.windows.foundation.TimeSpan
    min_sampling_interval: bleak_winrt.windows.foundation.TimeSpan
    status: BluetoothLEAdvertisementWatcherStatus
    def start() -> None:
        ...
    def stop() -> None:
        ...
    def add_received(handler: bleak_winrt.windows.foundation.TypedEventHandler[BluetoothLEAdvertisementWatcher, BluetoothLEAdvertisementReceivedEventArgs]) -> bleak_winrt.windows.foundation.EventRegistrationToken:
        ...
    def remove_received(token: bleak_winrt.windows.foundation.EventRegistrationToken) -> None:
        ...
    def add_stopped(handler: bleak_winrt.windows.foundation.TypedEventHandler[BluetoothLEAdvertisementWatcher, BluetoothLEAdvertisementWatcherStoppedEventArgs]) -> bleak_winrt.windows.foundation.EventRegistrationToken:
        ...
    def remove_stopped(token: bleak_winrt.windows.foundation.EventRegistrationToken) -> None:
        ...

class BluetoothLEAdvertisementWatcherStoppedEventArgs(_winrt.winrt_base):
    ...
    error: bleak_winrt.windows.devices.bluetooth.BluetoothError

class BluetoothLEManufacturerData(_winrt.winrt_base):
    ...
    data: bleak_winrt.windows.storage.streams.IBuffer
    company_id: int

