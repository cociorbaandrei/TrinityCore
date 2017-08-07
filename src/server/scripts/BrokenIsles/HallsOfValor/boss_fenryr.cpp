/*
* Copyright (C) 2008-2017 TrinityCore <http://www.trinitycore.org/>
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "ScriptMgr.h"
#include "CreatureGroups.h"
#include "InstanceScript.h"
#include "ScriptedCreature.h"
#include "halls_of_valor.h"


class boss_fenryr : public CreatureScript
{
public:
	boss_fenryr() : CreatureScript("boss_hyrja") { }

	struct boss_fenryrAI : public BossAI
	{
		boss_fenryrAI(Creature* creature) : BossAI(creature, DATA_FENRYR)
		{

		}

		void Reset() override
		{
			_Reset();
		}

		void DoAction(int32 action) override
		{
			switch (action)
			{
			default:
				break;
			}
		}

		void UpdateAI(uint32 diff) override
		{
			DoMeleeAttackIfReady();
		}

		void JustSummoned(Creature* summon) override
		{
			BossAI::JustSummoned(summon);
		}

	private:
	};

	CreatureAI* GetAI(Creature* creature) const override
	{
		return GetHallsOfValorAI<boss_fenryrAI>(creature);
	}
};


void AddSC_boss_fenryr()
{
	new boss_fenryr();
}
