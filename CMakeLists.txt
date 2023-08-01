cmake_minimum_required(VERSION 3.25)
project(LEGACYRuntime)
set(CMAKE_CXX_FLAGS -static-libgcc)
set(CMAKE_CXX_FLAGS -static-libstdc++)
set(CMAKE_CXX_STANDARD 17)
set ( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON )
add_executable(OmegaNaIGEN OmegaNaIGEN/cmplr.cpp OmegaNaIGEN/cmplr.h OmegaLoaderComponent/ldr.h OmegaLoaderComponent/ldr.cpp)
add_executable(OmegaLoader OmegaLoader/bootstrap.cpp OmegaLoader/bootstrap.h LEGACYRuntime/microcode.cpp)
add_executable(OmegaJIT OmegaJIT/main.cpp)
add_library( OmegaRuntime SHARED OmegaRuntime/Architecture/PrimitiveDataTypes/Register.cpp
        OmegaRuntime/Architecture/PrimitiveDataTypes/Register.h OmegaRuntime/Architecture/ArchitecturalDefines/RegistersType.cpp
        OmegaRuntime/Architecture/ArchitecturalDefines/RegistersType.h OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.cpp
        OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h OmegaRuntime/Architecture/PrimitiveDataTypes/Cell.cpp
        OmegaRuntime/Architecture/PrimitiveDataTypes/Cell.h OmegaRuntime/Runtime/DataTypes/ROM.cpp
        OmegaRuntime/Runtime/DataTypes/ROM.h OmegaRuntime/Architecture/PrimitiveDataTypes/Registry.cpp
        OmegaRuntime/Architecture/PrimitiveDataTypes/Registry.h
        OmegaRuntime/Architecture/PrimitiveAbstractions/Depository.cpp OmegaRuntime/Architecture/PrimitiveAbstractions/Depository.h
        OmegaRuntime/Architecture/PrimitiveAbstractions/Operation.cpp OmegaRuntime/Architecture/PrimitiveAbstractions/Operation.h
        OmegaRuntime/Runtime/Core/Runtime.cpp OmegaRuntime/Runtime/Core/Runtime.h OmegaRuntime/Runtime/Analyzer/Abstract/StaticAnalyzer.cpp
        OmegaRuntime/Runtime/Analyzer/Abstract/StaticAnalyzer.h OmegaRuntime/Runtime/Analyzer/Utility/ROMAnalyzer.cpp
        OmegaRuntime/Runtime/Analyzer/Utility/ROMAnalyzer.h OmegaRuntime/Architecture/PrimitiveOperations/HLT.cpp
        OmegaRuntime/Architecture/PrimitiveOperations/HLT.h OmegaRuntime/Architecture/PrimitiveOperations/MOV.cpp OmegaRuntime/Architecture/PrimitiveOperations/MOV.h
        OmegaRuntime/Architecture/PrimitiveAbstractions/Archive.cpp OmegaRuntime/Architecture/PrimitiveAbstractions/Archive.h
        OmegaRuntime/Architecture/PrimitiveOperations/ADD.cpp OmegaRuntime/Architecture/PrimitiveOperations/ADD.h
        OmegaRuntime/Architecture/PrimitiveOperations/JMP.cpp OmegaRuntime/Architecture/PrimitiveOperations/JMP.h OmegaRuntime/Architecture/PrimitiveOperations/CMV.cpp OmegaRuntime/Architecture/PrimitiveOperations/CMV.h OmegaRuntime/Architecture/PrimitiveOperations/SCL.cpp OmegaRuntime/Architecture/PrimitiveOperations/SCL.h OmegaRuntime/Architecture/PrimitiveOperations/PSH.cpp OmegaRuntime/Architecture/PrimitiveOperations/PSH.h OmegaRuntime/Architecture/PrimitiveOperations/POP.cpp OmegaRuntime/Architecture/PrimitiveOperations/POP.h)
add_library( OmegaSoftwareALComponent SHARED OmegaSoftwareALComponent/BasicAbstractions/SystemCall.cpp OmegaSoftwareALComponent/BasicAbstractions/SystemCall.h
        OmegaSoftwareALComponent/BasicAbstractions/SoftwareAbstractionLayer.cpp
        OmegaSoftwareALComponent/BasicAbstractions/SoftwareAbstractionLayer.h
        OmegaSoftwareALComponent/SystemCalls/PrintSystemCall.cpp OmegaSoftwareALComponent/SystemCalls/PrintSystemCall.h OmegaSoftwareALComponent/SystemCalls/GetSystemCall.cpp
        OmegaSoftwareALComponent/SystemCalls/GetSystemCall.h OmegaSoftwareALComponent/Manager/SystemCallManager.cpp OmegaSoftwareALComponent/Manager/SystemCallManager.h
        OmegaSoftwareALComponent/Utility/AbstractData.cpp OmegaSoftwareALComponent/Utility/AbstractData.h)
#add_library( LEGACYRuntime SHARED LEGACYRuntime/cpu.cpp LEGACYRuntime/cpu.h LEGACYRuntime/microcode.cpp LEGACYRuntime/microcode.h OmegaLoaderComponent/ldr.h) Устаревшее
add_library( OmegaLoaderComponent SHARED OmegaLoaderComponent/ldr.cpp OmegaLoaderComponent/ldr.h)
add_library( OmegaWriterComponent SHARED OmegaWriterComponent/wrtr.cpp OmegaWriterComponent/wrtr.h)
add_library( OmegaNaIGENComponent SHARED OmegaNaIGEN/image.cpp OmegaNaIGEN/image.h OmegaNaIGENComponent/token.cpp OmegaNaIGENComponent/token.h OmegaNaIGENComponent/tokenFactory.cpp OmegaNaIGENComponent/tokenFactory.h OmegaNaIGENComponent/mov.cpp OmegaNaIGENComponent/mov.h OmegaNaIGENComponent/cmv.cpp OmegaNaIGENComponent/cmv.h OmegaNaIGENComponent/hlt.cpp OmegaNaIGENComponent/hlt.h OmegaNaIGENComponent/jmp.cpp OmegaNaIGENComponent/jmp.h OmegaNaIGENComponent/add.cpp OmegaNaIGENComponent/add.h OmegaNaIGENComponent/sub.cpp OmegaNaIGENComponent/sub.h OmegaNaIGENComponent/SCL.cpp OmegaNaIGENComponent/SCL.h)
add_library( OmegaJITComponent SHARED OmegaJITComponent/cmplr.cpp OmegaJITComponent/cmplr.h OmegaJITComponent/image.cpp OmegaJITComponent/image.h OmegaJITComponent/cmplr.h)
target_link_libraries(OmegaJITComponent PUBLIC OmegaWriterComponent)
target_link_libraries(OmegaJITComponent PUBLIC OmegaLoaderComponent)
target_link_libraries(OmegaJITComponent PUBLIC OmegaRuntime)
target_link_libraries(OmegaJITComponent PUBLIC OmegaNaIGENComponent)
target_link_libraries(OmegaRuntime PUBLIC OmegaSoftwareALComponent)
target_link_libraries(OmegaNaIGEN PUBLIC OmegaWriterComponent)
target_link_libraries(OmegaNaIGEN PUBLIC OmegaNaIGENComponent)
target_link_libraries(OmegaJIT PUBLIC OmegaWriterComponent)
target_link_libraries(OmegaJIT PUBLIC OmegaNaIGENComponent)
target_link_libraries(OmegaNaIGEN PUBLIC OmegaRuntime)
target_link_libraries(OmegaLoader PUBLIC OmegaRuntime)
target_link_libraries(OmegaJIT PUBLIC OmegaRuntime)