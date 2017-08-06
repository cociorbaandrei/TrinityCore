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

// This is where scripts' loading functions should be declared:

void AddSC_instance_halls_of_valor(); // Halls of Valor
void AddSC_halls_of_valor();
void AddSC_boss_fenryr();
void AddSC_boss_god_king_skovald();
void AddSC_boss_hymdall();
void AddSC_boss_hyrja();
void AddSC_boss_odyn();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddBrokenIslesScripts()
{
	AddSC_instance_halls_of_valor();
	AddSC_halls_of_valor();
	AddSC_boss_fenryr();
	AddSC_boss_god_king_skovald();
	AddSC_boss_hymdall();
	AddSC_boss_hyrja();
	AddSC_boss_odyn();
}
