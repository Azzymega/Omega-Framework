cmake_minimum_required(VERSION 3.25)
project(LEGACYRuntime)
set(CMAKE_CXX_FLAGS -static-libgcc)
set(CMAKE_CXX_FLAGS -static-libstdc++)
set(CMAKE_CXX_FLAGS -Wall)
set(CMAKE_CXX_STANDARD 17)
set ( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON )
add_library(OmegaAbstractionComponents STATIC OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Register.cpp
        OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Register.h
        OmegaAbstractionComponents/Architecture/ArchitecturalDefines/Core/Core.h OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.cpp
        OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Stack.h OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Cell.cpp
        OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Cell.h
        OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Registry.cpp
        OmegaAbstractionComponents/Architecture/PrimitiveDataTypes/Registry.h
        OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Depository.cpp
        OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Depository.h OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Archive.cpp OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Archive.h
        OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Assembly.h OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Module.h OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/ModuleType.h
        OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Namespace.h
        OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Module.cpp OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Assembly.cpp OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/ModuleType.cpp
        OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Namespace.cpp OmegaAbstractionComponents/Architecture/OperableTypes/RuntimeAbstractions/Object.cpp
        OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Method.cpp
        OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Field.cpp
        OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Field.h OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Method.cpp
        OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Method.h Test/main.cpp OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Parameter.cpp OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.cpp)
add_library(OmegaCTS STATIC OmegaCTS/Core/Type.cpp OmegaCTS/Core/Type.h OmegaCTS/Core/ArchitecturalDefines.h OmegaCTS/Core/CTSObject.h
        OmegaCTS/Core/Object.cpp OmegaCTS/Primitives/PrimitiveReturnables.cpp OmegaCTS/Primitives/PrimitiveReturnables.h
        OmegaCTS/Primitives/PInteger.cpp OmegaCTS/Primitives/PInteger.h OmegaCTS/Primitives/PString.cpp OmegaCTS/Primitives/PString.h
        OmegaCTS/BTS/SystemString.cpp OmegaCTS/BTS/SystemString.h OmegaCTS/BTS/SystemInteger.cpp OmegaCTS/BTS/SystemInteger.h
        OmegaCTS/Core/CTS.h
        OmegaCTS/Core/CTS.cpp)
add_executable(OM Test/main.cpp)
add_library(OmegaAbstractionBridge STATIC OmegaAbstractionBridge/Core/Utility/CommandAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/CommandAnalyzer.h OmegaAbstractionComponents/Architecture/OperableTypes/ObjectsPrimitives/Parameter.cpp
        OmegaAbstractionBridge/Core/Utility/ParameterAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/ParameterAnalyzer.h OmegaAbstractionBridge/Core/Utility/Range.cpp
        OmegaAbstractionBridge/Core/Utility/Range.h OmegaAbstractionBridge/Core/Utility/FieldAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/FieldAnalyzer.h OmegaAbstractionBridge/Core/Utility/ObjectAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/ObjectAnalyzer.h OmegaAbstractionBridge/Core/Utility/NamespaceAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/NamespaceAnalyzer.h OmegaAbstractionBridge/Core/Utility/ModuleAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/ModuleAnalyzer.h OmegaAbstractionBridge/Core/Utility/AssemblyAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/MethodAnalyzer.cpp OmegaAbstractionBridge/Core/Utility/MethodAnalyzer.h
        OmegaAbstractionBridge/Core/Abstract/StaticAnalyzer.cpp OmegaAbstractionBridge/Core/Abstract/StaticAnalyzer.h
        OmegaAbstractionBridge/Core/Utility/AssemblyAnalyzer.h OmegaAbstractionBridge/Core/Utility/CommandAnalyzer.cpp OmegaAbstractionBridge/Core/Utility/CommandParameterAnalyzer.cpp OmegaAbstractionBridge/Core/Utility/CommandParameterAnalyzer.h)
add_library(OmegaRuntime STATIC
        OmegaRuntime/Runtime/GarbageCollector/OverAbstractions/GCHandler.cpp OmegaRuntime/Runtime/GarbageCollector/OverAbstractions/GCHandler.h
        OmegaRuntime/Runtime/Core/Runtime.cpp OmegaRuntime/Runtime/Core/Runtime.h OmegaRuntime/Runtime/PrimitiveOperations/Add.cpp
        OmegaRuntime/Runtime/PrimitiveOperations/Add.h OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.cpp OmegaAbstractionComponents/Architecture/PrimitiveAbstractions/Command.h
        OmegaRuntime/Runtime/PrimitiveOperations/Sload.cpp OmegaRuntime/Runtime/PrimitiveOperations/Sload.h OmegaRuntime/Runtime/PrimitiveOperations/ISLoad.cpp
        OmegaRuntime/Runtime/PrimitiveOperations/ISLoad.h OmegaRuntime/Runtime/PrimitiveOperations/SILoad.cpp OmegaRuntime/Runtime/PrimitiveOperations/SILoad.h
        OmegaRuntime/Runtime/PrimitiveOperations/Pop.cpp OmegaRuntime/Runtime/PrimitiveOperations/Pop.h OmegaRuntime/Runtime/GarbageCollector/GC.cpp OmegaRuntime/Runtime/GarbageCollector/GC.h)
