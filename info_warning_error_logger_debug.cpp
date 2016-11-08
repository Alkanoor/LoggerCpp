#include "include/info_warning_error_logger_debug.hpp"


std::shared_ptr<Info_Warning_Error_Logger> Info_Warning_Error_Logger::static_log = std::shared_ptr<Info_Warning_Error_Logger>(new Info_Warning_Error_Logger());

Info_Warning_Error_Logger_Debug::Info_Warning_Error_Logger_Debug(bool debug, bool writeDebug, bool date, int type) :
    Info_Warning_Error_Logger(date, type),
    debug(debug),
    writeDebug(writeDebug)
{}

void Info_Warning_Error_Logger_Debug::toggleDebug()
{debug = !debug;}

void Info_Warning_Error_Logger_Debug::setDebug(bool debug)
{this->debug = debug;}

void Info_Warning_Error_Logger_Debug::setWriteDebug(bool writeDebug)
{this->writeDebug = writeDebug;}

bool Info_Warning_Error_Logger_Debug::debug() const
{return debug;}

bool Info_Warning_Error_Logger_Debug::writeDebug() const
{return writeDebug;}
