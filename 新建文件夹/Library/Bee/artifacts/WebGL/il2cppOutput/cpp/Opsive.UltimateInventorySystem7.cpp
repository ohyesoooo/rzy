#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase>
struct Action_1_t47B4AFDF2B167510F0A25890518E44F66FE6C39D;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.Item>>
struct Dictionary_2_t530A5124A8733DD065DCEF018D6B7086AC50A8C2;
// System.Collections.Generic.Dictionary`2<System.UInt32,Opsive.UltimateInventorySystem.Core.Item>
struct Dictionary_2_t2EE7CE2A81280DDE9B612315117DEE53FC39F306;
// System.Collections.Generic.IReadOnlyList`1<Opsive.UltimateInventorySystem.Core.ItemCategory>
struct IReadOnlyList_1_tD8BA3DA7DFEA95B7B7FBB7BA25A718AFC16E4770;
// System.Collections.Generic.IReadOnlyList`1<System.Object>
struct IReadOnlyList_1_t096750C6D09536A8131A83E4ACF863B54ADEE544;
// System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase>
struct List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<Opsive.UltimateInventorySystem.Core.ItemCategory,Opsive.UltimateInventorySystem.Core.ItemDefinition>
struct ObjectCategoryBase_2_tF6ADE8640757B333079D5350881CC6E05714D619;
// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<System.Object,System.Object>
struct ObjectCategoryBase_2_tFEF6C83EAA1DAF486EA0969B108DF8C99A805709;
// Opsive.Shared.Utility.ResizableArray`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase>
struct ResizableArray_1_tF533B9CC1066279BA395C04548E40EB2AFB383E7;
// Opsive.Shared.Utility.ResizableArray`1<Opsive.UltimateInventorySystem.Core.ItemCategory>
struct ResizableArray_1_tE8C9E05420DCA3AB118A0844CA7B962A16F6DC25;
// Opsive.Shared.Utility.ResizableArray`1<Opsive.UltimateInventorySystem.Core.ItemDefinition>
struct ResizableArray_1_tFAE404707B3AEE91383094AA963438F3D5B54EDB;
// Opsive.Shared.Utility.ResizableArray`1<Opsive.UltimateInventorySystem.Core.ItemObject>
struct ResizableArray_1_tF07CA10E6ED7643543A9A9B52844A46AF96E7BD6;
// Opsive.Shared.Utility.ResizableArray`1<System.Object>
struct ResizableArray_1_tFB97DE3E77EED16AC3404F15F582410B50D6AF2D;
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase[]
struct AttributeBaseU5BU5D_t900C68A93CD1DB1136465FB4C5363C96CB6A43AC;
// Opsive.UltimateInventorySystem.Core.ItemCategory[]
struct ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B;
// Opsive.UltimateInventorySystem.Core.ItemDefinition[]
struct ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Opsive.Shared.Utility.Serialization[]
struct SerializationU5BU5D_t6259842E80E4E498754111C4A1F58703AE3D0B88;
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase
struct AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740;
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection
struct AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3;
// Opsive.UltimateInventorySystem.Core.Registers.CraftingCategoryRegister
struct CraftingCategoryRegister_t0EDF4647CADF12348F28EDA19BFFDBFE52D0F63C;
// Opsive.UltimateInventorySystem.Core.Registers.CraftingRecipeRegister
struct CraftingRecipeRegister_t4D6EE364D527962A928F2DC9C6810EF644589FBB;
// Opsive.UltimateInventorySystem.Core.Registers.CurrencyRegister
struct CurrencyRegister_tD74466A65BE2A57B01E6EFCD8A48DF85E64CF7E4;
// Opsive.UltimateInventorySystem.Core.DisplayPanelManagerRegister
struct DisplayPanelManagerRegister_t13F308377B511CAA080D2E5ECA0A9B10602A77E8;
// Opsive.UltimateInventorySystem.Core.GlobalRegister
struct GlobalRegister_t85AA97E0FA342600BB7B1C452757FE28C4009B01;
// Opsive.UltimateInventorySystem.Core.IInventorySystemManager
struct IInventorySystemManager_tEF8249B3C7ADB739C5C2D3625F3A11A3991812FE;
// Opsive.UltimateInventorySystem.Core.InventoryIdentifierRegister
struct InventoryIdentifierRegister_t4D260F570E65AF29F090EAF3C4B545CBD0FD3910;
// Opsive.UltimateInventorySystem.Core.InventorySystemRegister
struct InventorySystemRegister_tE220B184CA96DE245D63BFB8DFB1684C187331BB;
// Opsive.UltimateInventorySystem.Core.Item
struct Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368;
// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemAttributeCollection
struct ItemAttributeCollection_tB833611DC281726C18683840A8F811A96204F770;
// Opsive.UltimateInventorySystem.Core.ItemCategory
struct ItemCategory_t04903305B36771249605A34F2CB395AC5418081C;
// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection
struct ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D;
// Opsive.UltimateInventorySystem.Core.Registers.ItemCategoryRegister
struct ItemCategoryRegister_t25A43FEE581FAC5BD62389FB26A5A8DD55204566;
// Opsive.UltimateInventorySystem.Core.InventoryCollections.ItemCollection
struct ItemCollection_tE215C615CCC09C06B1C8024178008E4F0EE56B2B;
// Opsive.UltimateInventorySystem.Core.ItemDefinition
struct ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11;
// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection
struct ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463;
// Opsive.UltimateInventorySystem.Core.Registers.ItemDefinitionRegister
struct ItemDefinitionRegister_tFED17669002646D3A82FDDD3A1222DFF6C1713ED;
// Opsive.UltimateInventorySystem.Core.Registers.ItemRegister
struct ItemRegister_t4B8E53C9B5DFB916FB4EA7E3D4C2C39E6F442CC0;
// Opsive.UltimateInventorySystem.Core.ItemViewSlotCursorManagerRegister
struct ItemViewSlotCursorManagerRegister_t499EFDD24E0F8EDEA58B0E0AF4FF8CB3564D6BA0;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase
struct ObjectCategoryBase_t49A5955A299DFDA799634D11D068D0448F2A97FC;
// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection
struct RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378;
// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection
struct RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5;
// Opsive.Shared.Utility.Serialization
struct Serialization_tC25153FAFACB3A300E231A27EDA6F99B8ACC8000;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF9F922C00021BC45482311AE01AB951498A8440E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t977EDF122FCFEADF6A4134F582155D5B54862404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInventorySystemManager_tEF8249B3C7ADB739C5C2D3625F3A11A3991812FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tB340D8A31C84ABC82B33D58BEBB5E6209C3550E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tD8BA3DA7DFEA95B7B7FBB7BA25A718AFC16E4770_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3F9EECBE0BA30607024C43354B43765670FB356E;
IL2CPP_EXTERN_C String_t* _stringLiteral81A978282BF4250D77182CEEC04C96B2B3A9FCCB;
IL2CPP_EXTERN_C const RuntimeMethod* GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectCategoryBase_2_GetAllChildrenElements_m240C4989302B816AB7E2574EA3CD86CF92403C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var;

struct ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B;
struct ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Opsive.UltimateInventorySystem.Core.Registers.InventoryObjectIDOnlyRegister`1<Opsive.UltimateInventorySystem.Core.Item>
struct InventoryObjectIDOnlyRegister_1_t1F7135F5C0C292779E5FD53791F4AD0528AF609B  : public RuntimeObject
{
	// Opsive.UltimateInventorySystem.Core.InventorySystemRegister Opsive.UltimateInventorySystem.Core.Registers.InventoryObjectIDOnlyRegister`1::m_Register
	InventorySystemRegister_tE220B184CA96DE245D63BFB8DFB1684C187331BB* ___m_Register_0;
	// System.Collections.Generic.Dictionary`2<System.UInt32,T> Opsive.UltimateInventorySystem.Core.Registers.InventoryObjectIDOnlyRegister`1::m_DictionaryByID
	Dictionary_2_t2EE7CE2A81280DDE9B612315117DEE53FC39F306* ___m_DictionaryByID_1;
};

// System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase>
struct List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AttributeBaseU5BU5D_t900C68A93CD1DB1136465FB4C5363C96CB6A43AC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Opsive.Shared.Utility.ResizableArray`1<System.Object>
struct ResizableArray_1_tFB97DE3E77EED16AC3404F15F582410B50D6AF2D  : public RuntimeObject
{
	// System.Int32 Opsive.Shared.Utility.ResizableArray`1::m_Count
	int32_t ___m_Count_0;
	// T[] Opsive.Shared.Utility.ResizableArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_1;
};

// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase
struct AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740  : public RuntimeObject
{
	// System.Action`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase> Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase::OnAttributeChanged
	Action_1_t47B4AFDF2B167510F0A25890518E44F66FE6C39D* ___OnAttributeChanged_0;
	// System.String Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase::m_Name
	String_t* ___m_Name_1;
	// System.Boolean Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase::m_IsPreEvaluated
	bool ___m_IsPreEvaluated_2;
	// Opsive.UltimateInventorySystem.Core.AttributeSystem.VariantType Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase::m_VariantType
	int32_t ___m_VariantType_3;
	// System.String Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase::m_ModifyExpression
	String_t* ___m_ModifyExpression_4;
	// System.Int32 Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase::m_ConnectionID
	int32_t ___m_ConnectionID_5;
	// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase::m_Collection
	AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3* ___m_Collection_6;
};

// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection
struct AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3  : public RuntimeObject
{
	// System.Action`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase> Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::OnAttributeChanged
	Action_1_t47B4AFDF2B167510F0A25890518E44F66FE6C39D* ___OnAttributeChanged_0;
	// Opsive.Shared.Utility.Serialization[] Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::m_AttributeCollectionData
	SerializationU5BU5D_t6259842E80E4E498754111C4A1F58703AE3D0B88* ___m_AttributeCollectionData_1;
	// Opsive.UltimateInventorySystem.Core.ItemCategory Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::m_ItemCategory
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ___m_ItemCategory_2;
	// Opsive.UltimateInventorySystem.Core.ItemDefinition Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::m_ItemDefinition
	ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* ___m_ItemDefinition_3;
	// Opsive.UltimateInventorySystem.Core.Item Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::m_Item
	Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* ___m_Item_4;
	// System.Boolean Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::m_Initialized
	bool ___m_Initialized_5;
	// Opsive.Shared.Utility.ResizableArray`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase> Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::m_Attributes
	ResizableArray_1_tF533B9CC1066279BA395C04548E40EB2AFB383E7* ___m_Attributes_6;
	// System.Boolean Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::m_Dirty
	bool ___m_Dirty_7;
};

