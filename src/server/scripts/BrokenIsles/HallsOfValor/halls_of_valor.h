
#include "CreatureAIImpl.h"

enum HVDataTypes
{
	// Encounter States/Boss GUIDs
	DATA_FENRYR,
	DATA_ODYN,
	DATA_GOD_KING_SKOVALD,
	DATA_HYRJA,
	DATA_HYMDALL,

};

template<typename AI>
inline AI* GetHallsOfValorAI(Creature* creature)
{
	return GetInstanceAI<AI>(creature, "instance_halls_of_valor");
}
