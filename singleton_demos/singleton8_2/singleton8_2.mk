##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=singleton8_2
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/janice/Documents/FinalCPP/C_and_CPP_Daily_Improvement/singleton_demos
ProjectPath            :=/home/janice/Documents/FinalCPP/C_and_CPP_Daily_Improvement/singleton_demos/singleton8_2
IntermediateDirectory  :=../build-$(ConfigurationName)/singleton8_2
OutDir                 :=../build-$(ConfigurationName)/singleton8_2
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=liwei
Date                   :=30/05/23
CodeLitePath           :=/home/liwei/.codelite
LinkerName             :=/usr/bin/g++-12
SharedObjectLinkerName :=/usr/bin/g++-12 -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++-12
CC       := /usr/bin/gcc-12
CXXFLAGS :=  -g -O0 -Wall -std=c++20 $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/singleton8_2/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/singleton8_2/sing.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/singleton8_2/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/singleton8_2"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/singleton8_2"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/singleton8_2/.d:
	@mkdir -p "../build-$(ConfigurationName)/singleton8_2"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/singleton8_2/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/singleton8_2/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/janice/Documents/FinalCPP/C_and_CPP_Daily_Improvement/singleton_demos/singleton8_2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/singleton8_2/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/singleton8_2/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/singleton8_2/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/singleton8_2/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/singleton8_2/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/singleton8_2/sing.cpp$(ObjectSuffix): sing.cpp ../build-$(ConfigurationName)/singleton8_2/sing.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/janice/Documents/FinalCPP/C_and_CPP_Daily_Improvement/singleton_demos/singleton8_2/sing.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sing.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/singleton8_2/sing.cpp$(DependSuffix): sing.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/singleton8_2/sing.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/singleton8_2/sing.cpp$(DependSuffix) -MM sing.cpp

../build-$(ConfigurationName)/singleton8_2/sing.cpp$(PreprocessSuffix): sing.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/singleton8_2/sing.cpp$(PreprocessSuffix) sing.cpp


-include ../build-$(ConfigurationName)/singleton8_2//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