#[===[
add_library(OmegaCompilerService SHARED OmegaCompilerService/Core/Compiler.cpp OmegaCompilerService/Core/Compiler.h OmegaCompilerService/Core/ArchitecturalDefines.h OmegaCompilerService/Core/AbstractToken.cpp
        OmegaCompilerService/Core/AbstractToken.h OmegaCompilerService/Parsers/AbstractParser.cpp OmegaCompilerService/Parsers/AbstractParser.h OmegaCompilerService/Parsers/InstructionParser.cpp
        OmegaCompilerService/Parsers/InstructionParser.h OmegaCompilerService/Core/InstructionToken.cpp OmegaCompilerService/Core/InstructionToken.h OmegaCompilerService/Conglomerate/InstructionStackFactory.cpp
        OmegaCompilerService/Conglomerate/InstructionStackFactory.h OmegaCompilerService/Conglomerate/AbstractStackFactory.cpp OmegaCompilerService/Conglomerate/AbstractStackFactory.h
        OmegaCompilerService/Parsers/ParameterParser.cpp OmegaCompilerService/Parsers/ParameterParser.h OmegaCompilerService/Core/ParameterToken.cpp OmegaCompilerService/Core/ParameterToken.h
        OmegaCompilerService/Conglomerate/ParameterStackFactory.cpp OmegaCompilerService/Conglomerate/ParameterStackFactory.h OmegaCompilerService/Core/MethodToken.cpp
        OmegaCompilerService/Core/MethodToken.h OmegaCompilerService/Parsers/MethodParameterParser.cpp OmegaCompilerService/Parsers/MethodParameterParser.h
        OmegaCompilerService/Core/MethodParameterToken.cpp OmegaCompilerService/Core/MethodParameterToken.h OmegaCompilerService/Parsers/MethodParser.cpp OmegaCompilerService/Parsers/MethodParser.h
        OmegaCompilerService/Conglomerate/MethodStackFactory.cpp OmegaCompilerService/Conglomerate/MethodStackFactory.h OmegaCompilerService/Parsers/FieldParser.cpp
        OmegaCompilerService/Parsers/FieldParser.h OmegaCompilerService/Core/FieldToken.cpp OmegaCompilerService/Core/FieldToken.h OmegaCompilerService/Conglomerate/FieldStackFactory.cpp
        OmegaCompilerService/Conglomerate/FieldStackFactory.h)
add_library( OmegaSoftwareALComponent SHARED OmegaSoftwareALComponent/BasicAbstractions/SystemCall.cpp OmegaSoftwareALComponent/BasicAbstractions/SystemCall.h
        OmegaSoftwareALComponent/BasicAbstractions/SoftwareAbstractionLayer.cpp
        OmegaSoftwareALComponent/BasicAbstractions/SoftwareAbstractionLayer.h
        OmegaSoftwareALComponent/SystemCalls/PrintSystemCall.cpp OmegaSoftwareALComponent/SystemCalls/PrintSystemCall.h OmegaSoftwareALComponent/SystemCalls/GetSystemCall.cpp
        OmegaSoftwareALComponent/SystemCalls/GetSystemCall.h OmegaSoftwareALComponent/Manager/SystemCallManager.cpp OmegaSoftwareALComponent/Manager/SystemCallManager.h
        OmegaSoftwareALComponent/Utility/AbstractData.cpp OmegaSoftwareALComponent/Utility/AbstractData.h)

]===]
target_link_libraries(OM PUBLIC OmegaCTS)
target_link_libraries(OM PUBLIC OmegaAbstractionComponents)
target_link_libraries(OmegaAbstractionBridge PUBLIC OmegaCTS)
target_link_libraries(OmegaAbstractionBridge PUBLIC OmegaAbstractionComponents)
target_link_libraries(OmegaAbstractionBridge PUBLIC OmegaRuntime)
target_link_libraries(OmegaRuntime PUBLIC OmegaCTS)
target_link_libraries(OmegaRuntime PUBLIC OmegaAbstractionComponents)
target_link_libraries(OmegaRuntime PUBLIC OmegaAbstractionBridge)
target_link_libraries(OM PUBLIC OmegaRuntime)