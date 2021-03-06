#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "Wrappers/BsScriptComponent.h"
#include "BsScriptCCollider.generated.h"

namespace bs
{
	class CBoxCollider;

	class BS_SCR_BE_EXPORT ScriptCBoxCollider : public TScriptComponent<ScriptCBoxCollider, CBoxCollider, ScriptCColliderBase>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "BoxCollider")

		ScriptCBoxCollider(MonoObject* managedInstance, const GameObjectHandle<CBoxCollider>& value);

	private:
		static void Internal_setExtents(ScriptCBoxCollider* thisPtr, Vector3* extents);
		static void Internal_getExtents(ScriptCBoxCollider* thisPtr, Vector3* __output);
		static void Internal_setCenter(ScriptCBoxCollider* thisPtr, Vector3* center);
		static void Internal_getCenter(ScriptCBoxCollider* thisPtr, Vector3* __output);
	};
}
