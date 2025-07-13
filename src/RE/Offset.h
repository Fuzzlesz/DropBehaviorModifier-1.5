#pragma once

namespace RE
{
	namespace Offset
	{
		// Used by Hooks.h
		namespace AlchemyItem
		{
			constexpr auto VTABLE = REL::ID(228346); //14151F318
		}
		namespace IngredientItem
		{
			constexpr auto VTABLE = REL::ID(228594); //141521F40
		}
		namespace TESObjectARMO
		{
			constexpr auto VTABLE = REL::ID(234078); //1415589A0
		}
		namespace TESObjectWEAP
		{
			constexpr auto VTABLE = REL::ID(234396); //14155C7E0
		}
		namespace TESObjectBOOK
		{
			constexpr auto VTABLE = REL::ID(234122); //1415592B8
		}
		namespace TESObjectMISC
		{
			constexpr auto VTABLE = REL::ID(234260); //14155ACC0
		}
		namespace TESSoulGem
		{
			constexpr auto VTABLE = REL::ID(234473); //14155D498
		}

		// Used by Misc.h. The offsets were nabbed from PO3's commonlib.
		namespace NiAVObject
		{
			constexpr auto Demand = REL::ID(74040); //140D2F220
		}
		namespace NiAVObject
		{
			constexpr auto Clone = REL::ID(68835); //140C52750
		}
		namespace NiTexture
		{
			constexpr auto GetTexture = REL::ID(98986); //141295C30
		}
	}
}