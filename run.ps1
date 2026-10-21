param([Parameter(Mandatory = $true)][string]$File)

if (-not (Get-Command g++ -ErrorAction SilentlyContinue)) {
    $env:Path += ";$env:LOCALAPPDATA\Microsoft\WinGet\Packages\BrechtSanders.WinLibs.POSIX.UCRT_Microsoft.Winget.Source_8wekyb3d8bbwe\mingw64\bin"
}

$name = [IO.Path]::GetFileNameWithoutExtension($File)
$exe  = Join-Path $PSScriptRoot "build\$name.exe"

g++ -std=c++17 -O2 -Wall -DLOCAL $File -o $exe
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

& $exe
