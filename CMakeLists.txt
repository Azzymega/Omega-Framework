cmake_minimum_required(VERSION 3.25)
project(LEGACYRuntime)
set(CMAKE_CXX_FLAGS -static-libgcc)
set(CMAKE_CXX_FLAGS -static-libstdc++)
set(CMAKE_CXX_FLAGS -Wall)
set(CMAKE_CXX_STANDARD 17)
set ( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON )
add_library(OmegaAbstractionBridge SHARED OmegaAbstractionBridge/Core/Utility/CommandAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/CommandAnalyzer.h OmegaRuntime/Architecture/OperableTypes/ObjectsPrimitives/Parameter.cpp
        OmegaAbstractionBridge/Core/Utility/ParameterAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/ParameterAnalyzer.h OmegaAbstractionBridge/Core/Utility/Range.cpp
        OmegaAbstractionBridge/Core/Utility/Range.h OmegaAbstractionBridge/Core/Utility/FieldAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/FieldAnalyzer.h OmegaAbstractionBridge/Core/Utility/ObjectAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/ObjectAnalyzer.h OmegaAbstractionBridge/Core/Utility/NamespaceAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/NamespaceAnalyzer.h OmegaAbstractionBridge/Core/Utility/ModuleAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/ModuleAnalyzer.h OmegaAbstractionBridge/Core/Utility/AssemblyAnalyzer.cpp
        OmegaAbstractionBridge/Core/Utility/MethodAnalyzer.cpp OmegaAbstractionBridge/Core/Utility/MethodAnalyzer.h
        OmegaAbstractionBridge/Core/Abstract/StaticAnalyzer.cpp OmegaAbstractionBridge/Core/Abstract/StaticAnalyzer.h
        OmegaAbstractionBridge/Core/Utility/AssemblyAnalyzer.h)
