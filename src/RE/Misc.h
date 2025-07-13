#pragma once

#include "offset.h"

namespace RE
{
	// Lifted from PO3's ComonLib.
	int Demand(const char* a_modelPath, NiPointer<NiNode>& a_modelOut, const BSModelDB::DBTraits::ArgsType& a_args)
	{
		using func_t = decltype(&Demand);
		static REL::Relocation<func_t> func{ RE::Offset::NiAVObject::Demand };
		return func(a_modelPath, a_modelOut, a_args);
	}

	// a_demand is likely wrong. It seems to always be provided as "true". No idea what a_4 is.
	static void GetTexture(const char* a_path, bool a_demand, NiPointer<NiTexture>& a_out, bool a_4)
	{
		using func_t = decltype(&GetTexture);
		static REL::Relocation<func_t> func{ RE::Offset::NiTexture::GetTexture };
		return func(a_path, a_demand, a_out, a_4);
	}

	// This is also nabbed from PO3's commonlib.
	NiAVObject* CloneNiAVObject(NiAVObject* a_original)
	{
		using func_t = decltype(&CloneNiAVObject);
		static REL::Relocation<func_t> func{ RE::Offset::NiAVObject::Clone };
		return func(a_original);
	}
}