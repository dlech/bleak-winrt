param ([switch]$skipNugetInstall)

$windows_sdk = '10.0.18362.0'
$repoRootPath = (Get-Item $PSScriptRoot).FullName
$nugetPath = "$repoRootPath\_nuget"
$projectionPath = "$PSScriptRoot"

if (!$skipNugetInstall) {
    nuget install Microsoft.Windows.PyWinRT -Prerelease -ExcludeVersion -OutputDirectory "$nugetPath"
    nuget install Microsoft.Windows.CppWinRT -ExcludeVersion -OutputDirectory "$nugetPath"
}

$pywinrt_exe = "$nugetPath\Microsoft.Windows.PyWinRT\bin\pywinrt.exe"
$cppwinrt_exe = "$nugetPath\Microsoft.Windows.CppWinRT\bin\cppwinrt.exe"

$cppwinrt_path = "$projectionPath\cppwinrt"
$pywinrt_path = "$projectionPath\pywinrt"

Remove-Item $cppwinrt_path -Recurse -Force -ErrorAction SilentlyContinue
Remove-Item $pywinrt_path -Recurse -Force -ErrorAction SilentlyContinue

$pyinclude = "Windows.Foundation", "Windows.Storage.Streams", "Windows.Devices.Bluetooth"
$pyexclude = "Windows.Foundation.Diagnostics", "Windows.Foundation.Metadata", "Windows.Foundation.Numerics", "Windows.Devices.Bluetooth.Rfcomm"

$pyin = $pyinclude | ForEach-Object { "-include", "$_" }
$pyout = $pyexclude | ForEach-Object { "-exclude", "$_" }

# FIXME: -include and -exclude don't seem to work for cppwinrt.exe
# it would be nice to only generate required files
& $cppwinrt_exe -input $windows_sdk -output $cppwinrt_path

$pyparams = ("-module", "bleak_winrt", "-input", $windows_sdk, "-output", $pywinrt_path, "-verbose") + $pyin + $pyout
& $pywinrt_exe $pyparams
