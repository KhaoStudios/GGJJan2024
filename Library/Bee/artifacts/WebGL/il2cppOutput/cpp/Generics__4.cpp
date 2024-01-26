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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
struct ConcurrentDictionary_2_t61ABDC812A5E1FA61CA1D054E30FDBC0FBAC59E2;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27;
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
struct Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391;
struct Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD;
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298;
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
struct Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC;
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
struct EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE;
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
struct EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerator_1_tAA9E173D47F9A415DBE8F74E8C3F53E27F513950;
struct IEnumerator_1_t624E4ACED0595D86B82D760C85467E4E14C56461;
struct IEnumerator_1_t4EC05F0388C6799BF59DA77402A429B881458999;
struct IEnumerator_1_tE197EBD3554578DCB0A0A2E70645435F8856FEE5;
struct IEnumerator_1_t4CB13C9A05F08FC5070C0050B8AF1013247C8994;
struct IEnumerator_1_t27771A7319D2520B4F15723B7B749B9B3E230BFA;
struct IEnumerator_1_t2277EBE57B480D26E1A1BAF0B3DD70CC26E72D07;
struct IEnumerator_1_tE2AB2A6E2661FBD7764D3CE8895E8C8688367A09;
struct IEnumerator_1_t192373A769144C09B373C679B571147333BF7A2C;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_tDACC7D28FFD11A83A9FC39CC18863F52A3E7E88F;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IEqualityComparer_1_t38009044A4DADA30C1C7C33E1DB1F56A370D4EE0;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t4537FF5E9634FC142F7BF26B48CA727CCA436047;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123;
struct KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E;
struct KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9;
struct KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0;
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
struct KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA;
struct KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96;
struct KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct Tables_t552844290483E90F3B37D4E84D3B1BB77B344335;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F;
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296;
struct ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24;
struct ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11;
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
struct ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C;
struct ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D;
struct ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F;
struct EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B;
struct EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5;
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
struct EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A;
struct EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252;
struct EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882;
struct KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40;
struct KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E;
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F;
struct KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200;
struct KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469;
struct KeyValuePair_2U5BU5D_t9B210B27251839ADA226FB0D3EA6E1F5671FFF8E;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F;
struct EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B;
struct EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5;
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
struct EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A;
struct EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252;
struct EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882;
struct KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40;
struct KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E;
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265;
struct KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F;
struct KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200;
struct KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentDictionary_2_t61ABDC812A5E1FA61CA1D054E30FDBC0FBAC59E2  : public RuntimeObject
{
	Tables_t552844290483E90F3B37D4E84D3B1BB77B344335* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t9B210B27251839ADA226FB0D3EA6E1F5671FFF8E* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* ____keys;
	ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* ____keys;
	ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* ____keys;
	ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0* ____keys;
	ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys;
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* ____keys;
	ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96* ____keys;
	ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F* ____keys;
	ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC  : public RuntimeObject
{
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};
struct EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE  : public RuntimeObject
{
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};
struct EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E  : public RuntimeObject
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary;
};
struct KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9  : public RuntimeObject
{
	Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ____dictionary;
};
struct KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0  : public RuntimeObject
{
	Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ____dictionary;
};
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952  : public RuntimeObject
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
};
struct KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA  : public RuntimeObject
{
	Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ____dictionary;
};
struct KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96  : public RuntimeObject
{
	Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ____dictionary;
};
struct KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F  : public RuntimeObject
{
	Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* ____dictionary;
};
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296  : public RuntimeObject
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary;
};
struct ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24  : public RuntimeObject
{
	Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ____dictionary;
};
struct ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11  : public RuntimeObject
{
	Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ____dictionary;
};
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F  : public RuntimeObject
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
};
struct ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C  : public RuntimeObject
{
	Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ____dictionary;
};
struct ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D  : public RuntimeObject
{
	Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ____dictionary;
};
struct ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418  : public RuntimeObject
{
	Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
	bool ___m_UnloadSceneOpExcludeReleaseCallback;
};
struct DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77 
{
	RuntimeObject* ____dictionary;
	RuntimeObject* ____enumerator;
};
struct Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 
{
	String_t* ___m_Graph;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Dependencies;
	int32_t ___m_ObjectId;
	String_t* ___m_DisplayName;
	int32_t ___m_Stream;
	int32_t ___m_Frame;
	int32_t ___m_Value;
};
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke
{
	char* ___m_Graph;
	Il2CppSafeArray* ___m_Dependencies;
	int32_t ___m_ObjectId;
	char* ___m_DisplayName;
	int32_t ___m_Stream;
	int32_t ___m_Frame;
	int32_t ___m_Value;
};
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com
{
	Il2CppChar* ___m_Graph;
	Il2CppSafeArray* ___m_Dependencies;
	int32_t ___m_ObjectId;
	Il2CppChar* ___m_DisplayName;
	int32_t ___m_Stream;
	int32_t ___m_Frame;
	int32_t ___m_Value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
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
struct EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 
{
	String_t* ___eventName;
	RuntimeObject* ___eventObject;
	String_t* ___methodName;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___methodArgs;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___methodArgTypes;
};
struct EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50_marshaled_pinvoke
{
	char* ___eventName;
	Il2CppIUnknown* ___eventObject;
	char* ___methodName;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___methodArgs;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___methodArgTypes;
};
struct EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50_marshaled_com
{
	Il2CppChar* ___eventName;
	Il2CppIUnknown* ___eventObject;
	Il2CppChar* ___methodName;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___methodArgs;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___methodArgTypes;
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	RuntimeObject* ___value;
};
struct Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD 
{
	int32_t ___hashCode;
	int32_t ___next;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	uint32_t ___value;
};
struct Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___value;
};
struct Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___value;
};
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	Guid_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	uint32_t ___value;
};
struct KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 
{
	int32_t ___key;
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___value;
};
struct KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B 
{
	RuntimeObject* ___key;
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___value;
};
struct KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F 
{
	uint32_t ___key;
	EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 ___value;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	int32_t ___value;
};
struct Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RuntimeObject* ___value;
};
struct Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951 
{
	Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287 
{
	Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1 
{
	Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 
{
	int32_t ___key;
	int32_t ___value;
};
struct KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 
{
	Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 
{
	Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct ConcurrentDictionary_2_t61ABDC812A5E1FA61CA1D054E30FDBC0FBAC59E2_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC_StaticFields
{
	EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* ___defaultComparer;
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer;
};
struct EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE_StaticFields
{
	EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* ___defaultComparer;
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer;
};
struct EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839_StaticFields
{
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 m_Items[1];

	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 m_Items[1];

	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
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
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF m_Items[1];

	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 m_Items[1];

	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD m_Items[1];

	inline Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 m_Items[1];

	inline KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444 m_Items[1];

	inline Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_DisplayName), (void*)NULL);
		#endif
	}
	inline Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_DisplayName), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 m_Items[1];

	inline KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_DisplayName), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_DisplayName), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 m_Items[1];

	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 m_Items[1];

	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A m_Items[1];

	inline Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 m_Items[1];

	inline KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 m_Items[1];

	inline Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B m_Items[1];

	inline KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E m_Items[1];

	inline Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_InternalOp), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_LocationName), (void*)NULL);
		#endif
	}
	inline Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_InternalOp), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_LocationName), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B m_Items[1];

	inline KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_InternalOp), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_LocationName), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_InternalOp), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_LocationName), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m453CE99D2E351D49548734F55421089A2FE94086_gshared (ConcurrentDictionary_2_t61ABDC812A5E1FA61CA1D054E30FDBC0FBAC59E2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m3AAD4694A3FC15B0A75EF031576EBF4A723752DE_gshared_inline (KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 KeyValuePair_2_get_Value_m8AE40C80A65732F73795A3BD3511B67D99648118_gshared_inline (KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m436C4DF39163097FD900C544EE82003352C1B710_gshared (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099_gshared (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151_gshared (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735_gshared (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04_gshared (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m823F29E78EF44E7B4DD7A7E93CCF8B65BB47C5FC_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m50E4304F0265C80278520C3799F46D0112452040_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mCE43AB6DB73689CF15864C6053596591288BF08E_gshared (KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* __this, Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mA2E569AA622D6F365D490E028D6F42DE7376E415_gshared (ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* __this, Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m89FC5B61EBF364105966D7D788A2CF7D84341423_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_gshared_inline (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mE485C93AB111C031ED3F75ACC4A6E67E0F0F4723_gshared_inline (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB8CB90D9FFC33504630529B6C99891A5ED4FAA1C_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m79421F90009DF43417B597FE202B5BDC8562D80F_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m595B8CF03DB7619FCA48FA1591249FC42E9E6240_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m3DBF36DD69CA8CCDFED3B681A76E5C3F7F6C0BA6_gshared (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2C098C372A9751ACBE270E5190BFF655D4D8070B_gshared (Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951* __this, Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mAE2B2EC1886F4AA58528C023B299AAA6CBC9EFBD_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFFBEF9984B1C0D7A6BE29A9E41E2613025AC3E95_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m252E5DBA8BF6D846BDB7DFBD55572D9A3B45E158_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1C4A3AA6CBB300E4606C4EB09049E6E2E23E4B21_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFF146E364FAAEE8CB173A7FA7D2319972EA8D403_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD09D801EE533A85CFF101E438F34A4C9C59B38F2_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m56E195EEF3D86838D4B57645FF90FDF0875D3167_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m546C282DEACCA1742EDDC51821A81660AC8087B3_gshared (KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0* __this, Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mA67D41CA7F207E040D3275831D4B819294B45E2F_gshared (ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* __this, Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m1A5C68C455E061A8382BDBB6354533B655A190D9_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_gshared_inline (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 KeyValuePair_2_get_Value_m9617D9D28DF3AA8EC0E34BB79A8C9EB95C6EAD04_gshared_inline (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* EqualityComparer_1_get_Default_m974B4F1D5719F47429147A5DD840B0828FBAEDEE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mCB3C7DD1CE53694B9AA2EAD4A8EFB111F82B866D_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7B8DA93E01A412D52BA526003D7359913D5A202A_gshared (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m515A7D8EF7ECCC91291F9DDB73B89D917AE3A7A3_gshared (Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287* __this, Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6A4990A28CB3272193AB1DEF60C848F4B2C5FADC_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0BE46DBAD09144F5B154C57A885943EE5BFF04F5_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBA7A5565D7BDF3C30C253F8DEFC5A8288BCFF438_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m048C1CED84C20FBCAF3A74CD6328A0048C318B35_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m1E71696BB8DB7E3FE27A8F332EF93CB7652A1EA8_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE31B4DE37036F8AEB99B7B49232B233414E04BF7_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723_gshared (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20_gshared (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B_gshared (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAFA7C663A7429D759B0D5A09A97DDF9D66E32743_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8FCB94C0B76C1582D86A9174A585F484307D9270_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mA9991C5AF2EB16822666C27921B57B3A4BA3CA20_gshared (KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* __this, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m0CEA87D8D0476692A675D02BB94328CC3E16FFB4_gshared (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* __this, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mCA3352BB9CE8A0EE18F07435CD2EFE538BB2CBEC_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_gshared_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_gshared_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9F72B0FFEAFD16160C8B7498A1EC43ACF25CC0C6_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3DD3087D4805D1008B9C3F1F1A289C118F5CE7B6_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189_gshared (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725_gshared (Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04* __this, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1F08608E9E567A677E30DF26569BEFA7C211BAFB_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m47AA56AB8E01461257D3A8AD32DAEAC86063639A_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m99C824085DD0513A9C8AB6D9AFDFE9E48B8F5C00_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m35AFF9D9EC49C3C4F14602DBAEF837B8A719A5ED_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0A9199AFF8ECF787A819DA70C4A4F0044E2A0933_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA9988CDC49C4859A6C9555C8CE9C693EA0AF768C_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m87202EF8F02940E5A0724673E307136E50304351_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m141FEC8A9D693CA4D425615F9195E80F65D6E824_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m8C519087BCB5FFD35D876EF93FBD9FA16986AD27_gshared (KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96* __this, Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mA47862C91C8BD3826883744EFD9BC3EE7340EBC8_gshared (ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* __this, Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF5B6729325F7E08B916D02177F4297EF4BC0CF68_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA2D94572DAE1E370288187F54B99416C7DB26A5B_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m44D61ECE58FF6B6BC5BB779226F0461383D152EF_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m1B70672EC0B696E58C922A6D185C86CD7006B6F8_gshared (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF2B67943B3638C9AD8139479815AFA7FEED60631_gshared (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mD0F155918A0635DC9133B7ADFFFC006F2F94F34F_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4EA99E3D08A4C2B55E99328909B7D11E6FD15C97_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA8E5DDDEBF87A1B98493706F317D7E3E4A3E9481_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m7ADDC9F34CC42310518EFB1B798959BB1B8ABEFF_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m770F3D182B371654F32E6FFF89DC905C2AD32789_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m547E8827CE87D6C9AED976DFDC5B8E6AC23954D1_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mFB2AEAEA6D7255707629D1F6F2AA0AFC6FC4A3E5_gshared (KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F* __this, Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mB54E388209AD46F7E943F21473A40741B3C129D2_gshared (ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418* __this, Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m184AE299360DC8DCB2C35E05F1DA5D08BAB12534_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_gshared_inline (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 KeyValuePair_2_get_Value_mF1592BA839D51AA9B856F6556B6D9BB832FD866C_gshared_inline (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBA757139A47D321F50415E1D0FEDE7C92C294FA4_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m79FC8F620689E05D451F624B923E85362C8ACEA3_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m609F0038166048835843A6E6AE36ED8F8C292F53_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m14DEFF24AACC5B24A341C10AFCF2674FE1B7BCEF_gshared (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE293DCECFFD3DC79DA3BB405E596130B5A4D97B5_gshared (Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1* __this, Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m11FC21B493D0736BF4F2AB5ACFC45C1A3580F640_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDE7A4875D36AB15C2945F2F68173F40F5F14A873_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDC54FCF2D6955F43838FB5528E2700D541D140CC_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m7A377D41714DA0AC1B87B7E0016B85F146742DE5_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m98224531D89E6031CF70E590B1F0578AC0E62EF3_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6E423DD8AC7572C1903B722D688234A3C2573B24_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_CreateComparer_m2344A07126F2F0C145C26CE93A1D2CE0669A5A99_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* EqualityComparer_1_CreateComparer_m939626BE110CBEBE5499849C844B2EF1E42A7461_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_CreateComparer_mD9FD96BA3E45AD4E09115DA56FE2C97BDA0431BF_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m453CE99D2E351D49548734F55421089A2FE94086 (ConcurrentDictionary_2_t61ABDC812A5E1FA61CA1D054E30FDBC0FBAC59E2* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t61ABDC812A5E1FA61CA1D054E30FDBC0FBAC59E2*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m453CE99D2E351D49548734F55421089A2FE94086_gshared)(__this, method);
}
inline uint32_t KeyValuePair_2_get_Key_m3AAD4694A3FC15B0A75EF031576EBF4A723752DE_inline (KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F*, const RuntimeMethod*))KeyValuePair_2_get_Key_m3AAD4694A3FC15B0A75EF031576EBF4A723752DE_gshared_inline)(__this, method);
}
inline EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 KeyValuePair_2_get_Value_m8AE40C80A65732F73795A3BD3511B67D99648118_inline (KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F* __this, const RuntimeMethod* method)
{
	return ((  EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 (*) (KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8AE40C80A65732F73795A3BD3511B67D99648118_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m436C4DF39163097FD900C544EE82003352C1B710 (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_m436C4DF39163097FD900C544EE82003352C1B710_gshared)(__this, method);
}
inline void DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, RuntimeObject*, const RuntimeMethod*))DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED_gshared)(__this, ___0_dictionary, method);
}
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477 (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477_gshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA_gshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125 (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125_gshared)(__this, method);
}
inline RuntimeObject* DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A_gshared)(__this, method);
}
inline bool DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398 (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398_gshared)(__this, method);
}
inline void DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70 (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6 (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7 (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1 (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164 (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline)(method);
}
inline void KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099 (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151 (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735 (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*, Guid_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04 (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3*, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m823F29E78EF44E7B4DD7A7E93CCF8B65BB47C5FC (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m823F29E78EF44E7B4DD7A7E93CCF8B65BB47C5FC_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m50E4304F0265C80278520C3799F46D0112452040 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m50E4304F0265C80278520C3799F46D0112452040_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_gshared_inline)(method);
}
inline void KeyCollection__ctor_mCE43AB6DB73689CF15864C6053596591288BF08E (KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* __this, Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9*, Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, const RuntimeMethod*))KeyCollection__ctor_mCE43AB6DB73689CF15864C6053596591288BF08E_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mA2E569AA622D6F365D490E028D6F42DE7376E415 (ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* __this, Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24*, Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, const RuntimeMethod*))ValueCollection__ctor_mA2E569AA622D6F365D490E028D6F42DE7376E415_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m89FC5B61EBF364105966D7D788A2CF7D84341423 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m89FC5B61EBF364105966D7D788A2CF7D84341423_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_inline (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* __this, const RuntimeMethod* method)
{
	return ((  Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 (*) (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149*, const RuntimeMethod*))KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_gshared_inline)(__this, method);
}
inline uint32_t KeyValuePair_2_get_Value_mE485C93AB111C031ED3F75ACC4A6E67E0F0F4723_inline (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149*, const RuntimeMethod*))KeyValuePair_2_get_Value_mE485C93AB111C031ED3F75ACC4A6E67E0F0F4723_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mB8CB90D9FFC33504630529B6C99891A5ED4FAA1C (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t, const RuntimeMethod*))Dictionary_2_Add_mB8CB90D9FFC33504630529B6C99891A5ED4FAA1C_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m79421F90009DF43417B597FE202B5BDC8562D80F (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Dictionary_2_Remove_m79421F90009DF43417B597FE202B5BDC8562D80F_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m595B8CF03DB7619FCA48FA1591249FC42E9E6240 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, const RuntimeMethod*))Dictionary_2_get_Count_m595B8CF03DB7619FCA48FA1591249FC42E9E6240_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m3DBF36DD69CA8CCDFED3B681A76E5C3F7F6C0BA6 (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3DBF36DD69CA8CCDFED3B681A76E5C3F7F6C0BA6_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m2C098C372A9751ACBE270E5190BFF655D4D8070B (Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951* __this, Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951*, Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, int32_t, const RuntimeMethod*))Enumerator__ctor_m2C098C372A9751ACBE270E5190BFF655D4D8070B_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mAE2B2EC1886F4AA58528C023B299AAA6CBC9EFBD (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mAE2B2EC1886F4AA58528C023B299AAA6CBC9EFBD_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mFFBEF9984B1C0D7A6BE29A9E41E2613025AC3E95 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, const RuntimeMethod*))Dictionary_2_Resize_mFFBEF9984B1C0D7A6BE29A9E41E2613025AC3E95_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m252E5DBA8BF6D846BDB7DFBD55572D9A3B45E158 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m252E5DBA8BF6D846BDB7DFBD55572D9A3B45E158_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m1C4A3AA6CBB300E4606C4EB09049E6E2E23E4B21 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m1C4A3AA6CBB300E4606C4EB09049E6E2E23E4B21_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mFF146E364FAAEE8CB173A7FA7D2319972EA8D403 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Dictionary_2_ContainsKey_mFF146E364FAAEE8CB173A7FA7D2319972EA8D403_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mD09D801EE533A85CFF101E438F34A4C9C59B38F2 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD09D801EE533A85CFF101E438F34A4C9C59B38F2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m56E195EEF3D86838D4B57645FF90FDF0875D3167 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m56E195EEF3D86838D4B57645FF90FDF0875D3167_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline void KeyCollection__ctor_m546C282DEACCA1742EDDC51821A81660AC8087B3 (KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0* __this, Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0*, Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, const RuntimeMethod*))KeyCollection__ctor_m546C282DEACCA1742EDDC51821A81660AC8087B3_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mA67D41CA7F207E040D3275831D4B819294B45E2F (ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* __this, Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11*, Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, const RuntimeMethod*))ValueCollection__ctor_mA67D41CA7F207E040D3275831D4B819294B45E2F_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m1A5C68C455E061A8382BDBB6354533B655A190D9 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m1A5C68C455E061A8382BDBB6354533B655A190D9_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_inline (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_gshared_inline)(__this, method);
}
inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 KeyValuePair_2_get_Value_m9617D9D28DF3AA8EC0E34BB79A8C9EB95C6EAD04_inline (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* __this, const RuntimeMethod* method)
{
	return ((  DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 (*) (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244*, const RuntimeMethod*))KeyValuePair_2_get_Value_m9617D9D28DF3AA8EC0E34BB79A8C9EB95C6EAD04_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* EqualityComparer_1_get_Default_m974B4F1D5719F47429147A5DD840B0828FBAEDEE_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m974B4F1D5719F47429147A5DD840B0828FBAEDEE_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mCB3C7DD1CE53694B9AA2EAD4A8EFB111F82B866D (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, const RuntimeMethod*))Dictionary_2_get_Count_mCB3C7DD1CE53694B9AA2EAD4A8EFB111F82B866D_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m7B8DA93E01A412D52BA526003D7359913D5A202A (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244*, int32_t, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))KeyValuePair_2__ctor_m7B8DA93E01A412D52BA526003D7359913D5A202A_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m515A7D8EF7ECCC91291F9DDB73B89D917AE3A7A3 (Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287* __this, Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287*, Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, const RuntimeMethod*))Enumerator__ctor_m515A7D8EF7ECCC91291F9DDB73B89D917AE3A7A3_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m6A4990A28CB3272193AB1DEF60C848F4B2C5FADC (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m6A4990A28CB3272193AB1DEF60C848F4B2C5FADC_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m0BE46DBAD09144F5B154C57A885943EE5BFF04F5 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, const RuntimeMethod*))Dictionary_2_Resize_m0BE46DBAD09144F5B154C57A885943EE5BFF04F5_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mBA7A5565D7BDF3C30C253F8DEFC5A8288BCFF438 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mBA7A5565D7BDF3C30C253F8DEFC5A8288BCFF438_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m048C1CED84C20FBCAF3A74CD6328A0048C318B35 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m048C1CED84C20FBCAF3A74CD6328A0048C318B35_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m1E71696BB8DB7E3FE27A8F332EF93CB7652A1EA8 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m1E71696BB8DB7E3FE27A8F332EF93CB7652A1EA8_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mE31B4DE37036F8AEB99B7B49232B233414E04BF7 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))Dictionary_2_set_Item_mE31B4DE37036F8AEB99B7B49232B233414E04BF7_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723 (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952*, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20 (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F*, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3*, int32_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3*, Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mAFA7C663A7429D759B0D5A09A97DDF9D66E32743 (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAFA7C663A7429D759B0D5A09A97DDF9D66E32743_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m8FCB94C0B76C1582D86A9174A585F484307D9270 (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m8FCB94C0B76C1582D86A9174A585F484307D9270_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline)(method);
}
inline void KeyCollection__ctor_mA9991C5AF2EB16822666C27921B57B3A4BA3CA20 (KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* __this, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA*, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))KeyCollection__ctor_mA9991C5AF2EB16822666C27921B57B3A4BA3CA20_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m0CEA87D8D0476692A675D02BB94328CC3E16FFB4 (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* __this, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))ValueCollection__ctor_m0CEA87D8D0476692A675D02BB94328CC3E16FFB4_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222 (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mCA3352BB9CE8A0EE18F07435CD2EFE538BB2CBEC (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mCA3352BB9CE8A0EE18F07435CD2EFE538BB2CBEC_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3*, const RuntimeMethod*))KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3*, const RuntimeMethod*))KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m9F72B0FFEAFD16160C8B7498A1EC43ACF25CC0C6 (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m9F72B0FFEAFD16160C8B7498A1EC43ACF25CC0C6_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m3DD3087D4805D1008B9C3F1F1A289C118F5CE7B6 (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))Dictionary_2_get_Count_m3DD3087D4805D1008B9C3F1F1A289C118F5CE7B6_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189 (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3*, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725 (Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04* __this, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04*, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m1F08608E9E567A677E30DF26569BEFA7C211BAFB (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m1F08608E9E567A677E30DF26569BEFA7C211BAFB_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m47AA56AB8E01461257D3A8AD32DAEAC86063639A (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))Dictionary_2_Resize_m47AA56AB8E01461257D3A8AD32DAEAC86063639A_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m99C824085DD0513A9C8AB6D9AFDFE9E48B8F5C00 (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m99C824085DD0513A9C8AB6D9AFDFE9E48B8F5C00_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m35AFF9D9EC49C3C4F14602DBAEF837B8A719A5ED (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m35AFF9D9EC49C3C4F14602DBAEF837B8A719A5ED_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m0A9199AFF8ECF787A819DA70C4A4F0044E2A0933 (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m0A9199AFF8ECF787A819DA70C4A4F0044E2A0933_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mA9988CDC49C4859A6C9555C8CE9C693EA0AF768C (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mA9988CDC49C4859A6C9555C8CE9C693EA0AF768C_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m87202EF8F02940E5A0724673E307136E50304351 (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m87202EF8F02940E5A0724673E307136E50304351_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m141FEC8A9D693CA4D425615F9195E80F65D6E824 (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m141FEC8A9D693CA4D425615F9195E80F65D6E824_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m8C519087BCB5FFD35D876EF93FBD9FA16986AD27 (KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96* __this, Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96*, Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, const RuntimeMethod*))KeyCollection__ctor_m8C519087BCB5FFD35D876EF93FBD9FA16986AD27_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mA47862C91C8BD3826883744EFD9BC3EE7340EBC8 (ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* __this, Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D*, Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, const RuntimeMethod*))ValueCollection__ctor_mA47862C91C8BD3826883744EFD9BC3EE7340EBC8_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mF5B6729325F7E08B916D02177F4297EF4BC0CF68 (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mF5B6729325F7E08B916D02177F4297EF4BC0CF68_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B*, const RuntimeMethod*))KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872 (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_mA2D94572DAE1E370288187F54B99416C7DB26A5B (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mA2D94572DAE1E370288187F54B99416C7DB26A5B_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m44D61ECE58FF6B6BC5BB779226F0461383D152EF (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, const RuntimeMethod*))Dictionary_2_get_Count_m44D61ECE58FF6B6BC5BB779226F0461383D152EF_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m1B70672EC0B696E58C922A6D185C86CD7006B6F8 (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B*, int32_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m1B70672EC0B696E58C922A6D185C86CD7006B6F8_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mF2B67943B3638C9AD8139479815AFA7FEED60631 (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4*, Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, const RuntimeMethod*))Enumerator__ctor_mF2B67943B3638C9AD8139479815AFA7FEED60631_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mD0F155918A0635DC9133B7ADFFFC006F2F94F34F (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mD0F155918A0635DC9133B7ADFFFC006F2F94F34F_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m4EA99E3D08A4C2B55E99328909B7D11E6FD15C97 (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, const RuntimeMethod*))Dictionary_2_Resize_m4EA99E3D08A4C2B55E99328909B7D11E6FD15C97_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mA8E5DDDEBF87A1B98493706F317D7E3E4A3E9481 (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mA8E5DDDEBF87A1B98493706F317D7E3E4A3E9481_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m7ADDC9F34CC42310518EFB1B798959BB1B8ABEFF (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m7ADDC9F34CC42310518EFB1B798959BB1B8ABEFF_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7 (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m770F3D182B371654F32E6FFF89DC905C2AD32789 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m770F3D182B371654F32E6FFF89DC905C2AD32789_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m547E8827CE87D6C9AED976DFDC5B8E6AC23954D1 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m547E8827CE87D6C9AED976DFDC5B8E6AC23954D1_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_mFB2AEAEA6D7255707629D1F6F2AA0AFC6FC4A3E5 (KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F* __this, Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F*, Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, const RuntimeMethod*))KeyCollection__ctor_mFB2AEAEA6D7255707629D1F6F2AA0AFC6FC4A3E5_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mB54E388209AD46F7E943F21473A40741B3C129D2 (ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418* __this, Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418*, Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, const RuntimeMethod*))ValueCollection__ctor_mB54E388209AD46F7E943F21473A40741B3C129D2_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m184AE299360DC8DCB2C35E05F1DA5D08BAB12534 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, RuntimeObject*, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m184AE299360DC8DCB2C35E05F1DA5D08BAB12534_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_inline (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B*, const RuntimeMethod*))KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_gshared_inline)(__this, method);
}
inline AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 KeyValuePair_2_get_Value_mF1592BA839D51AA9B856F6556B6D9BB832FD866C_inline (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 (*) (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B*, const RuntimeMethod*))KeyValuePair_2_get_Value_mF1592BA839D51AA9B856F6556B6D9BB832FD866C_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mBA757139A47D321F50415E1D0FEDE7C92C294FA4 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, RuntimeObject*, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, const RuntimeMethod*))Dictionary_2_Add_mBA757139A47D321F50415E1D0FEDE7C92C294FA4_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m79FC8F620689E05D451F624B923E85362C8ACEA3 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m79FC8F620689E05D451F624B923E85362C8ACEA3_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m609F0038166048835843A6E6AE36ED8F8C292F53 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, const RuntimeMethod*))Dictionary_2_get_Count_m609F0038166048835843A6E6AE36ED8F8C292F53_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m14DEFF24AACC5B24A341C10AFCF2674FE1B7BCEF (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B*, RuntimeObject*, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, const RuntimeMethod*))KeyValuePair_2__ctor_m14DEFF24AACC5B24A341C10AFCF2674FE1B7BCEF_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mE293DCECFFD3DC79DA3BB405E596130B5A4D97B5 (Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1* __this, Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1*, Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, int32_t, const RuntimeMethod*))Enumerator__ctor_mE293DCECFFD3DC79DA3BB405E596130B5A4D97B5_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m11FC21B493D0736BF4F2AB5ACFC45C1A3580F640 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m11FC21B493D0736BF4F2AB5ACFC45C1A3580F640_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mDE7A4875D36AB15C2945F2F68173F40F5F14A873 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, const RuntimeMethod*))Dictionary_2_Resize_mDE7A4875D36AB15C2945F2F68173F40F5F14A873_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mDC54FCF2D6955F43838FB5528E2700D541D140CC (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mDC54FCF2D6955F43838FB5528E2700D541D140CC_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m7A377D41714DA0AC1B87B7E0016B85F146742DE5 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m7A377D41714DA0AC1B87B7E0016B85F146742DE5_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m98224531D89E6031CF70E590B1F0578AC0E62EF3 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, RuntimeObject*, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, const RuntimeMethod*))Dictionary_2_set_Item_m98224531D89E6031CF70E590B1F0578AC0E62EF3_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m6E423DD8AC7572C1903B722D688234A3C2573B24 (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m6E423DD8AC7572C1903B722D688234A3C2573B24_gshared)(__this, ___0_key, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared)(method);
}
inline EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_CreateComparer_m2344A07126F2F0C145C26CE93A1D2CE0669A5A99 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m2344A07126F2F0C145C26CE93A1D2CE0669A5A99_gshared)(method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* EqualityComparer_1_CreateComparer_m939626BE110CBEBE5499849C844B2EF1E42A7461 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m939626BE110CBEBE5499849C844B2EF1E42A7461_gshared)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared)(method);
}
inline EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_CreateComparer_mD9FD96BA3E45AD4E09115DA56FE2C97BDA0431BF (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD9FD96BA3E45AD4E09115DA56FE2C97BDA0431BF_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_m7B7C91FE67F823464C028390ADE30ED30DE27A49_gshared (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4* __this, ConcurrentDictionary_2_t61ABDC812A5E1FA61CA1D054E30FDBC0FBAC59E2* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t61ABDC812A5E1FA61CA1D054E30FDBC0FBAC59E2* L_0 = ___0_dictionary;
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m453CE99D2E351D49548734F55421089A2FE94086(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m436C4DF39163097FD900C544EE82003352C1B710_gshared (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		uint32_t L_2;
		L_2 = KeyValuePair_2_get_Key_m3AAD4694A3FC15B0A75EF031576EBF4A723752DE_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_3);
		RuntimeObject* L_5 = __this->____enumerator;
		KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5);
		V_0 = L_6;
		EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 L_7;
		L_7 = KeyValuePair_2_get_Value_m8AE40C80A65732F73795A3BD3511B67D99648118_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_8);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_10;
		memset((&L_10), 0, sizeof(L_10));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_10), L_4, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m05A76DD7ECA951B4F11761E94E8C63A989C109A2_gshared (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		uint32_t L_2;
		L_2 = KeyValuePair_2_get_Key_m3AAD4694A3FC15B0A75EF031576EBF4A723752DE_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mCF64BB35646CD83DBD2AFFBB0E1652F788E0E055_gshared (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 L_2;
		L_2 = KeyValuePair_2_get_Value_m8AE40C80A65732F73795A3BD3511B67D99648118_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m6EFCC60836BB61C33893DF66920AA303B9D0D39D_gshared (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = DictionaryEnumerator_get_Entry_m436C4DF39163097FD900C544EE82003352C1B710(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCAD3F74CF93494528D2E0696A7C7B74409F6E5C5_gshared (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_m6C772AEEFC0F0FB48911648FED3BB0C212EBA195_gshared (DictionaryEnumerator_tC1B2D9F3D6F8B39D0A52EA057378500C679F18C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___0_dictionary;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mBAC7702D03B6B7A6496AA713EC06CE6162127B2C_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		__this->____dictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary), (void*)L_0);
		RuntimeObject* L_1 = __this->____dictionary;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (RuntimeObject*)L_1);
		__this->____enumerator = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*>(__this + _offset);
	DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED(_thisAdjusted, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_TKey_tF4190693AEBAB245EC500C5F3C64545B76E02095 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tF4190693AEBAB245EC500C5F3C64545B76E02095);
	const uint32_t SizeOf_TValue_tCD64AC212E0EB693C7C37449224B4F65D5319432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tCD64AC212E0EB693C7C37449224B4F65D5319432);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	memset(V_0, 0, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*>(__this + _offset);
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB _returnValue;
	_returnValue = DictionaryEnumerator_get_Entry_m11AC328CBA2F4BE1D48BB018E8672C1ADF992477(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_TKey_tF4190693AEBAB245EC500C5F3C64545B76E02095 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tF4190693AEBAB245EC500C5F3C64545B76E02095);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	memset(V_0, 0, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_get_Key_m97842F6D1F5816C21E07F434D989E30B1D0D7ECA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_TValue_tCD64AC212E0EB693C7C37449224B4F65D5319432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tCD64AC212E0EB693C7C37449224B4F65D5319432);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	memset(V_0, 0, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_tCD25F7A2AEA94A8A17940BDF20856EE3C6E6F89F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_get_Value_m55D838F6608C8E6E1CB4208371E76FA72ED4B125(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DictionaryEnumerator_get_Current_m5781CCFEE4666E76AFA28435EEB1680E7915E07A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*>(__this + _offset);
	bool _returnValue;
	_returnValue = DictionaryEnumerator_MoveNext_mDCF5C0F03C552BB840B0A3FC2B089FAD01561398(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70_gshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*>(__this + _offset);
	DictionaryEnumerator_Reset_m1596AACB613BB54418A9B91C76DBB484C8A25E70(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryPropertyBag_2_get_InstantiationKind_m641573CD1323CD15A7F099323BA1B2546F063182_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPropertyBag_2_Instantiate_m7778199CDF045586687AB5A9F377D8FB3786C1E0_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC25FF6793652922985BFAA4DC8F11A4B0B090CF8_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA647361FB5882A25C765F596760030CB84824C97_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF092F25D416129BCC755E245CEC88345A7E17540_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_5;
		L_5 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E17FF0178C889BBACDC95DECEB4EF50BB31F65F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* Dictionary_2_get_Values_mC54912268568667F725754EBE2356518610AE832_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_1 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m04A4017ED4A293A5D3A2164CBCD6A6CB8BCCA116_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4EEACDC46AD23A0E7FA39004DBEDA017B8687FAF_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA39A0BE52118902D1EC9ED983321B0D8B415DF24_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4DB7A9F0B32B7B8DD0D41B3F6611E7B03B9436CA_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9;
		L_9 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m07051E2711DEDC818DC462838A3D89CDD0959D9A_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2E1A55234F27A4F98C337C2202E8241F8E42ED04_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 Dictionary_2_GetEnumerator_m1C2674F51BACC5E23084DA0374A70B0EBB20CB1F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF90BAD88410B5EEFD79B8D5A86638D03C61B08AC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE2783EE614A6743CAC1102BE510AF8978CE8C547_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_6;
		L_6 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = (KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)(KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_15 = V_0;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_19;
		L_19 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_2;
		int32_t L_21 = V_0;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_2;
		int32_t L_47 = V_0;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_10 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_24;
		L_24 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_35 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_0;
		int32_t L_52 = V_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_57 = V_0;
		int32_t L_58 = V_5;
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_61 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_94 = V_10;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item2), (void*)NULL);
		#endif
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m40CC8AF5495433361FFFBAE6BF3EB27D6A9C9E05_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_19 = V_3;
		int32_t L_20 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_21;
		L_21 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_22 = V_3;
		int32_t L_23 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24;
		L_24 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_25 = V_3;
		int32_t L_26 = V_4;
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_1;
		int32_t L_16 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_17 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = L_21->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = L_25->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_42 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_00ff:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m65316B5BBBCA1E7FA03561A97E22F2860B92FDF5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mCFE3B0F6F63ADFF26FB4623C8EAB4B8920D257EB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08F8980BA41D175D9D5755E520ECEC499FAECF65_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8B6070F6B012031518CAF9D85C4AA0880199C5E9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3F00D474C864259E96AE8A127C47D3AA12CBC787_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_3;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_30 = V_2;
		int32_t L_31 = V_3;
		RuntimeObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_47 = V_6;
			int32_t L_48 = V_7;
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_50 = V_6;
			int32_t L_51 = V_7;
			RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m904B76BE6F9CA0FC90A3E300E03FACB2CD5C8BDE_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m106E312F89A7FF2E8CF9BF88DA09FD2AD89E9652_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m578F26947EC223AF042037DF6D88F725A17C1CD4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m36BF55AAF072CC8471B04911DF96474EA3BC8825_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAA97B6F0E3AA42F45BBCE847BCADC2D626F21112_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE7E563DCFA8A83D43D1077B358C6DC613F78738B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB65CCEDF960EE9D8391AA8F0971D86B37F0F29E5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2DDA1EA81F9824843DABB904C47C685B3925A13E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB6DD7072D886C1EEBE6D007CE3865F76B2D5A2C5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_1 = (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_1 = (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m387DE0E7090B01FCF6F61CF76D8FADF7EC1DF151_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m41E4CC0CF7BE97652891C6BC6FA884369C69A76E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mE25BB7ED6D03A0CFC6882B6E87536A7992141FEF_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2179BEB0D08DADAC45D5BDB012B57A89D6E842B6_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5BB7F76414590352F287EA41F9AB910EE48E7956_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB750373BEEE4DFFD9E7F77DFF7A0C4FF9186BBA5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_14 = V_1;
		int32_t L_15 = V_2;
		Guid_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 Dictionary_2_GetEnumerator_mB49B0C517100C32E16F152131A91071EB3428CBB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE07B909A881695E09C09EC90D5C1279DDE8FAC55_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m53B9D88C0609A756597AC3EADC5D36215A599D2C_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_14 = (KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)(KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_15 = V_0;
		Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_20 = V_2;
		int32_t L_21 = V_0;
		Guid_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_46 = V_2;
		int32_t L_47 = V_0;
		Guid_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)(EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_0;
		int32_t L_26 = V_5;
		Guid_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_51 = V_0;
		int32_t L_52 = V_5;
		Guid_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_57 = V_0;
		int32_t L_58 = V_5;
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m051818947173E0A850B7869E4F474BB63C24DC75_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_19 = V_3;
		int32_t L_20 = V_4;
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_22 = V_3;
		int32_t L_23 = V_4;
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_25 = V_3;
		int32_t L_26 = V_4;
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_3 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)(EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = __this->____entries;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_15 = V_1;
		int32_t L_16 = V_4;
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE1D4EB8E35047347D05CF24CE7482F447D77EB9D_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mE24F2E023FDF3302DE11198EE0F1FFBBC38914B0_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m53D479673B12CABA10E9FD2982CEB1F4B1E76607_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m489459537D6AB7DC238E46ADF1DC0401D1071E24_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mE41BC526507334B879A4BA1905150F48214A37F5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_2;
		int32_t L_26 = V_3;
		Guid_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_30 = V_2;
		int32_t L_31 = V_3;
		RuntimeObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_47 = V_6;
			int32_t L_48 = V_7;
			Guid_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_50 = V_6;
			int32_t L_51 = V_7;
			RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m6BA0DEFE7CA62EF49A19CEEE61B3646585681E3A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m71280C48B029B2F5A5F41F0D4DC0D72842BD1A7F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7F72782D71BEAC62EC52B60E2855D514D61C1C0F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mFA133F727981BA04B848134106BD99FB8AD2919E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mA60792F19496344A4EEC113EF66C4D1642608C2D_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m7B750EDF5B330E2F1AF473D3C8A69E1EF2C0116A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m616B99088E90450DDBDF75CB6E1C1C5B3067D972_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m823F29E78EF44E7B4DD7A7E93CCF8B65BB47C5FC(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA13EEAAD35A5790C6A5EE787620A0FB0F3CFAC95_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m823F29E78EF44E7B4DD7A7E93CCF8B65BB47C5FC(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0FF66FCABAAB5B76CD90F1FB376B34228360BC25_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m823F29E78EF44E7B4DD7A7E93CCF8B65BB47C5FC(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m823F29E78EF44E7B4DD7A7E93CCF8B65BB47C5FC_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m50E4304F0265C80278520C3799F46D0112452040(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_5;
		L_5 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC32C3E9259399F1CA3498AF3CC3CEA6E9C3151E6_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m595B8CF03DB7619FCA48FA1591249FC42E9E6240_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* Dictionary_2_get_Keys_mDE3E93FBAD2C3D112FF61F00445D58BA90530F88_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* L_1 = (KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mCE43AB6DB73689CF15864C6053596591288BF08E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* Dictionary_2_get_Values_m41A48D28B18EF6E11552E0F8E2682FEB94680AB4_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* L_1 = (ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mA2E569AA622D6F365D490E028D6F42DE7376E415(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Dictionary_2_get_Item_m14176AFC4E9001DF8F239ECEDA7E481FF48F4567_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		uint32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_6 = ___0_key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(uint32_t));
		uint32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m89FC5B61EBF364105966D7D788A2CF7D84341423(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB8CB90D9FFC33504630529B6C99891A5ED4FAA1C_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m89FC5B61EBF364105966D7D788A2CF7D84341423(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4010B831A3F20BDCF3E49D03BD685B3D85B73D30_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0;
		L_0 = KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		uint32_t L_1;
		L_1 = KeyValuePair_2_get_Value_mE485C93AB111C031ED3F75ACC4A6E67E0F0F4723_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mB8CB90D9FFC33504630529B6C99891A5ED4FAA1C(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m39BBA7047D20E066DC93023281ECBD08E6C97D20_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0;
		L_0 = KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		uint32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mE485C93AB111C031ED3F75ACC4A6E67E0F0F4723_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mC8B8DCC4E9C1988FC905DCFF1DEBE46F2085A98B_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0;
		L_0 = KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		uint32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mE485C93AB111C031ED3F75ACC4A6E67E0F0F4723_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9;
		L_9 = KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m79421F90009DF43417B597FE202B5BDC8562D80F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m22B43F4C2E807658DDA0B7F17A203957F229C942_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFF146E364FAAEE8CB173A7FA7D2319972EA8D403_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m9D3CD0D6873E343F3A310ACCE60C7706094D9A44_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(uint32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_7 = V_0;
		int32_t L_8 = V_3;
		uint32_t L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		uint32_t L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mAE2B2EC1886F4AA58528C023B299AAA6CBC9EFBD_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m595B8CF03DB7619FCA48FA1591249FC42E9E6240(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_14 = V_1;
		int32_t L_15 = V_2;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_17 = V_1;
		int32_t L_18 = V_2;
		uint32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m3DBF36DD69CA8CCDFED3B681A76E5C3F7F6C0BA6((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951 Dictionary_2_GetEnumerator_m46F716EA10D3B7259293A24BDDBB2798BC17F833_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2C098C372A9751ACBE270E5190BFF655D4D8070B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mDC99B84F4CC44CE0F1703CBA8A68E1E8C13D4363_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2C098C372A9751ACBE270E5190BFF655D4D8070B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mB68543EA1CFA9AB9539D39AEB7C7B5DDB5A01AAD_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_6;
		L_6 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m595B8CF03DB7619FCA48FA1591249FC42E9E6240(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_14 = (KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40*)(KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_15 = V_0;
		Dictionary_2_CopyTo_mAE2B2EC1886F4AA58528C023B299AAA6CBC9EFBD(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_19;
		L_19 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_20 = V_2;
		int32_t L_21 = V_0;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_46 = V_2;
		int32_t L_47 = V_0;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m50E4304F0265C80278520C3799F46D0112452040_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_5 = (EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B*)(EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m89FC5B61EBF364105966D7D788A2CF7D84341423_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* V_10 = NULL;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m50E4304F0265C80278520C3799F46D0112452040(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_24;
		L_24 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_25 = V_0;
		int32_t L_26 = V_5;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_31 = V_0;
		int32_t L_32 = V_5;
		uint32_t L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_35 = ___0_key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_51 = V_0;
		int32_t L_52 = V_5;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_57 = V_0;
		int32_t L_58 = V_5;
		uint32_t L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_61 = ___0_key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mFFBEF9984B1C0D7A6BE29A9E41E2613025AC3E95(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_94 = V_10;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_96 = V_10;
		uint32_t L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m1ABCB44F06E30A6DB329E59AF7DF17F6701C8B0F_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m50E4304F0265C80278520C3799F46D0112452040(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_19 = V_3;
		int32_t L_20 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_21;
		L_21 = KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_22 = V_3;
		int32_t L_23 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_24;
		L_24 = KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_25 = V_3;
		int32_t L_26 = V_4;
		uint32_t L_27;
		L_27 = KeyValuePair_2_get_Value_mE485C93AB111C031ED3F75ACC4A6E67E0F0F4723_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mB8CB90D9FFC33504630529B6C99891A5ED4FAA1C(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFFBEF9984B1C0D7A6BE29A9E41E2613025AC3E95_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m252E5DBA8BF6D846BDB7DFBD55572D9A3B45E158(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m252E5DBA8BF6D846BDB7DFBD55572D9A3B45E158_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* V_1 = NULL;
	int32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_3 = (EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B*)(EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_5 = __this->____entries;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_15 = V_1;
		int32_t L_16 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* L_17 = (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m79421F90009DF43417B597FE202B5BDC8562D80F_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_20;
		L_20 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_21 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_22 = L_21->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_25 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_26 = L_25->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_tFEB0C36C4D26C5FDEC45CE0EEC2BE67997E8D0DD* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t* L_3 = ___1_value;
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		uint32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(uint32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		uint32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(uint32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mFF890ED1B16387B008BC851192734F174FFF22D5_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m89FC5B61EBF364105966D7D788A2CF7D84341423(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mA70DED7E0C93F9C62C5D6F56B8CB4308F189F6C0_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m924F33E96A2C6B268A854784A255319E8914C5F5_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mAE2B2EC1886F4AA58528C023B299AAA6CBC9EFBD(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m395980A194D332C9E38581FA2C9710EE499F26B3_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m595B8CF03DB7619FCA48FA1591249FC42E9E6240(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0A510B7E18502909601C30E228B42BD32C670B40* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mAE2B2EC1886F4AA58528C023B299AAA6CBC9EFBD(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_25 = V_2;
		int32_t L_26 = V_3;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_30 = V_2;
		int32_t L_31 = V_3;
		uint32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		uint32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_49 = V_6;
			int32_t L_50 = V_7;
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_52 = V_6;
			int32_t L_53 = V_7;
			uint32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m3DBF36DD69CA8CCDFED3B681A76E5C3F7F6C0BA6((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mABF80141AE3ECB0459B666C6F18B6553237F8B13_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2C098C372A9751ACBE270E5190BFF655D4D8070B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69770036C3FF2B8525AB760076E155175FF3E86A_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mDB6CA4FAE63BF0167C4DCB9311E42EC26E9C07A7_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m1C4A3AA6CBB300E4606C4EB09049E6E2E23E4B21(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m6A5B667A1F219CC010B9903A4AC1CDA9FE017768(__this, ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		uint32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		uint32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB6CD2891BF7AF3CAFECC7953C65A9D14ED878E17_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(__this, L_3, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1C4A3AA6CBB300E4606C4EB09049E6E2E23E4B21_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mEB90FA23F8E6798546219D3ABEED6746E0064DCF_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m1C4A3AA6CBB300E4606C4EB09049E6E2E23E4B21(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mFF146E364FAAEE8CB173A7FA7D2319972EA8D403(__this, ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m6BC2C2F4E765D441DECEFF8E9B82971832C49691_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2C098C372A9751ACBE270E5190BFF655D4D8070B((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tC62E5A4029CA818647FA8861DCD0E5A8A77C9951 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mD09D801EE533A85CFF101E438F34A4C9C59B38F2(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m193DDC1B5826C20846AA634C26D40616F1E0FE8E_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mD09D801EE533A85CFF101E438F34A4C9C59B38F2(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CEAC46717EBBAC513FED0C05E7C9261A0037CFE_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mD09D801EE533A85CFF101E438F34A4C9C59B38F2(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD09D801EE533A85CFF101E438F34A4C9C59B38F2_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m56E195EEF3D86838D4B57645FF90FDF0875D3167(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m597A579344318887EC933F2E4D4D6C565640860A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mCB3C7DD1CE53694B9AA2EAD4A8EFB111F82B866D_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0* Dictionary_2_get_Keys_m98971FF3CF9262A5D59041EFB4E7435EC23C4FD4_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0* L_1 = (KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m546C282DEACCA1742EDDC51821A81660AC8087B3(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* L_1 = (ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mA67D41CA7F207E040D3275831D4B819294B45E2F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 Dictionary_2_get_Item_mECBC1DAC973535CF16EA233BB0820DF5312C9138_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274));
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE31B4DE37036F8AEB99B7B49232B233414E04BF7_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m1A5C68C455E061A8382BDBB6354533B655A190D9(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m1A5C68C455E061A8382BDBB6354533B655A190D9(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mF1DE131CF558F34A43E92651EA3E44523398FEC8_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_1;
		L_1 = KeyValuePair_2_get_Value_m9617D9D28DF3AA8EC0E34BB79A8C9EB95C6EAD04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1A5FBF15A20DA08C58B1A6A7E29BE50657124B72_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* L_3;
		L_3 = EqualityComparer_1_get_Default_m974B4F1D5719F47429147A5DD840B0828FBAEDEE_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_7;
		L_7 = KeyValuePair_2_get_Value_m9617D9D28DF3AA8EC0E34BB79A8C9EB95C6EAD04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3834B6999A3B4EF5AB5FE2E162FEBD4DE2E632FD_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* L_3;
		L_3 = EqualityComparer_1_get_Default_m974B4F1D5719F47429147A5DD840B0828FBAEDEE_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_7;
		L_7 = KeyValuePair_2_get_Value_m9617D9D28DF3AA8EC0E34BB79A8C9EB95C6EAD04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m127E4BCFF557D5C74D0FDDBE29BD95518D899008_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mF16281674406A47FDFA57031D672663E8755AA80_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* V_0 = NULL;
	int32_t V_1 = 0;
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* L_6;
		L_6 = EqualityComparer_1_get_Default_m974B4F1D5719F47429147A5DD840B0828FBAEDEE_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_7 = V_0;
		int32_t L_8 = V_3;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6A4990A28CB3272193AB1DEF60C848F4B2C5FADC_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mCB3C7DD1CE53694B9AA2EAD4A8EFB111F82B866D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_17 = V_1;
		int32_t L_18 = V_2;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7B8DA93E01A412D52BA526003D7359913D5A202A((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287 Dictionary_2_GetEnumerator_m320F425683E4FE613C0AA5BBA5C8D969EF872229_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m515A7D8EF7ECCC91291F9DDB73B89D917AE3A7A3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m775E2A8DB60350C4A7A636A56DD3F2B0851926BA_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m515A7D8EF7ECCC91291F9DDB73B89D917AE3A7A3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m6ACA326C7079D38D42CA38BCA9822EE324793ADC_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mCB3C7DD1CE53694B9AA2EAD4A8EFB111F82B866D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_14 = (KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E*)(KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_15 = V_0;
		Dictionary_2_CopyTo_m6A4990A28CB3272193AB1DEF60C848F4B2C5FADC(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m56E195EEF3D86838D4B57645FF90FDF0875D3167_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_5 = (EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5*)(EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m1A5C68C455E061A8382BDBB6354533B655A190D9_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m56E195EEF3D86838D4B57645FF90FDF0875D3167(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_31 = V_0;
		int32_t L_32 = V_5;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_DisplayName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_57 = V_0;
		int32_t L_58 = V_5;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___m_DisplayName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m0BE46DBAD09144F5B154C57A885943EE5BFF04F5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_96 = V_10;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___m_DisplayName), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m4B750E3764B22A06AD903BBE56711279F238DF8A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m56E195EEF3D86838D4B57645FF90FDF0875D3167(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_25 = V_3;
		int32_t L_26 = V_4;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_27;
		L_27 = KeyValuePair_2_get_Value_m9617D9D28DF3AA8EC0E34BB79A8C9EB95C6EAD04_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0BE46DBAD09144F5B154C57A885943EE5BFF04F5_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mBA7A5565D7BDF3C30C253F8DEFC5A8288BCFF438(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBA7A5565D7BDF3C30C253F8DEFC5A8288BCFF438_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_3 = (EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5*)(EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_5 = __this->____entries;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_41 = V_4;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* L_42 = (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tFFBE6CED43071BF3A2C52D1BB70EE6197C7D5444* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m2940ADF59C5595CC2CA4996FB2868727C9517DA5_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* L_3 = ___1_value;
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)L_3)->___m_Graph), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)L_3)->___m_Dependencies), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)L_3)->___m_DisplayName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mB6AB2B952E570CB72E3D309B414028426120ACB7_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m1A5C68C455E061A8382BDBB6354533B655A190D9(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m439DA5AF858B16CD5EFF0A16A4128984BDCE47BA_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9C05045081BD1659145E46258798D0E87D2CAD7C_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m6A4990A28CB3272193AB1DEF60C848F4B2C5FADC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m52D80AD9B4BE828C1872ED32838D362372ABAEDE_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mCB3C7DD1CE53694B9AA2EAD4A8EFB111F82B866D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t184FA83B53A5F57D08E1CE3322DE106E68C7308E* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m6A4990A28CB3272193AB1DEF60C848F4B2C5FADC(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_30 = V_2;
		int32_t L_31 = V_3;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_49 = V_6;
			int32_t L_50 = V_7;
			int32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_52 = V_6;
			int32_t L_53 = V_7;
			DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m7B8DA93E01A412D52BA526003D7359913D5A202A((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m728E9B884CB2C6C2170809915E0B4BB9B6DC6AEB_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m515A7D8EF7ECCC91291F9DDB73B89D917AE3A7A3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m417884826B1C4339C464F3B75B9BD9890E156C5A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mEFB4C95E85FC610C01566DBD4FEB395129144882_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m048C1CED84C20FBCAF3A74CD6328A0048C318B35(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m2E5DE34052D152F658D296DE9CB04C781B913329(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mD19A5D777F60DF75D0A7D7CEF114197EAE937BB9_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m1E71696BB8DB7E3FE27A8F332EF93CB7652A1EA8(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mE31B4DE37036F8AEB99B7B49232B233414E04BF7(__this, L_3, ((*(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)((DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m048C1CED84C20FBCAF3A74CD6328A0048C318B35_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m7BE3E0B72B749E6B12527AE57D7723ECDB44E291_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m048C1CED84C20FBCAF3A74CD6328A0048C318B35(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mD8D4E9A5B16B6045E0E4EA4F106EB876BE1A5EBC_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m515A7D8EF7ECCC91291F9DDB73B89D917AE3A7A3((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tEA20986A63654ADD77682D7D8BB28ECD192D0287 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m224CE4C47236A2296F3AC732E6F20FC1EEB56898_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00DCECE9CF73378A5790CFF38699D1A8FCA110F2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m662792378721ABA8BB76A2704111F2862387175F_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* Dictionary_2_get_Keys_m0F5F6FCFB36ED340EC91E6064534CEE0411CEF53_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* L_1 = (KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m9540351AE212B2359AE414632644FA8EA843D723(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* L_1 = (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m07721547B40DA38D2CBD65AFC172191C065F1C20(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m406FC1F8D4F8D404D52A8DCBDACC3366B07C1023_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m799CB7072EA86BBAA968788165BED53504B05B8C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mFA18DA1E464054398917BAD800DECFD0FA002759_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m999D98061B8048248A312862400275D718C22535_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB96279E2BE4AD812C71C56B4449C6B42CB58B263_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mF694E1D43809C684E338C5FB069B03E8E71092D1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_14 = (KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*)(KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_15 = V_0;
		Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = (EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)(EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_57 = V_0;
		int32_t L_58 = V_5;
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m46FE126ECB4B047C638D865B4821B569EF0EA4F2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m402059BFAC2A30A6AFA7682C71D98F4356B1A7C2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_25 = V_3;
		int32_t L_26 = V_4;
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC263120F3FC4747FE257F01A16CFD1EA2063906C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBACEDC4FC63035D67F2D9A1C765B12094D16C1D5_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_3 = (EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)(EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = __this->____entries;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m7D2B6F86121649A4FE28F3AE9568AF7353DF24E5_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m02B1096127885F6AF49889798C6BC7F6B7BB9D59(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mF948AA30BB792C629F41AFB2C581CCF4E8F7086C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8D83D313D4C6EB9A313BBDA060C4DFA309F045A8_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m2ECB514FE75B3BEF985FC2BDA7DE3FDBE8690152_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1686C7CBCFA68BF77F16B9983BACAA457DCDE265* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mE6627B99D1831D3C7FB74D3C8A16BB56738D0316(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_30 = V_2;
		int32_t L_31 = V_3;
		RuntimeObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_47 = V_6;
			int32_t L_48 = V_7;
			int32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_50 = V_6;
			int32_t L_51 = V_7;
			RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m9ECE1B54DC0A5AD667EC7BABBDDB84C937E7BB7B((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m897C68EA5BF762F3E2ECAC5E6EDEA8B96E94E55D_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6986BDCC75CBA86C7BB96A0BD0FF94D151E5058A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m219273E1F514BD2B393DC52D036E1996845D640B_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m725DA48088D7635F45BB319F4BAC983F863E4B43(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m134FCAE9D84D25C828DA86E9F2B3AF6D3545EEA4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mC788B0151338EF5685E1E9B1F5B40DF4E6B3AF23_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m026932AB3F4C7C31B00706827A59AABD8E6888CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m0AB8494896BAD8F82300D55D5E2A7A11BB2031A2_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB3F797DCBDE117922668AAF363F383A15C531FFD((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mAFA7C663A7429D759B0D5A09A97DDF9D66E32743(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD439CCB19BEB9F88378AB7A1F58876D5D6B919BF_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mAFA7C663A7429D759B0D5A09A97DDF9D66E32743(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB6A0F417FC75C9691DA886BBF2283305D332B045_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mAFA7C663A7429D759B0D5A09A97DDF9D66E32743(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAFA7C663A7429D759B0D5A09A97DDF9D66E32743_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8FCB94C0B76C1582D86A9174A585F484307D9270(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_5;
		L_5 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB5DD743D955CB6747FA136F4D33B5CBCBA9F7465_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3DD3087D4805D1008B9C3F1F1A289C118F5CE7B6_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* Dictionary_2_get_Keys_mE030F89B8616A432D36BA5A0DCA6E00BD0D83CA0_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* L_1 = (KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mA9991C5AF2EB16822666C27921B57B3A4BA3CA20(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* Dictionary_2_get_Values_mF25DEA20D6F09577BAF5C574324DCE1E11C6A8EB_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* L_1 = (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m0CEA87D8D0476692A675D02BB94328CC3E16FFB4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m2AD6E76220E3D39F0898141D91D3D0CD814B31CE_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0A9199AFF8ECF787A819DA70C4A4F0044E2A0933_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mCA3352BB9CE8A0EE18F07435CD2EFE538BB2CBEC(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mCA3352BB9CE8A0EE18F07435CD2EFE538BB2CBEC(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1EA5F21815E6879E75CE2F0851B6A46B46C3368F_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1BEF18E07CB5502879CADC82B661105AC90FA7F5_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m5F8AEE59B23C3216F19A8B5F739BD2B37AAFAFFD_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m9F72B0FFEAFD16160C8B7498A1EC43ACF25CC0C6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF7DD09BF8F406C01CCE92872A10A1D600CCF2889_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA9988CDC49C4859A6C9555C8CE9C693EA0AF768C_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2F55D025BEA856A80D16FA2FF4D39D43A3C760C9_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_7 = V_0;
		int32_t L_8 = V_3;
		int32_t L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1F08608E9E567A677E30DF26569BEFA7C211BAFB_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m3DD3087D4805D1008B9C3F1F1A289C118F5CE7B6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 Dictionary_2_GetEnumerator_m6498FC8C759DE310B06B2CA41BF4C93D6B493624_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA5183AAA7DC8C5BD37964CF288C9B06FE1751951_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mB2F80C69940F61938F7C583C5CFAD7580BE1525D_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m3DD3087D4805D1008B9C3F1F1A289C118F5CE7B6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_14 = (KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*)(KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_15 = V_0;
		Dictionary_2_CopyTo_m1F08608E9E567A677E30DF26569BEFA7C211BAFB(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_19;
		L_19 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8FCB94C0B76C1582D86A9174A585F484307D9270_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_5 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)(EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mCA3352BB9CE8A0EE18F07435CD2EFE538BB2CBEC_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8FCB94C0B76C1582D86A9174A585F484307D9270(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_24;
		L_24 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_31 = V_0;
		int32_t L_32 = V_5;
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_57 = V_0;
		int32_t L_58 = V_5;
		int32_t L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m47AA56AB8E01461257D3A8AD32DAEAC86063639A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_96 = V_10;
		int32_t L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m37E7E5D9EF129A4F360C797606CF4C68F439FAC4_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m8FCB94C0B76C1582D86A9174A585F484307D9270(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_25 = V_3;
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m47AA56AB8E01461257D3A8AD32DAEAC86063639A_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m99C824085DD0513A9C8AB6D9AFDFE9E48B8F5C00(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m99C824085DD0513A9C8AB6D9AFDFE9E48B8F5C00_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_3 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)(EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_5 = __this->____entries;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, NULL);
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9F72B0FFEAFD16160C8B7498A1EC43ACF25CC0C6_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_20;
		L_20 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mCB2C582038648B7DC723E339D5FE3FEC3FCC8610_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mD76AAFF5F25C562D9AF6A67311A70401A54E8CB4_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mCA3352BB9CE8A0EE18F07435CD2EFE538BB2CBEC(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64C1BA61BD330F34C3EE5262D664ECDFDB1C9622_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8876B16FB1DD52E6148B63FE1D39EDC7BA23C984_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m1F08608E9E567A677E30DF26569BEFA7C211BAFB(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m15A409F1DB9684182D59A57BB81ADB5F67A60954_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m3DD3087D4805D1008B9C3F1F1A289C118F5CE7B6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m1F08608E9E567A677E30DF26569BEFA7C211BAFB(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_49 = V_6;
			int32_t L_50 = V_7;
			int32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_52 = V_6;
			int32_t L_53 = V_7;
			int32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3B6375D170852ED8BA17A06BC6973DB70A659C96_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6840C1F5927D19805711C55B8F3A8C714EB4FE77_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mB71D33377208F2DFB46F3187D3A8B6CDAD090CA1_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m35AFF9D9EC49C3C4F14602DBAEF837B8A719A5ED(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		int32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m4E38E5289D0AB7084D96F1D195AF0CA2E9FBEFB4_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m0A9199AFF8ECF787A819DA70C4A4F0044E2A0933(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m35AFF9D9EC49C3C4F14602DBAEF837B8A719A5ED_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m35261CE5474A75F48EE2212987F64797464AE9FE_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m35AFF9D9EC49C3C4F14602DBAEF837B8A719A5ED(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mA9988CDC49C4859A6C9555C8CE9C693EA0AF768C(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mAD8693CCDD89E5DE834F86A8ED6899869789849A_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m87202EF8F02940E5A0724673E307136E50304351(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0A383FE060992BFC10E9EC92359B1B12A98A6A8_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m87202EF8F02940E5A0724673E307136E50304351(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCB6B10CD39FACF966000160650EF8F25D3D3356A_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m87202EF8F02940E5A0724673E307136E50304351(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m87202EF8F02940E5A0724673E307136E50304351_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m141FEC8A9D693CA4D425615F9195E80F65D6E824(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_5;
		L_5 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC1B9D19345475543C4A317CFBCFE169902B0AD95_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m44D61ECE58FF6B6BC5BB779226F0461383D152EF_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96* Dictionary_2_get_Keys_m2B281C3C4FA2DE21C6F725C9780172758BCD2E68_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96* L_1 = (KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m8C519087BCB5FFD35D876EF93FBD9FA16986AD27(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8F71B0D0C29251BFADDD78283D2D169C17F85D96* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* Dictionary_2_get_Values_m88548D48A871D5B79DB4BAAB82C62D4D61568F64_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* L_1 = (ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mA47862C91C8BD3826883744EFD9BC3EE7340EBC8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF5B6729325F7E08B916D02177F4297EF4BC0CF68(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF5B6729325F7E08B916D02177F4297EF4BC0CF68(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m466702393215E618A199C56A5B82DE39DCA86AFC_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD38C9E3FEAD71B1E7EF60E2FAD558A7F0B2DD3B9_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mBD2AE0A605C96DDD2BDB13640C5F94B657C5C538_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_mA2D94572DAE1E370288187F54B99416C7DB26A5B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m763AA956A8325F527F831F49E2563FF2871A680E_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m116926BA1E97D65C7C2292B78EA142EF05C4A1C8_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mD0F155918A0635DC9133B7ADFFFC006F2F94F34F_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m44D61ECE58FF6B6BC5BB779226F0461383D152EF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m1B70672EC0B696E58C922A6D185C86CD7006B6F8((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 Dictionary_2_GetEnumerator_m4126F9137DF46492CEB1563FCCD5A16C5F99D686_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF2B67943B3638C9AD8139479815AFA7FEED60631((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m648E70232BFA8F9E7339A97F06296E2E1245DB9E_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF2B67943B3638C9AD8139479815AFA7FEED60631((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEE13F26F26F41053B6DD8234A8CBB81665150EB3_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m44D61ECE58FF6B6BC5BB779226F0461383D152EF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_14 = (KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200*)(KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_15 = V_0;
		Dictionary_2_CopyTo_mD0F155918A0635DC9133B7ADFFFC006F2F94F34F(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_19;
		L_19 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m141FEC8A9D693CA4D425615F9195E80F65D6E824_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_5 = (EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252*)(EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF5B6729325F7E08B916D02177F4297EF4BC0CF68_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m141FEC8A9D693CA4D425615F9195E80F65D6E824(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_24;
		L_24 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_57 = V_0;
		int32_t L_58 = V_5;
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m4EA99E3D08A4C2B55E99328909B7D11E6FD15C97(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m60E2E9A2526C236DDC76EAEE1FF6C1384D41A474_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m141FEC8A9D693CA4D425615F9195E80F65D6E824(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_25 = V_3;
		int32_t L_26 = V_4;
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4EA99E3D08A4C2B55E99328909B7D11E6FD15C97_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mA8E5DDDEBF87A1B98493706F317D7E3E4A3E9481(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA8E5DDDEBF87A1B98493706F317D7E3E4A3E9481_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_3 = (EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252*)(EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_5 = __this->____entries;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, NULL);
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA2D94572DAE1E370288187F54B99416C7DB26A5B_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_20;
		L_20 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD8A6CDD5C954C86D2150FCFF1B76EB62F35A881D_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m07BB47ADE8992161F74BD12F8A77966F9B262FED_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF5B6729325F7E08B916D02177F4297EF4BC0CF68(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38309A7BC4181DFBB7B477059BA482129F03F851_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7EA598983E54C1532C2CED687F080967B1CE6405_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mD0F155918A0635DC9133B7ADFFFC006F2F94F34F(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m83A18052A706E1751DFEA6F0A48BE5A80B2E4C88_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m44D61ECE58FF6B6BC5BB779226F0461383D152EF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t33D62956ECFF975DD2EA432AA8856C8E2F9E7200* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mD0F155918A0635DC9133B7ADFFFC006F2F94F34F(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_30 = V_2;
		int32_t L_31 = V_3;
		RuntimeObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_47 = V_6;
			int32_t L_48 = V_7;
			int32_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_50 = V_6;
			int32_t L_51 = V_7;
			RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m1B70672EC0B696E58C922A6D185C86CD7006B6F8((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mDCFD11F292E1560EBD1AE28E013AC5BFCF1F30C8_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF2B67943B3638C9AD8139479815AFA7FEED60631((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32B22F791DFD1513B6AEBCC4D26277ADE9A2CDF3_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m3D805199DC4B7A9305D9DB2DB3A8C7AFD49CC99E_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m7ADDC9F34CC42310518EFB1B798959BB1B8ABEFF(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mB8352104BD59BC45F150E7B099B6F86FE0CF435A(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tDDBB3C07C36F178929A69EB8B8CE07B49AE02252* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m86F74840A668756914BBAF5756917ABAE91967A9_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m7ADDC9F34CC42310518EFB1B798959BB1B8ABEFF_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m620D0D7CD8F534275F93CC84D02041C70CCE8004_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m7ADDC9F34CC42310518EFB1B798959BB1B8ABEFF(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m181E3B3DB8EF3BD29451936A2ED767BA93455ECA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF2B67943B3638C9AD8139479815AFA7FEED60631((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCDB0B7F975A6F4437B9DAC0BF1172C040F8639F8_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m770F3D182B371654F32E6FFF89DC905C2AD32789(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ECB9D672D282998A1940BF76CCB851F43BCB445_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m770F3D182B371654F32E6FFF89DC905C2AD32789(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF77EEB51657182390AD5A25C2C1EF3F29ABBD86D_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m770F3D182B371654F32E6FFF89DC905C2AD32789(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m770F3D182B371654F32E6FFF89DC905C2AD32789_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m547E8827CE87D6C9AED976DFDC5B8E6AC23954D1(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m88D66EFA0F23B05D8F0B6A85F1CC36B220C202AA_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m609F0038166048835843A6E6AE36ED8F8C292F53_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F* Dictionary_2_get_Keys_m4FB639A98DE7316898314F649BC1F231A9424DC5_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F* L_1 = (KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mFB2AEAEA6D7255707629D1F6F2AA0AFC6FC4A3E5(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA914522BD02FEA07B097643BEB90961A3E38655F* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418* Dictionary_2_get_Values_m50CB85183738A4204E6F0E6C8AEB4B110853B4E2_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418* L_1 = (ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mB54E388209AD46F7E943F21473A40741B3C129D2(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t392465CAEF2C2188FD190C9941222C1C7ACED418* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 Dictionary_2_get_Item_m048DBA6C2A6759488236BD7E094A1A23D20955C1_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74));
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m98224531D89E6031CF70E590B1F0578AC0E62EF3_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m184AE299360DC8DCB2C35E05F1DA5D08BAB12534(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBA757139A47D321F50415E1D0FEDE7C92C294FA4_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m184AE299360DC8DCB2C35E05F1DA5D08BAB12534(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1E42F698B20D54EB8018C6F4D093E768BF6FA2FF_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_1;
		L_1 = KeyValuePair_2_get_Value_mF1592BA839D51AA9B856F6556B6D9BB832FD866C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mBA757139A47D321F50415E1D0FEDE7C92C294FA4(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mECBC38B177928A3908A0EB8C95C3AD839DE9780A_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_7;
		L_7 = KeyValuePair_2_get_Value_mF1592BA839D51AA9B856F6556B6D9BB832FD866C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m362B2CA6B1F4D81345F4A64710F92FB2E096A926_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_7;
		L_7 = KeyValuePair_2_get_Value_mF1592BA839D51AA9B856F6556B6D9BB832FD866C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m79FC8F620689E05D451F624B923E85362C8ACEA3(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mA3E09E6E9C42738EFA9B31C76064C084DC944D5B_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6E423DD8AC7572C1903B722D688234A3C2573B24_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mBBBD73E325FB1728C9115052DF208B1DD9C4F2B8_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* V_0 = NULL;
	int32_t V_1 = 0;
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_7 = V_0;
		int32_t L_8 = V_3;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m11FC21B493D0736BF4F2AB5ACFC45C1A3580F640_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m609F0038166048835843A6E6AE36ED8F8C292F53(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_14 = V_1;
		int32_t L_15 = V_2;
		RuntimeObject* L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_17 = V_1;
		int32_t L_18 = V_2;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m14DEFF24AACC5B24A341C10AFCF2674FE1B7BCEF((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1 Dictionary_2_GetEnumerator_mB7EE9E5DA4512A3CAD1CF6C0B9414CAFA26A3174_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE293DCECFFD3DC79DA3BB405E596130B5A4D97B5((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mFFB9E60AA676A9CC03C83426D7D495BC9E163960_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE293DCECFFD3DC79DA3BB405E596130B5A4D97B5((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3823A216B1C24C79007F7D687C8BFF0AF53A6E3E_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m609F0038166048835843A6E6AE36ED8F8C292F53(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_14 = (KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469*)(KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 34), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_15 = V_0;
		Dictionary_2_CopyTo_m11FC21B493D0736BF4F2AB5ACFC45C1A3580F640(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_20 = V_2;
		int32_t L_21 = V_0;
		RuntimeObject* L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_33 = V_2;
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_39 = V_2;
		int32_t L_40 = V_0;
		RuntimeObject* L_41 = ((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___key;
		RuntimeObject* L_42 = ___0_key;
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_44 = V_2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___next;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___0_key;
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_59 = V_2;
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_60 = V_2;
		int32_t L_61 = V_0;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_65 = V_2;
		int32_t L_66 = V_0;
		RuntimeObject* L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___key;
		RuntimeObject* L_68 = ___0_key;
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_70 = V_2;
		int32_t L_71 = V_0;
		int32_t L_72 = ((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_71)))->___next;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_74 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m547E8827CE87D6C9AED976DFDC5B8E6AC23954D1_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_5 = (EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2*)(EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m184AE299360DC8DCB2C35E05F1DA5D08BAB12534_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m547E8827CE87D6C9AED976DFDC5B8E6AC23954D1(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_25 = V_0;
		int32_t L_26 = V_5;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		RuntimeObject* L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_31 = V_0;
		int32_t L_32 = V_5;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_LocationName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_36 = V_0;
		int32_t L_37 = V_5;
		int32_t L_38 = ((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))->___next;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_44 = V_0;
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_45 = V_0;
		int32_t L_46 = V_5;
		int32_t L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_50 = V_0;
		int32_t L_51 = V_5;
		RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___key;
		RuntimeObject* L_53 = ___0_key;
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___2_behavior;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_56 = V_0;
		int32_t L_57 = V_5;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_58 = ___1_value;
		((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value = L_58;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___value))->___m_LocationName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_61 = V_0;
		int32_t L_62 = V_5;
		int32_t L_63 = ((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___next;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_65 = V_0;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_68 = V_0;
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_69 = V_0;
		int32_t L_70 = V_5;
		int32_t L_71 = ((L_69)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_74 = V_0;
		int32_t L_75 = V_5;
		RuntimeObject* L_76 = ((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_75)))->___key;
		RuntimeObject* L_77 = ___0_key;
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___2_behavior;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_80 = V_0;
		int32_t L_81 = V_5;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_82 = ___1_value;
		((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_80)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_81)))->___value))->___m_LocationName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_85 = V_0;
		int32_t L_86 = V_5;
		int32_t L_87 = ((L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_86)))->___next;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_89 = V_0;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = __this->____freeCount;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = __this->____freeList;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = __this->____count;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mDE7A4875D36AB15C2945F2F68173F40F5F14A873(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_99 = __this->____entries;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = __this->____buckets;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->____buckets;
		G_B51_0 = ((L_102)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_105 = V_0;
		int32_t L_106 = V_8;
		V_10 = ((L_105)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_108 = V_10;
		int32_t L_109 = L_108->___next;
		__this->____freeList = L_109;
	}

IL_028a:
	{
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode = L_111;
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_115 = V_10;
		RuntimeObject* L_116 = ___0_key;
		L_115->___key = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key), (void*)L_116);
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_117 = V_10;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_118 = ___1_value;
		L_117->___value = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_117->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_117->___value))->___m_LocationName), (void*)NULL);
		#endif
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m0E2CBED846D3450DBA4278076CF971B36A522491_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m547E8827CE87D6C9AED976DFDC5B8E6AC23954D1(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 36)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_19 = V_3;
		int32_t L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_22 = V_3;
		int32_t L_23 = V_4;
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_25 = V_3;
		int32_t L_26 = V_4;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_27;
		L_27 = KeyValuePair_2_get_Value_mF1592BA839D51AA9B856F6556B6D9BB832FD866C_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		Dictionary_2_Add_mBA757139A47D321F50415E1D0FEDE7C92C294FA4(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDE7A4875D36AB15C2945F2F68173F40F5F14A873_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mDC54FCF2D6955F43838FB5528E2700D541D140CC(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDC54FCF2D6955F43838FB5528E2700D541D140CC_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_3 = (EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2*)(EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_5 = __this->____entries;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_15 = V_1;
		int32_t L_16 = V_4;
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*L_17));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m79FC8F620689E05D451F624B923E85362C8ACEA3_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_21 = V_4;
		RuntimeObject* L_22 = L_21->___key;
		RuntimeObject* L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_25 = V_4;
		RuntimeObject* L_26 = L_25->___key;
		RuntimeObject* L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
	}
	{
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_43 = V_4;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* L_44 = (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t8B8123A4CF4482E637F2DD10E1381A07127AC71E* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m8AC325A58EFD075FAE724454042FB61494CEB42D_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* L_3 = ___1_value;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)L_3)->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)L_3)->___m_LocationName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mE52F5A374EA8EEEB5D27F69458224E6562F30870_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m184AE299360DC8DCB2C35E05F1DA5D08BAB12534(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mB47409F34A18863D3660FA775322EF0492B78F13_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mB3DB18F58935E89400DC45B7833ABEDE31368796_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m11FC21B493D0736BF4F2AB5ACFC45C1A3580F640(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m0F7C4F1E9531C24A2D2BE2FD31BDAD9688C9DE1A_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m609F0038166048835843A6E6AE36ED8F8C292F53(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1FF2B150904BD62D41D27D357A57F77D19EAF469* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m11FC21B493D0736BF4F2AB5ACFC45C1A3580F640(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_25 = V_2;
		int32_t L_26 = V_3;
		RuntimeObject* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_28 = V_2;
		int32_t L_29 = V_3;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_47 = V_6;
			int32_t L_48 = V_7;
			RuntimeObject* L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_50 = V_6;
			int32_t L_51 = V_7;
			AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m14DEFF24AACC5B24A341C10AFCF2674FE1B7BCEF((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB247B3B65799FF39058E045F011D9D623923A3BE_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE293DCECFFD3DC79DA3BB405E596130B5A4D97B5((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8F026D53D32848D2A8A726BA0B62D1EDD2AB48FA_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m032AE6263066F76C32A22A94DDCCD556B5928B29_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m7A377D41714DA0AC1B87B7E0016B85F146742DE5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mD4484B535FF6BE20279509E48B04F813D6C2EF05(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tB551A706A1689C0BC3FF0A5BF20619E4DDD256F2* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0DE2EB790E65DA8F421E89CFC138F111F0227DCF_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
		}
		try
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m98224531D89E6031CF70E590B1F0578AC0E62EF3(__this, L_3, ((*(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)((AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m7A377D41714DA0AC1B87B7E0016B85F146742DE5_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m7EBB72CB018A896EA9A5B6DF14435615CF84059A_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m7A377D41714DA0AC1B87B7E0016B85F146742DE5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m6E423DD8AC7572C1903B722D688234A3C2573B24(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63F910D54330EDA2A0B2D9440ABBC91CFC2E93EE_gshared (Dictionary_2_t3F2B8794A24995A822FE9AFE3E513B6F7D090A20* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE293DCECFFD3DC79DA3BB405E596130B5A4D97B5((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tD69A9982D2DFA4F4068E152AF59C570CFBA706B1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m3AAD4694A3FC15B0A75EF031576EBF4A723752DE_gshared_inline (KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 KeyValuePair_2_get_Value_m8AE40C80A65732F73795A3BD3511B67D99648118_gshared_inline (KeyValuePair_2_t1A1076D9179741663026198E6186ED3D0464699F* __this, const RuntimeMethod* method) 
{
	{
		EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_0 = NULL;
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_0 = ((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_0 = NULL;
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_0 = ((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* V_0 = NULL;
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_0 = ((EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m2344A07126F2F0C145C26CE93A1D2CE0669A5A99(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 KeyValuePair_2_get_Key_mAC9BAB0315BC19AADA02EFEE599043D3FF6DCF90_gshared_inline (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* __this, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mE485C93AB111C031ED3F75ACC4A6E67E0F0F4723_gshared_inline (KeyValuePair_2_tE677CF352F0C585CE15906659D75545A26FB9149* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF8FEBEBC35E609633AD7DC4322C82C31D55A81F8_gshared_inline (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 KeyValuePair_2_get_Value_m9617D9D28DF3AA8EC0E34BB79A8C9EB95C6EAD04_gshared_inline (KeyValuePair_2_t6B535D6C2549F3B53E90E9A0B879ABB41334E244* __this, const RuntimeMethod* method) 
{
	{
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* EqualityComparer_1_get_Default_m974B4F1D5719F47429147A5DD840B0828FBAEDEE_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* V_0 = NULL;
	{
		EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* L_0 = ((EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m939626BE110CBEBE5499849C844B2EF1E42A7461(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t675DF110F0F6297D81825327AD38FB9CB49283EE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_0 = NULL;
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0 = ((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_gshared_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_gshared_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0800AE1FBB64148CD8A8041880B5F5636D18E4A3_gshared_inline (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 KeyValuePair_2_get_Value_mF1592BA839D51AA9B856F6556B6D9BB832FD866C_gshared_inline (KeyValuePair_2_t17002D3A73FAA92AAA4DE89FE8B478A66C52718B* __this, const RuntimeMethod* method) 
{
	{
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* V_0 = NULL;
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_0 = ((EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD9FD96BA3E45AD4E09115DA56FE2C97BDA0431BF(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_4 = V_0;
		return L_4;
	}
}
