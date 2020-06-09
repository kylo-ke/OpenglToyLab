#include <string>
#include <cstdio>
#include <cstdlib>
#include "util/commonUtil.h"
// This is a configuration file generated by CMake.

class FileSystem
{
public:
	enum Mode {
		READ,
		WRITE
	};

	FileSystem(const std::string & fileName, Mode mode);

	~FileSystem();

	bool Check(Mode mode);

	int Printf(const std::string & format, ...);

	int Scanf(const std::string & format, ...);

	std::string ReadLine();

	std::string ReadAll();

	bool IsEnd();

	bool IsValid();

private:
	std::string ModeToStr(Mode mode);

	FILE * pF;
	Mode mode;
	std::string fileName;


private:
  typedef std::string (*Builder) (const std::string& path);

public:
	static std::string getPath(const std::string& path);


private:
	static std::string const getRoot();


  //static std::string(*foo (std::string const &)) getPathBuilder()
	static Builder getPathBuilder();

	static std::string getPathRelativeRoot(const std::string& path);

	static std::string getPathRelativeBinary(const std::string& path);

};