

#include "ScriptMgr.h"
#include "Creature.h"
#include "CreatureGroups.h"
#include "GameObject.h"
#include "InstanceScript.h"
#include "Map.h"
#include "halls_of_valor.h"


class instance_halls_of_valor : public InstanceMapScript
{
public:
	instance_halls_of_valor() : InstanceMapScript("instance_halls_of_valor", 1477) { }

	struct instance_halls_of_valor_InstanceScript : public InstanceScript
	{
		instance_halls_of_valor_InstanceScript(Map* map) : InstanceScript(map)
		{


		}

		void OnGameObjectCreate(GameObject* go) override
		{

		}

		void OnCreatureCreate(Creature* creature) override
		{
		
		}

		bool SetBossState(uint32 type, EncounterState state) override
		{
			return false;
		}

		uint32 GetData(uint32 type) const override
		{
			return 0;
		}

		void SetData(uint32 type, uint32 data) override
		{
			
		}

	private:
		
		void ActivateTeleporter(Creature* teleporter)
		{

		}

	};

	InstanceScript* GetInstanceScript(InstanceMap* map) const override
	{
		return new instance_halls_of_valor_InstanceScript(map);
	}
};

void AddSC_instance_halls_of_valor()
{
	new instance_halls_of_valor();
}