// Opsive.UltimateInventorySystem.Core.InventorySystemRegister
struct InventorySystemRegister_tE220B184CA96DE245D63BFB8DFB1684C187331BB  : public RuntimeObject
{
	// Opsive.UltimateInventorySystem.Core.IInventorySystemManager Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_Manager
	RuntimeObject* ___m_Manager_0;
	// Opsive.UltimateInventorySystem.Core.GlobalRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_GlobalRegister
	GlobalRegister_t85AA97E0FA342600BB7B1C452757FE28C4009B01* ___m_GlobalRegister_1;
	// Opsive.UltimateInventorySystem.Core.Registers.ItemCategoryRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_ItemCategoryRegister
	ItemCategoryRegister_t25A43FEE581FAC5BD62389FB26A5A8DD55204566* ___m_ItemCategoryRegister_2;
	// Opsive.UltimateInventorySystem.Core.Registers.ItemDefinitionRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_ItemDefinitionRegister
	ItemDefinitionRegister_tFED17669002646D3A82FDDD3A1222DFF6C1713ED* ___m_ItemDefinitionRegister_3;
	// Opsive.UltimateInventorySystem.Core.Registers.ItemRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_ItemRegister
	ItemRegister_t4B8E53C9B5DFB916FB4EA7E3D4C2C39E6F442CC0* ___m_ItemRegister_4;
	// Opsive.UltimateInventorySystem.Core.Registers.CurrencyRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_CurrencyRegister
	CurrencyRegister_tD74466A65BE2A57B01E6EFCD8A48DF85E64CF7E4* ___m_CurrencyRegister_5;
	// Opsive.UltimateInventorySystem.Core.Registers.CraftingCategoryRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_CraftingCategoryRegister
	CraftingCategoryRegister_t0EDF4647CADF12348F28EDA19BFFDBFE52D0F63C* ___m_CraftingCategoryRegister_6;
	// Opsive.UltimateInventorySystem.Core.Registers.CraftingRecipeRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_CraftingRecipeRegister
	CraftingRecipeRegister_t4D6EE364D527962A928F2DC9C6810EF644589FBB* ___m_CraftingRecipeRegister_7;
	// Opsive.UltimateInventorySystem.Core.InventoryIdentifierRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_InventoryIdentifierRegister
	InventoryIdentifierRegister_t4D260F570E65AF29F090EAF3C4B545CBD0FD3910* ___m_InventoryIdentifierRegister_8;
	// Opsive.UltimateInventorySystem.Core.DisplayPanelManagerRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_DisplayPanelManagerRegister
	DisplayPanelManagerRegister_t13F308377B511CAA080D2E5ECA0A9B10602A77E8* ___m_DisplayPanelManagerRegister_9;
	// Opsive.UltimateInventorySystem.Core.ItemViewSlotCursorManagerRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::m_ItemViewSlotCursorManagerRegister
	ItemViewSlotCursorManagerRegister_t499EFDD24E0F8EDEA58B0E0AF4FF8CB3564D6BA0* ___m_ItemViewSlotCursorManagerRegister_10;
};

// Opsive.UltimateInventorySystem.Core.Item
struct Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368  : public RuntimeObject
{
	// System.UInt32 Opsive.UltimateInventorySystem.Core.Item::m_ID
	uint32_t ___m_ID_0;
	// System.String Opsive.UltimateInventorySystem.Core.Item::m_Name
	String_t* ___m_Name_1;
	// System.UInt32 Opsive.UltimateInventorySystem.Core.Item::m_ItemDefinitionID
	uint32_t ___m_ItemDefinitionID_2;
	// Opsive.UltimateInventorySystem.Core.ItemDefinition Opsive.UltimateInventorySystem.Core.Item::m_ItemDefinition
	ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* ___m_ItemDefinition_3;
	// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemAttributeCollection Opsive.UltimateInventorySystem.Core.Item::m_ItemAttributeCollection
	ItemAttributeCollection_tB833611DC281726C18683840A8F811A96204F770* ___m_ItemAttributeCollection_4;
	// Opsive.UltimateInventorySystem.Core.InventoryCollections.ItemCollection Opsive.UltimateInventorySystem.Core.Item::m_ItemCollection
	ItemCollection_tE215C615CCC09C06B1C8024178008E4F0EE56B2B* ___m_ItemCollection_5;
	// Opsive.Shared.Utility.ResizableArray`1<Opsive.UltimateInventorySystem.Core.ItemObject> Opsive.UltimateInventorySystem.Core.Item::m_ItemObjects
	ResizableArray_1_tF07CA10E6ED7643543A9A9B52844A46AF96E7BD6* ___m_ItemObjects_6;
	// System.Boolean Opsive.UltimateInventorySystem.Core.Item::m_Initialized
	bool ___m_Initialized_7;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection
struct ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D  : public AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3
{
};

// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection
struct ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463  : public AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3
{
};

// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID
struct ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0 
{
	// System.UInt32 Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID::m_ID
	uint32_t ___m_ID_0;
	// Opsive.UltimateInventorySystem.Core.Item Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID::m_Item
	Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* ___m_Item_1;
};
// Native definition for P/Invoke marshalling of Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID
struct ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshaled_pinvoke
{
	uint32_t ___m_ID_0;
	Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* ___m_Item_1;
};
// Native definition for COM marshalling of Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID
struct ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshaled_com
{
	uint32_t ___m_ID_0;
	Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* ___m_Item_1;
};

// Opsive.UltimateInventorySystem.Core.Registers.ItemRegister
struct ItemRegister_t4B8E53C9B5DFB916FB4EA7E3D4C2C39E6F442CC0  : public InventoryObjectIDOnlyRegister_1_t1F7135F5C0C292779E5FD53791F4AD0528AF609B
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.Item>> Opsive.UltimateInventorySystem.Core.Registers.ItemRegister::m_ItemsOrganizedByCategoryID
	Dictionary_2_t530A5124A8733DD065DCEF018D6B7086AC50A8C2* ___m_ItemsOrganizedByCategoryID_2;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.Item>> Opsive.UltimateInventorySystem.Core.Registers.ItemRegister::m_ItemsOrganizedByItemDefinitionID
	Dictionary_2_t530A5124A8733DD065DCEF018D6B7086AC50A8C2* ___m_ItemsOrganizedByItemDefinitionID_3;
};

// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection
struct RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378  : public AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3
{
};

// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection
struct RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5  : public AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// Opsive.Shared.Inventory.ItemDefinitionBase
struct ItemDefinitionBase_t914F7B1E79D9D130036C63989414B9489202E65C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase
struct ObjectCategoryBase_t49A5955A299DFDA799634D11D068D0448F2A97FC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.UInt32 Opsive.UltimateInventorySystem.Core.ObjectCategoryBase::m_ID
	uint32_t ___m_ID_4;
	// Opsive.Shared.Utility.Serialization Opsive.UltimateInventorySystem.Core.ObjectCategoryBase::m_ParentsData
	Serialization_tC25153FAFACB3A300E231A27EDA6F99B8ACC8000* ___m_ParentsData_5;
	// Opsive.Shared.Utility.Serialization Opsive.UltimateInventorySystem.Core.ObjectCategoryBase::m_ChildrenData
	Serialization_tC25153FAFACB3A300E231A27EDA6F99B8ACC8000* ___m_ChildrenData_6;
	// Opsive.Shared.Utility.Serialization Opsive.UltimateInventorySystem.Core.ObjectCategoryBase::m_ElementsData
	Serialization_tC25153FAFACB3A300E231A27EDA6F99B8ACC8000* ___m_ElementsData_7;
	// System.Boolean Opsive.UltimateInventorySystem.Core.ObjectCategoryBase::m_IsAbstract
	bool ___m_IsAbstract_8;
	// System.Boolean Opsive.UltimateInventorySystem.Core.ObjectCategoryBase::m_Initialized
	bool ___m_Initialized_9;
	// Opsive.UltimateInventorySystem.Core.IInventorySystemManager Opsive.UltimateInventorySystem.Core.ObjectCategoryBase::m_Manager
	RuntimeObject* ___m_Manager_10;
	// System.Boolean Opsive.UltimateInventorySystem.Core.ObjectCategoryBase::m_Dirty
	bool ___m_Dirty_11;
};

// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<Opsive.UltimateInventorySystem.Core.ItemCategory,Opsive.UltimateInventorySystem.Core.ItemDefinition>
struct ObjectCategoryBase_2_tF6ADE8640757B333079D5350881CC6E05714D619  : public ObjectCategoryBase_t49A5955A299DFDA799634D11D068D0448F2A97FC
{
	// Opsive.Shared.Utility.ResizableArray`1<Tc> Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2::m_Parents
	ResizableArray_1_tE8C9E05420DCA3AB118A0844CA7B962A16F6DC25* ___m_Parents_12;
	// Opsive.Shared.Utility.ResizableArray`1<Tc> Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2::m_Children
	ResizableArray_1_tE8C9E05420DCA3AB118A0844CA7B962A16F6DC25* ___m_Children_13;
	// Opsive.Shared.Utility.ResizableArray`1<Te> Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2::m_Elements
	ResizableArray_1_tFAE404707B3AEE91383094AA963438F3D5B54EDB* ___m_Elements_14;
};

// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<System.Object,System.Object>
struct ObjectCategoryBase_2_tFEF6C83EAA1DAF486EA0969B108DF8C99A805709  : public ObjectCategoryBase_t49A5955A299DFDA799634D11D068D0448F2A97FC
{
	// Opsive.Shared.Utility.ResizableArray`1<Tc> Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2::m_Parents
	ResizableArray_1_tFB97DE3E77EED16AC3404F15F582410B50D6AF2D* ___m_Parents_12;
	// Opsive.Shared.Utility.ResizableArray`1<Tc> Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2::m_Children
	ResizableArray_1_tFB97DE3E77EED16AC3404F15F582410B50D6AF2D* ___m_Children_13;
	// Opsive.Shared.Utility.ResizableArray`1<Te> Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2::m_Elements
	ResizableArray_1_tFB97DE3E77EED16AC3404F15F582410B50D6AF2D* ___m_Elements_14;
};

// Opsive.UltimateInventorySystem.Core.ItemDefinition
struct ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11  : public ItemDefinitionBase_t914F7B1E79D9D130036C63989414B9489202E65C
{
	// System.UInt32 Opsive.UltimateInventorySystem.Core.ItemDefinition::m_ID
	uint32_t ___m_ID_4;
	// Opsive.UltimateInventorySystem.Core.ItemCategory Opsive.UltimateInventorySystem.Core.ItemDefinition::m_Category
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ___m_Category_5;
	// Opsive.UltimateInventorySystem.Core.ItemDefinition Opsive.UltimateInventorySystem.Core.ItemDefinition::m_Parent
	ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* ___m_Parent_6;
	// Opsive.Shared.Utility.Serialization Opsive.UltimateInventorySystem.Core.ItemDefinition::m_ChildrenData
	Serialization_tC25153FAFACB3A300E231A27EDA6F99B8ACC8000* ___m_ChildrenData_7;
	// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection Opsive.UltimateInventorySystem.Core.ItemDefinition::m_ItemDefinitionAttributeCollection
	ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463* ___m_ItemDefinitionAttributeCollection_8;
	// Opsive.UltimateInventorySystem.Core.Item Opsive.UltimateInventorySystem.Core.ItemDefinition::m_DefaultItem
	Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* ___m_DefaultItem_9;
	// System.Boolean Opsive.UltimateInventorySystem.Core.ItemDefinition::m_Initialized
	bool ___m_Initialized_10;
	// Opsive.Shared.Utility.ResizableArray`1<Opsive.UltimateInventorySystem.Core.ItemDefinition> Opsive.UltimateInventorySystem.Core.ItemDefinition::m_Children
	ResizableArray_1_tFAE404707B3AEE91383094AA963438F3D5B54EDB* ___m_Children_11;
	// System.Boolean Opsive.UltimateInventorySystem.Core.ItemDefinition::m_Dirty
	bool ___m_Dirty_12;
};

