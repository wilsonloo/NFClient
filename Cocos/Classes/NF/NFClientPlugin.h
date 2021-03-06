// -------------------------------------------------------------------------
//    @FileName			:    NFClientPlugin.h
//    @Author           :    Johance
//    @Date             :    2016-12-27
//    @Module           :    NFClientPlugin
//
// -------------------------------------------------------------------------
#ifndef NF_CLIENT_PLUGIN_H
#define NF_CLIENT_PLUGIN_H

#include "NFComm/NFPluginModule/NFIPlugin.h"
#include "NFComm/NFPluginModule/NFIPluginManager.h"

class NFIClassModule;
class NFIElementModule;
class NFILogModule;
class NFISceneAOIModule;
class NFIKernelModule;
class NFIEventModule;
class NFIScheduleModule;
class NFINetClientModule;

class NFClientPlugin : public NFIPlugin
{
public:
    NFClientPlugin(NFIPluginManager* p)
    {
        pPluginManager = p;
    }
    virtual const int GetPluginVersion();

    virtual const std::string GetPluginName();

    virtual void Install();

    virtual void Uninstall();
};

#endif