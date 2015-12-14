/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


// This file was generated by NxParameterized/scripts/GenParameterized.pl
// Created: 2015.06.02 04:11:52

#include "DestructibleActorChunks.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{
namespace destructible
{

using namespace DestructibleActorChunksNS;

const char* const DestructibleActorChunksFactory::vptr =
    NxParameterized::getVptr<DestructibleActorChunks, DestructibleActorChunks::ClassAlignment>();

const physx::PxU32 NumParamDefs = 14;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 1 },
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->data), CHILDREN(1), 1 }, // data
	{ TYPE_STRUCT, false, 1 * sizeof(Chunk_Type), CHILDREN(2), 11 }, // data[]
	{ TYPE_U8, false, (size_t)(&((Chunk_Type*)0)->state), NULL, 0 }, // data[].state
	{ TYPE_U8, false, (size_t)(&((Chunk_Type*)0)->flags), NULL, 0 }, // data[].flags
	{ TYPE_U32, false, (size_t)(&((Chunk_Type*)0)->islandID), NULL, 0 }, // data[].islandID
	{ TYPE_F32, false, (size_t)(&((Chunk_Type*)0)->damage), NULL, 0 }, // data[].damage
	{ TYPE_VEC4, false, (size_t)(&((Chunk_Type*)0)->localSphere), NULL, 0 }, // data[].localSphere
	{ TYPE_VEC3, false, (size_t)(&((Chunk_Type*)0)->localOffset), NULL, 0 }, // data[].localOffset
	{ TYPE_I32, false, (size_t)(&((Chunk_Type*)0)->visibleAncestorIndex), NULL, 0 }, // data[].visibleAncestorIndex
	{ TYPE_U32, false, (size_t)(&((Chunk_Type*)0)->shapesCount), NULL, 0 }, // data[].shapesCount
	{ TYPE_TRANSFORM, false, (size_t)(&((Chunk_Type*)0)->globalPose), NULL, 0 }, // data[].globalPose
	{ TYPE_VEC3, false, (size_t)(&((Chunk_Type*)0)->linearVelocity), NULL, 0 }, // data[].linearVelocity
	{ TYPE_VEC3, false, (size_t)(&((Chunk_Type*)0)->angularVelocity), NULL, 0 }, // data[].angularVelocity
};


bool DestructibleActorChunks::mBuiltFlag = false;
NxParameterized::MutexType DestructibleActorChunks::mBuiltFlagMutex;

