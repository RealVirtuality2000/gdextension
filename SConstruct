#!/usr/bin/env python
from glob import glob
from pathlib import Path

# TODO: Do not copy environment after godot-cpp/test is updated <https://github.com/godotengine/godot-cpp/blob/master/test/SConstruct>.
env = SConscript("godot-cpp/SConstruct")

# dont handle warnings as error
env.Append(LINKFLAGS=['/NODEFAULTLIB:libucrt.lib'])
env.Append(LINKFLAGS=['/WX:NO'])
env.Append(LINKFLAGS=['/IGNORE:4098'])

# Add source files.
env.Append(CPPPATH=["src/"])
sources = Glob("src/*.cpp")

# Find gdextension path even if the directory or extension is renamed (e.g. project/addons/example/example.gdextension).
(extension_path,) = glob("project/addons/*/*.gdextension")

# Find the addon path (e.g. project/addons/example).
addon_path = Path(extension_path).parent

# Find the project name from the gdextension file (e.g. example).
project_name = Path(extension_path).stem

# Wwise SDK paths
wwise_sdk_path = Path("C:/Program Files (x86)/Audiokinetic/Wwise2023.1.4.8496/SDK")
wwise_include_path = wwise_sdk_path / "include"
wwise_lib_path = wwise_sdk_path / "x64_vc170" / "Debug" / "lib"

# Append Wwise SDK paths
env.Append(CPPPATH=[str(wwise_include_path), str(wwise_include_path / "AK/WwiseAuthoringAPI/AkAutobahn")])
env.Append(LIBPATH=[str(wwise_lib_path)])

# Add Wwise libraries
env.Append(LIBS=[
    'AkSoundEngine',  # Wwise Sound Engine Library
    'AkMemoryMgr',
    'AkStreamMgr',
    'AkMusicEngine',
    'CommunicationCentral',
    'AkAutobahn'
    # Add other Wwise libraries you need here
])

# TODO: Cache is disabled currently.
# scons_cache_path = os.environ.get("SCONS_CACHE")
# if scons_cache_path != None:
#     CacheDir(scons_cache_path)
#     print("Scons cache enabled... (path: '" + scons_cache_path + "')")

# Create the library target (e.g. libexample.linux.debug.x86_64.so).
debug_or_release = "release" if env["target"] == "template_release" else "debug"
if env["platform"] == "macos":
    library = env.SharedLibrary(
        "{0}/bin/lib{1}.{2}.{3}.framework/{1}.{2}.{3}".format(
            addon_path,
            project_name,
            env["platform"],
            debug_or_release,
        ),
        source=sources,
    )
else:
    library = env.SharedLibrary(
        "{}/bin/lib{}.{}.{}.{}{}".format(
            addon_path,
            project_name,
            env["platform"],
            debug_or_release,
            env["arch"],
            env["SHLIBSUFFIX"],
        ),
        source=sources,
    )

Default(library)

