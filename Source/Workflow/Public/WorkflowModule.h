//
// CONFIDENTIAL - DAZZLE SOFTWARE, LLC
//
// This is an unpublished work, which is a trade secret, created in
// 2022.  Dazzle Software owns all rights to this work and intends
// to maintain it in confidence to preserve its trade secret status.
// Dazzle Software reserves the right to protect this work as an
// unpublished copyrighted work in the event of an inadvertent or
// deliberate unauthorized publication. Dazzle Software also
// reserves its rights under the copyright laws to protect this work
// as a published work.  Those having access to this work may not copy
// it, use it, or disclose the information contained in it without
// the written authorization of Dazzle Software.
//

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FWorkflowModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
