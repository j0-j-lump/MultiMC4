// 
//  Copyright 2012 MultiMC Contributors
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//

#include "appsettings.h"
#include <apputils.h>
#include <boost/property_tree/ini_parser.hpp>

#include "version.h"

AppSettings *settings;

bool InitAppSettings(void)
{
	settings = new AppSettings();
	return true;
}

AppSettings::AppSettings()
{
	config = new wxFileConfig(_("MultiMC"), wxEmptyString, _("multimc.cfg"), wxEmptyString, wxCONFIG_USE_LOCAL_FILE | wxCONFIG_USE_RELATIVE_PATH);
}
AppSettings::~AppSettings()
{
	delete config;
}