DestructibleActorChunks::DestructibleActorChunks(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &DestructibleActorChunksFactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

DestructibleActorChunks::~DestructibleActorChunks()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void DestructibleActorChunks::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~DestructibleActorChunks();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* DestructibleActorChunks::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NxParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NxParameterized::DefinitionImpl* DestructibleActorChunks::getParameterDefinitionTree(void) const
{
	DestructibleActorChunks* tmpParam = const_cast<DestructibleActorChunks*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NxParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NxParameterized::ErrorType DestructibleActorChunks::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NxParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NxParameterized::ErrorType DestructibleActorChunks::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NxParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void DestructibleActorChunks::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<DestructibleActorChunks::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void DestructibleActorChunks::freeParameterDefinitionTable(NxParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NxParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (physx::PxU32 i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void DestructibleActorChunks::buildTree(void)
{

	physx::PxU32 allocSize = sizeof(NxParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NxParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(static_cast<void*>(ParamDefTable), 0, allocSize);

	for (physx::PxU32 i = 0; i < NumParamDefs; ++i)
	{
		NX_PARAM_PLACEMENT_NEW(ParamDefTable + i, NxParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="data"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("data", TYPE_ARRAY, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		HintTable[1].init("longDescription", "The actor's chunk data.", true);
		HintTable[2].init("shortDescription", "The actor's chunk data", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="data[]"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("data", TYPE_STRUCT, "Chunk", true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		HintTable[1].init("longDescription", "The actor's chunk data.", true);
		HintTable[2].init("shortDescription", "The actor's chunk data", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="data[].state"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("state", TYPE_U8, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Bit flags indicating the state of the chunk.", true);
		HintTable[1].init("shortDescription", "Bit flags indicating the state of the chunk", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="data[].flags"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("flags", TYPE_U8, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Overall chunk flags.", true);
		HintTable[1].init("shortDescription", "Overall chunk flags", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="data[].islandID"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("islandID", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Island ID (if any) to which the chunk is attached.", true);
		HintTable[1].init("shortDescription", "Island ID (if any) to which the chunk is attached", true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="data[].damage"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("damage", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "How damaged the chunk is.", true);
		HintTable[1].init("shortDescription", "How damaged the chunk is", true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="data[].localSphere"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("localSphere", TYPE_VEC4, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "A local bounding sphere for the chunk.", true);
		HintTable[1].init("shortDescription", "A local bounding sphere for the chunk", true);
		ParamDefTable[7].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="data[].localOffset"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("localOffset", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "A local bounding sphere for the chunk.", true);
		HintTable[1].init("shortDescription", "A local bounding sphere for the chunk", true);
		ParamDefTable[8].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="data[].visibleAncestorIndex"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("visibleAncestorIndex", TYPE_I32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Index (in structure) of this chunks' visible ancestor, if any.  If none exists, it's InvalidChunkIndex.", true);
		HintTable[1].init("shortDescription", "Index (in structure) of this chunks' visible ancestor, if any", true);
		ParamDefTable[9].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="data[].shapesCount"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("shapesCount", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Number of shapes for this chunk.", true);
		HintTable[1].init("shortDescription", "Number of shapes for this chunk", true);
		ParamDefTable[10].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="data[].globalPose"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("globalPose", TYPE_TRANSFORM, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Chunk global transform.", true);
		HintTable[1].init("shortDescription", "Chunk global transform", true);
		ParamDefTable[11].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="data[].linearVelocity"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("linearVelocity", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Chunk linear velocity.", true);
		HintTable[1].init("shortDescription", "Chunk linear velocity", true);
		ParamDefTable[12].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="data[].angularVelocity"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("angularVelocity", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Chunk angular velocity.", true);
		HintTable[1].init("shortDescription", "Chunk angular velocity", true);
		ParamDefTable[13].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(1);

		ParamDefTable[0].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=1, longName="data"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(2);

		ParamDefTable[1].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=2, longName="data[]"
	{
		static Definition* Children[11];
		Children[0] = PDEF_PTR(3);
		Children[1] = PDEF_PTR(4);
		Children[2] = PDEF_PTR(5);
		Children[3] = PDEF_PTR(6);
		Children[4] = PDEF_PTR(7);
		Children[5] = PDEF_PTR(8);
		Children[6] = PDEF_PTR(9);
		Children[7] = PDEF_PTR(10);
		Children[8] = PDEF_PTR(11);
		Children[9] = PDEF_PTR(12);
		Children[10] = PDEF_PTR(13);

		ParamDefTable[2].setChildren(Children, 11);
	}

	mBuiltFlag = true;

}
void DestructibleActorChunks::initStrings(void)
{
}

void DestructibleActorChunks::initDynamicArrays(void)
{
	data.buf = NULL;
	data.isAllocated = true;
	data.elementSize = sizeof(Chunk_Type);
	data.arraySizes[0] = 0;
}

void DestructibleActorChunks::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();

	initDynamicArrays();
	initStrings();
	initReferences();
}

void DestructibleActorChunks::initReferences(void)
{
}

void DestructibleActorChunks::freeDynamicArrays(void)
{
	if (data.isAllocated && data.buf)
	{
		mParameterizedTraits->free(data.buf);
	}
}

void DestructibleActorChunks::freeStrings(void)
{
}

void DestructibleActorChunks::freeReferences(void)
{
}

} // namespace destructible
} // namespace apex
} // namespace physx