// Opsive.UltimateInventorySystem.Core.ItemCategory
struct ItemCategory_t04903305B36771249605A34F2CB395AC5418081C  : public ObjectCategoryBase_2_tF6ADE8640757B333079D5350881CC6E05714D619
{
	// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection Opsive.UltimateInventorySystem.Core.ItemCategory::m_ItemCategoryAttributeCollection
	ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D* ___m_ItemCategoryAttributeCollection_15;
	// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection Opsive.UltimateInventorySystem.Core.ItemCategory::m_RequiredItemDefinitionAttributes
	RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5* ___m_RequiredItemDefinitionAttributes_16;
	// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection Opsive.UltimateInventorySystem.Core.ItemCategory::m_RequiredItemAttributes
	RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378* ___m_RequiredItemAttributes_17;
	// System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::m_IsMutable
	bool ___m_IsMutable_18;
	// System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::m_IsUnique
	bool ___m_IsUnique_19;
};

// Opsive.UltimateInventorySystem.Core.Registers.InventoryObjectIDOnlyRegister`1<Opsive.UltimateInventorySystem.Core.Item>

// Opsive.UltimateInventorySystem.Core.Registers.InventoryObjectIDOnlyRegister`1<Opsive.UltimateInventorySystem.Core.Item>

// System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase>
struct List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AttributeBaseU5BU5D_t900C68A93CD1DB1136465FB4C5363C96CB6A43AC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// Opsive.Shared.Utility.ResizableArray`1<System.Object>

// Opsive.Shared.Utility.ResizableArray`1<System.Object>

// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase

// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase

// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection

// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection

// Opsive.UltimateInventorySystem.Core.InventorySystemRegister

// Opsive.UltimateInventorySystem.Core.InventorySystemRegister

// Opsive.UltimateInventorySystem.Core.Item

// Opsive.UltimateInventorySystem.Core.Item

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection

// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection

// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection

// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection

// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID

// Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID

// Opsive.UltimateInventorySystem.Core.Registers.ItemRegister

// Opsive.UltimateInventorySystem.Core.Registers.ItemRegister

// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection

// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection

// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection

// Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase

// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase

// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<Opsive.UltimateInventorySystem.Core.ItemCategory,Opsive.UltimateInventorySystem.Core.ItemDefinition>

// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<Opsive.UltimateInventorySystem.Core.ItemCategory,Opsive.UltimateInventorySystem.Core.ItemDefinition>

// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<System.Object,System.Object>

// Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<System.Object,System.Object>

// Opsive.UltimateInventorySystem.Core.ItemDefinition

// Opsive.UltimateInventorySystem.Core.ItemDefinition

// Opsive.UltimateInventorySystem.Core.ItemCategory

// Opsive.UltimateInventorySystem.Core.ItemCategory
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Opsive.UltimateInventorySystem.Core.ItemCategory[]
struct ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B  : public RuntimeArray
{
	ALIGN_FIELD (8) ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* m_Items[1];

	inline ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ItemCategory_t04903305B36771249605A34F2CB395AC5418081C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ItemCategory_t04903305B36771249605A34F2CB395AC5418081C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Opsive.UltimateInventorySystem.Core.ItemDefinition[]
struct ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE  : public RuntimeArray
{
	ALIGN_FIELD (8) ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* m_Items[1];

