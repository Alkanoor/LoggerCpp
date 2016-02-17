#include "Easy_Log_In_File.hpp"
#include "Stdout_Handler.hpp"

int main()
{
    std::shared_ptr<Info_Warning_Error_Logger> logger = Easy_Log_In_File::getInfoLog();
    (*logger)<<"On commence la journée"<<std::endl;

    Info_Warning_Error_Logger::setFolderPath("logs/uselessDir/");
    (*logger)<<"On commence la journée encore"<<std::endl;
    logger = Easy_Log_In_File::getInfoLog();
    (*logger)<<"On commence la journée tu vas voir"<<std::endl;

    Info_Warning_Error_Logger::setFolderPath("logs/uselessDirBis/");
    Info_Warning_Error_Logger::setFolderPath("./");
    logger = Easy_Log_In_File::getWarningLog();

    (*logger)<<"Il est bien tard"<<std::endl;

    std::shared_ptr<File_Handler> handler1(new File_Handler("otherFile.txt"));
    logger->addHandler(handler1);

    (*logger)<<"Maintenant il n'est plus tard"<<std::endl;

    logger->addHandler(std::shared_ptr<Stdout_Handler>(new Stdout_Handler()));

    (*logger)<<"Maintenant la nuit est finie"<<std::endl;

    return 0;
}