add_library(OmegaCTS SHARED OmegaCTS/Core/Type.cpp OmegaCTS/Core/Type.h OmegaCTS/Core/ArchitecturalDefines.h OmegaCTS/Core/CTSObject.h
        OmegaCTS/Core/Object.cpp OmegaCTS/Primitives/PrimitiveReturnables.cpp OmegaCTS/Primitives/PrimitiveReturnables.h
        OmegaCTS/Primitives/PInteger.cpp OmegaCTS/Primitives/PInteger.h OmegaCTS/Primitives/PString.cpp OmegaCTS/Primitives/PString.h
        OmegaCTS/BTS/SystemString.cpp OmegaCTS/BTS/SystemString.h OmegaCTS/BTS/SystemInteger.cpp OmegaCTS/BTS/SystemInteger.h
        OmegaCTS/Core/CTS.cpp OmegaCTS/Core/CTS.h)
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
add_library(OmegaRuntime SHARED OmegaRuntime/Architecture/PrimitiveDataTypes/Register.cpp OmegaRuntime/Architecture/PrimitiveDataTypes/Register.h OmegaRuntime/Architecture/ArchitecturalDefines/Core/RegistersType.cpp
        OmegaRuntime/Architecture/ArchitecturalDefines/Core/RegistersType.h OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.cpp
        OmegaRuntime/Architecture/PrimitiveDataTypes/Stack.h OmegaRuntime/Architecture/PrimitiveDataTypes/Cell.cpp
        OmegaRuntime/Architecture/PrimitiveDataTypes/Cell.h OmegaRuntime/Runtime/DataTypes/ROM.cpp
        OmegaRuntime/Runtime/DataTypes/ROM.h OmegaRuntime/Architecture/PrimitiveDataTypes/Registry.cpp
        OmegaRuntime/Architecture/PrimitiveDataTypes/Registry.h
        OmegaRuntime/Architecture/PrimitiveAbstractions/Depository.cpp OmegaRuntime/Architecture/PrimitiveAbstractions/Depository.h
        OmegaRuntime/Runtime/Core/Runtime.cpp OmegaRuntime/Runtime/Core/Runtime.h
        OmegaRuntime/Architecture/PrimitiveAbstractions/Archive.cpp OmegaRuntime/Architecture/PrimitiveAbstractions/Archive.h
        OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/Assembly.h OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/Module.h OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/ModuleType.h
        OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/Namespace.h OmegaRuntime/Architecture/ArchitecturalDefines/RuntimeArtifacts/OEX.cpp OmegaRuntime/Architecture/ArchitecturalDefines/RuntimeArtifacts/RLL.h
        OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/Module.cpp OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/Assembly.cpp OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/ModuleType.cpp
        OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/Namespace.cpp OmegaRuntime/Architecture/OperableTypes/RuntimeAbstractions/ObjectIdentifier.cpp OmegaRuntime/Architecture/ArchitecturalDefines/RuntimeArtifacts/RLL.cpp
        OmegaRuntime/Architecture/OperableTypes/LanguageStructures/Structure.cpp OmegaRuntime/Architecture/OperableTypes/LanguageStructures/Structure.h
        OmegaRuntime/Architecture/PrimitiveOperations/Add.cpp
        OmegaRuntime/Architecture/PrimitiveOperations/Add.h OmegaRuntime/Architecture/PrimitiveAbstractions/Command.cpp OmegaRuntime/Architecture/PrimitiveAbstractions/Command.h
        OmegaRuntime/Architecture/PrimitiveOperations/Sload.cpp OmegaRuntime/Architecture/PrimitiveOperations/Sload.h OmegaRuntime/Architecture/PrimitiveOperations/ISLoad.cpp
        OmegaRuntime/Architecture/PrimitiveOperations/ISLoad.h OmegaRuntime/Architecture/PrimitiveOperations/SILoad.cpp OmegaRuntime/Architecture/PrimitiveOperations/SILoad.h
        OmegaRuntime/Architecture/PrimitiveOperations/Pop.cpp OmegaRuntime/Architecture/PrimitiveOperations/Pop.h
        OmegaRuntime/Architecture/OperableTypes/LanguageStructures/Class.cpp OmegaRuntime/Architecture/OperableTypes/ObjectsPrimitives/Method.cpp OmegaRuntime/Architecture/OperableTypes/LanguageStructures/Class.h
        OmegaRuntime/Architecture/OperableTypes/ObjectsPrimitives/Field.cpp
        OmegaRuntime/Architecture/OperableTypes/ObjectsPrimitives/Field.h OmegaRuntime/Architecture/OperableTypes/ObjectsPrimitives/Method.cpp
        OmegaRuntime/Architecture/OperableTypes/ObjectsPrimitives/Method.h)
add_library( OmegaSoftwareALComponent SHARED OmegaSoftwareALComponent/BasicAbstractions/SystemCall.cpp OmegaSoftwareALComponent/BasicAbstractions/SystemCall.h
        OmegaSoftwareALComponent/BasicAbstractions/SoftwareAbstractionLayer.cpp
        OmegaSoftwareALComponent/BasicAbstractions/SoftwareAbstractionLayer.h
        OmegaSoftwareALComponent/SystemCalls/PrintSystemCall.cpp OmegaSoftwareALComponent/SystemCalls/PrintSystemCall.h OmegaSoftwareALComponent/SystemCalls/GetSystemCall.cpp
        OmegaSoftwareALComponent/SystemCalls/GetSystemCall.h OmegaSoftwareALComponent/Manager/SystemCallManager.cpp OmegaSoftwareALComponent/Manager/SystemCallManager.h
        OmegaSoftwareALComponent/Utility/AbstractData.cpp OmegaSoftwareALComponent/Utility/AbstractData.h)
target_link_libraries(OmegaRuntime PUBLIC OmegaSoftwareALComponent)
target_link_libraries(OmegaCompilerService PUBLIC OmegaRuntime)
target_link_libraries(OmegaCTS PUBLIC OmegaRuntime)
target_link_libraries(OmegaAbstractionBridge PUBLIC OmegaRuntime)