	inline ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T Opsive.Shared.Utility.GenericObjectPool::Get<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GenericObjectPool_Get_TisRuntimeObject_mFCDF9DF9D57EBE9115F7BCA9BA60DF2A636DE86E_gshared (const RuntimeMethod* method) ;
// System.Int32 Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<System.Object,System.Object>::GetAllChildren(Tc[]&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectCategoryBase_2_GetAllChildren_m947EC564E61014EDEFBC74112B8CDBD2FFBDED7E_gshared (ObjectCategoryBase_2_tFEF6C83EAA1DAF486EA0969B108DF8C99A805709* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_children, bool ___1_includeThis, const RuntimeMethod* method) ;
// System.Void Opsive.Shared.Utility.GenericObjectPool::Return<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericObjectPool_Return_TisRuntimeObject_mFD88DD1CCCF668D9525B776BADFBE7E1755D1C9D_gshared (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<Tc> Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<System.Object,System.Object>::get_ParentsReadOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectCategoryBase_2_get_ParentsReadOnly_m10A35B5F6EC1D77303A585B5E3D0A961C8D6EF30_gshared_inline (ObjectCategoryBase_2_tFEF6C83EAA1DAF486EA0969B108DF8C99A805709* __this, const RuntimeMethod* method) ;
// System.Int32 Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<System.Object,System.Object>::GetAllChildrenElements(Te[]&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectCategoryBase_2_GetAllChildrenElements_m44166CFD6F0E0ADF495BC227BD99EDFAF8B4D698_gshared (ObjectCategoryBase_2_tFEF6C83EAA1DAF486EA0969B108DF8C99A805709* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_elements, bool ___1_includeThis, const RuntimeMethod* method) ;

// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::Initialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeCollection_Initialize_m2DF6EF923A2AF14B58F9C18881DBC3CCDE66839D (AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3* __this, bool ___0_force, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase>::.ctor()
inline void List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74 (List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase>::Add(T)
inline void List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline (List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26*, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T Opsive.Shared.Utility.GenericObjectPool::Get<Opsive.UltimateInventorySystem.Core.ItemCategory[]>()
inline ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C (const RuntimeMethod* method)
{
	return ((  ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* (*) (const RuntimeMethod*))GenericObjectPool_Get_TisRuntimeObject_mFCDF9DF9D57EBE9115F7BCA9BA60DF2A636DE86E_gshared)(method);
}
// System.Int32 Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<Opsive.UltimateInventorySystem.Core.ItemCategory,Opsive.UltimateInventorySystem.Core.ItemDefinition>::GetAllChildren(Tc[]&,System.Boolean)
inline int32_t ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1 (ObjectCategoryBase_2_tF6ADE8640757B333079D5350881CC6E05714D619* __this, ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B** ___0_children, bool ___1_includeThis, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectCategoryBase_2_tF6ADE8640757B333079D5350881CC6E05714D619*, ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B**, bool, const RuntimeMethod*))ObjectCategoryBase_2_GetAllChildren_m947EC564E61014EDEFBC74112B8CDBD2FFBDED7E_gshared)(__this, ___0_children, ___1_includeThis, method);
}
// System.String Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* __this, const RuntimeMethod* method) ;
// System.Void Opsive.Shared.Utility.GenericObjectPool::Return<Opsive.UltimateInventorySystem.Core.ItemCategory[]>(T)
inline void GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76 (ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B*, const RuntimeMethod*))GenericObjectPool_Return_TisRuntimeObject_mFD88DD1CCCF668D9525B776BADFBE7E1755D1C9D_gshared)(___0_obj, method);
}
// System.Collections.Generic.IReadOnlyList`1<Tc> Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<Opsive.UltimateInventorySystem.Core.ItemCategory,Opsive.UltimateInventorySystem.Core.ItemDefinition>::get_ParentsReadOnly()
inline RuntimeObject* ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_inline (ObjectCategoryBase_2_tF6ADE8640757B333079D5350881CC6E05714D619* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ObjectCategoryBase_2_tF6ADE8640757B333079D5350881CC6E05714D619*, const RuntimeMethod*))ObjectCategoryBase_2_get_ParentsReadOnly_m10A35B5F6EC1D77303A585B5E3D0A961C8D6EF30_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// Opsive.UltimateInventorySystem.Core.ItemCategory Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase::GetSourceCategory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* AttributeBase_GetSourceCategory_m6A38F7BC0EB081CF5BB61D94217B7349E3CEF3C0 (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* __this, const RuntimeMethod* method) ;
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeCollection__ctor_m4A45E835F6DE1CA2AC05C26EFAA8C9EBDAB48AE6 (AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3* __this, const RuntimeMethod* method) ;
// Opsive.UltimateInventorySystem.Core.ItemCategory Opsive.UltimateInventorySystem.Core.ItemDefinition::get_Category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ItemDefinition_get_Category_mD5A797ACC3772886878614C291EA671A88F56511_inline (ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* __this, const RuntimeMethod* method) ;
// T Opsive.Shared.Utility.GenericObjectPool::Get<Opsive.UltimateInventorySystem.Core.ItemDefinition[]>()
inline ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88 (const RuntimeMethod* method)
{
	return ((  ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* (*) (const RuntimeMethod*))GenericObjectPool_Get_TisRuntimeObject_mFCDF9DF9D57EBE9115F7BCA9BA60DF2A636DE86E_gshared)(method);
}
// Opsive.UltimateInventorySystem.Core.ItemDefinition Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::get_AttachedItemDefinition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* AttributeCollection_get_AttachedItemDefinition_mDB4187534FE416F8A86E886B3A05848A72636137_inline (AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3* __this, const RuntimeMethod* method) ;
// System.Int32 Opsive.UltimateInventorySystem.Core.ItemDefinition::GetAllChildren(Opsive.UltimateInventorySystem.Core.ItemDefinition[]&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ItemDefinition_GetAllChildren_mD6007B5E744090388A3E0CF85739703772E9D818 (ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* __this, ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE** ___0_children, bool ___1_includeThis, const RuntimeMethod* method) ;
// System.Boolean Opsive.UltimateInventorySystem.Core.ItemDefinition::TryGetAttribute(System.String,Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ItemDefinition_TryGetAttribute_m0E9A3B813DE7DC129BAF8E43EDEE71AD16EAE115 (ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* __this, String_t* ___0_attributeName, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740** ___1_attribute, bool ___2_includeCategoryAttributes, const RuntimeMethod* method) ;
// System.Void Opsive.Shared.Utility.GenericObjectPool::Return<Opsive.UltimateInventorySystem.Core.ItemDefinition[]>(T)
inline void GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF (ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE*, const RuntimeMethod*))GenericObjectPool_Return_TisRuntimeObject_mFD88DD1CCCF668D9525B776BADFBE7E1755D1C9D_gshared)(___0_obj, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// Opsive.UltimateInventorySystem.Core.ItemDefinition Opsive.UltimateInventorySystem.Core.ItemDefinition::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* ItemDefinition_get_Parent_m8FC088921292617CE3020C884747E7169549E097_inline (ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* __this, const RuntimeMethod* method) ;
// Opsive.UltimateInventorySystem.Core.ItemCategory Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeCollection::get_AttachedItemCategory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* AttributeCollection_get_AttachedItemCategory_m95EA47F6779EBE9721D1D08F31B1521E836763D4_inline (AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3* __this, const RuntimeMethod* method) ;
// System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::TryGetDefinitionAttribute(System.String,Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ItemCategory_TryGetDefinitionAttribute_mD164B55759737DAAA026126C0030A7EDF7691544 (ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* __this, String_t* ___0_attributeName, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740** ___1_requiredAttribute, const RuntimeMethod* method) ;
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemID__ctor_m999A82516D4410581C9047C0612A47E3544940E1 (ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* __this, uint32_t ___0_itemID, const RuntimeMethod* method) ;
// System.UInt32 Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ItemID_get_ID_m3ED8AEF233C6548A559D761F221E4D7F962C686E_inline (ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* __this, const RuntimeMethod* method) ;
// System.UInt32 Opsive.UltimateInventorySystem.Core.Item::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Item_get_ID_mCEEDE8975DC6441DA6645CB71C14455054281989_inline (Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* __this, const RuntimeMethod* method) ;
// Opsive.UltimateInventorySystem.Core.Registers.ItemRegister Opsive.UltimateInventorySystem.Core.InventorySystemManager::get_ItemRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemRegister_t4B8E53C9B5DFB916FB4EA7E3D4C2C39E6F442CC0* InventorySystemManager_get_ItemRegister_m0C79158892B0EA94D1F82CCA0145AA8734BDCC8C (const RuntimeMethod* method) ;
// Opsive.UltimateInventorySystem.Core.Item Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID::get_Item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* ItemID_get_Item_m2F5182D37595A121B181DD6FFB4DB27090BA4978 (ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* __this, const RuntimeMethod* method) ;
// System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::TryGetItemAttribute(System.String,Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ItemCategory_TryGetItemAttribute_mE7B6EA0C22DC6F80D8E6AF98D68F766B15C802B6 (ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* __this, String_t* ___0_attributeName, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740** ___1_requiredAttribute, const RuntimeMethod* method) ;
// System.Int32 Opsive.UltimateInventorySystem.Core.ObjectCategoryBase`2<Opsive.UltimateInventorySystem.Core.ItemCategory,Opsive.UltimateInventorySystem.Core.ItemDefinition>::GetAllChildrenElements(Te[]&,System.Boolean)
inline int32_t ObjectCategoryBase_2_GetAllChildrenElements_m240C4989302B816AB7E2574EA3CD86CF92403C48 (ObjectCategoryBase_2_tF6ADE8640757B333079D5350881CC6E05714D619* __this, ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE** ___0_elements, bool ___1_includeThis, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectCategoryBase_2_tF6ADE8640757B333079D5350881CC6E05714D619*, ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE**, bool, const RuntimeMethod*))ObjectCategoryBase_2_GetAllChildrenElements_m44166CFD6F0E0ADF495BC227BD99EDFAF8B4D698_gshared)(__this, ___0_elements, ___1_includeThis, method);
}
// Opsive.UltimateInventorySystem.Core.IInventorySystemManager Opsive.UltimateInventorySystem.Core.ObjectCategoryBase::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectCategoryBase_get_Manager_m41854B2C5431F4BEB4721E980E674860A21B5653_inline (ObjectCategoryBase_t49A5955A299DFDA799634D11D068D0448F2A97FC* __this, const RuntimeMethod* method) ;
// Opsive.UltimateInventorySystem.Core.Registers.ItemRegister Opsive.UltimateInventorySystem.Core.InventorySystemRegister::get_ItemRegister()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemRegister_t4B8E53C9B5DFB916FB4EA7E3D4C2C39E6F442CC0* InventorySystemRegister_get_ItemRegister_m44A09FF58F42EA631C740D34E25735CD387F19FB_inline (InventorySystemRegister_tE220B184CA96DE245D63BFB8DFB1684C187331BB* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ItemCategoryAttributeCollection_get_Index_m2D0BEAEA39A53B471C15930F2A984B6D6C404A4B (ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D* __this, const RuntimeMethod* method) 
{
	{
		// public override int Index => 0;
		return 0;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection::Initialize(Opsive.UltimateInventorySystem.Core.ItemCategory,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCategoryAttributeCollection_Initialize_m838D84D93C06C902C15A48FA52E03B986E6A60FC (ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D* __this, ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ___0_itemCategory, bool ___1_force, const RuntimeMethod* method) 
{
	{
		// m_ItemCategory = itemCategory;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ___0_itemCategory;
		((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2), (void*)L_0);
		// base.Initialize(force);
		bool L_1 = ___1_force;
		AttributeCollection_Initialize_m2DF6EF923A2AF14B58F9C18881DBC3CCDE66839D(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Object Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection::GetAttachedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ItemCategoryAttributeCollection_GetAttachedObject_m8E6A239F24CF95042907E46CB963E8F9F9FF8324 (ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D* __this, const RuntimeMethod* method) 
{
	{
		// return m_ItemCategory;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase> Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection::GetChildrenOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* ItemCategoryAttributeCollection_GetChildrenOfAttribute_m0AD808C44B446021AE2C458D619CE5D26EF64798 (ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, bool ___1_includeThisAttribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* V_0 = NULL;
	ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_4 = NULL;
	{
		// var children = new List<AttributeBase>();
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_0 = (List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26*)il2cpp_codegen_object_new(List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_il2cpp_TypeInfo_var);
		List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74(L_0, List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74_RuntimeMethod_var);
		V_0 = L_0;
		// if (includeThisAttribute) { children.Add(attribute); }
		bool L_1 = ___1_includeThisAttribute;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (includeThisAttribute) { children.Add(attribute); }
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_2 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_3 = ___0_attribute;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_2, L_3, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
	}

IL_0010:
	{
		// var pooledItemDefAllChildren = GenericObjectPool.Get<ItemCategory[]>();
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* L_4;
		L_4 = GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C(GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C_RuntimeMethod_var);
		V_1 = L_4;
		// var itemDefAllChildrenCount = m_ItemCategory.GetAllChildren(ref pooledItemDefAllChildren, false);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_5 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		int32_t L_6;
		L_6 = ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1(L_5, (&V_1), (bool)0, ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1_RuntimeMethod_var);
		V_2 = L_6;
		// for (int i = 0; i < itemDefAllChildrenCount; i++) {
		V_3 = 0;
		goto IL_0047;
	}

IL_0029:
	{
		// var categoryChild = pooledItemDefAllChildren[i];
		ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* L_7 = V_1;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		// if (categoryChild.TryGetCategoryAttribute(attribute.Name, out var categoryAttribute) == false) { continue; }
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_11 = ___0_attribute;
		String_t* L_12;
		L_12 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_11, NULL);
		bool L_13;
		L_13 = VirtualFuncInvoker2< bool, String_t*, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740** >::Invoke(54 /* System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::TryGetCategoryAttribute(System.String,Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase&) */, L_10, L_12, (&V_4));
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		// children.Add(categoryAttribute);
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_14 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_15 = V_4;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_14, L_15, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
	}

IL_0043:
	{
		// for (int i = 0; i < itemDefAllChildrenCount; i++) {
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < itemDefAllChildrenCount; i++) {
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0029;
		}
	}
	{
		// GenericObjectPool.Return(pooledItemDefAllChildren);
		ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76(L_19, GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76_RuntimeMethod_var);
		// return children;
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_20 = V_0;
		return L_20;
	}
}
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection::GetInheritOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ItemCategoryAttributeCollection_GetInheritOfAttribute_mE7483CB00ED66B415B733628CAD51189917C17C1 (ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tB340D8A31C84ABC82B33D58BEBB5E6209C3550E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tD8BA3DA7DFEA95B7B7FBB7BA25A718AFC16E4770_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F9EECBE0BA30607024C43354B43765670FB356E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_2 = NULL;
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* G_B3_0 = NULL;
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* G_B2_0 = NULL;
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* G_B4_0 = NULL;
	{
		// var parentsCount = m_ItemCategory.ParentsReadOnly.Count;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		RuntimeObject* L_1;
		L_1 = ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_inline(L_0, ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Opsive.UltimateInventorySystem.Core.ItemCategory>::get_Count() */, IReadOnlyCollection_1_tB340D8A31C84ABC82B33D58BEBB5E6209C3550E4_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// for (int i = 0; i < parentsCount; i++) {
		V_1 = 0;
		goto IL_0072;
	}

IL_0015:
	{
		// if (m_ItemCategory?.ParentsReadOnly[i] == null) {
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_3 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = ((ItemCategory_t04903305B36771249605A34F2CB395AC5418081C*)(NULL));
		goto IL_002d;
	}

IL_0022:
	{
		RuntimeObject* L_5;
		L_5 = ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_inline(G_B3_0, ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		int32_t L_6 = V_1;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_7;
		L_7 = InterfaceFuncInvoker1< ItemCategory_t04903305B36771249605A34F2CB395AC5418081C*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Opsive.UltimateInventorySystem.Core.ItemCategory>::get_Item(System.Int32) */, IReadOnlyList_1_tD8BA3DA7DFEA95B7B7FBB7BA25A718AFC16E4770_il2cpp_TypeInfo_var, L_5, L_6);
		G_B4_0 = L_7;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(G_B4_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// Debug.LogWarning($"Category {m_ItemCategory} and or parent is null, this should never happen.");
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_9 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3F9EECBE0BA30607024C43354B43765670FB356E, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_10, NULL);
		// continue;
		goto IL_006e;
	}

IL_004c:
	{
		// if (m_ItemCategory.ParentsReadOnly[i].TryGetCategoryAttribute(attribute.Name, out var output)) {
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_11 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		RuntimeObject* L_12;
		L_12 = ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_inline(L_11, ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		int32_t L_13 = V_1;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_14;
		L_14 = InterfaceFuncInvoker1< ItemCategory_t04903305B36771249605A34F2CB395AC5418081C*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Opsive.UltimateInventorySystem.Core.ItemCategory>::get_Item(System.Int32) */, IReadOnlyList_1_tD8BA3DA7DFEA95B7B7FBB7BA25A718AFC16E4770_il2cpp_TypeInfo_var, L_12, L_13);
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_15 = ___0_attribute;
		String_t* L_16;
		L_16 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_15, NULL);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, String_t*, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740** >::Invoke(54 /* System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::TryGetCategoryAttribute(System.String,Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase&) */, L_14, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_006e;
		}
	}
	{
		// return output;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_18 = V_2;
		return L_18;
	}

IL_006e:
	{
		// for (int i = 0; i < parentsCount; i++) {
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0072:
	{
		// for (int i = 0; i < parentsCount; i++) {
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*)NULL;
	}
}
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection::GetSourceOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ItemCategoryAttributeCollection_GetSourceOfAttribute_mA19D5C40CFDA7E0A2C81DF7D8A990535AFEE44DA (ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* V_0 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_1 = NULL;
	{
		// var source = attribute.GetSourceCategory();
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_0 = ___0_attribute;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_1;
		L_1 = AttributeBase_GetSourceCategory_m6A38F7BC0EB081CF5BB61D94217B7349E3CEF3C0(L_0, NULL);
		V_0 = L_1;
		// if (source == null) { return null; }
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// if (source == null) { return null; }
		return (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*)NULL;
	}

IL_0012:
	{
		// source.TryGetCategoryAttribute(attribute.Name, out var sourceAttribute);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_4 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_5 = ___0_attribute;
		String_t* L_6;
		L_6 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_5, NULL);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, String_t*, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740** >::Invoke(54 /* System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::TryGetCategoryAttribute(System.String,Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase&) */, L_4, L_6, (&V_1));
		// return sourceAttribute;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_8 = V_1;
		return L_8;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection::AddAttributeToCategory(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,Opsive.UltimateInventorySystem.Core.ItemCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCategoryAttributeCollection_AddAttributeToCategory_m289AF0E563174C937568F661E96F5DECD652CC29 (ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_newTypeAttribute, ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ___1_sourceCategory, const RuntimeMethod* method) 
{
	{
		// sourceCategory.AddOrOverrideCategoryAttribute(newTypeAttribute);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ___1_sourceCategory;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_1 = ___0_newTypeAttribute;
		bool L_2;
		L_2 = VirtualFuncInvoker3< bool, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*, bool, bool >::Invoke(51 /* System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::AddOrOverrideCategoryAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,System.Boolean,System.Boolean) */, L_0, L_1, (bool)1, (bool)0);
		// }
		return;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemCategoryAttributeCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCategoryAttributeCollection__ctor_mDC9139D5DAA2EB3636E232B84B1605C0155584D9 (ItemCategoryAttributeCollection_t2CB580A5D5969D0A464330C26729E3F94EA1F87D* __this, const RuntimeMethod* method) 
{
	{
		AttributeCollection__ctor_m4A45E835F6DE1CA2AC05C26EFAA8C9EBDAB48AE6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ItemDefinitionAttributeCollection_get_Index_m4575353A78580C0B3101FC5EAA2FA50149F13FFC (ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463* __this, const RuntimeMethod* method) 
{
	{
		// public override int Index => 1;
		return 1;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection::Initialize(Opsive.UltimateInventorySystem.Core.ItemDefinition,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemDefinitionAttributeCollection_Initialize_m9AD6C5D889B67B0FE36845D391F0BB0C1ADC801B (ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463* __this, ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* ___0_itemDefinition, bool ___1_force, const RuntimeMethod* method) 
{
	{
		// m_ItemDefinition = itemDefinition;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_0 = ___0_itemDefinition;
		((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemDefinition_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemDefinition_3), (void*)L_0);
		// m_ItemCategory = m_ItemDefinition.Category;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_1 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemDefinition_3;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_2;
		L_2 = ItemDefinition_get_Category_mD5A797ACC3772886878614C291EA671A88F56511_inline(L_1, NULL);
		((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2), (void*)L_2);
		// base.Initialize(force);
		bool L_3 = ___1_force;
		AttributeCollection_Initialize_m2DF6EF923A2AF14B58F9C18881DBC3CCDE66839D(__this, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Object Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection::GetAttachedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ItemDefinitionAttributeCollection_GetAttachedObject_m5E823276ED47CCC641AB49162CCDD44B847F239D (ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463* __this, const RuntimeMethod* method) 
{
	{
		// return m_ItemDefinition;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_0 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemDefinition_3;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase> Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection::GetChildrenOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* ItemDefinitionAttributeCollection_GetChildrenOfAttribute_m00489EF9B637158169F13BFAF960DC1DBDDA5FF4 (ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, bool ___1_includeThisAttribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* V_0 = NULL;
	ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_4 = NULL;
	{
		// var children = new List<AttributeBase>();
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_0 = (List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26*)il2cpp_codegen_object_new(List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_il2cpp_TypeInfo_var);
		List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74(L_0, List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74_RuntimeMethod_var);
		V_0 = L_0;
		// if (includeThisAttribute) { children.Add(attribute); }
		bool L_1 = ___1_includeThisAttribute;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (includeThisAttribute) { children.Add(attribute); }
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_2 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_3 = ___0_attribute;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_2, L_3, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
	}

IL_0010:
	{
		// var pooledItemDefAllChildren = GenericObjectPool.Get<ItemDefinition[]>();
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* L_4;
		L_4 = GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88(GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88_RuntimeMethod_var);
		V_1 = L_4;
		// var itemDefAllChildrenCount = AttachedItemDefinition.GetAllChildren(ref pooledItemDefAllChildren, false);
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_5;
		L_5 = AttributeCollection_get_AttachedItemDefinition_mDB4187534FE416F8A86E886B3A05848A72636137_inline(__this, NULL);
		int32_t L_6;
		L_6 = ItemDefinition_GetAllChildren_mD6007B5E744090388A3E0CF85739703772E9D818(L_5, (&V_1), (bool)0, NULL);
		V_2 = L_6;
		// for (int i = 0; i < itemDefAllChildrenCount; i++) {
		V_3 = 0;
		goto IL_0048;
	}

IL_0029:
	{
		// var definitionChild = pooledItemDefAllChildren[i];
		ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* L_7 = V_1;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		// if (definitionChild.TryGetAttribute(attribute.Name, out var definitionAttribute) == false) { continue; }
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_11 = ___0_attribute;
		String_t* L_12;
		L_12 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_11, NULL);
		bool L_13;
		L_13 = ItemDefinition_TryGetAttribute_m0E9A3B813DE7DC129BAF8E43EDEE71AD16EAE115(L_10, L_12, (&V_4), (bool)1, NULL);
		if (!L_13)
		{
			goto IL_0044;
		}
	}
	{
		// children.Add(definitionAttribute);
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_14 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_15 = V_4;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_14, L_15, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
	}

IL_0044:
	{
		// for (int i = 0; i < itemDefAllChildrenCount; i++) {
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		// for (int i = 0; i < itemDefAllChildrenCount; i++) {
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0029;
		}
	}
	{
		// GenericObjectPool.Return(pooledItemDefAllChildren);
		ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF(L_19, GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF_RuntimeMethod_var);
		// return children;
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_20 = V_0;
		return L_20;
	}
}
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection::GetInheritOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ItemDefinitionAttributeCollection_GetInheritOfAttribute_m9989967E68AFAD6BC4F2B6F014D72E2EBF91E6AB (ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* V_0 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_1 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_2 = NULL;
	{
		// ItemDefinition parentItemDefinition = null;
		V_0 = (ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11*)NULL;
		// if (m_ItemDefinition != null) {
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_0 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemDefinition_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// parentItemDefinition = m_ItemDefinition.Parent;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_2 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemDefinition_3;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_3;
		L_3 = ItemDefinition_get_Parent_m8FC088921292617CE3020C884747E7169549E097_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_001c:
	{
		// if (parentItemDefinition != null) {
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// if (parentItemDefinition.TryGetAttribute(attribute.Name, out var output)) {
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_6 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_7 = ___0_attribute;
		String_t* L_8;
		L_8 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_7, NULL);
		bool L_9;
		L_9 = ItemDefinition_TryGetAttribute_m0E9A3B813DE7DC129BAF8E43EDEE71AD16EAE115(L_6, L_8, (&V_2), (bool)1, NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// return output;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_10 = V_2;
		return L_10;
	}

IL_0038:
	{
		// if (AttachedItemCategory.TryGetDefinitionAttribute(attribute.Name, out var requiredAttribute)) {
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_11;
		L_11 = AttributeCollection_get_AttachedItemCategory_m95EA47F6779EBE9721D1D08F31B1521E836763D4_inline(__this, NULL);
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_12 = ___0_attribute;
		String_t* L_13;
		L_13 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_12, NULL);
		bool L_14;
		L_14 = ItemCategory_TryGetDefinitionAttribute_mD164B55759737DAAA026126C0030A7EDF7691544(L_11, L_13, (&V_1), NULL);
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		// return requiredAttribute;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_15 = V_1;
		return L_15;
	}

IL_004f:
	{
		// return null;
		return (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*)NULL;
	}
}
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection::GetSourceOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ItemDefinitionAttributeCollection_GetSourceOfAttribute_mFA7C58A2EA64E38E3E9B465785CFECCAB69550A3 (ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* V_0 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_1 = NULL;
	{
		// var source = attribute.GetSourceCategory();
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_0 = ___0_attribute;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_1;
		L_1 = AttributeBase_GetSourceCategory_m6A38F7BC0EB081CF5BB61D94217B7349E3CEF3C0(L_0, NULL);
		V_0 = L_1;
		// if (source == null) { return null; }
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// if (source == null) { return null; }
		return (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*)NULL;
	}

IL_0012:
	{
		// source.TryGetDefinitionAttribute(attribute.Name, out var sourceAttribute);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_4 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_5 = ___0_attribute;
		String_t* L_6;
		L_6 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_5, NULL);
		bool L_7;
		L_7 = ItemCategory_TryGetDefinitionAttribute_mD164B55759737DAAA026126C0030A7EDF7691544(L_4, L_6, (&V_1), NULL);
		// return sourceAttribute;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_8 = V_1;
		return L_8;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection::AddAttributeToCategory(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,Opsive.UltimateInventorySystem.Core.ItemCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemDefinitionAttributeCollection_AddAttributeToCategory_m15A07A3050CA7364CAC1592AACBFBC587649154D (ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_newTypeAttribute, ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ___1_sourceCategory, const RuntimeMethod* method) 
{
	{
		// sourceCategory.AddDefinitionAttribute(newTypeAttribute);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ___1_sourceCategory;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_1 = ___0_newTypeAttribute;
		bool L_2;
		L_2 = VirtualFuncInvoker3< bool, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*, bool, bool >::Invoke(39 /* System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::AddDefinitionAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,System.Boolean,System.Boolean) */, L_0, L_1, (bool)1, (bool)0);
		// }
		return;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemDefinitionAttributeCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemDefinitionAttributeCollection__ctor_m1CDFC35FB2CFE4AD79099A2B4C15C0DCDBDB45D4 (ItemDefinitionAttributeCollection_t8E4001BADA73F4770BABA623007574BE939AD463* __this, const RuntimeMethod* method) 
{
	{
		AttributeCollection__ctor_m4A45E835F6DE1CA2AC05C26EFAA8C9EBDAB48AE6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID
IL2CPP_EXTERN_C void ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshal_pinvoke(const ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0& unmarshaled, ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Item_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Item' of type 'ItemID': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Item_1Exception, NULL);
}
IL2CPP_EXTERN_C void ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshal_pinvoke_back(const ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshaled_pinvoke& marshaled, ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0& unmarshaled)
{
	Exception_t* ___m_Item_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Item' of type 'ItemID': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Item_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID
IL2CPP_EXTERN_C void ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshal_pinvoke_cleanup(ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID
IL2CPP_EXTERN_C void ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshal_com(const ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0& unmarshaled, ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshaled_com& marshaled)
{
	Exception_t* ___m_Item_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Item' of type 'ItemID': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Item_1Exception, NULL);
}
IL2CPP_EXTERN_C void ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshal_com_back(const ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshaled_com& marshaled, ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0& unmarshaled)
{
	Exception_t* ___m_Item_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Item' of type 'ItemID': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Item_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID
IL2CPP_EXTERN_C void ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshal_com_cleanup(ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0_marshaled_com& marshaled)
{
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemID__ctor_m999A82516D4410581C9047C0612A47E3544940E1 (ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* __this, uint32_t ___0_itemID, const RuntimeMethod* method) 
{
	{
		// m_ID = itemID;
		uint32_t L_0 = ___0_itemID;
		__this->___m_ID_0 = L_0;
		// m_Item = null;
		__this->___m_Item_1 = (Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item_1), (void*)(Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ItemID__ctor_m999A82516D4410581C9047C0612A47E3544940E1_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_itemID, const RuntimeMethod* method)
{
	ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0*>(__this + _offset);
	ItemID__ctor_m999A82516D4410581C9047C0612A47E3544940E1(_thisAdjusted, ___0_itemID, method);
}
// System.UInt32 Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ItemID_get_ID_m3ED8AEF233C6548A559D761F221E4D7F962C686E (ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* __this, const RuntimeMethod* method) 
{
	{
		// public uint ID => m_ID;
		uint32_t L_0 = __this->___m_ID_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint32_t ItemID_get_ID_m3ED8AEF233C6548A559D761F221E4D7F962C686E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = ItemID_get_ID_m3ED8AEF233C6548A559D761F221E4D7F962C686E_inline(_thisAdjusted, method);
	return _returnValue;
}
// Opsive.UltimateInventorySystem.Core.Item Opsive.UltimateInventorySystem.Core.AttributeSystem.ItemID::get_Item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* ItemID_get_Item_m2F5182D37595A121B181DD6FFB4DB27090BA4978 (ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Item == null || m_Item.ID != m_ID) {
		Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* L_0 = __this->___m_Item_1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* L_1 = __this->___m_Item_1;
		uint32_t L_2;
		L_2 = Item_get_ID_mCEEDE8975DC6441DA6645CB71C14455054281989_inline(L_1, NULL);
		uint32_t L_3 = __this->___m_ID_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0032;
		}
	}

IL_001b:
	{
		// InventorySystemManager.ItemRegister.TryGetValue(m_ID, out m_Item);
		ItemRegister_t4B8E53C9B5DFB916FB4EA7E3D4C2C39E6F442CC0* L_4;
		L_4 = InventorySystemManager_get_ItemRegister_m0C79158892B0EA94D1F82CCA0145AA8734BDCC8C(NULL);
		uint32_t L_5 = __this->___m_ID_0;
		Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368** L_6 = (&__this->___m_Item_1);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, uint32_t, Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368** >::Invoke(4 /* System.Boolean Opsive.UltimateInventorySystem.Core.Registers.InventoryObjectIDOnlyRegister`1<Opsive.UltimateInventorySystem.Core.Item>::TryGetValue(System.UInt32,T&) */, L_4, L_5, L_6);
	}

IL_0032:
	{
		// return m_Item;
		Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* L_8 = __this->___m_Item_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* ItemID_get_Item_m2F5182D37595A121B181DD6FFB4DB27090BA4978_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0*>(__this + _offset);
	Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* _returnValue;
	_returnValue = ItemID_get_Item_m2F5182D37595A121B181DD6FFB4DB27090BA4978(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RequiredItemAttributeCollection_get_Index_m7CF96D5FF26ADD204DB283CCD6F91430003545F0 (RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378* __this, const RuntimeMethod* method) 
{
	{
		// public override int Index => 2;
		return 2;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection::Initialize(Opsive.UltimateInventorySystem.Core.ItemCategory,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredItemAttributeCollection_Initialize_m257F75FDA27B5E38323EDCDF6EE2A19AE0D2E6CA (RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378* __this, ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ___0_itemCategory, bool ___1_force, const RuntimeMethod* method) 
{
	{
		// m_ItemCategory = itemCategory;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ___0_itemCategory;
		((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2), (void*)L_0);
		// base.Initialize(force);
		bool L_1 = ___1_force;
		AttributeCollection_Initialize_m2DF6EF923A2AF14B58F9C18881DBC3CCDE66839D(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Object Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection::GetAttachedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* RequiredItemAttributeCollection_GetAttachedObject_m5468B1E2F8841CECC8B241CFA4EB9CFFFB75F97E (RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378* __this, const RuntimeMethod* method) 
{
	{
		// return m_ItemCategory;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase> Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection::GetChildrenOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* RequiredItemAttributeCollection_GetChildrenOfAttribute_m5C61CA4793BEE8D17D9392E149D34DDD0A16AAEC (RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, bool ___1_includeThisAttribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF9F922C00021BC45482311AE01AB951498A8440E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t977EDF122FCFEADF6A4134F582155D5B54862404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInventorySystemManager_tEF8249B3C7ADB739C5C2D3625F3A11A3991812FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectCategoryBase_2_GetAllChildrenElements_m240C4989302B816AB7E2574EA3CD86CF92403C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* V_0 = NULL;
	ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* V_1 = NULL;
	int32_t V_2 = 0;
	ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_6 = NULL;
	int32_t V_7 = 0;
	ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* V_8 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_11 = NULL;
	{
		// var children = new List<AttributeBase>();
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_0 = (List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26*)il2cpp_codegen_object_new(List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_il2cpp_TypeInfo_var);
		List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74(L_0, List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74_RuntimeMethod_var);
		V_0 = L_0;
		// if (includeThisAttribute) { children.Add(attribute); }
		bool L_1 = ___1_includeThisAttribute;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (includeThisAttribute) { children.Add(attribute); }
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_2 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_3 = ___0_attribute;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_2, L_3, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
	}

IL_0010:
	{
		// var pooledItemCatAllChildren = GenericObjectPool.Get<ItemCategory[]>();
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* L_4;
		L_4 = GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C(GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C_RuntimeMethod_var);
		V_1 = L_4;
		// var itemCatAllChildrenCount = m_ItemCategory.GetAllChildren(ref pooledItemCatAllChildren, false);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_5 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		int32_t L_6;
		L_6 = ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1(L_5, (&V_1), (bool)0, ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1_RuntimeMethod_var);
		V_2 = L_6;
		// for (int i = 0; i < itemCatAllChildrenCount; i++) {
		V_5 = 0;
		goto IL_004b;
	}

IL_002a:
	{
		// var categoryChild = pooledItemCatAllChildren[i];
		ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* L_7 = V_1;
		int32_t L_8 = V_5;
		int32_t L_9 = L_8;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		// if (categoryChild.TryGetItemAttribute(attribute.Name, out var categoryAttribute) == false) {
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_11 = ___0_attribute;
		String_t* L_12;
		L_12 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_11, NULL);
		bool L_13;
		L_13 = ItemCategory_TryGetItemAttribute_mE7B6EA0C22DC6F80D8E6AF98D68F766B15C802B6(L_10, L_12, (&V_6), NULL);
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		// children.Add(categoryAttribute);
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_14 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_15 = V_6;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_14, L_15, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
	}

IL_0045:
	{
		// for (int i = 0; i < itemCatAllChildrenCount; i++) {
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < itemCatAllChildrenCount; i++) {
		int32_t L_17 = V_5;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002a;
		}
	}
	{
		// GenericObjectPool.Return(pooledItemCatAllChildren);
		ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76(L_19, GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76_RuntimeMethod_var);
		// var pooledItemCatAllChildrenElements = GenericObjectPool.Get<ItemDefinition[]>();
		ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* L_20;
		L_20 = GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88(GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88_RuntimeMethod_var);
		V_3 = L_20;
		// var itemCatAllChildrenElementsCount = m_ItemCategory.GetAllChildrenElements(ref pooledItemCatAllChildrenElements);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_21 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		int32_t L_22;
		L_22 = ObjectCategoryBase_2_GetAllChildrenElements_m240C4989302B816AB7E2574EA3CD86CF92403C48(L_21, (&V_3), (bool)1, ObjectCategoryBase_2_GetAllChildrenElements_m240C4989302B816AB7E2574EA3CD86CF92403C48_RuntimeMethod_var);
		V_4 = L_22;
		// for (int i = 0; i < itemCatAllChildrenElementsCount; i++) {
		V_7 = 0;
		goto IL_010c;
	}

IL_0074:
	{
		// var definitionChild = pooledItemCatAllChildrenElements[i];
		ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* L_23 = V_3;
		int32_t L_24 = V_7;
		int32_t L_25 = L_24;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		// if (m_ItemCategory.Manager == null) {
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_27 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		RuntimeObject* L_28;
		L_28 = ObjectCategoryBase_get_Manager_m41854B2C5431F4BEB4721E980E674860A21B5653_inline(L_27, NULL);
		if (L_28)
		{
			goto IL_00a9;
		}
	}
	{
		// if (definitionChild.DefaultItem.TryGetAttribute(attribute.Name, out var itemAttribute) == false) { continue; }
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_29 = V_8;
		Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* L_30;
		L_30 = VirtualFuncInvoker0< Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* >::Invoke(17 /* Opsive.UltimateInventorySystem.Core.Item Opsive.UltimateInventorySystem.Core.ItemDefinition::get_DefaultItem() */, L_29);
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_31 = ___0_attribute;
		String_t* L_32;
		L_32 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_31, NULL);
		bool L_33;
		L_33 = VirtualFuncInvoker4< bool, String_t*, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740**, bool, bool >::Invoke(19 /* System.Boolean Opsive.UltimateInventorySystem.Core.Item::TryGetAttribute(System.String,Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase&,System.Boolean,System.Boolean) */, L_30, L_32, (&V_9), (bool)1, (bool)1);
		if (!L_33)
		{
			goto IL_0106;
		}
	}
	{
		// children.Add(itemAttribute);
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_34 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_35 = V_9;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_34, L_35, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
		goto IL_0106;
	}

IL_00a9:
	{
		// foreach (var itemChild in m_ItemCategory.Manager.Register.ItemRegister.ItemsWithItemDefinition(definitionChild)) {
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_36 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		RuntimeObject* L_37;
		L_37 = ObjectCategoryBase_get_Manager_m41854B2C5431F4BEB4721E980E674860A21B5653_inline(L_36, NULL);
		InventorySystemRegister_tE220B184CA96DE245D63BFB8DFB1684C187331BB* L_38;
		L_38 = InterfaceFuncInvoker0< InventorySystemRegister_tE220B184CA96DE245D63BFB8DFB1684C187331BB* >::Invoke(1 /* Opsive.UltimateInventorySystem.Core.InventorySystemRegister Opsive.UltimateInventorySystem.Core.IInventorySystemManager::get_Register() */, IInventorySystemManager_tEF8249B3C7ADB739C5C2D3625F3A11A3991812FE_il2cpp_TypeInfo_var, L_37);
		ItemRegister_t4B8E53C9B5DFB916FB4EA7E3D4C2C39E6F442CC0* L_39;
		L_39 = InventorySystemRegister_get_ItemRegister_m44A09FF58F42EA631C740D34E25735CD387F19FB_inline(L_38, NULL);
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_40 = V_8;
		RuntimeObject* L_41;
		L_41 = VirtualFuncInvoker2< RuntimeObject*, ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11*, bool >::Invoke(17 /* System.Collections.Generic.IReadOnlyList`1<Opsive.UltimateInventorySystem.Core.Item> Opsive.UltimateInventorySystem.Core.Registers.ItemRegister::ItemsWithItemDefinition(Opsive.UltimateInventorySystem.Core.ItemDefinition,System.Boolean) */, L_39, L_40, (bool)0);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Opsive.UltimateInventorySystem.Core.Item>::GetEnumerator() */, IEnumerable_1_tF9F922C00021BC45482311AE01AB951498A8440E_il2cpp_TypeInfo_var, L_41);
		V_10 = L_42;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fa:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_43 = V_10;
					if (!L_43)
					{
						goto IL_0105;
					}
				}
				{
					RuntimeObject* L_44 = V_10;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_44);
				}

IL_0105:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ef_1;
			}

IL_00cf_1:
			{
				// foreach (var itemChild in m_ItemCategory.Manager.Register.ItemRegister.ItemsWithItemDefinition(definitionChild)) {
				RuntimeObject* L_45 = V_10;
				Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* L_46;
				L_46 = InterfaceFuncInvoker0< Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Opsive.UltimateInventorySystem.Core.Item>::get_Current() */, IEnumerator_1_t977EDF122FCFEADF6A4134F582155D5B54862404_il2cpp_TypeInfo_var, L_45);
				// if (itemChild.TryGetAttribute(attribute.Name, out var itemAttribute) == false) { continue; }
				AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_47 = ___0_attribute;
				String_t* L_48;
				L_48 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_47, NULL);
				bool L_49;
				L_49 = VirtualFuncInvoker4< bool, String_t*, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740**, bool, bool >::Invoke(19 /* System.Boolean Opsive.UltimateInventorySystem.Core.Item::TryGetAttribute(System.String,Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase&,System.Boolean,System.Boolean) */, L_46, L_48, (&V_11), (bool)1, (bool)1);
				if (!L_49)
				{
					goto IL_00ef_1;
				}
			}
			{
				// children.Add(itemAttribute);
				List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_50 = V_0;
				AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_51 = V_11;
				List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_50, L_51, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
			}

IL_00ef_1:
			{
				// foreach (var itemChild in m_ItemCategory.Manager.Register.ItemRegister.ItemsWithItemDefinition(definitionChild)) {
				RuntimeObject* L_52 = V_10;
				bool L_53;
				L_53 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_52);
				if (L_53)
				{
					goto IL_00cf_1;
				}
			}
			{
				goto IL_0106;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0106:
	{
		// for (int i = 0; i < itemCatAllChildrenElementsCount; i++) {
		int32_t L_54 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_010c:
	{
		// for (int i = 0; i < itemCatAllChildrenElementsCount; i++) {
		int32_t L_55 = V_7;
		int32_t L_56 = V_4;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0074;
		}
	}
	{
		// GenericObjectPool.Return(pooledItemCatAllChildrenElements);
		ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* L_57 = V_3;
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF(L_57, GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF_RuntimeMethod_var);
		// return children;
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_58 = V_0;
		return L_58;
	}
}
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection::GetInheritOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* RequiredItemAttributeCollection_GetInheritOfAttribute_m5004DDD19627146DFF78477B7CD2245E1DB273E9 (RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tB340D8A31C84ABC82B33D58BEBB5E6209C3550E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tD8BA3DA7DFEA95B7B7FBB7BA25A718AFC16E4770_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* V_2 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_3 = NULL;
	{
		// var parentCount = m_ItemCategory.ParentsReadOnly.Count;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		RuntimeObject* L_1;
		L_1 = ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_inline(L_0, ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Opsive.UltimateInventorySystem.Core.ItemCategory>::get_Count() */, IReadOnlyCollection_1_tB340D8A31C84ABC82B33D58BEBB5E6209C3550E4_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// for (int i = 0; i < parentCount; i++) {
		V_1 = 0;
		goto IL_0046;
	}

IL_0015:
	{
		// var parent = m_ItemCategory.ParentsReadOnly[i];
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_3 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		RuntimeObject* L_4;
		L_4 = ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_inline(L_3, ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		int32_t L_5 = V_1;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_6;
		L_6 = InterfaceFuncInvoker1< ItemCategory_t04903305B36771249605A34F2CB395AC5418081C*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Opsive.UltimateInventorySystem.Core.ItemCategory>::get_Item(System.Int32) */, IReadOnlyList_1_tD8BA3DA7DFEA95B7B7FBB7BA25A718AFC16E4770_il2cpp_TypeInfo_var, L_4, L_5);
		V_2 = L_6;
		// if (parent == null) { continue; }
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0042;
		}
	}
	{
		// if (parent.TryGetItemAttribute(attribute.Name, out var output)) {
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_9 = V_2;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_10 = ___0_attribute;
		String_t* L_11;
		L_11 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_10, NULL);
		bool L_12;
		L_12 = ItemCategory_TryGetItemAttribute_mE7B6EA0C22DC6F80D8E6AF98D68F766B15C802B6(L_9, L_11, (&V_3), NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		// return output;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_13 = V_3;
		return L_13;
	}

IL_0042:
	{
		// for (int i = 0; i < parentCount; i++) {
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < parentCount; i++) {
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*)NULL;
	}
}
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection::GetSourceOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* RequiredItemAttributeCollection_GetSourceOfAttribute_m56FDAC70E13B5F2704765641A390AF3E43CCA6A9 (RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* V_0 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_1 = NULL;
	{
		// var source = attribute.GetSourceCategory();
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_0 = ___0_attribute;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_1;
		L_1 = AttributeBase_GetSourceCategory_m6A38F7BC0EB081CF5BB61D94217B7349E3CEF3C0(L_0, NULL);
		V_0 = L_1;
		// if (source == null) { return null; }
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// if (source == null) { return null; }
		return (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*)NULL;
	}

IL_0012:
	{
		// source.TryGetItemAttribute(attribute.Name, out var sourceAttribute);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_4 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_5 = ___0_attribute;
		String_t* L_6;
		L_6 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_5, NULL);
		bool L_7;
		L_7 = ItemCategory_TryGetItemAttribute_mE7B6EA0C22DC6F80D8E6AF98D68F766B15C802B6(L_4, L_6, (&V_1), NULL);
		// return sourceAttribute;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_8 = V_1;
		return L_8;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection::AddAttributeToCategory(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,Opsive.UltimateInventorySystem.Core.ItemCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredItemAttributeCollection_AddAttributeToCategory_mDD173767EB7A2EB01B5AF37F974324EE469CB557 (RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_newTypeAttribute, ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ___1_sourceCategory, const RuntimeMethod* method) 
{
	{
		// sourceCategory.AddItemAttribute(newTypeAttribute);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ___1_sourceCategory;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_1 = ___0_newTypeAttribute;
		bool L_2;
		L_2 = VirtualFuncInvoker3< bool, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*, bool, bool >::Invoke(41 /* System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::AddItemAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,System.Boolean,System.Boolean) */, L_0, L_1, (bool)1, (bool)0);
		// }
		return;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemAttributeCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredItemAttributeCollection__ctor_m8F8BA4787E2F1C5B8045E958A76C004AA79CFFC4 (RequiredItemAttributeCollection_tFBD28E50361617D310ECB4EC287A3D9B99032378* __this, const RuntimeMethod* method) 
{
	{
		AttributeCollection__ctor_m4A45E835F6DE1CA2AC05C26EFAA8C9EBDAB48AE6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RequiredItemDefinitionAttributeCollection_get_Index_m429ECDB222DCD3314D16EE0270BED8931B427D94 (RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5* __this, const RuntimeMethod* method) 
{
	{
		// public override int Index => 1;
		return 1;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection::Initialize(Opsive.UltimateInventorySystem.Core.ItemCategory,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredItemDefinitionAttributeCollection_Initialize_m55B6F30BB2D19BB8F33B4CEC45B063A914C3C388 (RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5* __this, ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ___0_itemCategory, bool ___1_force, const RuntimeMethod* method) 
{
	{
		// m_ItemCategory = itemCategory;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ___0_itemCategory;
		((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2), (void*)L_0);
		// base.Initialize(force);
		bool L_1 = ___1_force;
		AttributeCollection_Initialize_m2DF6EF923A2AF14B58F9C18881DBC3CCDE66839D(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Object Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection::GetAttachedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* RequiredItemDefinitionAttributeCollection_GetAttachedObject_m1C2AD5647006D1467072C4D7AEE1216719D52992 (RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5* __this, const RuntimeMethod* method) 
{
	{
		// return m_ItemCategory;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase> Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection::GetChildrenOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* RequiredItemDefinitionAttributeCollection_GetChildrenOfAttribute_mFBAB1C541838F64066469E80D9B3DE3387135CF0 (RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, bool ___1_includeThisAttribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectCategoryBase_2_GetAllChildrenElements_m240C4989302B816AB7E2574EA3CD86CF92403C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81A978282BF4250D77182CEEC04C96B2B3A9FCCB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* V_0 = NULL;
	ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* V_1 = NULL;
	int32_t V_2 = 0;
	ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_6 = NULL;
	int32_t V_7 = 0;
	ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* V_8 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_9 = NULL;
	{
		// var children = new List<AttributeBase>();
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_0 = (List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26*)il2cpp_codegen_object_new(List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26_il2cpp_TypeInfo_var);
		List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74(L_0, List_1__ctor_mF58078A0712E46FAB3A0AB54EBBDC6A6A6377F74_RuntimeMethod_var);
		V_0 = L_0;
		// if (includeThisAttribute) { children.Add(attribute); }
		bool L_1 = ___1_includeThisAttribute;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (includeThisAttribute) { children.Add(attribute); }
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_2 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_3 = ___0_attribute;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_2, L_3, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
	}

IL_0010:
	{
		// var pooledItemCatAllChildren = GenericObjectPool.Get<ItemCategory[]>();
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* L_4;
		L_4 = GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C(GenericObjectPool_Get_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_mFE131EC02C7ABC067155F3143C7642821516414C_RuntimeMethod_var);
		V_1 = L_4;
		// var itemCatAllChildrenCount = m_ItemCategory.GetAllChildren(ref pooledItemCatAllChildren, false);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_5 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		int32_t L_6;
		L_6 = ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1(L_5, (&V_1), (bool)0, ObjectCategoryBase_2_GetAllChildren_m8E339C477244BF4138923B4F03D911A1FD2238A1_RuntimeMethod_var);
		V_2 = L_6;
		// for (int i = 0; i < itemCatAllChildrenCount; i++) {
		V_5 = 0;
		goto IL_004b;
	}

IL_002a:
	{
		// var categoryChild = pooledItemCatAllChildren[i];
		ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* L_7 = V_1;
		int32_t L_8 = V_5;
		int32_t L_9 = L_8;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		// if (categoryChild.TryGetDefinitionAttribute(attribute.Name, out var categoryAttribute) ==
		//     false) { continue; }
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_11 = ___0_attribute;
		String_t* L_12;
		L_12 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_11, NULL);
		bool L_13;
		L_13 = ItemCategory_TryGetDefinitionAttribute_mD164B55759737DAAA026126C0030A7EDF7691544(L_10, L_12, (&V_6), NULL);
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		// children.Add(categoryAttribute);
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_14 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_15 = V_6;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_14, L_15, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
	}

IL_0045:
	{
		// for (int i = 0; i < itemCatAllChildrenCount; i++) {
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < itemCatAllChildrenCount; i++) {
		int32_t L_17 = V_5;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002a;
		}
	}
	{
		// GenericObjectPool.Return(pooledItemCatAllChildren);
		ItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B* L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76(L_19, GenericObjectPool_Return_TisItemCategoryU5BU5D_t7AA28E985B780ED28EE45EA3D6EA3EDC717A542B_m85BB7EF5E75A83A7F9897160B34DF14B11388A76_RuntimeMethod_var);
		// var pooledItemCatAllChildrenElements = GenericObjectPool.Get<ItemDefinition[]>();
		ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* L_20;
		L_20 = GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88(GenericObjectPool_Get_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mB00474B40853E5A8012640F15F36F02889B10E88_RuntimeMethod_var);
		V_3 = L_20;
		// var itemCatAllChildrenElementsCount = m_ItemCategory.GetAllChildrenElements(ref pooledItemCatAllChildrenElements);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_21 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		int32_t L_22;
		L_22 = ObjectCategoryBase_2_GetAllChildrenElements_m240C4989302B816AB7E2574EA3CD86CF92403C48(L_21, (&V_3), (bool)1, ObjectCategoryBase_2_GetAllChildrenElements_m240C4989302B816AB7E2574EA3CD86CF92403C48_RuntimeMethod_var);
		V_4 = L_22;
		// for (var i = 0; i < itemCatAllChildrenElementsCount; i++) {
		V_7 = 0;
		goto IL_00ad;
	}

IL_0071:
	{
		// var definitionChild = pooledItemCatAllChildrenElements[i];
		ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* L_23 = V_3;
		int32_t L_24 = V_7;
		int32_t L_25 = L_24;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		// if (definitionChild == null) {
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_27 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_008d;
		}
	}
	{
		// Debug.LogWarning("Something is wrong with the database, an itemDefinition child is missing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral81A978282BF4250D77182CEEC04C96B2B3A9FCCB, NULL);
		// continue;
		goto IL_00a7;
	}

IL_008d:
	{
		// if (definitionChild.TryGetAttribute(attribute.Name, out var definitionAttribute) == false) { continue; }
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_29 = V_8;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_30 = ___0_attribute;
		String_t* L_31;
		L_31 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_30, NULL);
		bool L_32;
		L_32 = ItemDefinition_TryGetAttribute_m0E9A3B813DE7DC129BAF8E43EDEE71AD16EAE115(L_29, L_31, (&V_9), (bool)1, NULL);
		if (!L_32)
		{
			goto IL_00a7;
		}
	}
	{
		// children.Add(definitionAttribute);
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_33 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_34 = V_9;
		List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_inline(L_33, L_34, List_1_Add_m26D52334FF36501E9C5F6D3A4B59DE782918C9B9_RuntimeMethod_var);
	}

IL_00a7:
	{
		// for (var i = 0; i < itemCatAllChildrenElementsCount; i++) {
		int32_t L_35 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ad:
	{
		// for (var i = 0; i < itemCatAllChildrenElementsCount; i++) {
		int32_t L_36 = V_7;
		int32_t L_37 = V_4;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0071;
		}
	}
	{
		// GenericObjectPool.Return(pooledItemCatAllChildrenElements);
		ItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE* L_38 = V_3;
		il2cpp_codegen_runtime_class_init_inline(GenericObjectPool_t88F8366278629515D9F98E9172A00F0A0D0C5EA4_il2cpp_TypeInfo_var);
		GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF(L_38, GenericObjectPool_Return_TisItemDefinitionU5BU5D_tDB5D317DCFCE474240E3FE096D1C9AC21E0A54DE_mA2EF3B548D857AFD3E4339BE7448D1EBC1E656FF_RuntimeMethod_var);
		// return children;
		List_1_tD0182024B302D7017FE528EEC720DDF758BC8B26* L_39 = V_0;
		return L_39;
	}
}
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection::GetInheritOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* RequiredItemDefinitionAttributeCollection_GetInheritOfAttribute_mD4B2332577B962ED107D1CF632A2FCD8F78DBD8D (RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tB340D8A31C84ABC82B33D58BEBB5E6209C3550E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tD8BA3DA7DFEA95B7B7FBB7BA25A718AFC16E4770_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* V_2 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_3 = NULL;
	{
		// var parentCount = m_ItemCategory.ParentsReadOnly.Count;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		RuntimeObject* L_1;
		L_1 = ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_inline(L_0, ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Opsive.UltimateInventorySystem.Core.ItemCategory>::get_Count() */, IReadOnlyCollection_1_tB340D8A31C84ABC82B33D58BEBB5E6209C3550E4_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// for (int i = 0; i < parentCount; i++) {
		V_1 = 0;
		goto IL_0046;
	}

IL_0015:
	{
		// var parent = m_ItemCategory.ParentsReadOnly[i];
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_3 = ((AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3*)__this)->___m_ItemCategory_2;
		RuntimeObject* L_4;
		L_4 = ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_inline(L_3, ObjectCategoryBase_2_get_ParentsReadOnly_m74342A68694DBA4BF4CF97D6BF259399E3B08BE5_RuntimeMethod_var);
		int32_t L_5 = V_1;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_6;
		L_6 = InterfaceFuncInvoker1< ItemCategory_t04903305B36771249605A34F2CB395AC5418081C*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Opsive.UltimateInventorySystem.Core.ItemCategory>::get_Item(System.Int32) */, IReadOnlyList_1_tD8BA3DA7DFEA95B7B7FBB7BA25A718AFC16E4770_il2cpp_TypeInfo_var, L_4, L_5);
		V_2 = L_6;
		// if (parent == null) { continue; }
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0042;
		}
	}
	{
		// if (parent.TryGetDefinitionAttribute(attribute.Name, out var output)) {
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_9 = V_2;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_10 = ___0_attribute;
		String_t* L_11;
		L_11 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_10, NULL);
		bool L_12;
		L_12 = ItemCategory_TryGetDefinitionAttribute_mD164B55759737DAAA026126C0030A7EDF7691544(L_9, L_11, (&V_3), NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		// return output;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_13 = V_3;
		return L_13;
	}

IL_0042:
	{
		// for (int i = 0; i < parentCount; i++) {
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < parentCount; i++) {
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*)NULL;
	}
}
// Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection::GetSourceOfAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* RequiredItemDefinitionAttributeCollection_GetSourceOfAttribute_m141636AB60E0EDC15FC9CDA05886E84956241408 (RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* V_0 = NULL;
	AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* V_1 = NULL;
	{
		// var source = attribute.GetSourceCategory();
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_0 = ___0_attribute;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_1;
		L_1 = AttributeBase_GetSourceCategory_m6A38F7BC0EB081CF5BB61D94217B7349E3CEF3C0(L_0, NULL);
		V_0 = L_1;
		// if (source == null) { return null; }
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// if (source == null) { return null; }
		return (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*)NULL;
	}

IL_0012:
	{
		// source.TryGetDefinitionAttribute(attribute.Name, out var sourceAttribute);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_4 = V_0;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_5 = ___0_attribute;
		String_t* L_6;
		L_6 = AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline(L_5, NULL);
		bool L_7;
		L_7 = ItemCategory_TryGetDefinitionAttribute_mD164B55759737DAAA026126C0030A7EDF7691544(L_4, L_6, (&V_1), NULL);
		// return sourceAttribute;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_8 = V_1;
		return L_8;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection::AddAttributeToCategory(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,Opsive.UltimateInventorySystem.Core.ItemCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredItemDefinitionAttributeCollection_AddAttributeToCategory_mF7BE1BED2F325C3821606CF3D232070C771A9F79 (RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5* __this, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* ___0_newTypeAttribute, ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ___1_sourceCategory, const RuntimeMethod* method) 
{
	{
		// sourceCategory.AddDefinitionAttribute(newTypeAttribute);
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = ___1_sourceCategory;
		AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* L_1 = ___0_newTypeAttribute;
		bool L_2;
		L_2 = VirtualFuncInvoker3< bool, AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740*, bool, bool >::Invoke(39 /* System.Boolean Opsive.UltimateInventorySystem.Core.ItemCategory::AddDefinitionAttribute(Opsive.UltimateInventorySystem.Core.AttributeSystem.AttributeBase,System.Boolean,System.Boolean) */, L_0, L_1, (bool)1, (bool)0);
		// }
		return;
	}
}
// System.Void Opsive.UltimateInventorySystem.Core.AttributeSystem.RequiredItemDefinitionAttributeCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredItemDefinitionAttributeCollection__ctor_m0F1689AD19766EB08E9957B09C5E089A61004000 (RequiredItemDefinitionAttributeCollection_tAE52DFAFE830828A4525871FCA580BE2C7EBC7F5* __this, const RuntimeMethod* method) 
{
	{
		AttributeCollection__ctor_m4A45E835F6DE1CA2AC05C26EFAA8C9EBDAB48AE6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AttributeBase_get_Name_m97B3E4448072F650593323E30AE665F0F1F77557_inline (AttributeBase_tCE872FD75B9D3766D8DFF449CFCDA0768DE2E740* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Name;
		String_t* L_0 = __this->___m_Name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* ItemDefinition_get_Category_mD5A797ACC3772886878614C291EA671A88F56511_inline (ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* __this, const RuntimeMethod* method) 
{
	{
		// public ItemCategory Category => m_Category;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = __this->___m_Category_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* AttributeCollection_get_AttachedItemDefinition_mDB4187534FE416F8A86E886B3A05848A72636137_inline (AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3* __this, const RuntimeMethod* method) 
{
	{
		// public ItemDefinition AttachedItemDefinition => m_ItemDefinition;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_0 = __this->___m_ItemDefinition_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* ItemDefinition_get_Parent_m8FC088921292617CE3020C884747E7169549E097_inline (ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* __this, const RuntimeMethod* method) 
{
	{
		// public ItemDefinition Parent => m_Parent;
		ItemDefinition_tB6BDE76C997CE5B9A61159B01127E4B6810A6C11* L_0 = __this->___m_Parent_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* AttributeCollection_get_AttachedItemCategory_m95EA47F6779EBE9721D1D08F31B1521E836763D4_inline (AttributeCollection_t8AE094746A5B2EC18C2EA5A404F54D62BD69E0D3* __this, const RuntimeMethod* method) 
{
	{
		// public ItemCategory AttachedItemCategory => m_ItemCategory;
		ItemCategory_t04903305B36771249605A34F2CB395AC5418081C* L_0 = __this->___m_ItemCategory_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ItemID_get_ID_m3ED8AEF233C6548A559D761F221E4D7F962C686E_inline (ItemID_t63E6C09BFEB2E189E016037EC7750EDFF8E589A0* __this, const RuntimeMethod* method) 
{
	{
		// public uint ID => m_ID;
		uint32_t L_0 = __this->___m_ID_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Item_get_ID_mCEEDE8975DC6441DA6645CB71C14455054281989_inline (Item_tAB5B007887FF3D7A5843FEAA5E381FDEF69C1368* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ID;
		uint32_t L_0 = __this->___m_ID_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectCategoryBase_get_Manager_m41854B2C5431F4BEB4721E980E674860A21B5653_inline (ObjectCategoryBase_t49A5955A299DFDA799634D11D068D0448F2A97FC* __this, const RuntimeMethod* method) 
{
	{
		// public IInventorySystemManager Manager => m_Manager;
		RuntimeObject* L_0 = __this->___m_Manager_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemRegister_t4B8E53C9B5DFB916FB4EA7E3D4C2C39E6F442CC0* InventorySystemRegister_get_ItemRegister_m44A09FF58F42EA631C740D34E25735CD387F19FB_inline (InventorySystemRegister_tE220B184CA96DE245D63BFB8DFB1684C187331BB* __this, const RuntimeMethod* method) 
{
	{
		// public ItemRegister ItemRegister => m_ItemRegister;
		ItemRegister_t4B8E53C9B5DFB916FB4EA7E3D4C2C39E6F442CC0* L_0 = __this->___m_ItemRegister_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectCategoryBase_2_get_ParentsReadOnly_m10A35B5F6EC1D77303A585B5E3D0A961C8D6EF30_gshared_inline (ObjectCategoryBase_2_tFEF6C83EAA1DAF486EA0969B108DF8C99A805709* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<Tc> ParentsReadOnly => m_Parents;
		ResizableArray_1_tFB97DE3E77EED16AC3404F15F582410B50D6AF2D* L_0 = (ResizableArray_1_tFB97DE3E77EED16AC3404F15F582410B50D6AF2D*)__this->___m_Parents_12;
		return (RuntimeObject*)L_0;
	}
}
