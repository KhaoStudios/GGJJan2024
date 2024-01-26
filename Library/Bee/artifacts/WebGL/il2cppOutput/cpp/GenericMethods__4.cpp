#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2;
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29;
struct U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_3_t3638A0A401CA68AF6FECFB956B602BBF7B9EFA72;
struct Action_3_t8A9161BC98843636E3BF066B37CBCC15C593B73E;
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB;
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91;
struct Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_tF0368534E8881FC0469B58E4901741C5B0CC1D79;
struct Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A;
struct Dictionary_2_tE4338305F3537556B20A4483BABF6D7D6FE1B9B9;
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
struct Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2;
struct Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B;
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_1_t41D01DF7E7DCF728A5AC2E27578C9EF76548EF27;
struct Func_1_t35CA8359B05764A8BDAC8FE106B7288508C45185;
struct Func_1_t0CA4D46E5CA022D9CB87FD09DBA3CCC56AD63B73;
struct Func_1_tBB4369E1B40CFC6872EA9A0B73B958E474BE3CF2;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9;
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8;
struct IConstructorWithCount_1_tC3042548D942C583F578CE19FEE25F9677510768;
struct IConstructor_1_t943F43022B5DD77D92BF54CCD22377BDC30F631E;
struct IConstructor_1_tB4817FCBFD3A44F10C3F86B2C4E1B216E1FCEDB5;
struct IConstructor_1_tF408ED285A722109CD256529A452F0C8B90C2101;
struct IConstructor_1_tD7B6D5CB4C166AECE81DFE2E93550110CB916F83;
struct IConstructor_1_t6FA853DE1714937284489E312FC02C6D71684DC5;
struct IConstructor_1_tCAAA8904A519EE31D72C324815D1EB2AE1787D35;
struct IConstructor_1_tBE817905EB5CBB305A5EC9728AFE0557F4D8593A;
struct IConstructor_1_t0A1BDA41023F58D7C236102BED6FD1C1B1D69338;
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
struct IEnumerable_1_tCF360FA8155395D7F2E3092E355BE18C4A37F7E0;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t38009044A4DADA30C1C7C33E1DB1F56A370D4EE0;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct ITypeConstructor_1_t38B0D0EFBEAA57884DFAE0A863E841E681DE2224;
struct KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9;
struct LinkedListNode_1_t52F97C0FCDFFF2B370A56F1385F13FC1FBD2D090;
struct LinkedList_1_t89E3EDA3D3331CC4A1385EB118E2317E8E7F1E44;
struct List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506;
struct List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0;
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72;
struct ObjectPool_1_tA6230762362A6BA6FEB38B9912D0463FB059A05A;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A;
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302;
struct Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC;
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
struct TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C;
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8;
struct Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6;
struct Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF;
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB;
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695;
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B;
struct TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878;
struct TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF;
struct TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16;
struct TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947;
struct TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B;
struct TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6;
struct ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24;
struct EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B;
struct KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimelineClipU5BU5D_t37945156A55BC896C442C4FE59198216769A4E64;
struct TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ChunkU5BU5D_t95CFB8B54DAFA085DBAC233BCB9254A640F28F3C;
struct PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B;
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct Exception_t;
struct IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00;
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067;
struct IMarker_t56D4AC9FC0C2FA104A18211FF74D707C03FCDB8D;
struct INotification_tEF630287442F0A66470493068A5D158E3C2D3C6B;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MarkerTrack_tE18594CE52CCC412606B1B5A147DD3A4F7D056C2;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D;
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct StringBuilder_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct TimelineAsset_tE400C944B07CA9D1349BAD84545E24075ADB3496;
struct TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D;
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
struct Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600;
struct Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793;
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;
struct GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB;
struct EditorSettings_t3A8D02A80F57944B75911D9692FECDF6B7081DFF;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0;
IL2CPP_EXTERN_C String_t* _stringLiteral3477F5F15DC74EADC79ED337F3988716EE1670E9;
IL2CPP_EXTERN_C String_t* _stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5;
IL2CPP_EXTERN_C String_t* _stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836;
IL2CPP_EXTERN_C String_t* _stringLiteralB17952A14247828F6A41642FA1C04CD14AE7C12A;
IL2CPP_EXTERN_C String_t* _stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7;
IL2CPP_EXTERN_C String_t* _stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377;
IL2CPP_EXTERN_C String_t* _stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
IL2CPP_EXTERN_C String_t* _stringLiteralDF29F6D97E24431ECD5F1657989D9AD6B5FF2A0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE;
IL2CPP_EXTERN_C String_t* _stringLiteralE310274B02A605A3985345944A620D7D2E019A1A;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF1A902BAD5B9128E503E43473944346B65454351;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29  : public RuntimeObject
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callBack;
};
struct U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9  : public RuntimeObject
{
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___callBack;
};
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91  : public RuntimeObject
{
	Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
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
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72  : public RuntimeObject
{
	ChunkU5BU5D_t95CFB8B54DAFA085DBAC233BCB9254A640F28F3C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	RuntimeObject* ___m_Item1;
	RuntimeObject* ___m_Item2;
};
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8 : public RuntimeObject {};
struct Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF  : public RuntimeObject
{
	RuntimeObject* ___m_Item1;
	RuntimeObject* ___m_Item2;
	RuntimeObject* ___m_Item3;
};
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB : public RuntimeObject {};
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695  : public RuntimeObject
{
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ExplicitConstructor;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B  : public RuntimeObject
{
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ExplicitConstructor;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878  : public RuntimeObject
{
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_ExplicitConstructor;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF  : public RuntimeObject
{
	Func_1_t41D01DF7E7DCF728A5AC2E27578C9EF76548EF27* ___m_ExplicitConstructor;
	Func_1_t41D01DF7E7DCF728A5AC2E27578C9EF76548EF27* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16  : public RuntimeObject
{
	Func_1_t35CA8359B05764A8BDAC8FE106B7288508C45185* ___m_ExplicitConstructor;
	Func_1_t35CA8359B05764A8BDAC8FE106B7288508C45185* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947  : public RuntimeObject
{
	Func_1_t0CA4D46E5CA022D9CB87FD09DBA3CCC56AD63B73* ___m_ExplicitConstructor;
	Func_1_t0CA4D46E5CA022D9CB87FD09DBA3CCC56AD63B73* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B  : public RuntimeObject
{
	Func_1_tBB4369E1B40CFC6872EA9A0B73B958E474BE3CF2* ___m_ExplicitConstructor;
	Func_1_tBB4369E1B40CFC6872EA9A0B73B958E474BE3CF2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6  : public RuntimeObject
{
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___m_ExplicitConstructor;
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct RuntimeHelpers_t9E6C71E90FD7CAB0987E101A77FBDA52EFDE284C  : public RuntimeObject
{
};
struct SpanHelpers_tCA85E2BE495D0EC31B7D20D20E9FC3309265176A  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	int32_t ___m_taskSchedulerId;
};
struct TaskToApm_t85E4852EFE616610E8B037ECB1926B91DEA7D458  : public RuntimeObject
{
};
struct ThreadPool_t1EE413B12D8BD9F25602041645272351A26711FC  : public RuntimeObject
{
};
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};
struct Tuple_tB9DB3180F4853E781BFDDC3093798F56B27AB03F  : public RuntimeObject
{
};
struct TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03  : public RuntimeObject
{
};
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
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
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};
struct Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793  : public RuntimeObject
{
	uint32_t ___totalBytes;
	uint32_t ___defaulChunkSize;
	List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* ___chunks;
	Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___existingValues;
	Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* ___serializationAdapters;
};
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB  : public RuntimeObject
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task;
	RuntimeObject* ____state;
	bool ____completedSynchronously;
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA  : public RuntimeObject
{
	uint32_t ___position;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data;
};
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
	bool ___m_UnloadSceneOpExcludeReleaseCallback;
};
struct Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E 
{
	int64_t ___intervalStart;
	int64_t ___intervalEnd;
	RuntimeObject* ___item;
};
struct Entry_t1FBFB504C989AF41DB9CD98FC8812617114C2564 
{
	LinkedListNode_1_t52F97C0FCDFFF2B370A56F1385F13FC1FBD2D090* ___lruNode;
	RuntimeObject* ___Value;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 
{
	List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* ____list;
	int32_t ____index;
	int32_t ____version;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* ____current;
};
struct LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565 
{
	int32_t ___entryLimit;
	Dictionary_2_tE4338305F3537556B20A4483BABF6D7D6FE1B9B9* ___cache;
	LinkedList_1_t89E3EDA3D3331CC4A1385EB118E2317E8E7F1E44* ___lru;
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E 
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
};
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	RuntimeObject* ___m_result;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	char* ___m_LocationName;
};
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp;
	int32_t ___m_Version;
	Il2CppChar* ___m_LocationName;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
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
struct DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 
{
	int64_t ___m_DiscreteTime;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC 
{
	int64_t ___center;
	int32_t ___first;
	int32_t ___last;
	int32_t ___left;
	int32_t ___right;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698 
{
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Objects;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___m_Cache;
	bool ___m_CacheDirty;
	bool ___m_HasNotifications;
};
struct MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698_marshaled_pinvoke
{
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Objects;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___m_Cache;
	int32_t ___m_CacheDirty;
	int32_t ___m_HasNotifications;
};
struct MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698_marshaled_com
{
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Objects;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___m_Cache;
	int32_t ___m_CacheDirty;
	int32_t ___m_HasNotifications;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 
{
	String_t* ___m_AssemblyName;
	String_t* ___m_ClassName;
	Type_t* ___m_CachedType;
	bool ___U3CValueChangedU3Ek__BackingField;
};
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke
{
	char* ___m_AssemblyName;
	char* ___m_ClassName;
	Type_t* ___m_CachedType;
	int32_t ___U3CValueChangedU3Ek__BackingField;
};
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com
{
	Il2CppChar* ___m_AssemblyName;
	Il2CppChar* ___m_ClassName;
	Type_t* ___m_CachedType;
	int32_t ___U3CValueChangedU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
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
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 
{
	uint32_t ___stringId;
	uint32_t ___nextId;
};
struct ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A 
{
	uint32_t ___typeId;
	uint32_t ___objectId;
};
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uflags;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uflags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uhi_OffsetPadding[4];
			uint32_t ___uhi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uhi_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uhi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulo_OffsetPadding[8];
			uint32_t ___ulo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulo_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___umid_OffsetPadding[12];
			uint32_t ___umid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___umid_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___umid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232 
{
	int32_t ___m_Id;
	Delegate_t* ___m_Delegate;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Target;
	float ___U3CInvocationTimeU3Ek__BackingField;
};
struct DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232_marshaled_pinvoke
{
	int32_t ___m_Id;
	Delegate_t_marshaled_pinvoke* ___m_Delegate;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Target;
	float ___U3CInvocationTimeU3Ek__BackingField;
};
struct DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232_marshaled_com
{
	int32_t ___m_Id;
	Delegate_t_marshaled_com* ___m_Delegate;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Target;
	float ___U3CInvocationTimeU3Ek__BackingField;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD 
{
	RuntimeObject* ___operation;
	bool ___incrementRefCount;
};
struct DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_pinvoke
{
	RuntimeObject* ___operation;
	int32_t ___incrementRefCount;
};
struct DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_com
{
	RuntimeObject* ___operation;
	int32_t ___incrementRefCount;
};
struct TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F 
{
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___trackList;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___clipList;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___markerList;
};
struct TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F_marshaled_pinvoke
{
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___trackList;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___clipList;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___markerList;
};
struct TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F_marshaled_com
{
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___trackList;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___clipList;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___markerList;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value;
};
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA 
{
	uint32_t ___stringId;
	Il2CppChar ___separator;
};
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_marshaled_pinvoke
{
	uint32_t ___stringId;
	uint8_t ___separator;
};
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_marshaled_com
{
	uint32_t ___stringId;
	uint8_t ___separator;
};
struct Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D 
{
	uint32_t ___assemblyId;
	uint32_t ___classId;
};
struct DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA 
{
	union
	{
		struct
		{
		};
		uint8_t DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA__padding[102];
	};
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result;
};
struct Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6  : public RuntimeObject
{
	RuntimeObject* ___m_Item1;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___m_Item2;
	RuntimeObject* ___m_Item3;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct ClipCaps_t5A4215235745856AF28238667B359DD8C4BD76DE 
{
	int32_t ___value__;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct InternalTaskOptions_tCE714823C2244D02E68D3F0EB682AD5C95EBBEAB 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	int32_t ___value__;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct NotificationFlags_tB23F73EAAD5438F9AC46646EAE9BCBEA142ABC1A 
{
	int16_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 
{
	String_t* ___m_Id;
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 ___m_ObjectType;
	String_t* ___m_Data;
};
struct ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_pinvoke
{
	char* ___m_Id;
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke ___m_ObjectType;
	char* ___m_Data;
};
struct ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_com
{
	Il2CppChar* ___m_Id;
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com ___m_ObjectType;
	Il2CppChar* ___m_Data;
};
struct PInfo_t8E650D58C9259127E18C225459323E41106C2877 
{
	int32_t ___value__;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PropertyAttributes_tE026D5D3C04F074C19F2200702FE4F265C309797 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StackCrawlMark_t95CDBA5EE7D71D392741A5533D7EB93341DFC730 
{
	int32_t ___value__;
};
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	int32_t ___value__;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769 
{
	int32_t ___value__;
};
struct Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer;
	Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* ___m_Adapters;
	LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565 ___m_Cache;
	StringBuilder_t* ___stringBuilder;
};
struct InternalOp_tBDC23A9687C8968D1086B882C50280316C8CAB4B  : public RuntimeObject
{
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___m_AssetBundle;
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___m_PreloadRequest;
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___m_RequestOperation;
	RuntimeObject* ___m_Result;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 ___m_ProvideHandle;
	String_t* ___subObjectName;
};
struct DurationMode_t6088BA687395F5BC722CE0542A183ABF5B8D0012 
{
	int32_t ___value__;
};
struct BlendCurveMode_t640C5D7BCAF4793D5F3E99C768868B0199A596F8 
{
	int32_t ___value__;
};
struct ClipExtrapolation_tB0EC49AFBEA6AE69BA93439FE120C01D4BF16ECB 
{
	int32_t ___value__;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C 
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	String_t* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_pinvoke
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	char* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_com
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	Il2CppChar* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	String_t* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler;
	int32_t ___m_defaultCreationOptions;
	int32_t ___m_defaultContinuationOptions;
};
struct TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D  : public RuntimeObject
{
	int32_t ___m_Version;
	double ___m_Start;
	double ___m_ClipIn;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Asset;
	double ___m_Duration;
	double ___m_TimeScale;
	TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* ___m_ParentTrack;
	double ___m_EaseInDuration;
	double ___m_EaseOutDuration;
	double ___m_BlendInDuration;
	double ___m_BlendOutDuration;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_MixInCurve;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_MixOutCurve;
	int32_t ___m_BlendInCurveMode;
	int32_t ___m_BlendOutCurveMode;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ExposedParameterNames;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___m_AnimationCurves;
	bool ___m_Recordable;
	int32_t ___m_PostExtrapolationMode;
	int32_t ___m_PreExtrapolationMode;
	double ___m_PostExtrapolationTime;
	double ___m_PreExtrapolationTime;
	String_t* ___m_DisplayName;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status;
	String_t* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status;
	char* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status;
	Il2CppChar* ___info;
};
struct RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E 
{
	int32_t ___Type;
	String_t* ___Message;
};
struct RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E_marshaled_pinvoke
{
	int32_t ___Type;
	char* ___Message;
};
struct RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E_marshaled_com
{
	int32_t ___Type;
	Il2CppChar* ___Message;
};
struct NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 
{
	double ___time;
	RuntimeObject* ___payload;
	bool ___notificationFired;
	int16_t ___flags;
};
struct NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_marshaled_pinvoke
{
	double ___time;
	RuntimeObject* ___payload;
	int32_t ___notificationFired;
	int16_t ___flags;
};
struct NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_marshaled_com
{
	double ___time;
	RuntimeObject* ___payload;
	int32_t ___notificationFired;
	int16_t ___flags;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD  : public MulticastDelegate_t
{
};
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9  : public MulticastDelegate_t
{
};
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8  : public MulticastDelegate_t
{
};
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A  : public MulticastDelegate_t
{
};
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct RuntimePropertyInfo_t5F54C4304A36C216127C93BF1553920A8685537D  : public PropertyInfo_t
{
	intptr_t ___klass;
	intptr_t ___prop;
	MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C ___info;
	int32_t ___cached;
	GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E* ___cached_getter;
};
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};
struct WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___mixer;
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___parentMixer;
	int32_t ___port;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info;
	RuntimeObject* ___GenericCache;
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor;
};
struct TimelineAsset_tE400C944B07CA9D1349BAD84545E24075ADB3496  : public PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E
{
	int32_t ___m_Version;
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Tracks;
	double ___m_FixedDuration;
	TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C* ___m_CacheOutputTracks;
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___m_CacheRootTracks;
	TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C* ___m_CacheFlattenedTracks;
	EditorSettings_t3A8D02A80F57944B75911D9692FECDF6B7081DFF* ___m_EditorSettings;
	int32_t ___m_DurationMode;
	MarkerTrack_tE18594CE52CCC412606B1B5A147DD3A4F7D056C2* ___m_MarkerTrack;
};
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96  : public PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E
{
	int32_t ___m_Version;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___m_AnimClip;
	bool ___m_Locked;
	bool ___m_Muted;
	String_t* ___m_CustomPlayableFullTypename;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___m_Curves;
	PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___m_Parent;
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Children;
	int32_t ___m_ItemsHash;
	TimelineClipU5BU5D_t37945156A55BC896C442C4FE59198216769A4E64* ___m_ClipsCache;
	DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 ___m_Start;
	DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 ___m_End;
	bool ___m_CacheSorted;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_SupportsNotifications;
	RuntimeObject* ___m_ChildTrackCache;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___m_Clips;
	MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698 ___m_Markers;
};
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72_StaticFields
{
	ChunkU5BU5D_t95CFB8B54DAFA085DBAC233BCB9254A640F28F3C* ___s_emptyArray;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler;
	int32_t ___s_taskSchedulerIdCounter;
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException;
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject;
};
struct TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields
{
	ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* ___s_TypeConstructors;
	MethodInfo_t* ___s_CreateTypeConstructor;
	ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB* ___s_CachedResolvedName;
	ObjectPool_1_tA6230762362A6BA6FEB38B9912D0463FB059A05A* ___s_Builders;
	RuntimeObject* ___syncedPoolObject;
};
struct Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory;
};
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_powers10;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_ulongPowers10;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_doublePowers10;
	PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B* ___PowerOvflValues;
};
struct DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232_StaticFields
{
	int32_t ___s_Id;
};
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_StaticFields
{
	TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C* ___s_defaultFactory;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None;
	double ___DefaultDuration;
};
struct TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D_StaticFields
{
	int32_t ___kDefaultClipCaps;
	float ___kDefaultClipDurationInSeconds;
	double ___kTimeScaleMin;
	double ___kTimeScaleMax;
	String_t* ___kDefaultCurvesName;
	double ___kMinDuration;
	double ___kMaxTimeValue;
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
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes;
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef;
};
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_StaticFields
{
	TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F ___s_BuildData;
	Action_3_t3638A0A401CA68AF6FECFB956B602BBF7B9EFA72* ___OnClipPlayableCreate;
	Action_3_t8A9161BC98843636E3BF066B37CBCC15C593B73E* ___OnTrackAnimationPlayableCreate;
	TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C* ___s_EmptyCache;
	Dictionary_2_tF0368534E8881FC0469B58E4901741C5B0CC1D79* ___s_TrackBindingTypeAttributeCache;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared_inline (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared_inline (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E_gshared (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, bool ___0_canceled, bool ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_canceled, int32_t ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m3EAE7A8F72CB23D824923E6757C64465533BBC22_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___0_canceled, RuntimeObject* ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D_gshared (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m2A3A26E17D6BE69CEEC048C0599F76FE4C6D24A0_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB819988054745A0A3BFB8F02517E248B69573289_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_1_StartNew_mDC1CAEBA1AA1140287E893D3F292AC0F99017377_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___1_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, int32_t ___4_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___5_scheduler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_1_StartNew_m3716C9AEC763488A7E54F556F38450E878DF829A_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_function, RuntimeObject* ___2_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, int32_t ___4_creationOptions, int32_t ___5_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___6_scheduler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_1__ctor_m5CA33CA454BC6B0EDE091B120839E1203DFBDDE9_gshared (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_mD9AAD1E691AD4F828FF40E1E30DBFCD821DDA70C_gshared (Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6* __this, RuntimeObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_m6AEF789D0F9924D31EF4C5A29232A093E1D05D4A_gshared (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E_gshared (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2_gshared (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0_gshared (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6_gshared (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE_gshared (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_gshared (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_id, RuntimeObject* ___1_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_gshared (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
inline int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48 (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppChar*, Il2CppChar, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104 (int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_inline (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*))SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
inline void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*))SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
inline void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_inline (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*))SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline String_t* String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Il2CppChar*, int32_t, RuntimeObject*, const RuntimeMethod*))String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E_gshared)(___0_separator, ___1_separatorLength, ___2_values, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448 (StringBuilder_t* __this, Il2CppChar* ___0_value, int32_t ___1_valueCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC (uint8_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE (uint32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4_gshared)(___0_cancellationToken, method);
}
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_gshared)(___0_cancellationToken, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
inline void Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, bool ___0_canceled, bool ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, bool, bool, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52_gshared)(__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline void Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_canceled, int32_t ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, bool, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB_gshared)(__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline void Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_tokenToRecord, RuntimeObject* ___1_cancellationException, const RuntimeMethod* method) ;
inline void Task_1__ctor_m3EAE7A8F72CB23D824923E6757C64465533BBC22 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___0_canceled, RuntimeObject* ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, bool, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_m3EAE7A8F72CB23D824923E6757C64465533BBC22_gshared)(__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline void Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, const RuntimeMethod*))Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, RuntimeObject* ___0_exceptionObject, const RuntimeMethod* method) ;
inline void Task_1__ctor_m2A3A26E17D6BE69CEEC048C0599F76FE4C6D24A0 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))Task_1__ctor_m2A3A26E17D6BE69CEEC048C0599F76FE4C6D24A0_gshared)(__this, method);
}
inline void Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, int32_t, const RuntimeMethod*))Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2_gshared)(__this, ___0_result, method);
}
inline void Task_1__ctor_mB819988054745A0A3BFB8F02517E248B69573289 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, RuntimeObject*, const RuntimeMethod*))Task_1__ctor_mB819988054745A0A3BFB8F02517E248B69573289_gshared)(__this, ___0_result, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) ;
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_1_StartNew_mDC1CAEBA1AA1140287E893D3F292AC0F99017377 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___1_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, int32_t ___4_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___5_scheduler, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))Task_1_StartNew_mDC1CAEBA1AA1140287E893D3F292AC0F99017377_gshared)(___0_parent, ___1_function, ___2_cancellationToken, ___3_creationOptions, ___4_internalOptions, ___5_scheduler, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C (int32_t ___0_creationOptions, const RuntimeMethod* method) ;
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_1_StartNew_m3716C9AEC763488A7E54F556F38450E878DF829A (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_function, RuntimeObject* ___2_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, int32_t ___4_creationOptions, int32_t ___5_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___6_scheduler, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))Task_1_StartNew_m3716C9AEC763488A7E54F556F38450E878DF829A_gshared)(___0_parent, ___1_function, ___2_state, ___3_cancellationToken, ___4_creationOptions, ___5_internalOptions, ___6_scheduler, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
inline TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared)(__this, method);
}
inline int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80 (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared)(__this, method);
}
inline void U3CU3Ec__DisplayClass17_0_1__ctor_m5CA33CA454BC6B0EDE091B120839E1203DFBDDE9 (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29*, const RuntimeMethod*))U3CU3Ec__DisplayClass17_0_1__ctor_m5CA33CA454BC6B0EDE091B120839E1203DFBDDE9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, RuntimeObject* ___1_state, int32_t* ___2_stackMark, bool ___3_compressStack, bool ___4_forceGlobal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* TimelineAsset_CreateTrack_m327D088F33507A544DE566503CDF6593C024C1ED (TimelineAsset_tE400C944B07CA9D1349BAD84545E24075ADB3496* __this, Type_t* ___0_type, TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* ___1_parent, String_t* ___2_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* TrackAsset_CreateClip_mA7D1A7B6ACCF5CCF9FB416E86C483BD2EC31A45F (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, Type_t* ___0_requestedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackAsset_CreateMarker_mD4F5715387220B12D0EF244C7C02F83F6040638A (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, Type_t* ___0_type, double ___1_time, const RuntimeMethod* method) ;
inline void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489 (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared)(__this, ___0_item1, ___1_item2, method);
}
inline void Tuple_3__ctor_mD9AAD1E691AD4F828FF40E1E30DBFCD821DDA70C (Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6* __this, RuntimeObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method)
{
	((  void (*) (Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6*, RuntimeObject*, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, RuntimeObject*, const RuntimeMethod*))Tuple_3__ctor_mD9AAD1E691AD4F828FF40E1E30DBFCD821DDA70C_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, method);
}
inline void Tuple_3__ctor_m6AEF789D0F9924D31EF4C5A29232A093E1D05D4A (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method)
{
	((  void (*) (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Tuple_3__ctor_m6AEF789D0F9924D31EF4C5A29232A093E1D05D4A_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695*, const RuntimeMethod*))TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C_gshared)(__this, method);
}
inline void ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1 (ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91*, Type_t*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared)(__this, ___0_key, ___1_value, method);
}
inline void TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073 (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B*, const RuntimeMethod*))TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878*, const RuntimeMethod*))TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2 (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF*, const RuntimeMethod*))TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0 (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16*, const RuntimeMethod*))TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6 (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947*, const RuntimeMethod*))TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B*, const RuntimeMethod*))TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE_gshared)(__this, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckIsAssignableFrom_m284900A7E86ACD68227E5E3DCC9430EEC7E1E03E (Type_t* ___0_type, Type_t* ___1_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckCanBeInstantiated_mB2C921D41DC94D83758FC5CFDFEE26911F62B14F (RuntimeObject* ___0_constructor, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___0_elementType, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E (Type_t* ___0_type, const RuntimeMethod* method) ;
inline RuntimeObject* TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
inline Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method)
{
	return ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared)(___0_value, method);
}
inline Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method)
{
	return ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Reader_ReadObject_m60087ED32721C8797522F51D63896A0B8D800BA2 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, Type_t* ___0_t, uint32_t ___1_id, bool ___2_cacheValue, const RuntimeMethod* method) ;
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, bool, const RuntimeMethod*))Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_gshared)(__this, ___0_id, ___1_cacheValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline bool Reader_TryGetCachedValue_TisUInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_m171BEE00C2EF9D7A0BBC5799382BF32BF59EE51D (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** ___1_val, const RuntimeMethod* method)
{
	return ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA**, const RuntimeMethod*))Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared)(__this, ___0_offset, ___1_val, method);
}
inline bool LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3 (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_id, RuntimeObject* ___1_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*, uint32_t, RuntimeObject*, const RuntimeMethod*))LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_gshared)(__this, ___0_id, ___1_obj, method);
}
inline bool LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76 (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*, uint32_t, RuntimeObject**, const RuntimeMethod*))LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_gshared)(__this, ___0_offset, ___1_val, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_dataSize, bool ___1_prefixSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, void* ___0_pData, uint32_t ___1_dataSize, bool ___2_prefixSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14 (void* ___0_pData, uint64_t ___1_size, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___2_hash, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_length, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_id, void* ___1_pData, uint32_t ___2_dataSize, bool ___3_prefixSize, const RuntimeMethod* method) ;
inline Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F (List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 (*) (List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257 (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_inline (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899* __this, const RuntimeMethod* method)
{
	return ((  Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* (*) (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteObject_m9AAB78B632B61A8D5D2B0BC0C250CF70B8C8B371 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, RuntimeObject* ___0_obj, bool ___1_serializeTypeData, const RuntimeMethod* method) ;
inline uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, bool, const RuntimeMethod*))Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared)(__this, ___0_values, ___1_hashElements, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
inline int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline)(method);
}
inline uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, int32_t, const RuntimeMethod*))Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared)(__this, ___0_index, method);
}
inline bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t, uint16_t, const RuntimeMethod*))Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) ;
inline void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, void*, const RuntimeMethod*))Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared)(__this, ___0_dataPointer, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m1DD3D47E48FF7827F5511457F3A89F2E20D5C0E2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisAsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_mF397D8362053E25ED2E77C0DD6C2D85E55DF8325_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCEA9A307651CE3079A5EE156235AD794AF2B3BAB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m88B7F18FC2148289B50E51FCDC090785C27FF770_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_mFE5B094CE723B3231DAD9C4A5F194186EB488BED_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGuid_t_m4723CCE11850F84118D3EEC4B9940D83DD3775EC_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m8F309C19D1CC3BFBA6CE7F4AAC88CD21FB1F9988_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAC48FD995D125CD5EAAAD92379FE2E1E3572322D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCAE38F2391CDF81252D314623460548AE0079479_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC_m79184107C50156521E71F26AE5FAC6716FFFF34F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m116360578779445ACB52E52385196FCA9CEFA125_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m661FAF16A859ADFEA50756929A53AA7C76AE6021_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_mE8B0FC08EB603607B729AE361407FFE0BD944D45_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m45B85AAEFDD5E996AEB964315831D7C2796CDAC2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_mF3E3C1B81B1866464089F56C8207424D18B80F5B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m65FE2EEC2706812FBF7CE25B1AAAA02F8966D4EF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7BCE33CF342376EBC4BFD27568B4B75C682801BE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7A749C2A0049AC898751B6B8798B5A3A3BF99D15_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m19CBBAD5A6DBE74CA2028C3FA013745A34F44174_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m6024EF54F4166BAD3DB90D61E3A3ED56305F7B59_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIl2CppFullySharedGenericAny_m36C68BC159395DAE262FAD5EEFC56958D5BCD40C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisEventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50_mA2A13D98CBD20EE66806C73BEF5BB03CEE499153_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisWeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0_m96A1798C54D25442E5ED5E7CD163A95317A63C02_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m70EDF969D9CAF218348BD2583366FD9204BC02C3_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232_m050FD6D1725B98701135C5CF540FAF5D38B60786_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E_m53F3B91F40B6A308F1A5A728DEBBC6E04512EB3B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_mFA8CB48402552A3511824388D3A515F5E3F6758B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mA8B31A6B49A4D9CE35E5D70D6B6D1FE145AB009C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisDeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_mF2DEEF4DDC9E823899F8EF5E9B8828DAD0F15A59_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisNotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_mCFBFB983839FA8F2EA12AF10CBD5EFFAAEC97D7C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m132D986D32E7CE29A247B039F02C3CE54F3C0B3C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_GetterAdapterFrame_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF0611EDC41DA8F4F03BD135DCF20E262EA42D3E3_gshared (Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2);
	const uint32_t SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0);
	{
		Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* L_0 = ___0_getter;
		RuntimeObject* L_1 = ___1_obj;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))), (Il2CppFullySharedGenericAny*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_StaticGetterAdapterFrame_TisIl2CppFullySharedGenericAny_mE4B36707DB7E08FCD6D3A3799C958AB637E8AE64_gshared (StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF);
	{
		StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* L_0 = ___0_getter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3E381D71F4CF4AB91BFFD85724D3F55A84E706E5_gshared (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		uint8_t* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_2, L_3);
		uint8_t L_5 = (*(uint8_t*)L_4);
		bool L_6;
		L_6 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_7, L_9);
		uint8_t L_11 = (*(uint8_t*)L_10);
		bool L_12;
		L_12 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_13, L_15);
		uint8_t L_17 = (*(uint8_t*)L_16);
		bool L_18;
		L_18 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_19, L_21);
		uint8_t L_23 = (*(uint8_t*)L_22);
		bool L_24;
		L_24 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		uint8_t* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_25, L_27);
		uint8_t L_29 = (*(uint8_t*)L_28);
		bool L_30;
		L_30 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_29, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		uint8_t* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		uint8_t* L_34;
		L_34 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_31, L_33);
		uint8_t L_35 = (*(uint8_t*)L_34);
		bool L_36;
		L_36 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_35, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		uint8_t* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		uint8_t* L_40;
		L_40 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_37, L_39);
		uint8_t L_41 = (*(uint8_t*)L_40);
		bool L_42;
		L_42 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		uint8_t* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_43, L_45);
		uint8_t L_47 = (*(uint8_t*)L_46);
		bool L_48;
		L_48 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		uint8_t* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		uint8_t* L_56;
		L_56 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_54, L_55);
		uint8_t L_57 = (*(uint8_t*)L_56);
		bool L_58;
		L_58 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_57, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		uint8_t* L_62;
		L_62 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_59, L_61);
		uint8_t L_63 = (*(uint8_t*)L_62);
		bool L_64;
		L_64 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_63, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_65, L_67);
		uint8_t L_69 = (*(uint8_t*)L_68);
		bool L_70;
		L_70 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_69, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		uint8_t* L_74;
		L_74 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_71, L_73);
		uint8_t L_75 = (*(uint8_t*)L_74);
		bool L_76;
		L_76 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		uint8_t* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		uint8_t* L_81;
		L_81 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_79, L_80);
		uint8_t L_82 = (*(uint8_t*)L_81);
		bool L_83;
		L_83 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_82, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppChar* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_2, L_3);
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_7, L_9);
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15);
		Il2CppChar L_17 = (*(Il2CppChar*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		Il2CppChar* L_22;
		L_22 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_19, L_21);
		Il2CppChar L_23 = (*(Il2CppChar*)L_22);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppChar* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_25, L_27);
		Il2CppChar L_29 = (*(Il2CppChar*)L_28);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_29, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppChar* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		Il2CppChar* L_34;
		L_34 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_31, L_33);
		Il2CppChar L_35 = (*(Il2CppChar*)L_34);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_35, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppChar* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39);
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45);
		Il2CppChar L_47 = (*(Il2CppChar*)L_46);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		Il2CppChar* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_54, L_55);
		Il2CppChar L_57 = (*(Il2CppChar*)L_56);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_57, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		Il2CppChar* L_62;
		L_62 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_59, L_61);
		Il2CppChar L_63 = (*(Il2CppChar*)L_62);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_63, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_65, L_67);
		Il2CppChar L_69 = (*(Il2CppChar*)L_68);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_69, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		Il2CppChar* L_74;
		L_74 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_71, L_73);
		Il2CppChar L_75 = (*(Il2CppChar*)L_74);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppChar* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		Il2CppChar* L_81;
		L_81 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_79, L_80);
		Il2CppChar L_82 = (*(Il2CppChar*)L_81);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_83;
		L_83 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_82, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m28DDF4475C9EA0E0C80C0C9A0E6D96CCC3609FB4_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_27 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_41 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_48 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_55 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_66 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_73 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_80 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_87 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_95 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_19 = L_5;
	const Il2CppFullySharedGenericAny L_26 = L_5;
	const Il2CppFullySharedGenericAny L_33 = L_5;
	const Il2CppFullySharedGenericAny L_40 = L_5;
	const Il2CppFullySharedGenericAny L_47 = L_5;
	const Il2CppFullySharedGenericAny L_54 = L_5;
	const Il2CppFullySharedGenericAny L_65 = L_5;
	const Il2CppFullySharedGenericAny L_72 = L_5;
	const Il2CppFullySharedGenericAny L_79 = L_5;
	const Il2CppFullySharedGenericAny L_86 = L_5;
	const Il2CppFullySharedGenericAny L_94 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppFullySharedGenericAny* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_7;
		L_7 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_6, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		if (L_7)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_8 = ___0_searchSpace;
		intptr_t L_9 = V_0;
		intptr_t L_10;
		L_10 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_9, 1, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_14;
		L_14 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_13, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_12: *(void**)L_12));
		if (L_14)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15 = ___0_searchSpace;
		intptr_t L_16 = V_0;
		intptr_t L_17;
		L_17 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_16, 2, NULL);
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_15, L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_21;
		L_21 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_19: *(void**)L_19));
		if (L_21)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_22 = ___0_searchSpace;
		intptr_t L_23 = V_0;
		intptr_t L_24;
		L_24 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_23, 3, NULL);
		Il2CppFullySharedGenericAny* L_25;
		L_25 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_22, L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_26, L_25, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_28;
		L_28 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_27, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_26: *(void**)L_26));
		if (L_28)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_29 = ___0_searchSpace;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_30, 4, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_29, L_31, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_34, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_33: *(void**)L_33));
		if (L_35)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_36 = ___0_searchSpace;
		intptr_t L_37 = V_0;
		intptr_t L_38;
		L_38 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_37, 5, NULL);
		Il2CppFullySharedGenericAny* L_39;
		L_39 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_36, L_38, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_40, L_39, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_42;
		L_42 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_41, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_40: *(void**)L_40));
		if (L_42)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 6, NULL);
		Il2CppFullySharedGenericAny* L_46;
		L_46 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_43, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_47, L_46, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_49;
		L_49 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_48, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_47: *(void**)L_47));
		if (L_49)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_50 = ___0_searchSpace;
		intptr_t L_51 = V_0;
		intptr_t L_52;
		L_52 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_51, 7, NULL);
		Il2CppFullySharedGenericAny* L_53;
		L_53 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_50, L_52, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_54, L_53, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_56;
		L_56 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_55, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_54: *(void**)L_54));
		if (L_56)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_57 = V_0;
		intptr_t L_58;
		L_58 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_57, 8, NULL);
		V_0 = L_58;
	}

IL_0133:
	{
		int32_t L_59 = ___2_length;
		if ((((int32_t)L_59) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_60 = ___2_length;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_61 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_61, 4));
		Il2CppFullySharedGenericAny* L_62 = ___0_searchSpace;
		intptr_t L_63 = V_0;
		Il2CppFullySharedGenericAny* L_64;
		L_64 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_62, L_63, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_65, L_64, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_67;
		L_67 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_66, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_65: *(void**)L_65));
		if (L_67)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_68 = ___0_searchSpace;
		intptr_t L_69 = V_0;
		intptr_t L_70;
		L_70 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_69, 1, NULL);
		Il2CppFullySharedGenericAny* L_71;
		L_71 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_72, L_71, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_74;
		L_74 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_73, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_72: *(void**)L_72));
		if (L_74)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_75 = ___0_searchSpace;
		intptr_t L_76 = V_0;
		intptr_t L_77;
		L_77 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_76, 2, NULL);
		Il2CppFullySharedGenericAny* L_78;
		L_78 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_75, L_77, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_81;
		L_81 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_80, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_79: *(void**)L_79));
		if (L_81)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_82 = ___0_searchSpace;
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_83, 3, NULL);
		Il2CppFullySharedGenericAny* L_85;
		L_85 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_82, L_84, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_86, L_85, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_88;
		L_88 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_87, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_86: *(void**)L_86));
		if (L_88)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_89 = V_0;
		intptr_t L_90;
		L_90 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_89, 4, NULL);
		V_0 = L_90;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppFullySharedGenericAny* L_91 = ___0_searchSpace;
		intptr_t L_92 = V_0;
		Il2CppFullySharedGenericAny* L_93;
		L_93 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_91, L_92, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_94, L_93, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		bool L_96;
		L_96 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_95, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_94: *(void**)L_94));
		if (L_96)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_97, 1, NULL);
		V_0 = L_98;
		int32_t L_99 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
	}

IL_01fc:
	{
		int32_t L_100 = ___2_length;
		if ((((int32_t)L_100) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_101 = V_0;
		void* L_102;
		L_102 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_101, NULL);
		return ((int32_t)(intptr_t)L_102);
	}

IL_020a:
	{
		intptr_t L_103 = V_0;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_103, 1, NULL);
		void* L_105;
		L_105 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_104, NULL);
		return ((int32_t)(intptr_t)L_105);
	}

IL_0218:
	{
		intptr_t L_106 = V_0;
		intptr_t L_107;
		L_107 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_106, 2, NULL);
		void* L_108;
		L_108 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_107, NULL);
		return ((int32_t)(intptr_t)L_108);
	}

IL_0226:
	{
		intptr_t L_109 = V_0;
		intptr_t L_110;
		L_110 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_109, 3, NULL);
		void* L_111;
		L_111 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_110, NULL);
		return ((int32_t)(intptr_t)L_111);
	}

IL_0234:
	{
		intptr_t L_112 = V_0;
		intptr_t L_113;
		L_113 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_112, 4, NULL);
		void* L_114;
		L_114 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_113, NULL);
		return ((int32_t)(intptr_t)L_114);
	}

IL_0242:
	{
		intptr_t L_115 = V_0;
		intptr_t L_116;
		L_116 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_115, 5, NULL);
		void* L_117;
		L_117 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_116, NULL);
		return ((int32_t)(intptr_t)L_117);
	}

IL_0250:
	{
		intptr_t L_118 = V_0;
		intptr_t L_119;
		L_119 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_118, 6, NULL);
		void* L_120;
		L_120 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_119, NULL);
		return ((int32_t)(intptr_t)L_120);
	}

IL_025e:
	{
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 7, NULL);
		void* L_123;
		L_123 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_122, NULL);
		return ((int32_t)(intptr_t)L_123);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAC220AF349A8CB4EABE16DCB88473DFB87553E71_gshared (Il2CppChar* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppChar* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		Il2CppChar* L_1 = ___0_searchSpace;
		Il2CppChar* L_2 = ___2_value;
		int32_t L_3 = V_1;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_2, L_3);
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7;
		L_7 = SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48(L_1, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___1_searchSpaceLength = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___3_valueLength;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_mD777B4B83B2CBE31F541334C63B38FCAD99CBF5B_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppFullySharedGenericAny* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_searchSpace;
		Il2CppFullySharedGenericAny* L_2 = ___2_value;
		int32_t L_3 = V_1;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_tDED3980AE4777FA42EBCF91BE5CEA41BAFB51B4B);
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7;
		L_7 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___1_searchSpaceLength = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___3_valueLength;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774_gshared (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar* L_0 = ___0_first;
		Il2CppChar* L_1 = ___1_second;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppChar* L_5 = ___0_first;
		intptr_t L_6 = V_0;
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_5, L_6);
		Il2CppChar* L_8 = ___1_second;
		intptr_t L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_8, L_9);
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_7, L_11, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_12)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_13 = ___0_first;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 1, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15);
		Il2CppChar* L_17 = ___1_second;
		intptr_t L_18 = V_0;
		intptr_t L_19;
		L_19 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_18, 1, NULL);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_17, L_19);
		Il2CppChar L_21 = (*(Il2CppChar*)L_20);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_16, L_21, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_22)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_23 = ___0_first;
		intptr_t L_24 = V_0;
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_24, 2, NULL);
		Il2CppChar* L_26;
		L_26 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_23, L_25);
		Il2CppChar* L_27 = ___1_second;
		intptr_t L_28 = V_0;
		intptr_t L_29;
		L_29 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_28, 2, NULL);
		Il2CppChar* L_30;
		L_30 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_27, L_29);
		Il2CppChar L_31 = (*(Il2CppChar*)L_30);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_26, L_31, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_32)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_33 = ___0_first;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_34, 3, NULL);
		Il2CppChar* L_36;
		L_36 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_33, L_35);
		Il2CppChar* L_37 = ___1_second;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 3, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39);
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_42)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_43 = ___0_first;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 4, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45);
		Il2CppChar* L_47 = ___1_second;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_48, 4, NULL);
		Il2CppChar* L_50;
		L_50 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_47, L_49);
		Il2CppChar L_51 = (*(Il2CppChar*)L_50);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_46, L_51, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_52)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_53 = ___0_first;
		intptr_t L_54 = V_0;
		intptr_t L_55;
		L_55 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_54, 5, NULL);
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_53, L_55);
		Il2CppChar* L_57 = ___1_second;
		intptr_t L_58 = V_0;
		intptr_t L_59;
		L_59 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_58, 5, NULL);
		Il2CppChar* L_60;
		L_60 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_57, L_59);
		Il2CppChar L_61 = (*(Il2CppChar*)L_60);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_56, L_61, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_62)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_63 = ___0_first;
		intptr_t L_64 = V_0;
		intptr_t L_65;
		L_65 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_64, 6, NULL);
		Il2CppChar* L_66;
		L_66 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_63, L_65);
		Il2CppChar* L_67 = ___1_second;
		intptr_t L_68 = V_0;
		intptr_t L_69;
		L_69 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_68, 6, NULL);
		Il2CppChar* L_70;
		L_70 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_67, L_69);
		Il2CppChar L_71 = (*(Il2CppChar*)L_70);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_66, L_71, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_72)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_73 = ___0_first;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_74, 7, NULL);
		Il2CppChar* L_76;
		L_76 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_73, L_75);
		Il2CppChar* L_77 = ___1_second;
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_78, 7, NULL);
		Il2CppChar* L_80;
		L_80 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_77, L_79);
		Il2CppChar L_81 = (*(Il2CppChar*)L_80);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_76, L_81, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_82)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_83, 8, NULL);
		V_0 = L_84;
	}

IL_0191:
	{
		int32_t L_85 = ___2_length;
		if ((((int32_t)L_85) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_86 = ___2_length;
		if ((((int32_t)L_86) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_87 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_87, 4));
		Il2CppChar* L_88 = ___0_first;
		intptr_t L_89 = V_0;
		Il2CppChar* L_90;
		L_90 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_88, L_89);
		Il2CppChar* L_91 = ___1_second;
		intptr_t L_92 = V_0;
		Il2CppChar* L_93;
		L_93 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_91, L_92);
		Il2CppChar L_94 = (*(Il2CppChar*)L_93);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_95;
		L_95 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_90, L_94, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_95)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_96 = ___0_first;
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_97, 1, NULL);
		Il2CppChar* L_99;
		L_99 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_96, L_98);
		Il2CppChar* L_100 = ___1_second;
		intptr_t L_101 = V_0;
		intptr_t L_102;
		L_102 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_101, 1, NULL);
		Il2CppChar* L_103;
		L_103 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_100, L_102);
		Il2CppChar L_104 = (*(Il2CppChar*)L_103);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_105;
		L_105 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_99, L_104, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_105)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_106 = ___0_first;
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 2, NULL);
		Il2CppChar* L_109;
		L_109 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_106, L_108);
		Il2CppChar* L_110 = ___1_second;
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 2, NULL);
		Il2CppChar* L_113;
		L_113 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_110, L_112);
		Il2CppChar L_114 = (*(Il2CppChar*)L_113);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_109, L_114, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_116 = ___0_first;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_117, 3, NULL);
		Il2CppChar* L_119;
		L_119 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_116, L_118);
		Il2CppChar* L_120 = ___1_second;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 3, NULL);
		Il2CppChar* L_123;
		L_123 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_120, L_122);
		Il2CppChar L_124 = (*(Il2CppChar*)L_123);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_125;
		L_125 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_119, L_124, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_125)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_126 = V_0;
		intptr_t L_127;
		L_127 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_126, 4, NULL);
		V_0 = L_127;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppChar* L_128 = ___0_first;
		intptr_t L_129 = V_0;
		Il2CppChar* L_130;
		L_130 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_128, L_129);
		Il2CppChar* L_131 = ___1_second;
		intptr_t L_132 = V_0;
		Il2CppChar* L_133;
		L_133 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_131, L_132);
		Il2CppChar L_134 = (*(Il2CppChar*)L_133);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_135;
		L_135 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_130, L_134, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_136 = V_0;
		intptr_t L_137;
		L_137 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_136, 1, NULL);
		V_0 = L_137;
		int32_t L_138 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_0285:
	{
		int32_t L_139 = ___2_length;
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424_gshared (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_56 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_67 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_78 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_89 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_103 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_114 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_125 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_136 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_147 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
	const Il2CppFullySharedGenericAny L_22 = L_11;
	const Il2CppFullySharedGenericAny L_33 = L_11;
	const Il2CppFullySharedGenericAny L_44 = L_11;
	const Il2CppFullySharedGenericAny L_55 = L_11;
	const Il2CppFullySharedGenericAny L_66 = L_11;
	const Il2CppFullySharedGenericAny L_77 = L_11;
	const Il2CppFullySharedGenericAny L_88 = L_11;
	const Il2CppFullySharedGenericAny L_102 = L_11;
	const Il2CppFullySharedGenericAny L_113 = L_11;
	const Il2CppFullySharedGenericAny L_124 = L_11;
	const Il2CppFullySharedGenericAny L_135 = L_11;
	const Il2CppFullySharedGenericAny L_146 = L_11;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_first;
		Il2CppFullySharedGenericAny* L_1 = ___1_second;
		bool L_2;
		L_2 = ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppFullySharedGenericAny* L_5 = ___0_first;
		intptr_t L_6 = V_0;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_8 = ___1_second;
		intptr_t L_9 = V_0;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_12, (void*)L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		if (!L_13)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_14 = ___0_first;
		intptr_t L_15 = V_0;
		intptr_t L_16;
		L_16 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_15, 1, NULL);
		Il2CppFullySharedGenericAny* L_17;
		L_17 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_14, L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_18 = ___1_second;
		intptr_t L_19 = V_0;
		intptr_t L_20;
		L_20 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_19, 1, NULL);
		Il2CppFullySharedGenericAny* L_21;
		L_21 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_18, L_20, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_22, L_21, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_24;
		L_24 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_23, (void*)L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_22: *(void**)L_22));
		if (!L_24)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_25 = ___0_first;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 2, NULL);
		Il2CppFullySharedGenericAny* L_28;
		L_28 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_25, L_27, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_29 = ___1_second;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_30, 2, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_29, L_31, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_34, (void*)L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_33: *(void**)L_33));
		if (!L_35)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_36 = ___0_first;
		intptr_t L_37 = V_0;
		intptr_t L_38;
		L_38 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_37, 3, NULL);
		Il2CppFullySharedGenericAny* L_39;
		L_39 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_36, L_38, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_40 = ___1_second;
		intptr_t L_41 = V_0;
		intptr_t L_42;
		L_42 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_41, 3, NULL);
		Il2CppFullySharedGenericAny* L_43;
		L_43 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_40, L_42, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_44, L_43, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_46;
		L_46 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_45, (void*)L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_44: *(void**)L_44));
		if (!L_46)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_47 = ___0_first;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_48, 4, NULL);
		Il2CppFullySharedGenericAny* L_50;
		L_50 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_47, L_49, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_51 = ___1_second;
		intptr_t L_52 = V_0;
		intptr_t L_53;
		L_53 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_52, 4, NULL);
		Il2CppFullySharedGenericAny* L_54;
		L_54 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_51, L_53, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_55, L_54, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_57;
		L_57 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_56, (void*)L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_55: *(void**)L_55));
		if (!L_57)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_58 = ___0_first;
		intptr_t L_59 = V_0;
		intptr_t L_60;
		L_60 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_59, 5, NULL);
		Il2CppFullySharedGenericAny* L_61;
		L_61 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_58, L_60, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_62 = ___1_second;
		intptr_t L_63 = V_0;
		intptr_t L_64;
		L_64 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_63, 5, NULL);
		Il2CppFullySharedGenericAny* L_65;
		L_65 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_62, L_64, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_66, L_65, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_68;
		L_68 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_67, (void*)L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_66: *(void**)L_66));
		if (!L_68)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_69 = ___0_first;
		intptr_t L_70 = V_0;
		intptr_t L_71;
		L_71 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_70, 6, NULL);
		Il2CppFullySharedGenericAny* L_72;
		L_72 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_69, L_71, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_73 = ___1_second;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_74, 6, NULL);
		Il2CppFullySharedGenericAny* L_76;
		L_76 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_73, L_75, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_77, L_76, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_79;
		L_79 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_78, (void*)L_72, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_77: *(void**)L_77));
		if (!L_79)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_80 = ___0_first;
		intptr_t L_81 = V_0;
		intptr_t L_82;
		L_82 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_81, 7, NULL);
		Il2CppFullySharedGenericAny* L_83;
		L_83 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_80, L_82, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_84 = ___1_second;
		intptr_t L_85 = V_0;
		intptr_t L_86;
		L_86 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_85, 7, NULL);
		Il2CppFullySharedGenericAny* L_87;
		L_87 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_84, L_86, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_88, L_87, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_90;
		L_90 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_89, (void*)L_83, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_88: *(void**)L_88));
		if (!L_90)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_91 = V_0;
		intptr_t L_92;
		L_92 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_91, 8, NULL);
		V_0 = L_92;
	}

IL_0191:
	{
		int32_t L_93 = ___2_length;
		if ((((int32_t)L_93) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_94 = ___2_length;
		if ((((int32_t)L_94) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_95 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_95, 4));
		Il2CppFullySharedGenericAny* L_96 = ___0_first;
		intptr_t L_97 = V_0;
		Il2CppFullySharedGenericAny* L_98;
		L_98 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_96, L_97, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_99 = ___1_second;
		intptr_t L_100 = V_0;
		Il2CppFullySharedGenericAny* L_101;
		L_101 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_99, L_100, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_102, L_101, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_104;
		L_104 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_103, (void*)L_98, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_102: *(void**)L_102));
		if (!L_104)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_105 = ___0_first;
		intptr_t L_106 = V_0;
		intptr_t L_107;
		L_107 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_106, 1, NULL);
		Il2CppFullySharedGenericAny* L_108;
		L_108 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_105, L_107, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_109 = ___1_second;
		intptr_t L_110 = V_0;
		intptr_t L_111;
		L_111 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_110, 1, NULL);
		Il2CppFullySharedGenericAny* L_112;
		L_112 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_109, L_111, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_113, L_112, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_115;
		L_115 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_114, (void*)L_108, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_113: *(void**)L_113));
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_116 = ___0_first;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_117, 2, NULL);
		Il2CppFullySharedGenericAny* L_119;
		L_119 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_116, L_118, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_120 = ___1_second;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 2, NULL);
		Il2CppFullySharedGenericAny* L_123;
		L_123 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_120, L_122, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_124, L_123, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_126;
		L_126 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_125, (void*)L_119, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_124: *(void**)L_124));
		if (!L_126)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_127 = ___0_first;
		intptr_t L_128 = V_0;
		intptr_t L_129;
		L_129 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_128, 3, NULL);
		Il2CppFullySharedGenericAny* L_130;
		L_130 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_127, L_129, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_131 = ___1_second;
		intptr_t L_132 = V_0;
		intptr_t L_133;
		L_133 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_132, 3, NULL);
		Il2CppFullySharedGenericAny* L_134;
		L_134 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_131, L_133, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_135, L_134, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_137;
		L_137 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_136, (void*)L_130, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_135: *(void**)L_135));
		if (!L_137)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_138 = V_0;
		intptr_t L_139;
		L_139 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_138, 4, NULL);
		V_0 = L_139;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppFullySharedGenericAny* L_140 = ___0_first;
		intptr_t L_141 = V_0;
		Il2CppFullySharedGenericAny* L_142;
		L_142 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_140, L_141, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_143 = ___1_second;
		intptr_t L_144 = V_0;
		Il2CppFullySharedGenericAny* L_145;
		L_145 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_143, L_144, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_146, L_145, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		bool L_148;
		L_148 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_147, (void*)L_142, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_146: *(void**)L_146));
		if (!L_148)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_149 = V_0;
		intptr_t L_150;
		L_150 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_149, 1, NULL);
		V_0 = L_150;
		int32_t L_151 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_151, 1));
	}

IL_0285:
	{
		int32_t L_152 = ___2_length;
		if ((((int32_t)L_152) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_gshared (int32_t ___0_length, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_state, SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_8 = ___2_action;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 L_13 = ___1_state;
		SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_inline(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_gshared (int32_t ___0_length, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_state, SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_8 = ___2_action;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_13 = ___1_state;
		SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85_m6F505BE8BEAF8A3324DDCED5C13F3EC1970BA9B2_gshared (int32_t ___0_length, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_state, SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* L_8 = ___2_action;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_13 = ___1_state;
		SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_inline(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_gshared (int32_t ___0_length, Il2CppFullySharedGenericAny ___1_state, SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
	String_t* V_0 = NULL;
	{
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_8 = ___2_action;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_state : &___1_state), SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
		InvokerActionInvoker2< Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_8, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_13: *(void**)L_13));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mE767157BD5A8DFE4F70BFDFEA2D7346372BD9FF9_gshared (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppChar* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_separator;
		String_t* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B2_0 = L_2;
	}

IL_000a:
	{
		___0_separator = G_B2_0;
		String_t* L_3 = ___0_separator;
		Il2CppChar* L_4 = (Il2CppChar*)(&L_3->____firstChar);
		V_0 = L_4;
		Il2CppChar* L_5 = V_0;
		String_t* L_6 = ___0_separator;
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		RuntimeObject* L_8 = ___1_values;
		String_t* L_9;
		L_9 = String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E((Il2CppChar*)((uintptr_t)L_5), L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisIl2CppFullySharedGenericAny_mAE51C2212CB6A91EA71F77D735FC3967F0ED5F20_gshared (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppChar* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_separator;
		String_t* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B2_0 = L_2;
	}

IL_000a:
	{
		___0_separator = G_B2_0;
		String_t* L_3 = ___0_separator;
		Il2CppChar* L_4 = (Il2CppChar*)(&L_3->____firstChar);
		V_0 = L_4;
		Il2CppChar* L_5 = V_0;
		String_t* L_6 = ___0_separator;
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		RuntimeObject* L_8 = ___1_values;
		String_t* L_9;
		L_9 = ((  String_t* (*) (Il2CppChar*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((Il2CppChar*)((uintptr_t)L_5), L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E_gshared (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		RuntimeObject* L_0 = ___2_values;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___2_values;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ad:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_00b6;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00b6:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_0;
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				if (L_7)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				V_4 = L_8;
				goto IL_00b7;
			}

IL_0029_1:
			{
				RuntimeObject* L_9 = V_0;
				int32_t L_10;
				L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_9);
				V_1 = L_10;
				goto IL_003b_1;
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				goto IL_0048_1;
			}

IL_003b_1:
			{
				Il2CppFakeBox<int32_t> L_12(il2cpp_rgctx_data(method->rgctx_data, 4), (&V_1));
				String_t* L_13;
				L_13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_12), NULL);
				G_B8_0 = L_13;
			}

IL_0048_1:
			{
				V_2 = G_B8_0;
				RuntimeObject* L_14 = V_0;
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_005f_1;
				}
			}
			{
				String_t* L_16 = V_2;
				String_t* L_17 = L_16;
				if (L_17)
				{
					G_B11_0 = L_17;
					goto IL_005b_1;
				}
				G_B10_0 = L_17;
			}
			{
				String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				G_B11_0 = L_18;
			}

IL_005b_1:
			{
				V_4 = G_B11_0;
				goto IL_00b7;
			}

IL_005f_1:
			{
				StringBuilder_t* L_19;
				L_19 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)16), NULL);
				V_3 = L_19;
				StringBuilder_t* L_20 = V_3;
				String_t* L_21 = V_2;
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, L_21, NULL);
			}

IL_006f_1:
			{
				RuntimeObject* L_23 = V_0;
				int32_t L_24;
				L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_23);
				V_1 = L_24;
				StringBuilder_t* L_25 = V_3;
				Il2CppChar* L_26 = ___0_separator;
				int32_t L_27 = ___1_separatorLength;
				StringBuilder_t* L_28;
				L_28 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_25, L_26, L_27, NULL);
			}
			{
				StringBuilder_t* L_30 = V_3;
				Il2CppFakeBox<int32_t> L_31(il2cpp_rgctx_data(method->rgctx_data, 4), (&V_1));
				String_t* L_32;
				L_32 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_31), NULL);
				StringBuilder_t* L_33;
				L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, L_32, NULL);
			}

IL_009b_1:
			{
				RuntimeObject* L_34 = V_0;
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_006f_1;
				}
			}
			{
				StringBuilder_t* L_36 = V_3;
				String_t* L_37;
				L_37 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_36, NULL);
				V_4 = L_37;
				goto IL_00b7;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		String_t* L_38 = V_4;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_JoinCore_TisIl2CppFullySharedGenericAny_mDBFE23C94396E507A53C312CA2737B4DC76D6D3B_gshared (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 4)));
	void* L_33 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
	const Il2CppFullySharedGenericAny L_25 = L_10;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
	const Il2CppFullySharedGenericAny L_30 = L_11;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
	memset(V_1, 0, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		RuntimeObject* L_0 = ___2_values;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___2_values;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ad:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_00b6;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00b6:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_0;
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				if (L_7)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				V_4 = L_8;
				goto IL_00b7;
			}

IL_0029_1:
			{
				RuntimeObject* L_9 = V_0;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_9, (Il2CppFullySharedGenericAny*)L_10);
				il2cpp_codegen_memcpy(V_1, L_10, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
				il2cpp_codegen_memcpy(L_11, V_1, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
				bool L_12 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_11);
				if (L_12)
				{
					goto IL_003b_1;
				}
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				goto IL_0048_1;
			}

IL_003b_1:
			{
				String_t* L_14;
				L_14 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_method(method->rgctx_data, 5), L_13, (void*)(Il2CppFullySharedGenericAny*)V_1);
				G_B8_0 = L_14;
			}

IL_0048_1:
			{
				V_2 = G_B8_0;
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_005f_1;
				}
			}
			{
				String_t* L_17 = V_2;
				String_t* L_18 = L_17;
				if (L_18)
				{
					G_B11_0 = L_18;
					goto IL_005b_1;
				}
				G_B10_0 = L_18;
			}
			{
				String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				G_B11_0 = L_19;
			}

IL_005b_1:
			{
				V_4 = G_B11_0;
				goto IL_00b7;
			}

IL_005f_1:
			{
				StringBuilder_t* L_20;
				L_20 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)16), NULL);
				V_3 = L_20;
				StringBuilder_t* L_21 = V_3;
				String_t* L_22 = V_2;
				StringBuilder_t* L_23;
				L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, L_22, NULL);
			}

IL_006f_1:
			{
				RuntimeObject* L_24 = V_0;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_24, (Il2CppFullySharedGenericAny*)L_25);
				il2cpp_codegen_memcpy(V_1, L_25, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
				StringBuilder_t* L_26 = V_3;
				Il2CppChar* L_27 = ___0_separator;
				int32_t L_28 = ___1_separatorLength;
				StringBuilder_t* L_29;
				L_29 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_26, L_27, L_28, NULL);
				il2cpp_codegen_memcpy(L_30, V_1, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
				bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_30);
				if (!L_31)
				{
					goto IL_009b_1;
				}
			}
			{
				StringBuilder_t* L_32 = V_3;
				String_t* L_34;
				L_34 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_method(method->rgctx_data, 5), L_33, (void*)(Il2CppFullySharedGenericAny*)V_1);
				StringBuilder_t* L_35;
				L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, L_34, NULL);
			}

IL_009b_1:
			{
				RuntimeObject* L_36 = V_0;
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
				if (L_37)
				{
					goto IL_006f_1;
				}
			}
			{
				StringBuilder_t* L_38 = V_3;
				String_t* L_39;
				L_39 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_38, NULL);
				V_4 = L_39;
				goto IL_00b7;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		String_t* L_40 = V_4;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9C89D6A499A93EAEB46D21A005E7B7CDA8AF08DA_gshared (StringBuilder_t* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC((&___0_value), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B15D251663E1D9C147CD9DA1A8908CACF877570_gshared (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&___0_value), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F274B553164EF6FB0CB7D16AED9687CE7CA5FC_gshared (StringBuilder_t* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&___0_value), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisIl2CppFullySharedGenericAny_mF50A5C2F631F6F4450B612A08A50CA5E6DC58AEC_gshared (StringBuilder_t* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_2;
		L_2 = ConstrainedFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), L_1, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_value : &___0_value), (String_t*)NULL, (RuntimeObject*)L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1;
		L_1 = Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCanceled_TisRuntimeObject_mEABB42281A90E2575A296C1697DD207F67740AB2_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1;
		L_1 = Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCanceled_TisIl2CppFullySharedGenericAny_m6FA2A9DC4ECF7A21441B961F86A94873F5C015C9_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1;
		L_1 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA2563A31BE4ECDB082688B267381538C65FA811B_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_m3EAE7A8F72CB23D824923E6757C64465533BBC22(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* Task_FromCancellation_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_m3D0619EF0B707377DD0715DB44C2C3AA0530E99A_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2 = (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	memset(V_0, 0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		InvokerActionInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_2: *(void**)L_2), (int32_t)0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m2223C6E6E1675E311C66C5695E2F0728BED068E5_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2512A0C4A3009B5078FC0B965B4D1E6C89A3DBD3_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromException_TisRuntimeObject_m81649814701F78FC4AAB5BE79018C8DCC7227E6E_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_2 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m2A3A26E17D6BE69CEEC048C0599F76FE4C6D24A0(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* Task_FromException_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_m7594A0E6E26B701AD7D7F0E73F0A82019C3D2061_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2 = (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF151895F5C0BBB74AEE7600FA2F777D0A8D1EBC5_gshared (int32_t ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_result;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared (RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_result;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_mB819988054745A0A3BFB8F02517E248B69573289(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromResult_TisIl2CppFullySharedGenericAny_m829FFC9F5B1DFAC382A3E6ABDED634066EADFB21_gshared (Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_result : &___0_result), SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2;
		L_2 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3;
		L_3 = Task_1_StartNew_mDC1CAEBA1AA1140287E893D3F292AC0F99017377((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, L_0, L_1, (int32_t)8, (int32_t)0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m9B8B1B2F2FE04689FD7BADCD0E57F38E4B5FBF69_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2;
		L_2 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3;
		L_3 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, L_0, L_1, (int32_t)8, (int32_t)0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskFactory_StartNew_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mEA676BADDD921EB0FE18C6736870433B4C1A6F25_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_function, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___3_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_function;
		RuntimeObject* L_3 = ___1_state;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___2_cancellationToken;
		int32_t L_5 = ___3_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6 = ___4_scheduler;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = Task_1_StartNew_m3716C9AEC763488A7E54F556F38450E878DF829A(L_1, L_2, L_3, L_4, L_5, (int32_t)0, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_m76EE5D98B340430C4C47231CDF77B89D3AC194D6_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* ___0_function, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___3_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* L_2 = ___0_function;
		RuntimeObject* L_3 = ___1_state;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___2_cancellationToken;
		int32_t L_5 = ___3_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6 = ___4_scheduler;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7;
		L_7 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, L_5, (int32_t)0, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = L_2->___Task;
		V_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_asyncResult;
		V_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_7 = V_0;
		TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_8;
		L_8 = Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		int32_t L_9;
		L_9 = TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_TisIl2CppFullySharedGenericAny_m91FFD6A6ED859B8F22E6E190E8D8C9E7E161442D_gshared (RuntimeObject* ___0_asyncResult, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = L_2->___Task;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_asyncResult;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7 = V_0;
		TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_8;
		L_8 = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (&V_2), (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callBack, RuntimeObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* L_0 = (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__DisplayClass17_0_1__ctor_m5CA33CA454BC6B0EDE091B120839E1203DFBDDE9(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* L_1 = L_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_callBack;
		L_1->___callBack = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* L_3 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = L_3->___callBack;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
		G_B1_0 = L_3;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		RuntimeObject* L_7 = ___1_state;
		bool L_8 = ___2_preferLocal;
		bool L_9;
		L_9 = ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD(L_6, L_7, (&V_0), (bool)1, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m1BF539C01328BDA70BEABD795BFABD5F18D7F8CE_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___0_callBack, Il2CppFullySharedGenericAny ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_0 = (U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_1 = L_0;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = ___0_callBack;
		L_1->___callBack = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_3 = L_1;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = L_3->___callBack;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
		G_B1_0 = L_3;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_state : &___1_state), SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_7);
		bool L_9 = ___2_preferLocal;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD(L_6, L_8, (&V_0), (bool)1, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E_m843655B2FED7521EC735615543206C500DDAD594_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntry_t1FBFB504C989AF41DB9CD98FC8812617114C2564_m22043669FFCB2FAE7A28C66A206B8C32E6A5AFC5_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Entry_t1FBFB504C989AF41DB9CD98FC8812617114C2564 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Entry_t1FBFB504C989AF41DB9CD98FC8812617114C2564));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_mA3BB2429BB1C035803C54C5B10D09F825CDD5B13_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEB26E2A0B36283551F9D0F5623DC18F58F310EC2_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m1E71696BB8DB7E3FE27A8F332EF93CB7652A1EA8_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC_mD55108A0061D549F3C6642D02EEDEF9440337045_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m3894B5C0AE070CBA244D2FA526E684701FBDBA27_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m8DB627F6C9F65431347774D927C42318BE789779_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m28E8D54DA748391A2476048FA1B350CE1ADF1113_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m21622664C637314AFAAB1ED4A692CFDDA15893F8_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_mA17F2B115A27352849BFF45AE179346E639C2B76_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	memset(V_0, 0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50_m8D064BAB4AD462D31E40C50A02AC6087374F1467_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0_m0A8BE23260E6E169A1D247D8EAA0631905874EC8_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232_m1856FFC9100DA67D39D6776AFA54AC043977BCBB_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E_m14B1ECBE84B33BAF55AF96C24B64BDDBA31C5BD5_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_m4B105830B3FD7AF23A498E1DDF5FB61ADB0D38EE_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisNotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_mC9340A86D03EA5E85780C1EDD74E1EE2429E6D8C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimelineAsset_CreateTrack_TisRuntimeObject_mB347EECFD633054E8F7C842B699D0832AA96B348_gshared (TimelineAsset_tE400C944B07CA9D1349BAD84545E24075ADB3496* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* L_2;
		L_2 = TimelineAsset_CreateTrack_m327D088F33507A544DE566503CDF6593C024C1ED(__this, L_1, (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96*)NULL, (String_t*)NULL, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimelineAsset_CreateTrack_TisRuntimeObject_mFCADA1BCFFA6EAD908386C69E4D0A689CBD5BBFC_gshared (TimelineAsset_tE400C944B07CA9D1349BAD84545E24075ADB3496* __this, String_t* ___0_trackName, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___0_trackName;
		TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* L_3;
		L_3 = TimelineAsset_CreateTrack_m327D088F33507A544DE566503CDF6593C024C1ED(__this, L_1, (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96*)NULL, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimelineAsset_CreateTrack_TisRuntimeObject_m2A98AF2825900F09A33A99F44B8D5CF60635FA46_gshared (TimelineAsset_tE400C944B07CA9D1349BAD84545E24075ADB3496* __this, TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* ___0_parent, String_t* ___1_trackName, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* L_2 = ___0_parent;
		String_t* L_3 = ___1_trackName;
		TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* L_4;
		L_4 = TimelineAsset_CreateTrack_m327D088F33507A544DE566503CDF6593C024C1ED(__this, L_1, L_2, L_3, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* TrackAsset_CreateClip_TisRuntimeObject_m5BAFDDD423EE60F7B5794701712C57F0F12501AD_gshared (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TimelineClip_t003008F08E56A75F3A47FD9ADE7C066988A3371D* L_2;
		L_2 = TrackAsset_CreateClip_mA7D1A7B6ACCF5CCF9FB416E86C483BD2EC31A45F(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackAsset_CreateMarker_TisRuntimeObject_mF08C52C2F5B2346C4735735AE2C24901C9C0C600_gshared (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, double ___0_time, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		double L_2 = ___0_time;
		RuntimeObject* L_3;
		L_3 = TrackAsset_CreateMarker_mD4F5715387220B12D0EF244C7C02F83F6040638A(__this, L_1, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* Tuple_Create_TisRuntimeObject_TisRuntimeObject_mB9E45EDC3450763C550051587640A39E730AF094_gshared (RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_item1;
		RuntimeObject* L_1 = ___1_item2;
		Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* L_2 = (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA77107B30389EA4092249AFF47FFBFFE45BB038_gshared (Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6* Tuple_Create_TisRuntimeObject_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_TisRuntimeObject_m9EFFC298253CAB7998FBD94B824C8FB51A458A11_gshared (RuntimeObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_item1;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_1 = ___1_item2;
		RuntimeObject* L_2 = ___2_item3;
		Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6* L_3 = (Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		Tuple_3__ctor_mD9AAD1E691AD4F828FF40E1E30DBFCD821DDA70C(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* Tuple_Create_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mBDF688DB1E9BEF8A9FEFCDD9904ADF09523BB8BC_gshared (RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_item1;
		RuntimeObject* L_1 = ___1_item2;
		RuntimeObject* L_2 = ___2_item3;
		Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* L_3 = (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		Tuple_3__ctor_m6AEF789D0F9924D31EF4C5A29232A093E1D05D4A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF23536EC283D2934606FB2245E28DFB4E9638BF9_gshared (Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_item3 : &___2_item3), SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_3 = (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_CanBeInstantiated_TisIl2CppFullySharedGenericAny_m8DD98722EE8C5AD72CC3361DA65279E2E914DA57_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckCanBeInstantiated_TisIl2CppFullySharedGenericAny_mF4DC2D1251C15CC68D20D7959AEBA5D8192C4004_gshared (RuntimeObject* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_constructor;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3477F5F15DC74EADC79ED337F3988716EE1670E9)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1A902BAD5B9128E503E43473944346B65454351)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_0 = (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_1 = V_0;
		((Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_0 = (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_1 = V_0;
		((Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_0 = (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_1 = V_0;
		((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_0 = (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_1 = V_0;
		((Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_0 = (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_1 = V_0;
		((Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_0 = (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_1 = V_0;
		((Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_0 = (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_1 = V_0;
		((Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_0 = (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_1 = V_0;
		((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B3_0 = L_1;
		goto IL_0014;
	}

IL_000f:
	{
		RuntimeObject* L_2 = ((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B3_0 = L_1;
		goto IL_0014;
	}

IL_000f:
	{
		RuntimeObject* L_2 = ((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m16821F3B413A510B42D80A6D20A540E95AB55F6A_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	const Il2CppFullySharedGenericAny L_4 = L_3;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	memset(V_1, 0, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		goto IL_0017;
	}

IL_0017:
	{
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m5DC21E4FCCF2901D5CAB9ABD9672A72829187EE7_gshared (Type_t* ___0_derivedType, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	memset(V_1, 0, SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	{
		Type_t* L_0 = ___0_derivedType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC(L_0, NULL);
		V_0 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4 = ___0_derivedType;
		TypeUtility_CheckIsAssignableFrom_m284900A7E86ACD68227E5E3DCC9430EEC7E1E03E(L_3, L_4, NULL);
		RuntimeObject* L_5 = V_0;
		Type_t* L_6 = ___0_derivedType;
		TypeUtility_CheckCanBeInstantiated_mB2C921D41DC94D83758FC5CFDFEE26911F62B14F(L_5, L_6, NULL);
		RuntimeObject* L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_7);
		void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(method->rgctx_data, 1), L_9);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10))), SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		goto IL_002f;
	}

IL_002f:
	{
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_InstantiateArray_TisIl2CppFullySharedGenericAny_mFDFE5C113C01319C0149CDE8BFCB586E246BFE07_gshared (int32_t ___0_count, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	const Il2CppFullySharedGenericAny L_37 = L_13;
	const Il2CppFullySharedGenericAny L_39 = L_13;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	memset(V_6, 0, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	bool V_7 = false;
	bool V_8 = false;
	{
		int32_t L_0 = ___0_count;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_count;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB17952A14247828F6A41642FA1C04CD14AE7C12A)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002c:
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 2)));
		RuntimeObject* L_9 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_11 = V_1;
		int32_t L_12 = ___0_count;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_11, L_12, (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_memcpy(V_6, L_13, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		goto IL_00da;
	}

IL_0052:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		V_2 = L_15;
		Type_t* L_16 = V_2;
		bool L_17;
		L_17 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_16, NULL);
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_20);
		String_t* L_22;
		L_22 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377)), L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0091:
	{
		Type_t* L_24 = V_2;
		Type_t* L_25;
		L_25 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_24);
		V_3 = L_25;
		Type_t* L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_26, NULL);
		V_8 = L_27;
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_30);
		String_t* L_32;
		L_32 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377)), L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_33 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_00ca:
	{
		Type_t* L_34 = V_3;
		int32_t L_35 = ___0_count;
		RuntimeArray* L_36;
		L_36 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_34, L_35, NULL);
		void* L_38 = UnBox_Any((RuntimeObject*)L_36, il2cpp_rgctx_data(method->rgctx_data, 4), L_37);
		il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38))), SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		goto IL_00da;
	}

IL_00da:
	{
		il2cpp_codegen_memcpy(L_39, V_6, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		il2cpp_codegen_memcpy(il2cppRetVal, L_39, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_InstantiateArray_TisIl2CppFullySharedGenericAny_m1FCEE0C26FAE797853D3A634E97FFBF64C012B22_gshared (Type_t* ___0_derivedType, int32_t ___1_count, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	const Il2CppFullySharedGenericAny L_38 = L_14;
	const Il2CppFullySharedGenericAny L_40 = L_14;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	memset(V_6, 0, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	bool V_7 = false;
	bool V_8 = false;
	{
		int32_t L_0 = ___1_count;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___1_count;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF29F6D97E24431ECD5F1657989D9AD6B5FF2A0E)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002c:
	{
		Type_t* L_7 = ___0_derivedType;
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E(L_7, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_10 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_12 = V_1;
		int32_t L_13 = ___1_count;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_12, L_13, (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(V_6, L_14, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		goto IL_00db;
	}

IL_0053:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		V_2 = L_16;
		Type_t* L_17 = V_2;
		bool L_18;
		L_18 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_17, NULL);
		V_7 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0092;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_21);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, method);
	}

IL_0092:
	{
		Type_t* L_25 = V_2;
		Type_t* L_26;
		L_26 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_25);
		V_3 = L_26;
		Type_t* L_27 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_27, NULL);
		V_8 = L_28;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00cb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_31);
		String_t* L_33;
		L_33 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836)), L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
	}

IL_00cb:
	{
		Type_t* L_35 = V_3;
		int32_t L_36 = ___1_count;
		RuntimeArray* L_37;
		L_37 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_35, L_36, NULL);
		void* L_39 = UnBox_Any((RuntimeObject*)L_37, il2cpp_rgctx_data(method->rgctx_data, 2), L_38);
		il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_39))), SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		goto IL_00db;
	}

IL_00db:
	{
		il2cpp_codegen_memcpy(L_40, V_6, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_40, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_SetExplicitInstantiationMethod_TisRuntimeObject_mE9AE43E037CA7786FCC097D961262F0634370C79_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB(il2cpp_rgctx_method(method->rgctx_data, 0));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = ___0_constructor;
		InterfaceActionInvoker1< Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 1), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_SetExplicitInstantiationMethod_TisIl2CppFullySharedGenericAny_m2D8909EEC6C43238849B5CDA814A1B8830FD6DD6_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_1 = ___0_constructor;
		InterfaceActionInvoker1< Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 1), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m649F65DE0BCA16E2A127A53A46C010AD35120D3E_gshared (Il2CppFullySharedGenericAny* ___0_instance, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_instance;
		RuntimeObject* L_5 = V_0;
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_6, SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_6);
		V_2 = (bool)1;
		goto IL_002d;
	}

IL_0022:
	{
		Il2CppFullySharedGenericAny* L_7 = ___0_instance;
		il2cpp_codegen_initobj(L_7, SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
		V_2 = (bool)0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m3914D5A487BA3A1D1DA0C268C598029CAAD4B975_gshared (Type_t* ___0_derivedType, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_derivedType;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21, L_1, L_2);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_5 = ___1_value;
		il2cpp_codegen_initobj(L_5, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		Il2CppFullySharedGenericAny* L_6 = ___1_value;
		il2cpp_codegen_initobj(L_6, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		V_2 = (bool)0;
		goto IL_0060;
	}

IL_002b:
	{
		Type_t* L_7 = ___0_derivedType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC(L_7, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_9);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_12 = ___1_value;
		il2cpp_codegen_initobj(L_12, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		V_2 = (bool)0;
		goto IL_0060;
	}

IL_004b:
	{
		Il2CppFullySharedGenericAny* L_13 = ___1_value;
		RuntimeObject* L_14 = V_0;
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_14);
		void* L_17 = UnBox_Any(L_15, il2cpp_rgctx_data(method->rgctx_data, 2), L_16);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_13, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))), SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_13, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))));
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_18 = V_2;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiateArray_TisIl2CppFullySharedGenericAny_m61841BDE42555F9AE20A4F8308FDA87FE9A33043_gshared (int32_t ___0_count, Il2CppFullySharedGenericAny* ___1_instance, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
	const Il2CppFullySharedGenericAny L_28 = L_10;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___0_count;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_2 = ___1_instance;
		il2cpp_codegen_initobj(L_2, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_5 = V_1;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_6;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
	}
	try
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_instance;
		RuntimeObject* L_8 = V_1;
		int32_t L_9 = ___0_count;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 4), L_8, L_9, (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_7, L_10, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_7, (void*)L_10);
		V_5 = (bool)1;
		goto IL_00ab;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{
		RuntimeObject* L_11 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004b;
	}

IL_004b:
	{
	}

IL_004c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		V_2 = L_13;
		Type_t* L_14 = V_2;
		bool L_15;
		L_15 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_14, NULL);
		V_7 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_17 = ___1_instance;
		il2cpp_codegen_initobj(L_17, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_0073:
	{
		Type_t* L_18 = V_2;
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_18);
		V_3 = L_19;
		Type_t* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_20, NULL);
		V_8 = L_21;
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_23 = ___1_instance;
		il2cpp_codegen_initobj(L_23, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_0094:
	{
		Il2CppFullySharedGenericAny* L_24 = ___1_instance;
		Type_t* L_25 = V_3;
		int32_t L_26 = ___0_count;
		RuntimeArray* L_27;
		L_27 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_25, L_26, NULL);
		void* L_29 = UnBox_Any((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1), L_28);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_24, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_29))), SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_24, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_29))));
		V_5 = (bool)1;
		goto IL_00ab;
	}

IL_00ab:
	{
		bool L_30 = V_5;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E* Unsafe_Add_TisEntry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E_mCF59CEDB7AEA45BE5411DD10C2BDD1D7EE6B4914_gshared (Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E);
		return ((Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* Unsafe_Add_TisAsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_m703448BEAC86D6DB573DC69A828C24CE1BE00628_gshared (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D);
		return ((AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAD356C5FCC414F8EDF133AE32854956A07B53A02_gshared (uint8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m61D37B4D37DB6653882679C165C6BE5B741D4436_gshared (uint8_t* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m83189BD233605BFA7C7777618A959E04587E2A5A_gshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint8_t);
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3B5A03651256D5530AE45EFC51984CBC71D27077_gshared (Il2CppChar* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mF05DC6B7FBABFAD1238842F58FFBA9D7E0332EC2_gshared (Il2CppChar* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* Unsafe_Add_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_mBAB86C24120C3AF54FEC45E55C569E15E6E4BE3C_gshared (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274);
		return ((DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE1AE85A9993F5AD25A91F4F986D80935A0CF026_gshared (int32_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m899362F38BE549883841837EC35E98C4A1E8D225_gshared (int32_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_Add_TisIntPtr_t_m8FB08DB0F86B4A84C3B5BB32CF1EE7AEE600B1ED_gshared (intptr_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(intptr_t);
		return ((intptr_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_Add_TisIntPtr_t_mDAC5F408D1C38F35B4D173C6F1AF208C63EF020F_gshared (intptr_t* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(intptr_t);
		return ((intptr_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC* Unsafe_Add_TisIntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC_mFC2127DDDE7B4C2CCAF3854226FFA7DAC8F11113_gshared (IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC);
		return ((IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_Add_TisRuntimeObject_mC28B0645E6AC1C26510942FD04AD041A52567BF5_gshared (RuntimeObject** ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* Unsafe_Add_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m7C35A6A3258375F747A882AFE0A1CE151A4FB1C4_gshared (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3);
		return ((ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* Unsafe_Add_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m566665A8A176A82DCCEAA0691FCE54EBABB8EF61_gshared (PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4);
		return ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_Add_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m64BF56E1F82EC7352EC948EADDA6EFAB40132B86_gshared (int8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int8_t);
		return ((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_Add_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m20E7B3895C9B8B8C4CBF0C72D2569C6F7DD33EC6_gshared (uint16_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint16_t);
		return ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_Add_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE6E7056C0A79DF3F536C439A95EB8BED9A953C96_gshared (uint32_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint32_t);
		return ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_Add_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m586BE0A9D75BD4B0AEB666F57C5806DDDC75BB7E_gshared (uint64_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint64_t);
		return ((uint64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_Add_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC77808122B5860918EFF6669AB4441C4AA90EACC_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* Unsafe_Add_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m602417C4F4EB9F0E77BFEEC8BAC00AD4E46E1515_gshared (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D);
		return ((X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mDA4722F94AF13693FCE1583B641A792D2EA47924_gshared (Il2CppFullySharedGenericAny* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC89D70E498F759E971238CF82E99E44CC68197DA_gshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_gshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6;
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50* Unsafe_Add_TisEventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50_mE9C54B1D5C4DADF3D929439E383D7FD5BC882E1B_gshared (EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50);
		return ((EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0* Unsafe_Add_TisWeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0_m52BF62E43044635EFAC32D9173DE7F9B7D295580_gshared (WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0);
		return ((WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_Add_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mECCEF408D5A4C7D9CF866468C962FBCEB8D16A8D_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837);
		return ((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232* Unsafe_Add_TisDelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232_m617AABE85C9B91501F34264F389610C355CE5DB1_gshared (DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232);
		return ((DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E* Unsafe_Add_TisRuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E_m957587BC748907A8A5F73CF814A3153F6C413DB1_gshared (RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E);
		return ((RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_Add_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m8F9E4CAFBCF5A6DB4DD14B44D38BF20AA8D2FB6D_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC);
		return ((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* Unsafe_Add_TisDeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_m474AA1BB02030BCBD31D00679FCD8CE5CD016600_gshared (DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD);
		return ((DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* Unsafe_Add_TisNotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_m3C425B44185391A3ED336C8AE964B748AA013CCF_gshared (NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62);
		return ((NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_Add_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m36FD7705490658F779614182387633AAB5FCA4E4_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44);
		return ((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB9B2FBDA7C9D9ACEAAF1A13A21CB3820E4D6C42A_gshared (uint8_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7A80584F05268AB9D9BA488678556DC7F23392AB_gshared (uint8_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AddByteOffset_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m553358B7A84CC69A7D8AD3A74A5602F79E355A7E_gshared (Il2CppChar* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AddByteOffset_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m84D81937D031E8F901409C5BEAC76302AD9A3E05_gshared (Il2CppChar* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<Il2CppChar,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_AddByteOffset_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m067FC57FC65300B66C12AAD0F7DD3C436307F20A_gshared (int32_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_AddByteOffset_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE3F93B4D9D017D3D13236A4FADC55908F3938F8D_gshared (int32_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		int32_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<int32_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_AddByteOffset_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m634D44BA9A87B357AC01434089C276B5BD663901_gshared (uint16_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_AddByteOffset_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m16C91DE2AA40E6B24D70110472F63BFBFEE91907_gshared (uint16_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		uint16_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint16_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_AddByteOffset_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7E4B9F777AAB1816C16248F31D8B9C1EB3458AD8_gshared (uint32_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_AddByteOffset_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE78187DC3BB9609D6DADDB06380F8FD6C4CAC41C_gshared (uint32_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		uint32_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint32_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m023762698D869AA8F4D477B66833C0BCFC1EA25C_gshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_gshared (Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m17DCB1423518B0B3E4524EAC5FE26BA65A6BC92A_gshared (uint8_t* ___0_left, uint8_t* ___1_right, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_left;
		uint8_t* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB37DE4456CA121DF4176470A637AAE3B95F46A1F_gshared (Il2CppChar* ___0_left, Il2CppChar* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_left;
		Il2CppChar* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_mEFCD9F27093DEB04CA603DC1C6F306CE6DCCDC3C_gshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_mFDA1457944192D987E8EC451CC8BFB2E800D78A1_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_o;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* Unsafe_As_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_TisReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399_m0BDCA36D6E3E8B46DD9084DA7861BD8A1905FD09_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* ___0_source, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = ___0_source;
		return (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* Unsafe_As_TisReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_m3F2AAF43EB8828BA9BAFD42611A1C76E3D02FEF4_gshared (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* ___0_source, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_0 = ___0_source;
		return (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisEntry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E_mAC343309BC1C8FBC6169929A49C51A6BFE902A86_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisAsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_mB0FF689C85B03B56B9FB51F033050403DA50558C_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF141105DD72A5BC944BA8293BB695024D02DE30D_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2498099B9F71500DEE1CFA774D816C5050D58A9C_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m16647D6BB8970684B89769E1703D2B6C9A969274_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF3C4041BAA385580E978EDAB01947FB2A9078270_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (double*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m265A141BEB9F07AE50480CDA4561C486F64C2BF8_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int16_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CF3813B9733A0CDBE0E8A325136D952A44698A_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8E434534B985BD5A763E40937F16E2FEB1EFFD8C_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m873F3ED8401625B3120352966E4FCAEDAB904C44_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIntPtr_t_mFE3FD04DDEEAC4FE4A0BFAC72E9DEDDED147320B_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC_m48FA413FD11BB5521EB42781856905CDF26E224D_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7DB7A86DF0CAE596697C48C03F15EE61EDA619D8_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (RuntimeObject**)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m2980B0A79B03C0FE1A99B44C71350A85B73896E8_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m2CC6CEC6905A4AC507913C3379F1A94372D02FD9_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC0FDAD19C67279EE1EEE6461B76C9B027BA560E9_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (float*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8CD3F3B4E3E4EA8EAFE84DB40D862A314AFE6C2F_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint16_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mECFA2BF904F47BC0C95C31ED2DD33612380D2DB8_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3F8A9ADB733F9CB339B6D392F681324E7D470220_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F7BEFB9BB70E49F99DF2C761783F7B47712F6DF_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_mAF1C33E243AE9F01488B03A297CC3FD35A383CEC_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisEventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50_m95F97FBAD10AC005961AE86B0031E17925E59581_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisWeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0_m22981321498AC0D6B6F1A9A4F0E312118DB5E8B5_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mC4FD738B0067607B4B710D37A7B610661F585602_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232_m4FB6972A000D49A55236B24720697E35C455ABEE_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E_mB6449747A6F362B715E6C6BC8B2E5F5AD5E8A9A4_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m616F80AB4B82BC53D742CE5865AB69DEECC3EAC1_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_m9CF71B9F204DEA2CDCD7E4C15870AD64E7AD9768_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisNotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_mF07AE2771D677FFB3DA8F39A493151C020F49250_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mF1E726DE9BDC7573ADE984D127A07D04BB9F19AB_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFB63566144F982614BC997ACF976C6768FEDBB4C_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6EB81656367ABFE46E4CDD8AB8C3123E1BFFDCC6_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIntPtr_t_mFE3C485EFE262BB70B742CCF050336F7FDF603E0_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9* Unsafe_As_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_TisDecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_mAC31A6B0EE363D6AD04F11F629BBD69FD3F45894_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___0_source, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_0 = ___0_source;
		return (DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m750288389C1B4714A9DFC51DA537AD1507BD5320_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCFC3FDFDA844B03EFD3B3102FA653AF097D58B8F_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mCE0A85C275D5E37E248550B592556E492DAB2820_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBC79D59277D406B719AE11BF00E685C85405C227_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (uint32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF502BB692DEFE52066B62ADB4E3A9C3C9B8C692C_gshared (int64_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_source;
		return (uint64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisRuntimeObject_TisRuntimeObject_m9DBDCD08C3887118964A2A598815AFAE6903D44B_gshared (RuntimeObject** ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_source;
		return (RuntimeObject**)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* Unsafe_As_TisRuntimeObject_TisVolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_m55BDDA054187BA5DECD7DD18CA865FD40B8D64B5_gshared (RuntimeObject** ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_source;
		return (VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9077C523106B635218BC3F9171876E1F0BA50694_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC4DCE71843181DDCBC3CBC8DF25FA4731AC7C40E_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIntPtr_t_m0DB9BC041DE1D63FD26259E631075103807373B0_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m32F76D490695DE07EF509A0D0EAFDD14F5056DC7_gshared (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA499441C7AE51E5DAC9C173774A8CA93DA466FEA_gshared (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIntPtr_t_m4C2FABB9790BACA388589A0E6DCD0B3E57C82761_gshared (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAF06A659941D15118FC1E4800E3A7A0F262628A4_gshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4DA2DD0D3D693DBA83B9F5A662F084D95A2C1567_gshared (uint8_t* ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBBDDD07F24C68A147D30BA6A3EBFA0669F0F8259_gshared (Il2CppChar* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisRuntimeObject_m1273FB5BB30ABB03C0EAD425C97F04F8E21D102B_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mE85961ECFFC7310EBEF309E6E67AD0FED2F9030B_gshared (Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisDigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA_mE3F141C1F8E9FAEEA53503076434A94CAB453BD4_gshared (DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* ___0_value, const RuntimeMethod* method) 
{
	{
		DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB7B94F08746E5992AF5DBE62DC46A96AEC7643E9_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0AEA751C6A2C62806F1E18D4CEC476D2C43DC3EE_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1669BF83EB856804C2D09104E9571A745C9FA0E9_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m088920550101BD3FA6B40E99A5F107C35BE752FA_gshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mD269D4D95DA51D3CF4E4025805638814158802A3_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisEntry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E_m9049EF58C269C52A39AFDE380B2F0F1AB03394A3_gshared (Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E* ___0_left, Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E* ___1_right, const RuntimeMethod* method) 
{
	{
		Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E* L_0 = ___0_left;
		Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisAsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_m081F19F70367ECA9358640055BA7A64B5BECB92A_gshared (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* ___0_left, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* ___1_right, const RuntimeMethod* method) 
{
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_0 = ___0_left;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6AB8211F6DBEE7422B923884987D1641B66C295A_gshared (uint8_t* ___0_left, uint8_t* ___1_right, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_left;
		uint8_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m38DA236974467F795DD5DB1E58AE353511DA31F3_gshared (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* ___0_left, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* ___1_right, const RuntimeMethod* method) 
{
	{
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* L_0 = ___0_left;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3C11A66104F35B278BDABE69A0F7516708E4C623_gshared (int32_t* ___0_left, int32_t* ___1_right, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_left;
		int32_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m38CEF1627C0A085C4FEE14E13E8A1F5D3361B2E2_gshared (int32_t* ___0_left, int32_t* ___1_right, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_left;
		int32_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC_m910E07EB4A9BB97114C46B4901764F7EAFC1D26B_gshared (IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC* ___0_left, IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC* ___1_right, const RuntimeMethod* method) 
{
	{
		IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC* L_0 = ___0_left;
		IntervalTreeNode_tDAA7D63276D62CD178C91CC7DF932C97896332EC* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRuntimeObject_m7A1AD8D8389B88EF0E71789B8757AE7DF8649868_gshared (RuntimeObject** ___0_left, RuntimeObject** ___1_right, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_left;
		RuntimeObject** L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m207FCA89317FC57638C002E0C2318EE5B46E3670_gshared (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* ___0_left, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* ___1_right, const RuntimeMethod* method) 
{
	{
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* L_0 = ___0_left;
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m9D16ABAA82F40A0583A2C63AE5474D24804CE299_gshared (PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* ___0_left, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* ___1_right, const RuntimeMethod* method) 
{
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* L_0 = ___0_left;
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCBE292B15305D5E6FD5EE285B036FE24DD6CB344_gshared (uint32_t* ___0_left, uint32_t* ___1_right, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_left;
		uint32_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D27FAEB7676BE4A3528B739DE32D92D6DBF29E9_gshared (uint64_t* ___0_left, uint64_t* ___1_right, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_left;
		uint64_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m936222FEDED90B25F54ABF51E58CBB46D8A1EB82_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_left, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_right, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_mAEB1C0A6EE1EC7A3B32B7214B1B0B4A02F039AEB_gshared (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* ___0_left, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* ___1_right, const RuntimeMethod* method) 
{
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* L_0 = ___0_left;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m731B9B0C5A4B349E4545E7AAAB44731B9ADB6597_gshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisEventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50_mC15ECF05B385784E844223A3A61960FA4DE3C361_gshared (EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50* ___0_left, EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50* ___1_right, const RuntimeMethod* method) 
{
	{
		EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50* L_0 = ___0_left;
		EventContainer_tB62BAB900E074F9F74B484C302C1431D777A0C50* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisWeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0_m1657F11C0554C77C0EB35E63B4B70C0FC4FE28A4_gshared (WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0* ___0_left, WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0* ___1_right, const RuntimeMethod* method) 
{
	{
		WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0* L_0 = ___0_left;
		WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mEF5028C8208E7B962C4AE65F3F833DDD1BC5ECF9_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___0_left, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___1_right, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___0_left;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisDelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232_mBF74BB6250057B04EAC1E5B2FED7DB55BEA44555_gshared (DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232* ___0_left, DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232* ___1_right, const RuntimeMethod* method) 
{
	{
		DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232* L_0 = ___0_left;
		DelegateInfo_t718C124E89FB2703D642911A3CEC87D645D62232* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E_m1B045706FAF5CE442A1FE9ADE90FF2A9EEAC7E43_gshared (RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E* ___0_left, RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E* ___1_right, const RuntimeMethod* method) 
{
	{
		RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E* L_0 = ___0_left;
		RuntimeBuildLog_tC62F0400E684D90B60B597ECD125F3D154A4156E* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m0AB30724B76BE4817036FFFD56424DB67F13E359_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___0_left, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___1_right, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___0_left;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisDeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_m0D57204E3850621A7BBB645DD26DA8DDEB0DB1F2_gshared (DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* ___0_left, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* ___1_right, const RuntimeMethod* method) 
{
	{
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* L_0 = ___0_left;
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisNotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_mD036CAB20B6091971E7CB8EDCA313E9580C1A734_gshared (NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* ___0_left, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* ___1_right, const RuntimeMethod* method) 
{
	{
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* L_0 = ___0_left;
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4146B9DC73A3CD4EE2DD174D0FEEFF8BFD2F0D8E_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___0_left, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___1_right, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___0_left;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_Read_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mFD33791C135FF5212E900623875C092D42844E4D_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_mF6B28073E683AAE891ED373C5F5F29DA2A0708A2_gshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_ReadUnaligned_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_m23E7A727856D98E5D1D8129FB27CEA2715940075_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Unsafe_ReadUnaligned_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m529DDA84691D1BB3E6421D4CB32E2F19BE7E379A_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int16_t L_1 = (*(int16_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_ReadUnaligned_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D178787984E8CE025EAF941A7B5E8D73BAE8D1B_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = (*(int32_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Unsafe_ReadUnaligned_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB8C8274B9CD2C4EB97CBDDC9E939B416B205B00B_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int64_t L_1 = (*(int64_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Unsafe_ReadUnaligned_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mED059E50CA4EF7236D4C1EFAD1A19C3D36712F06_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint16_t L_1 = (*(uint16_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Unsafe_ReadUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m43042C9B34E5D513AF723172B137C4322F3EDC74_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint32_t L_1 = (*(uint32_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Unsafe_ReadUnaligned_TisUIntPtr_t_mD4B64D4FDF6F43C3488DA13281F5AA0ECC24672E_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uintptr_t L_1 = (*(uintptr_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m42C276800437B81F51F1F38619B499B6AAFB0021_gshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mBED8A470840454C70486BC2C85538178BA1FCB07_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CB1161B53871FE075F5881D9521D0476E1DF691_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m23B522F69D7973DF00CE97B464C99D7C5CC64DEA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Il2CppChar);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9AE030E4068ECDA11DD67F66251D87744ECFA98A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA6131DF2439BB55C289E1DFA433D0DD92D7BA5E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m809F14D45C4DEBB28BC7EE404B1BAE0D266DA45D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F5534E1C33FE40E5D929CE8D9F6D55C0022CC9_gshared (uint8_t* ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		uint32_t L_1 = ___1_value;
		*(uint32_t*)L_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_mF9DAA41D685A65A581864DBF65CE23C6F7E72BDF_gshared (uint8_t* ___0_destination, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtility_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mAD2E8BB847754DAFE09F5868548BEDDA822A2617_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = (*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B UnsafeUtility_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m27C9AC27DE15EAB418444BE62AD9C2CE19317991_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_3 = (*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtility_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mFD2AC538DAACCF1C5AAE44C0B4758D3A6A4C54EF_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_3 = (*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtility_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2ED1FB77CEDEF6090E5857DAA0CE6F3AFC6C35E4_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtility_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m200AA8F5A5776F6CAEA9E79B6551EC01D4316611_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtility_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mEA45FBD76E48DCE01C215C48D8C647B488C60516_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = (*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtility_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mEB527AAA71722D961891591C3A13D3FDD83B42A5_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtility_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC90C0EE3D32DDFEF22B982217F27BA07286AC2B7_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m113285A6894774BBBB284A644C2D7094F30AB442_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m390771D188BFC7495FCB3A56351B5E401291B516_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m91B4BE7F47C68D100E0A963FE8AEDB5C491546FA_gshared (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = ___2_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mF19D462EAE007A50E5E2D633559CE72611626837_gshared (void* ___0_destination, int32_t ___1_index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_3 = ___2_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEF6442BF2C415D9A5FFD255E882378DF7F682E19_gshared (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_3 = ___2_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6113BA4FEE412326B8C4AE48EF490E280EF24144_gshared (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = ___2_value;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDED3D71F106839CF27D02475C04EB53AFC379717_gshared (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___2_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m984D59C779E69C17ED01C8FAB083CE6F114D6E44_gshared (void* ___0_destination, int32_t ___1_index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = ___2_value;
		*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m5752F3073072D6DCB16C429071ED8126C1CB6502_gshared (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = ___2_value;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m8FECF9726B6A90FEADC960133A19868C171B28E9_gshared (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___2_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC08010A74AC1BF608813C293C4C52F4EF4B30106_gshared (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___2_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0D538510931D731CE9075661C07B0DECAAC84B82_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1E49423160D9D2F662A38FDEE88842FC26B67EBC_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = ((  Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___0_location, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___0_location, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Reader_ReadObject_TisRuntimeObject_m89E2D400BA86BDF838C372099DE6DB96B3578D1C_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, bool ___1_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		uint32_t L_2 = ___0_offset;
		bool L_3 = ___1_cacheValue;
		RuntimeObject* L_4;
		L_4 = Reader_ReadObject_m60087ED32721C8797522F51D63896A0B8D800BA2(__this, L_1, L_2, L_3, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadObject_TisIl2CppFullySharedGenericAny_m47A8D2F2F19B59E62D90270D9D72B2CE879D0A46_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, bool ___1_cacheValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tECBAAE7384CBA557AB875DA1973DD604F24CC697 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tECBAAE7384CBA557AB875DA1973DD604F24CC697);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		uint32_t L_2 = ___0_offset;
		bool L_3 = ___1_cacheValue;
		RuntimeObject* L_4;
		L_4 = Reader_ReadObject_m60087ED32721C8797522F51D63896A0B8D800BA2(__this, L_1, L_2, L_3, NULL);
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(method->rgctx_data, 1), L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))), SizeOf_T_tECBAAE7384CBA557AB875DA1973DD604F24CC697);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Reader_ReadObjectArray_TisIl2CppFullySharedGenericAny_mFCA1042D54B8FAE98E760D284838FE348545F489_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValues, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t821854D62406274345073E3DA287C24FA32A3599 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t821854D62406274345073E3DA287C24FA32A3599);
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		return (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0006:
	{
		uint32_t L_1 = ___0_id;
		bool L_2 = ___1_cacheValues;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387(__this, L_1, L_2, Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var);
		V_0 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_1 = L_5;
		V_2 = 0;
		goto IL_0031;
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_1;
		int32_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12 = ___1_cacheValues;
		InvokerActionInvoker3< uint32_t, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_11, L_12, (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_13, SizeOf_T_t821854D62406274345073E3DA287C24FA32A3599);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0031:
	{
		int32_t L_15 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7D5A9CE82410118BB74F3903944D75329184C75_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		bool L_19 = V_3;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Reader_ReadValue_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m9DB5C6CB68A5DBA64913C592F79F152D9DFB7BBF_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_19 = V_3;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m298715E2251AB0CF9402C163D7F55F3DA3A440F3_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		int32_t L_19 = V_3;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Reader_ReadValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m65A1B3772ED69D47101427F3A822C58A0BD1EBBF_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		int64_t L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(int64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		int64_t L_19 = V_3;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadValue_TisIl2CppFullySharedGenericStruct_m485132093A736AC2D8737907CDF1237252F68DB3_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
	const Il2CppFullySharedGenericStruct L_19 = L_1;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
	memset(V_0, 0, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
	memset(V_3, 0, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		return;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)V_3), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		il2cpp_codegen_memcpy(L_19, V_3, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_19, SizeOf_T_tB93637C1A01BC379ECB036395CD377A25F97AFAF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 Reader_ReadValue_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_m7F8F623E1365DCDCC61235608F97DA64797F5B14_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53));
		DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 L_19 = V_3;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A Reader_ReadValue_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_m00DCED7313915341E43267303C4BDD15E315D4DB_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A));
		ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A L_19 = V_3;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA Reader_ReadValue_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_mFD04F4E677525B0998B0995997E259E83672D95F_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA));
		ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA L_19 = V_3;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D Reader_ReadValue_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_m6AB2EDB1C610CDB3A6C93B36CEE34F5298B1DA1C_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D));
		Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer;
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D L_19 = V_3;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	uint32_t V_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	uint32_t* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		return (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
	}

IL_0006:
	{
		uint32_t L_1 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4))))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		uint32_t L_3 = ___0_id;
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		int32_t L_7 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_5, L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		uint32_t L_12 = ___0_id;
		V_1 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 4)))));
		uint8_t* L_13 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_13);
		uint32_t L_14 = ___0_id;
		bool L_15;
		L_15 = Reader_TryGetCachedValue_TisUInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_m171BEE00C2EF9D7A0BBC5799382BF32BF59EE51D(__this, L_14, (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_2;
		return L_16;
	}

IL_0057:
	{
		V_3 = (uint32_t)0;
		uint8_t* L_17 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)L_17, ((int64_t)4), NULL);
		uint32_t L_18 = ___0_id;
		uint32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19))))) <= ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0096;
		}
	}
	{
		uint32_t L_21 = V_3;
		uint32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___m_Buffer;
		int32_t L_25 = ((int32_t)(((RuntimeArray*)L_24)->max_length));
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_25);
		String_t* L_27;
		L_27 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE)), L_23, L_26, NULL);
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_0096:
	{
		uint32_t L_29 = V_3;
		uint32_t L_30 = sizeof(uint32_t);
		if ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)((intptr_t)((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))));
		V_4 = L_31;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = L_32;
		V_6 = L_33;
		if (!L_33)
		{
			goto IL_00b5;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_6;
		if (((int32_t)(((RuntimeArray*)L_34)->max_length)))
		{
			goto IL_00bb;
		}
	}

IL_00b5:
	{
		V_5 = (uint32_t*)((uintptr_t)0);
		goto IL_00c6;
	}

IL_00bb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_6;
		V_5 = (uint32_t*)((uintptr_t)((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00c6:
	{
		uint32_t* L_36 = V_5;
		uint8_t* L_37 = V_0;
		uint32_t L_38 = V_3;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_36, (void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, 4))), ((int64_t)(uint64_t)L_38), NULL);
		V_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		bool L_39 = ___1_cacheValue;
		if (!L_39)
		{
			goto IL_00e8;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_40 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_41 = ___0_id;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_4;
		bool L_43;
		L_43 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_40, L_41, (RuntimeObject*)L_42, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00e8:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_4;
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* Reader_ReadValueArray_TisIl2CppFullySharedGenericStruct_m8A6E4E29F5AAFEA2743F7E8C237FBE7CCA5844A8_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBD5AE8C7901D08A42121E477B8722A04FA6FC867 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_2 = NULL;
	uint32_t V_3 = 0;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_4 = NULL;
	Il2CppFullySharedGenericStruct* V_5 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_6 = NULL;
	{
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		return (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
	}

IL_0006:
	{
		uint32_t L_1 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4))))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		uint32_t L_3 = ___0_id;
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		int32_t L_7 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_5, L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		uint32_t L_12 = ___0_id;
		V_1 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 4)))));
		uint8_t* L_13 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_13);
		uint32_t L_14 = ___0_id;
		bool L_15;
		L_15 = ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_14, (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_16 = V_2;
		return L_16;
	}

IL_0057:
	{
		V_3 = (uint32_t)0;
		uint8_t* L_17 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)L_17, ((int64_t)4), NULL);
		uint32_t L_18 = ___0_id;
		uint32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___m_Buffer;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19))))) <= ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0096;
		}
	}
	{
		uint32_t L_21 = V_3;
		uint32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___m_Buffer;
		int32_t L_25 = ((int32_t)(((RuntimeArray*)L_24)->max_length));
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_25);
		String_t* L_27;
		L_27 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE)), L_23, L_26, NULL);
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_0096:
	{
		uint32_t L_29 = V_3;
		uint32_t L_30 = SizeOf_T_tBD5AE8C7901D08A42121E477B8722A04FA6FC867;
		if ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_31 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)((intptr_t)((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))));
		V_4 = L_31;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_32 = V_4;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_33 = L_32;
		V_6 = L_33;
		if (!L_33)
		{
			goto IL_00b5;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_34 = V_6;
		if (((int32_t)(((RuntimeArray*)L_34)->max_length)))
		{
			goto IL_00bb;
		}
	}

IL_00b5:
	{
		V_5 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		goto IL_00c6;
	}

IL_00bb:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_35 = V_6;
		V_5 = (Il2CppFullySharedGenericStruct*)((uintptr_t)((Il2CppFullySharedGenericStruct*)(L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00c6:
	{
		Il2CppFullySharedGenericStruct* L_36 = V_5;
		uint8_t* L_37 = V_0;
		uint32_t L_38 = V_3;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_36, (void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, 4))), ((int64_t)(uint64_t)L_38), NULL);
		V_6 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
		bool L_39 = ___1_cacheValue;
		if (!L_39)
		{
			goto IL_00e8;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_40 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_41 = ___0_id;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_42 = V_4;
		bool L_43;
		L_43 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_40, L_41, (RuntimeObject*)L_42, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00e8:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_44 = V_4;
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_0 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_1 = ___0_offset;
		bool L_2;
		L_2 = LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76(L_0, L_1, (&V_0), LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject** L_3 = ___1_val;
		RuntimeObject* L_4 = V_0;
		*(RuntimeObject**)L_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1))));
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject** L_5 = ___1_val;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisIl2CppFullySharedGenericAny_m151773AC14DF9C7BDA828C249287B71490E8475F_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, Il2CppFullySharedGenericAny* ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551);
	RuntimeObject* V_0 = NULL;
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_0 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_1 = ___0_offset;
		bool L_2;
		L_2 = LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76(L_0, L_1, (&V_0), LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_val;
		RuntimeObject* L_4 = V_0;
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(method->rgctx_data, 1), L_5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))), SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))));
		return (bool)1;
	}

IL_001e:
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_val;
		il2cpp_codegen_initobj(L_7, SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Reserve_TisIl2CppFullySharedGenericStruct_m6C3475B760340AD0C2C3DAE671C07B00C6933259_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAD28673DFDA47E13D7EFCDBF8F3EC1BE20A2DCDF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tAD28673DFDA47E13D7EFCDBF8F3EC1BE20A2DCDF;
		uint32_t L_1;
		L_1 = Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Reserve_TisIl2CppFullySharedGenericStruct_mE24A71A6AC46599AD20C620E585A36512B0F467B_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEF9A349F5CAC3CC260DAB237BEE7009D6C5DBB9E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tEF9A349F5CAC3CC260DAB237BEE7009D6C5DBB9E;
		uint32_t L_1 = ___0_count;
		uint32_t L_2;
		L_2 = Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73(__this, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)), (bool)1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB45C272FF5E3BA1A875244D239B246CD91BE214E_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, bool ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(bool);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_mB4A1E22E477148AD2E1AFE3B58E12D77CBC81EF2_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m042BC9E7D84F216F0BBFD918C48587F96572CF57_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, int32_t ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m829C42A192B8075D18C538B2A01F9BD9876F9908_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, int64_t ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int64_t);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m7570060A594296F3B0136718F14DD48B08AAE244_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDB8D1C44ADB32944EED2913050ED827CC69CF70F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tDB8D1C44ADB32944EED2913050ED827CC69CF70F;
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)___0_val), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m19F3BE1901356C08F4ED504BB87D54CBA077107C_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Il2CppFullySharedGenericStruct* ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5C70F0C38E743DE890656C0A78E32A60FAFC8BBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_val;
		V_1 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_1;
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t5C70F0C38E743DE890656C0A78E32A60FAFC8BBB;
		uint32_t L_4;
		L_4 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)L_2, L_3, (bool)0, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_m6A59B04C3BC525AF3C5F05C1FD5E4D451B5225A0_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_m0271742BD5A3F7EA56AE26C84F7B94BA3B1AD190_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_m3BF6D2CD8719FE1C5003348AF46CC9338E9F0027_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_mBFAA6DE29A89519BFAED75A7B084D0E64EF4B978_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_values;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_1;
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_1;
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_values;
		uint32_t L_5 = sizeof(uint32_t);
		V_2 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_4)->max_length)), (int32_t)L_5));
		uint32_t* L_6 = V_0;
		uint32_t L_7 = V_2;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)L_6, (uint64_t)((int64_t)(uint64_t)L_7), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_8 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9 = V_3;
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D(L_8, L_9, (&V_4), Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_11 = V_4;
		return L_11;
	}

IL_0041:
	{
		uint32_t L_12 = V_2;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_13;
		L_13 = Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77(__this, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, 4)), NULL);
		V_5 = L_13;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_14 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___data;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_16 = V_5;
		uint32_t L_17 = L_16->___position;
		V_6 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		uint8_t* L_18 = V_6;
		uint32_t L_19 = __this->___totalBytes;
		V_7 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, 4));
		uintptr_t L_20 = ((uintptr_t)L_18);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_20, (void*)((uintptr_t)(&V_2)), ((int64_t)4), NULL);
		uint32_t* L_21 = V_0;
		uint32_t L_22 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_20, 4))), (void*)L_21, ((int64_t)(uint64_t)L_22), NULL);
		uint32_t L_23 = V_2;
		V_8 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 4));
		uint32_t L_24 = __this->___totalBytes;
		uint32_t L_25 = V_8;
		__this->___totalBytes = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_26 = V_5;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_27 = L_26;
		uint32_t L_28 = L_27->___position;
		uint32_t L_29 = V_8;
		L_27->___position = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_30 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_31 = V_3;
		uint32_t L_32 = V_7;
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_30, L_31, L_32, Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		bool L_33 = ___1_hashElements;
		if (!L_33)
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_34 = sizeof(uint32_t);
		if ((((int32_t)L_34) <= ((int32_t)4)))
		{
			goto IL_0110;
		}
	}
	{
		V_9 = 0;
		goto IL_0109;
	}

IL_00c7:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		uint32_t* L_35 = V_0;
		int32_t L_36 = V_9;
		uint32_t L_37 = sizeof(uint32_t);
		uint32_t L_38 = sizeof(uint32_t);
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), (int32_t)L_37))))), (uint64_t)((int64_t)((int32_t)L_38)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_39 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_40 = V_3;
		uint32_t L_41 = V_7;
		int32_t L_42 = V_9;
		uint32_t L_43 = sizeof(uint32_t);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_39, L_40, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)il2cpp_codegen_multiply(L_42, (int32_t)L_43)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0109:
	{
		int32_t L_45 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___0_values;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00c7;
		}
	}

IL_0110:
	{
		uint32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m2E39C9C3A4DCE833A27E5A18846D87F9F2371F7A_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_1 = NULL;
	uint32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___0_values;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = V_1;
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = V_1;
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)((Il2CppFullySharedGenericStruct*)(L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = ___0_values;
		uint32_t L_5 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		V_2 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_4)->max_length)), (int32_t)L_5));
		Il2CppFullySharedGenericStruct* L_6 = V_0;
		uint32_t L_7 = V_2;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)L_6, (uint64_t)((int64_t)(uint64_t)L_7), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_8 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9 = V_3;
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D(L_8, L_9, (&V_4), Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_11 = V_4;
		return L_11;
	}

IL_0041:
	{
		uint32_t L_12 = V_2;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_13;
		L_13 = Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77(__this, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, 4)), NULL);
		V_5 = L_13;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_14 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___data;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_16 = V_5;
		uint32_t L_17 = L_16->___position;
		V_6 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		uint8_t* L_18 = V_6;
		uint32_t L_19 = __this->___totalBytes;
		V_7 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, 4));
		uintptr_t L_20 = ((uintptr_t)L_18);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_20, (void*)((uintptr_t)(&V_2)), ((int64_t)4), NULL);
		Il2CppFullySharedGenericStruct* L_21 = V_0;
		uint32_t L_22 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_20, 4))), (void*)L_21, ((int64_t)(uint64_t)L_22), NULL);
		uint32_t L_23 = V_2;
		V_8 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 4));
		uint32_t L_24 = __this->___totalBytes;
		uint32_t L_25 = V_8;
		__this->___totalBytes = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_26 = V_5;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_27 = L_26;
		uint32_t L_28 = L_27->___position;
		uint32_t L_29 = V_8;
		L_27->___position = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_30 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_31 = V_3;
		uint32_t L_32 = V_7;
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_30, L_31, L_32, Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		bool L_33 = ___1_hashElements;
		if (!L_33)
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_34 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		if ((((int32_t)L_34) <= ((int32_t)4)))
		{
			goto IL_0110;
		}
	}
	{
		V_9 = 0;
		goto IL_0109;
	}

IL_00c7:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Il2CppFullySharedGenericStruct* L_35 = V_0;
		int32_t L_36 = V_9;
		uint32_t L_37 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		uint32_t L_38 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), (int32_t)L_37))))), (uint64_t)((int64_t)((int32_t)L_38)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_39 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_40 = V_3;
		uint32_t L_41 = V_7;
		int32_t L_42 = V_9;
		uint32_t L_43 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_39, L_40, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)il2cpp_codegen_multiply(L_42, (int32_t)L_43)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0109:
	{
		int32_t L_45 = V_9;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_46 = ___0_values;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00c7;
		}
	}

IL_0110:
	{
		uint32_t L_47 = V_7;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m1F36B0202AA640C59BE8DBBBDDCCEAD13E450E4E_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, Il2CppFullySharedGenericStruct ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t6FE7FC22E2C0C40985040077400A9AC2F7747B35 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = ___0_offset;
		uint32_t L_1 = SizeOf_T_t6FE7FC22E2C0C40985040077400A9AC2F7747B35;
		Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64(__this, L_0, (void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)___1_val), L_1, (bool)0, NULL);
		uint32_t L_2 = ___0_offset;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m7A3D45B37C05F32AC89762BCEA7FA71D03757896_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, Il2CppFullySharedGenericStruct* ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA4F5C8530B7503B3E075A70A1741D3DE52289C0B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_val;
		V_1 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_1;
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		uint32_t L_2 = ___0_offset;
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		uint32_t L_4 = SizeOf_T_tA4F5C8530B7503B3E075A70A1741D3DE52289C0B;
		Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64(__this, L_2, (void*)L_3, L_4, (bool)0, NULL);
		V_1 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		uint32_t L_5 = ___0_offset;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m60DC005445A769FE90608945D4CB13E5EB0B0678_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_values, bool ___2_hashElements, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_29 = alloca(SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_3 = NULL;
	Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	uint8_t* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Il2CppFullySharedGenericStruct V_10 = alloca(SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
	memset(V_10, 0, SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
	uint32_t V_11 = 0;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___1_values;
		uint32_t L_1 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), (int32_t)L_1));
		uint32_t L_2 = ___0_offset;
		V_1 = L_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = ___1_values;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = L_3;
		V_3 = L_4;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = V_3;
		if (((int32_t)(((RuntimeArray*)L_5)->max_length)))
		{
			goto IL_001c;
		}
	}

IL_0017:
	{
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		goto IL_0025;
	}

IL_001c:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = V_3;
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)((Il2CppFullySharedGenericStruct*)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0025:
	{
		List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* L_7 = __this->___chunks;
		Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 L_8;
		L_8 = List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F(L_7, List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var);
		V_4 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0103:
			{
				Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257((&V_4), Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00f5_1;
			}

IL_0037_1:
			{
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_9;
				L_9 = Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_inline((&V_4), Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var);
				V_5 = L_9;
				uint32_t L_10 = V_1;
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_11 = V_5;
				uint32_t L_12 = L_11->___position;
				if ((!(((uint32_t)L_10) < ((uint32_t)L_12))))
				{
					goto IL_00eb_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00e7_1:
					{
						V_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
						return;
					}
				});
				try
				{
					{
						Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_13 = V_5;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13->___data;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
						V_7 = L_15;
						if (!L_15)
						{
							goto IL_005f_2;
						}
					}
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_7;
						if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
						{
							goto IL_0065_2;
						}
					}

IL_005f_2:
					{
						V_6 = (uint8_t*)((uintptr_t)0);
						goto IL_0070_2;
					}

IL_0065_2:
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_7;
						V_6 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
					}

IL_0070_2:
					{
						uint8_t* L_18 = V_6;
						uint32_t L_19 = V_1;
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, (intptr_t)((uintptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, 4)))))), (void*)((uintptr_t)(&V_0)), ((int64_t)4), NULL);
						uint8_t* L_20 = V_6;
						uint32_t L_21 = V_1;
						Il2CppFullySharedGenericStruct* L_22 = V_2;
						uint32_t L_23 = V_0;
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21)))), (void*)L_22, ((int64_t)(uint64_t)L_23), NULL);
						bool L_24 = ___2_hashElements;
						if (!L_24)
						{
							goto IL_00e2_2;
						}
					}
					{
						uint32_t L_25 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
						if ((((int32_t)L_25) <= ((int32_t)4)))
						{
							goto IL_00e2_2;
						}
					}
					{
						V_8 = 0;
						goto IL_00db_2;
					}

IL_00a1_2:
					{
						__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_26 = ___1_values;
						int32_t L_27 = V_8;
						int32_t L_28 = L_27;
						il2cpp_codegen_memcpy(L_29, (L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)), SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
						il2cpp_codegen_memcpy(V_10, L_29, SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
						uint32_t L_30 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
						BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)V_10), (uint64_t)((int64_t)((int32_t)L_30)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_9)), NULL);
						Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_31 = __this->___existingValues;
						Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_32 = V_9;
						uint32_t L_33 = ___0_offset;
						int32_t L_34 = V_8;
						uint32_t L_35 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
						Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_31, L_32, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, ((int32_t)il2cpp_codegen_multiply(L_34, (int32_t)L_35)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
						int32_t L_36 = V_8;
						V_8 = ((int32_t)il2cpp_codegen_add(L_36, 1));
					}

IL_00db_2:
					{
						int32_t L_37 = V_8;
						__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_38 = ___1_values;
						if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
						{
							goto IL_00a1_2;
						}
					}

IL_00e2_2:
					{
						uint32_t L_39 = ___0_offset;
						V_11 = L_39;
						goto IL_0115;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00eb_1:
			{
				uint32_t L_40 = V_1;
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_41 = V_5;
				uint32_t L_42 = L_41->___position;
				V_1 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_42));
			}

IL_00f5_1:
			{
				bool L_43;
				L_43 = Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB((&V_4), Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_0111;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0111:
	{
		V_3 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
		return (uint32_t)(-1);
	}

IL_0115:
	{
		uint32_t L_44 = V_11;
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteObjects_TisIl2CppFullySharedGenericAny_mE9C845BE586B809CDB1731891E8F2BB84FA92FBE_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, RuntimeObject* ___0_objs, bool ___1_serizalizeTypeData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	memset(V_3, 0, SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	{
		RuntimeObject* L_0 = ___0_objs;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (uint32_t)(-1);
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_objs;
		int32_t L_2;
		L_2 = ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		V_1 = 0;
		RuntimeObject* L_4 = ___0_objs;
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{
				{
					RuntimeObject* L_6 = V_2;
					if (!L_6)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_7 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0037_1;
			}

IL_001c_1:
			{
				RuntimeObject* L_8 = V_2;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_3, L_9, SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
				int32_t L_11 = V_1;
				int32_t L_12 = L_11;
				V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				il2cpp_codegen_memcpy(L_13, V_3, SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
				RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_13);
				bool L_15 = ___1_serizalizeTypeData;
				uint32_t L_16;
				L_16 = Writer_WriteObject_m9AAB78B632B61A8D5D2B0BC0C250CF70B8C8B371(__this, L_14, L_15, NULL);
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)L_16);
			}

IL_0037_1:
			{
				RuntimeObject* L_17 = V_2;
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				if (L_18)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_004b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_0;
		uint32_t L_20;
		L_20 = Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980(__this, L_19, (bool)1, Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalOp_LoadBundleFromDependecies_TisRuntimeObject_m84785F4D039CCC3C767B50962BDA1E19ED039747_gshared (RuntimeObject* ___0_results, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___0_results;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_results;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_2;
		return L_3;
	}

IL_0015:
	{
		V_0 = (RuntimeObject*)NULL;
		V_1 = (bool)1;
		V_3 = 0;
		goto IL_0043;
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___0_results;
		int32_t L_5 = V_3;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var, L_4, L_5);
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_4;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_8 = V_4;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_9;
		L_9 = InterfaceFuncInvoker0< AssetBundle_tB38418819A49060CD738CB21541649340F082943* >::Invoke(0, IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var, L_8);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_11 = V_4;
		V_0 = L_11;
	}

IL_003d:
	{
		V_1 = (bool)0;
	}

IL_003f:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0043:
	{
		int32_t L_13 = V_3;
		RuntimeObject* L_14 = ___0_results;
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_16 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared_inline (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared_inline (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint8_t* G_B5_0 = NULL;
	uint8_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int8_t* G_B13_0 = NULL;
	int8_t* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	int8_t* G_B14_1 = NULL;
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	int16_t* G_B29_0 = NULL;
	int16_t* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	int16_t* G_B30_1 = NULL;
	uint32_t* G_B37_0 = NULL;
	uint32_t* G_B36_0 = NULL;
	uint32_t G_B38_0 = 0;
	uint32_t* G_B38_1 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t* G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	int32_t* G_B46_1 = NULL;
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	int64_t* G_B61_0 = NULL;
	int64_t* G_B60_0 = NULL;
	int64_t G_B62_0 = 0;
	int64_t* G_B62_1 = NULL;
	float* G_B69_0 = NULL;
	float* G_B68_0 = NULL;
	float G_B70_0 = 0.0f;
	float* G_B70_1 = NULL;
	double* G_B77_0 = NULL;
	double* G_B76_0 = NULL;
	double G_B78_0 = 0.0;
	double* G_B78_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B85_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B84_0 = NULL;
	int32_t G_B86_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B86_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B88_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B87_0 = NULL;
	int32_t G_B89_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B89_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B91_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B90_0 = NULL;
	int32_t G_B92_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B92_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B94_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B93_0 = NULL;
	int32_t G_B95_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B95_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B97_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B96_0 = NULL;
	int32_t G_B98_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B98_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B100_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B99_0 = NULL;
	int32_t G_B101_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B101_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B103_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B102_0 = NULL;
	int32_t G_B104_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B104_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B106_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B105_0 = NULL;
	int32_t G_B107_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B107_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B109_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B108_0 = NULL;
	int32_t G_B110_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B110_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B112_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B111_0 = NULL;
	int32_t G_B113_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B113_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B115_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B114_0 = NULL;
	int32_t G_B116_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B116_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B118_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B117_0 = NULL;
	int32_t G_B119_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B119_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B121_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B120_0 = NULL;
	int32_t G_B122_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B122_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B124_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B123_0 = NULL;
	int32_t G_B125_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B125_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B127_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B126_0 = NULL;
	int32_t G_B128_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B128_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B130_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B129_0 = NULL;
	int32_t G_B131_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B131_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B135_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B134_0 = NULL;
	int32_t G_B136_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B136_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B138_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B137_0 = NULL;
	int32_t G_B139_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B139_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B141_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B140_0 = NULL;
	int32_t G_B142_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B142_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B144_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B143_0 = NULL;
	int32_t G_B145_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B145_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B147_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B146_0 = NULL;
	int32_t G_B148_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B148_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B150_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B149_0 = NULL;
	int32_t G_B151_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B151_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B153_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B152_0 = NULL;
	int32_t G_B154_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B154_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B156_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B155_0 = NULL;
	int32_t G_B157_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B157_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B159_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B158_0 = NULL;
	int32_t G_B160_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B160_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B162_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B161_0 = NULL;
	int32_t G_B163_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B163_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B165_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B164_0 = NULL;
	int32_t G_B166_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B166_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B168_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B167_0 = NULL;
	int32_t G_B169_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B169_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B171_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B170_0 = NULL;
	int32_t G_B172_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B172_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B174_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B173_0 = NULL;
	int32_t G_B175_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B175_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B177_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B176_0 = NULL;
	int32_t G_B178_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B178_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B180_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B179_0 = NULL;
	int32_t G_B181_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B181_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B211_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B210_0 = NULL;
	int32_t G_B212_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B212_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B214_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B213_0 = NULL;
	int32_t G_B215_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B215_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B217_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B216_0 = NULL;
	int32_t G_B218_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B218_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B220_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B219_0 = NULL;
	int32_t G_B221_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B221_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B223_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B222_0 = NULL;
	int32_t G_B224_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B224_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B226_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B225_0 = NULL;
	int32_t G_B227_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B227_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B229_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B228_0 = NULL;
	int32_t G_B230_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B230_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B232_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B231_0 = NULL;
	int32_t G_B233_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B233_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B237_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B236_0 = NULL;
	uint32_t G_B238_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B238_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B240_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B239_0 = NULL;
	uint32_t G_B241_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B241_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B243_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B242_0 = NULL;
	uint32_t G_B244_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B244_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B246_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B245_0 = NULL;
	uint32_t G_B247_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B247_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B251_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B250_0 = NULL;
	int32_t G_B252_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B252_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B254_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B253_0 = NULL;
	int32_t G_B255_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B255_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B257_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B256_0 = NULL;
	int32_t G_B258_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B258_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B260_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B259_0 = NULL;
	int32_t G_B261_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B261_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B273_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B272_0 = NULL;
	int64_t G_B274_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B274_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B276_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B275_0 = NULL;
	int64_t G_B277_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B277_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B281_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B280_0 = NULL;
	float G_B282_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B282_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B284_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B283_0 = NULL;
	float G_B285_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B285_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B287_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B286_0 = NULL;
	float G_B288_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B288_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B290_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B289_0 = NULL;
	float G_B291_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B291_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B295_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B294_0 = NULL;
	double G_B296_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B296_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B298_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B297_0 = NULL;
	double G_B299_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B299_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_6;
		L_6 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_7 = ((uintptr_t)L_6);
		int8_t* L_8 = (int8_t*) (L_7 ? alloca(L_7) : NULL);
		memset(L_8, 0, L_7);
		V_0 = (uint8_t*)(L_8);
		V_1 = 0;
		goto IL_0059;
	}

IL_0032:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_12;
		L_12 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_13 = V_1;
		uint16_t L_14;
		L_14 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_15;
		L_15 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_12, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_15)
		{
			G_B5_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
			goto IL_004f;
		}
		G_B4_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		uint8_t L_16;
		L_16 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B6_0 = ((int32_t)(L_16));
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		*((int8_t*)G_B6_1) = (int8_t)G_B6_0;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		int32_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_19;
		L_19 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0032;
		}
	}
	{
		uint8_t* L_20 = V_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_21), (void*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_21;
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_27;
		L_27 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_28 = ((uintptr_t)L_27);
		int8_t* L_29 = (int8_t*) (L_28 ? alloca(L_28) : NULL);
		memset(L_29, 0, L_28);
		V_2 = (L_29);
		V_3 = 0;
		goto IL_00b7;
	}

IL_0090:
	{
		int8_t* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_33;
		L_33 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_34 = V_3;
		uint16_t L_35;
		L_35 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_36;
		L_36 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_33, L_35, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_36)
		{
			G_B13_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
			goto IL_00ad;
		}
		G_B12_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b2;
	}

IL_00ad:
	{
		int8_t L_37;
		L_37 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B14_0 = ((int32_t)(L_37));
		G_B14_1 = G_B13_0;
	}

IL_00b2:
	{
		*((int8_t*)G_B14_1) = (int8_t)G_B14_0;
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		int32_t L_39 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_40;
		L_40 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0090;
		}
	}
	{
		int8_t* L_41 = V_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_42), (void*)L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_42;
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_48;
		L_48 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_48) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_49 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_48), 2));
		int8_t* L_50 = (int8_t*) (L_49 ? alloca(L_49) : NULL);
		memset(L_50, 0, L_49);
		V_4 = (uint16_t*)(L_50);
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_54;
		L_54 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_53, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_55 = V_5;
		uint16_t L_56;
		L_56 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_55, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_57;
		L_57 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_54, L_56, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_57)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_58;
		L_58 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_58));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*((int16_t*)G_B22_1) = (int16_t)G_B22_0;
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0122:
	{
		int32_t L_60 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_61;
		L_61 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_62 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_63), (void*)L_62, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_63;
	}

IL_0133:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_69;
		L_69 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_69) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_70 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_69), 2));
		int8_t* L_71 = (int8_t*) (L_70 ? alloca(L_70) : NULL);
		memset(L_71, 0, L_70);
		V_6 = (int16_t*)(L_71);
		V_7 = 0;
		goto IL_018f;
	}

IL_015f:
	{
		int16_t* L_72 = V_6;
		int32_t L_73 = V_7;
		int32_t L_74 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_75;
		L_75 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_74, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_76 = V_7;
		uint16_t L_77;
		L_77 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_78;
		L_78 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_75, L_77, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_78)
		{
			G_B29_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
			goto IL_0183;
		}
		G_B28_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_0188;
	}

IL_0183:
	{
		int16_t L_79;
		L_79 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B30_0 = ((int32_t)(L_79));
		G_B30_1 = G_B29_0;
	}

IL_0188:
	{
		*((int16_t*)G_B30_1) = (int16_t)G_B30_0;
		int32_t L_80 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_018f:
	{
		int32_t L_81 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_82;
		L_82 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_015f;
		}
	}
	{
		int16_t* L_83 = V_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_84), (void*)L_83, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_84;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (!L_89)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_90;
		L_90 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_90) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_91 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), 4));
		int8_t* L_92 = (int8_t*) (L_91 ? alloca(L_91) : NULL);
		memset(L_92, 0, L_91);
		V_8 = (uint32_t*)(L_92);
		V_9 = 0;
		goto IL_01fc;
	}

IL_01cc:
	{
		uint32_t* L_93 = V_8;
		int32_t L_94 = V_9;
		int32_t L_95 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_96;
		L_96 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_95, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_97 = V_9;
		uint16_t L_98;
		L_98 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_97, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_99;
		L_99 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_96, L_98, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_99)
		{
			G_B37_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
			goto IL_01f0;
		}
		G_B36_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
	}
	{
		G_B38_0 = ((uint32_t)(0));
		G_B38_1 = G_B36_0;
		goto IL_01f5;
	}

IL_01f0:
	{
		uint32_t L_100;
		L_100 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_0;
	}

IL_01f5:
	{
		*((int32_t*)G_B38_1) = (int32_t)G_B38_0;
		int32_t L_101 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01fc:
	{
		int32_t L_102 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_103;
		L_103 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t* L_104 = V_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_105), (void*)L_104, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_105;
	}

IL_020d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_027a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_111;
		L_111 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_111) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_112 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_111), 4));
		int8_t* L_113 = (int8_t*) (L_112 ? alloca(L_112) : NULL);
		memset(L_113, 0, L_112);
		V_10 = (int32_t*)(L_113);
		V_11 = 0;
		goto IL_0269;
	}

IL_0239:
	{
		int32_t* L_114 = V_10;
		int32_t L_115 = V_11;
		int32_t L_116 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_117;
		L_117 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_116, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_118 = V_11;
		uint16_t L_119;
		L_119 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_118, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_120;
		L_120 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_117, L_119, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_120)
		{
			G_B45_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
			goto IL_025d;
		}
		G_B44_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		goto IL_0262;
	}

IL_025d:
	{
		int32_t L_121;
		L_121 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B46_0 = L_121;
		G_B46_1 = G_B45_0;
	}

IL_0262:
	{
		*((int32_t*)G_B46_1) = (int32_t)G_B46_0;
		int32_t L_122 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0269:
	{
		int32_t L_123 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_124;
		L_124 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_0239;
		}
	}
	{
		int32_t* L_125 = V_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_126), (void*)L_125, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_126;
	}

IL_027a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_02e8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_132) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_133 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_132), 8));
		int8_t* L_134 = (int8_t*) (L_133 ? alloca(L_133) : NULL);
		memset(L_134, 0, L_133);
		V_12 = (uint64_t*)(L_134);
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_135 = V_12;
		int32_t L_136 = V_13;
		int32_t L_137 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_138;
		L_138 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_137, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_139 = V_13;
		uint16_t L_140;
		L_140 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_139, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_141;
		L_141 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_138, L_140, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_141)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
			goto IL_02cb;
		}
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
	}
	{
		G_B54_0 = ((uint64_t)(((int64_t)0)));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_142;
		L_142 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_142;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*((int64_t*)G_B54_1) = (int64_t)G_B54_0;
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02d7:
	{
		int32_t L_144 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_145;
		L_145 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_146 = V_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_147), (void*)L_146, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_147;
	}

IL_02e8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0356;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_153;
		L_153 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_153) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_154 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_153), 8));
		int8_t* L_155 = (int8_t*) (L_154 ? alloca(L_154) : NULL);
		memset(L_155, 0, L_154);
		V_14 = (int64_t*)(L_155);
		V_15 = 0;
		goto IL_0345;
	}

IL_0314:
	{
		int64_t* L_156 = V_14;
		int32_t L_157 = V_15;
		int32_t L_158 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_159;
		L_159 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_158, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_160 = V_15;
		uint16_t L_161;
		L_161 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_160, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_162;
		L_162 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_159, L_161, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_162)
		{
			G_B61_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
			goto IL_0339;
		}
		G_B60_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
	}
	{
		G_B62_0 = ((int64_t)0);
		G_B62_1 = G_B60_0;
		goto IL_033e;
	}

IL_0339:
	{
		int64_t L_163;
		L_163 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B62_0 = L_163;
		G_B62_1 = G_B61_0;
	}

IL_033e:
	{
		*((int64_t*)G_B62_1) = (int64_t)G_B62_0;
		int32_t L_164 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_0345:
	{
		int32_t L_165 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_166;
		L_166 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_165) < ((int32_t)L_166)))
		{
			goto IL_0314;
		}
	}
	{
		int64_t* L_167 = V_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_168;
		memset((&L_168), 0, sizeof(L_168));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_168), (void*)L_167, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_168;
	}

IL_0356:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		bool L_173;
		L_173 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_170, L_172, NULL);
		if (!L_173)
		{
			goto IL_03c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_174;
		L_174 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_174) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_175 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_174), 4));
		int8_t* L_176 = (int8_t*) (L_175 ? alloca(L_175) : NULL);
		memset(L_176, 0, L_175);
		V_16 = (float*)(L_176);
		V_17 = 0;
		goto IL_03b6;
	}

IL_0382:
	{
		float* L_177 = V_16;
		int32_t L_178 = V_17;
		int32_t L_179 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_180;
		L_180 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_179, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_181 = V_17;
		uint16_t L_182;
		L_182 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_181, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_183;
		L_183 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_180, L_182, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_183)
		{
			G_B69_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
			goto IL_03aa;
		}
		G_B68_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
	}
	{
		G_B70_0 = (0.0f);
		G_B70_1 = G_B68_0;
		goto IL_03af;
	}

IL_03aa:
	{
		float L_184;
		L_184 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B70_0 = L_184;
		G_B70_1 = G_B69_0;
	}

IL_03af:
	{
		*((float*)G_B70_1) = (float)G_B70_0;
		int32_t L_185 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_03b6:
	{
		int32_t L_186 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_187;
		L_187 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_186) < ((int32_t)L_187)))
		{
			goto IL_0382;
		}
	}
	{
		float* L_188 = V_16;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_189), (void*)L_188, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_189;
	}

IL_03c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_191;
		L_191 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_190, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		bool L_194;
		L_194 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_191, L_193, NULL);
		if (!L_194)
		{
			goto IL_043c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_195;
		L_195 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_195) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_196 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_195), 8));
		int8_t* L_197 = (int8_t*) (L_196 ? alloca(L_196) : NULL);
		memset(L_197, 0, L_196);
		V_18 = (double*)(L_197);
		V_19 = 0;
		goto IL_042b;
	}

IL_03f3:
	{
		double* L_198 = V_18;
		int32_t L_199 = V_19;
		int32_t L_200 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_201;
		L_201 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_200, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_202 = V_19;
		uint16_t L_203;
		L_203 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_202, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_204;
		L_204 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_201, L_203, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_204)
		{
			G_B77_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
			goto IL_041f;
		}
		G_B76_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
	}
	{
		G_B78_0 = (0.0);
		G_B78_1 = G_B76_0;
		goto IL_0424;
	}

IL_041f:
	{
		double L_205;
		L_205 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B78_0 = L_205;
		G_B78_1 = G_B77_0;
	}

IL_0424:
	{
		*((double*)G_B78_1) = (double)G_B78_0;
		int32_t L_206 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_042b:
	{
		int32_t L_207 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_208;
		L_208 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_207) < ((int32_t)L_208)))
		{
			goto IL_03f3;
		}
	}
	{
		double* L_209 = V_18;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_210;
		memset((&L_210), 0, sizeof(L_210));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_210), (void*)L_209, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_210;
	}

IL_043c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_211 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_211, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_211, method);
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (!L_216)
		{
			goto IL_06e5;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_217 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_218 = L_217.___register;
		uint8_t L_219 = L_218.___byte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_220 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_221 = L_220.___register;
		uint8_t L_222 = L_221.___byte_0;
		if ((((int32_t)L_219) == ((int32_t)L_222)))
		{
			G_B85_0 = (&V_20);
			goto IL_048a;
		}
		G_B84_0 = (&V_20);
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_0;
		goto IL_048f;
	}

IL_048a:
	{
		uint8_t L_223;
		L_223 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B86_0 = ((int32_t)(L_223));
		G_B86_1 = G_B85_0;
	}

IL_048f:
	{
		G_B86_1->___byte_0 = (uint8_t)G_B86_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_224 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_225 = L_224.___register;
		uint8_t L_226 = L_225.___byte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_227 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_228 = L_227.___register;
		uint8_t L_229 = L_228.___byte_1;
		if ((((int32_t)L_226) == ((int32_t)L_229)))
		{
			G_B88_0 = (&V_20);
			goto IL_04b1;
		}
		G_B87_0 = (&V_20);
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_04b6;
	}

IL_04b1:
	{
		uint8_t L_230;
		L_230 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B89_0 = ((int32_t)(L_230));
		G_B89_1 = G_B88_0;
	}

IL_04b6:
	{
		G_B89_1->___byte_1 = (uint8_t)G_B89_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_231 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register;
		uint8_t L_233 = L_232.___byte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_234 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_235 = L_234.___register;
		uint8_t L_236 = L_235.___byte_2;
		if ((((int32_t)L_233) == ((int32_t)L_236)))
		{
			G_B91_0 = (&V_20);
			goto IL_04d8;
		}
		G_B90_0 = (&V_20);
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_04dd;
	}

IL_04d8:
	{
		uint8_t L_237;
		L_237 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B92_0 = ((int32_t)(L_237));
		G_B92_1 = G_B91_0;
	}

IL_04dd:
	{
		G_B92_1->___byte_2 = (uint8_t)G_B92_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_238 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_239 = L_238.___register;
		uint8_t L_240 = L_239.___byte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_241 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register;
		uint8_t L_243 = L_242.___byte_3;
		if ((((int32_t)L_240) == ((int32_t)L_243)))
		{
			G_B94_0 = (&V_20);
			goto IL_04ff;
		}
		G_B93_0 = (&V_20);
	}
	{
		G_B95_0 = 0;
		G_B95_1 = G_B93_0;
		goto IL_0504;
	}

IL_04ff:
	{
		uint8_t L_244;
		L_244 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B95_0 = ((int32_t)(L_244));
		G_B95_1 = G_B94_0;
	}

IL_0504:
	{
		G_B95_1->___byte_3 = (uint8_t)G_B95_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_245 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_246 = L_245.___register;
		uint8_t L_247 = L_246.___byte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_248 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_249 = L_248.___register;
		uint8_t L_250 = L_249.___byte_4;
		if ((((int32_t)L_247) == ((int32_t)L_250)))
		{
			G_B97_0 = (&V_20);
			goto IL_0526;
		}
		G_B96_0 = (&V_20);
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_0;
		goto IL_052b;
	}

IL_0526:
	{
		uint8_t L_251;
		L_251 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B98_0 = ((int32_t)(L_251));
		G_B98_1 = G_B97_0;
	}

IL_052b:
	{
		G_B98_1->___byte_4 = (uint8_t)G_B98_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_252 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_253 = L_252.___register;
		uint8_t L_254 = L_253.___byte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_255 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_256 = L_255.___register;
		uint8_t L_257 = L_256.___byte_5;
		if ((((int32_t)L_254) == ((int32_t)L_257)))
		{
			G_B100_0 = (&V_20);
			goto IL_054d;
		}
		G_B99_0 = (&V_20);
	}
	{
		G_B101_0 = 0;
		G_B101_1 = G_B99_0;
		goto IL_0552;
	}

IL_054d:
	{
		uint8_t L_258;
		L_258 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B101_0 = ((int32_t)(L_258));
		G_B101_1 = G_B100_0;
	}

IL_0552:
	{
		G_B101_1->___byte_5 = (uint8_t)G_B101_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_259 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_260 = L_259.___register;
		uint8_t L_261 = L_260.___byte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_262 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_263 = L_262.___register;
		uint8_t L_264 = L_263.___byte_6;
		if ((((int32_t)L_261) == ((int32_t)L_264)))
		{
			G_B103_0 = (&V_20);
			goto IL_0574;
		}
		G_B102_0 = (&V_20);
	}
	{
		G_B104_0 = 0;
		G_B104_1 = G_B102_0;
		goto IL_0579;
	}

IL_0574:
	{
		uint8_t L_265;
		L_265 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B104_0 = ((int32_t)(L_265));
		G_B104_1 = G_B103_0;
	}

IL_0579:
	{
		G_B104_1->___byte_6 = (uint8_t)G_B104_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_266 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register;
		uint8_t L_268 = L_267.___byte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_269 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_270 = L_269.___register;
		uint8_t L_271 = L_270.___byte_7;
		if ((((int32_t)L_268) == ((int32_t)L_271)))
		{
			G_B106_0 = (&V_20);
			goto IL_059b;
		}
		G_B105_0 = (&V_20);
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_0;
		goto IL_05a0;
	}

IL_059b:
	{
		uint8_t L_272;
		L_272 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B107_0 = ((int32_t)(L_272));
		G_B107_1 = G_B106_0;
	}

IL_05a0:
	{
		G_B107_1->___byte_7 = (uint8_t)G_B107_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_273 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_274 = L_273.___register;
		uint8_t L_275 = L_274.___byte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_276 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register;
		uint8_t L_278 = L_277.___byte_8;
		if ((((int32_t)L_275) == ((int32_t)L_278)))
		{
			G_B109_0 = (&V_20);
			goto IL_05c2;
		}
		G_B108_0 = (&V_20);
	}
	{
		G_B110_0 = 0;
		G_B110_1 = G_B108_0;
		goto IL_05c7;
	}

IL_05c2:
	{
		uint8_t L_279;
		L_279 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B110_0 = ((int32_t)(L_279));
		G_B110_1 = G_B109_0;
	}

IL_05c7:
	{
		G_B110_1->___byte_8 = (uint8_t)G_B110_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_280 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_281 = L_280.___register;
		uint8_t L_282 = L_281.___byte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_283 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_284 = L_283.___register;
		uint8_t L_285 = L_284.___byte_9;
		if ((((int32_t)L_282) == ((int32_t)L_285)))
		{
			G_B112_0 = (&V_20);
			goto IL_05e9;
		}
		G_B111_0 = (&V_20);
	}
	{
		G_B113_0 = 0;
		G_B113_1 = G_B111_0;
		goto IL_05ee;
	}

IL_05e9:
	{
		uint8_t L_286;
		L_286 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B113_0 = ((int32_t)(L_286));
		G_B113_1 = G_B112_0;
	}

IL_05ee:
	{
		G_B113_1->___byte_9 = (uint8_t)G_B113_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_287 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_288 = L_287.___register;
		uint8_t L_289 = L_288.___byte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_290 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_291 = L_290.___register;
		uint8_t L_292 = L_291.___byte_10;
		if ((((int32_t)L_289) == ((int32_t)L_292)))
		{
			G_B115_0 = (&V_20);
			goto IL_0610;
		}
		G_B114_0 = (&V_20);
	}
	{
		G_B116_0 = 0;
		G_B116_1 = G_B114_0;
		goto IL_0615;
	}

IL_0610:
	{
		uint8_t L_293;
		L_293 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B116_0 = ((int32_t)(L_293));
		G_B116_1 = G_B115_0;
	}

IL_0615:
	{
		G_B116_1->___byte_10 = (uint8_t)G_B116_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_294 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_295 = L_294.___register;
		uint8_t L_296 = L_295.___byte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_297 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_298 = L_297.___register;
		uint8_t L_299 = L_298.___byte_11;
		if ((((int32_t)L_296) == ((int32_t)L_299)))
		{
			G_B118_0 = (&V_20);
			goto IL_0637;
		}
		G_B117_0 = (&V_20);
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_0;
		goto IL_063c;
	}

IL_0637:
	{
		uint8_t L_300;
		L_300 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B119_0 = ((int32_t)(L_300));
		G_B119_1 = G_B118_0;
	}

IL_063c:
	{
		G_B119_1->___byte_11 = (uint8_t)G_B119_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_301 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register;
		uint8_t L_303 = L_302.___byte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_304 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_305 = L_304.___register;
		uint8_t L_306 = L_305.___byte_12;
		if ((((int32_t)L_303) == ((int32_t)L_306)))
		{
			G_B121_0 = (&V_20);
			goto IL_065e;
		}
		G_B120_0 = (&V_20);
	}
	{
		G_B122_0 = 0;
		G_B122_1 = G_B120_0;
		goto IL_0663;
	}

IL_065e:
	{
		uint8_t L_307;
		L_307 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B122_0 = ((int32_t)(L_307));
		G_B122_1 = G_B121_0;
	}

IL_0663:
	{
		G_B122_1->___byte_12 = (uint8_t)G_B122_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_308 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_309 = L_308.___register;
		uint8_t L_310 = L_309.___byte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_311 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register;
		uint8_t L_313 = L_312.___byte_13;
		if ((((int32_t)L_310) == ((int32_t)L_313)))
		{
			G_B124_0 = (&V_20);
			goto IL_0685;
		}
		G_B123_0 = (&V_20);
	}
	{
		G_B125_0 = 0;
		G_B125_1 = G_B123_0;
		goto IL_068a;
	}

IL_0685:
	{
		uint8_t L_314;
		L_314 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B125_0 = ((int32_t)(L_314));
		G_B125_1 = G_B124_0;
	}

IL_068a:
	{
		G_B125_1->___byte_13 = (uint8_t)G_B125_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_315 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_316 = L_315.___register;
		uint8_t L_317 = L_316.___byte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_318 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_319 = L_318.___register;
		uint8_t L_320 = L_319.___byte_14;
		if ((((int32_t)L_317) == ((int32_t)L_320)))
		{
			G_B127_0 = (&V_20);
			goto IL_06ac;
		}
		G_B126_0 = (&V_20);
	}
	{
		G_B128_0 = 0;
		G_B128_1 = G_B126_0;
		goto IL_06b1;
	}

IL_06ac:
	{
		uint8_t L_321;
		L_321 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B128_0 = ((int32_t)(L_321));
		G_B128_1 = G_B127_0;
	}

IL_06b1:
	{
		G_B128_1->___byte_14 = (uint8_t)G_B128_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_322 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_323 = L_322.___register;
		uint8_t L_324 = L_323.___byte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_325 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_326 = L_325.___register;
		uint8_t L_327 = L_326.___byte_15;
		if ((((int32_t)L_324) == ((int32_t)L_327)))
		{
			G_B130_0 = (&V_20);
			goto IL_06d3;
		}
		G_B129_0 = (&V_20);
	}
	{
		G_B131_0 = 0;
		G_B131_1 = G_B129_0;
		goto IL_06d8;
	}

IL_06d3:
	{
		uint8_t L_328;
		L_328 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B131_0 = ((int32_t)(L_328));
		G_B131_1 = G_B130_0;
	}

IL_06d8:
	{
		G_B131_1->___byte_15 = (uint8_t)G_B131_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_329;
		memset((&L_329), 0, sizeof(L_329));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_329), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_329;
	}

IL_06e5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_330 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_331;
		L_331 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_330, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		bool L_334;
		L_334 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_331, L_333, NULL);
		if (!L_334)
		{
			goto IL_097b;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_335 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_336 = L_335.___register;
		int8_t L_337 = L_336.___sbyte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_338 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_339 = L_338.___register;
		int8_t L_340 = L_339.___sbyte_0;
		if ((((int32_t)L_337) == ((int32_t)L_340)))
		{
			G_B135_0 = (&V_20);
			goto IL_0720;
		}
		G_B134_0 = (&V_20);
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_0;
		goto IL_0725;
	}

IL_0720:
	{
		int8_t L_341;
		L_341 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B136_0 = ((int32_t)(L_341));
		G_B136_1 = G_B135_0;
	}

IL_0725:
	{
		G_B136_1->___sbyte_0 = (int8_t)G_B136_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_342 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_343 = L_342.___register;
		int8_t L_344 = L_343.___sbyte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_345 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_346 = L_345.___register;
		int8_t L_347 = L_346.___sbyte_1;
		if ((((int32_t)L_344) == ((int32_t)L_347)))
		{
			G_B138_0 = (&V_20);
			goto IL_0747;
		}
		G_B137_0 = (&V_20);
	}
	{
		G_B139_0 = 0;
		G_B139_1 = G_B137_0;
		goto IL_074c;
	}

IL_0747:
	{
		int8_t L_348;
		L_348 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B139_0 = ((int32_t)(L_348));
		G_B139_1 = G_B138_0;
	}

IL_074c:
	{
		G_B139_1->___sbyte_1 = (int8_t)G_B139_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_349 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_350 = L_349.___register;
		int8_t L_351 = L_350.___sbyte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_352 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_353 = L_352.___register;
		int8_t L_354 = L_353.___sbyte_2;
		if ((((int32_t)L_351) == ((int32_t)L_354)))
		{
			G_B141_0 = (&V_20);
			goto IL_076e;
		}
		G_B140_0 = (&V_20);
	}
	{
		G_B142_0 = 0;
		G_B142_1 = G_B140_0;
		goto IL_0773;
	}

IL_076e:
	{
		int8_t L_355;
		L_355 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B142_0 = ((int32_t)(L_355));
		G_B142_1 = G_B141_0;
	}

IL_0773:
	{
		G_B142_1->___sbyte_2 = (int8_t)G_B142_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_356 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register;
		int8_t L_358 = L_357.___sbyte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_359 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_360 = L_359.___register;
		int8_t L_361 = L_360.___sbyte_3;
		if ((((int32_t)L_358) == ((int32_t)L_361)))
		{
			G_B144_0 = (&V_20);
			goto IL_0795;
		}
		G_B143_0 = (&V_20);
	}
	{
		G_B145_0 = 0;
		G_B145_1 = G_B143_0;
		goto IL_079a;
	}

IL_0795:
	{
		int8_t L_362;
		L_362 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B145_0 = ((int32_t)(L_362));
		G_B145_1 = G_B144_0;
	}

IL_079a:
	{
		G_B145_1->___sbyte_3 = (int8_t)G_B145_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_363 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_364 = L_363.___register;
		int8_t L_365 = L_364.___sbyte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_366 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register;
		int8_t L_368 = L_367.___sbyte_4;
		if ((((int32_t)L_365) == ((int32_t)L_368)))
		{
			G_B147_0 = (&V_20);
			goto IL_07bc;
		}
		G_B146_0 = (&V_20);
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_0;
		goto IL_07c1;
	}

IL_07bc:
	{
		int8_t L_369;
		L_369 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B148_0 = ((int32_t)(L_369));
		G_B148_1 = G_B147_0;
	}

IL_07c1:
	{
		G_B148_1->___sbyte_4 = (int8_t)G_B148_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_370 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_371 = L_370.___register;
		int8_t L_372 = L_371.___sbyte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_373 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_374 = L_373.___register;
		int8_t L_375 = L_374.___sbyte_5;
		if ((((int32_t)L_372) == ((int32_t)L_375)))
		{
			G_B150_0 = (&V_20);
			goto IL_07e3;
		}
		G_B149_0 = (&V_20);
	}
	{
		G_B151_0 = 0;
		G_B151_1 = G_B149_0;
		goto IL_07e8;
	}

IL_07e3:
	{
		int8_t L_376;
		L_376 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B151_0 = ((int32_t)(L_376));
		G_B151_1 = G_B150_0;
	}

IL_07e8:
	{
		G_B151_1->___sbyte_5 = (int8_t)G_B151_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_377 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_378 = L_377.___register;
		int8_t L_379 = L_378.___sbyte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_380 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_381 = L_380.___register;
		int8_t L_382 = L_381.___sbyte_6;
		if ((((int32_t)L_379) == ((int32_t)L_382)))
		{
			G_B153_0 = (&V_20);
			goto IL_080a;
		}
		G_B152_0 = (&V_20);
	}
	{
		G_B154_0 = 0;
		G_B154_1 = G_B152_0;
		goto IL_080f;
	}

IL_080a:
	{
		int8_t L_383;
		L_383 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B154_0 = ((int32_t)(L_383));
		G_B154_1 = G_B153_0;
	}

IL_080f:
	{
		G_B154_1->___sbyte_6 = (int8_t)G_B154_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_384 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_385 = L_384.___register;
		int8_t L_386 = L_385.___sbyte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_387 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_388 = L_387.___register;
		int8_t L_389 = L_388.___sbyte_7;
		if ((((int32_t)L_386) == ((int32_t)L_389)))
		{
			G_B156_0 = (&V_20);
			goto IL_0831;
		}
		G_B155_0 = (&V_20);
	}
	{
		G_B157_0 = 0;
		G_B157_1 = G_B155_0;
		goto IL_0836;
	}

IL_0831:
	{
		int8_t L_390;
		L_390 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B157_0 = ((int32_t)(L_390));
		G_B157_1 = G_B156_0;
	}

IL_0836:
	{
		G_B157_1->___sbyte_7 = (int8_t)G_B157_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_391 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_392 = L_391.___register;
		int8_t L_393 = L_392.___sbyte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_394 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_395 = L_394.___register;
		int8_t L_396 = L_395.___sbyte_8;
		if ((((int32_t)L_393) == ((int32_t)L_396)))
		{
			G_B159_0 = (&V_20);
			goto IL_0858;
		}
		G_B158_0 = (&V_20);
	}
	{
		G_B160_0 = 0;
		G_B160_1 = G_B158_0;
		goto IL_085d;
	}

IL_0858:
	{
		int8_t L_397;
		L_397 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B160_0 = ((int32_t)(L_397));
		G_B160_1 = G_B159_0;
	}

IL_085d:
	{
		G_B160_1->___sbyte_8 = (int8_t)G_B160_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_398 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_399 = L_398.___register;
		int8_t L_400 = L_399.___sbyte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_401 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_402 = L_401.___register;
		int8_t L_403 = L_402.___sbyte_9;
		if ((((int32_t)L_400) == ((int32_t)L_403)))
		{
			G_B162_0 = (&V_20);
			goto IL_087f;
		}
		G_B161_0 = (&V_20);
	}
	{
		G_B163_0 = 0;
		G_B163_1 = G_B161_0;
		goto IL_0884;
	}

IL_087f:
	{
		int8_t L_404;
		L_404 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B163_0 = ((int32_t)(L_404));
		G_B163_1 = G_B162_0;
	}

IL_0884:
	{
		G_B163_1->___sbyte_9 = (int8_t)G_B163_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_405 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_406 = L_405.___register;
		int8_t L_407 = L_406.___sbyte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_408 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_409 = L_408.___register;
		int8_t L_410 = L_409.___sbyte_10;
		if ((((int32_t)L_407) == ((int32_t)L_410)))
		{
			G_B165_0 = (&V_20);
			goto IL_08a6;
		}
		G_B164_0 = (&V_20);
	}
	{
		G_B166_0 = 0;
		G_B166_1 = G_B164_0;
		goto IL_08ab;
	}

IL_08a6:
	{
		int8_t L_411;
		L_411 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B166_0 = ((int32_t)(L_411));
		G_B166_1 = G_B165_0;
	}

IL_08ab:
	{
		G_B166_1->___sbyte_10 = (int8_t)G_B166_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_412 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_413 = L_412.___register;
		int8_t L_414 = L_413.___sbyte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_415 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_416 = L_415.___register;
		int8_t L_417 = L_416.___sbyte_11;
		if ((((int32_t)L_414) == ((int32_t)L_417)))
		{
			G_B168_0 = (&V_20);
			goto IL_08cd;
		}
		G_B167_0 = (&V_20);
	}
	{
		G_B169_0 = 0;
		G_B169_1 = G_B167_0;
		goto IL_08d2;
	}

IL_08cd:
	{
		int8_t L_418;
		L_418 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B169_0 = ((int32_t)(L_418));
		G_B169_1 = G_B168_0;
	}

IL_08d2:
	{
		G_B169_1->___sbyte_11 = (int8_t)G_B169_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_419 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_420 = L_419.___register;
		int8_t L_421 = L_420.___sbyte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_422 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_423 = L_422.___register;
		int8_t L_424 = L_423.___sbyte_12;
		if ((((int32_t)L_421) == ((int32_t)L_424)))
		{
			G_B171_0 = (&V_20);
			goto IL_08f4;
		}
		G_B170_0 = (&V_20);
	}
	{
		G_B172_0 = 0;
		G_B172_1 = G_B170_0;
		goto IL_08f9;
	}

IL_08f4:
	{
		int8_t L_425;
		L_425 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B172_0 = ((int32_t)(L_425));
		G_B172_1 = G_B171_0;
	}

IL_08f9:
	{
		G_B172_1->___sbyte_12 = (int8_t)G_B172_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_426 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_427 = L_426.___register;
		int8_t L_428 = L_427.___sbyte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_429 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_430 = L_429.___register;
		int8_t L_431 = L_430.___sbyte_13;
		if ((((int32_t)L_428) == ((int32_t)L_431)))
		{
			G_B174_0 = (&V_20);
			goto IL_091b;
		}
		G_B173_0 = (&V_20);
	}
	{
		G_B175_0 = 0;
		G_B175_1 = G_B173_0;
		goto IL_0920;
	}

IL_091b:
	{
		int8_t L_432;
		L_432 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B175_0 = ((int32_t)(L_432));
		G_B175_1 = G_B174_0;
	}

IL_0920:
	{
		G_B175_1->___sbyte_13 = (int8_t)G_B175_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_433 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_434 = L_433.___register;
		int8_t L_435 = L_434.___sbyte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_436 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_437 = L_436.___register;
		int8_t L_438 = L_437.___sbyte_14;
		if ((((int32_t)L_435) == ((int32_t)L_438)))
		{
			G_B177_0 = (&V_20);
			goto IL_0942;
		}
		G_B176_0 = (&V_20);
	}
	{
		G_B178_0 = 0;
		G_B178_1 = G_B176_0;
		goto IL_0947;
	}

IL_0942:
	{
		int8_t L_439;
		L_439 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B178_0 = ((int32_t)(L_439));
		G_B178_1 = G_B177_0;
	}

IL_0947:
	{
		G_B178_1->___sbyte_14 = (int8_t)G_B178_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_440 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_441 = L_440.___register;
		int8_t L_442 = L_441.___sbyte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_443 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_444 = L_443.___register;
		int8_t L_445 = L_444.___sbyte_15;
		if ((((int32_t)L_442) == ((int32_t)L_445)))
		{
			G_B180_0 = (&V_20);
			goto IL_0969;
		}
		G_B179_0 = (&V_20);
	}
	{
		G_B181_0 = 0;
		G_B181_1 = G_B179_0;
		goto IL_096e;
	}

IL_0969:
	{
		int8_t L_446;
		L_446 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B181_0 = ((int32_t)(L_446));
		G_B181_1 = G_B180_0;
	}

IL_096e:
	{
		G_B181_1->___sbyte_15 = (int8_t)G_B181_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_447;
		memset((&L_447), 0, sizeof(L_447));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_447), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_447;
	}

IL_097b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_448 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_449;
		L_449 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_448, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_450 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_451;
		L_451 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_450, NULL);
		bool L_452;
		L_452 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_449, L_451, NULL);
		if (!L_452)
		{
			goto IL_0ad9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_453 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_454 = L_453.___register;
		uint16_t L_455 = L_454.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_456 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_457 = L_456.___register;
		uint16_t L_458 = L_457.___uint16_0;
		if ((((int32_t)L_455) == ((int32_t)L_458)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_459;
		L_459 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_459));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_460 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_461 = L_460.___register;
		uint16_t L_462 = L_461.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_463 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_464 = L_463.___register;
		uint16_t L_465 = L_464.___uint16_1;
		if ((((int32_t)L_462) == ((int32_t)L_465)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_466;
		L_466 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_466));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_467 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_468 = L_467.___register;
		uint16_t L_469 = L_468.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_470 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_471 = L_470.___register;
		uint16_t L_472 = L_471.___uint16_2;
		if ((((int32_t)L_469) == ((int32_t)L_472)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_473;
		L_473 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_473));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_474 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_475 = L_474.___register;
		uint16_t L_476 = L_475.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_477 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_478 = L_477.___register;
		uint16_t L_479 = L_478.___uint16_3;
		if ((((int32_t)L_476) == ((int32_t)L_479)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_480;
		L_480 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_480));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_481 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_482 = L_481.___register;
		uint16_t L_483 = L_482.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_484 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_485 = L_484.___register;
		uint16_t L_486 = L_485.___uint16_4;
		if ((((int32_t)L_483) == ((int32_t)L_486)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_487;
		L_487 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_487));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_488 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_489 = L_488.___register;
		uint16_t L_490 = L_489.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_491 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_492 = L_491.___register;
		uint16_t L_493 = L_492.___uint16_5;
		if ((((int32_t)L_490) == ((int32_t)L_493)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_494;
		L_494 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_494));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_495 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_496 = L_495.___register;
		uint16_t L_497 = L_496.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_498 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_499 = L_498.___register;
		uint16_t L_500 = L_499.___uint16_6;
		if ((((int32_t)L_497) == ((int32_t)L_500)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_501;
		L_501 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_501));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_502 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_503 = L_502.___register;
		uint16_t L_504 = L_503.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_505 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_506 = L_505.___register;
		uint16_t L_507 = L_506.___uint16_7;
		if ((((int32_t)L_504) == ((int32_t)L_507)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_508;
		L_508 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_508));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_509;
		memset((&L_509), 0, sizeof(L_509));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_509), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_509;
	}

IL_0ad9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0c37;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_515 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_516 = L_515.___register;
		int16_t L_517 = L_516.___int16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_518 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_519 = L_518.___register;
		int16_t L_520 = L_519.___int16_0;
		if ((((int32_t)L_517) == ((int32_t)L_520)))
		{
			G_B211_0 = (&V_20);
			goto IL_0b14;
		}
		G_B210_0 = (&V_20);
	}
	{
		G_B212_0 = 0;
		G_B212_1 = G_B210_0;
		goto IL_0b19;
	}

IL_0b14:
	{
		int16_t L_521;
		L_521 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B212_0 = ((int32_t)(L_521));
		G_B212_1 = G_B211_0;
	}

IL_0b19:
	{
		G_B212_1->___int16_0 = (int16_t)G_B212_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_522 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_523 = L_522.___register;
		int16_t L_524 = L_523.___int16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_525 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_526 = L_525.___register;
		int16_t L_527 = L_526.___int16_1;
		if ((((int32_t)L_524) == ((int32_t)L_527)))
		{
			G_B214_0 = (&V_20);
			goto IL_0b3b;
		}
		G_B213_0 = (&V_20);
	}
	{
		G_B215_0 = 0;
		G_B215_1 = G_B213_0;
		goto IL_0b40;
	}

IL_0b3b:
	{
		int16_t L_528;
		L_528 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B215_0 = ((int32_t)(L_528));
		G_B215_1 = G_B214_0;
	}

IL_0b40:
	{
		G_B215_1->___int16_1 = (int16_t)G_B215_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_529 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_530 = L_529.___register;
		int16_t L_531 = L_530.___int16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_532 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_533 = L_532.___register;
		int16_t L_534 = L_533.___int16_2;
		if ((((int32_t)L_531) == ((int32_t)L_534)))
		{
			G_B217_0 = (&V_20);
			goto IL_0b62;
		}
		G_B216_0 = (&V_20);
	}
	{
		G_B218_0 = 0;
		G_B218_1 = G_B216_0;
		goto IL_0b67;
	}

IL_0b62:
	{
		int16_t L_535;
		L_535 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B218_0 = ((int32_t)(L_535));
		G_B218_1 = G_B217_0;
	}

IL_0b67:
	{
		G_B218_1->___int16_2 = (int16_t)G_B218_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_536 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_537 = L_536.___register;
		int16_t L_538 = L_537.___int16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_539 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_540 = L_539.___register;
		int16_t L_541 = L_540.___int16_3;
		if ((((int32_t)L_538) == ((int32_t)L_541)))
		{
			G_B220_0 = (&V_20);
			goto IL_0b89;
		}
		G_B219_0 = (&V_20);
	}
	{
		G_B221_0 = 0;
		G_B221_1 = G_B219_0;
		goto IL_0b8e;
	}

IL_0b89:
	{
		int16_t L_542;
		L_542 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B221_0 = ((int32_t)(L_542));
		G_B221_1 = G_B220_0;
	}

IL_0b8e:
	{
		G_B221_1->___int16_3 = (int16_t)G_B221_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_543 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_544 = L_543.___register;
		int16_t L_545 = L_544.___int16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_546 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_547 = L_546.___register;
		int16_t L_548 = L_547.___int16_4;
		if ((((int32_t)L_545) == ((int32_t)L_548)))
		{
			G_B223_0 = (&V_20);
			goto IL_0bb0;
		}
		G_B222_0 = (&V_20);
	}
	{
		G_B224_0 = 0;
		G_B224_1 = G_B222_0;
		goto IL_0bb5;
	}

IL_0bb0:
	{
		int16_t L_549;
		L_549 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B224_0 = ((int32_t)(L_549));
		G_B224_1 = G_B223_0;
	}

IL_0bb5:
	{
		G_B224_1->___int16_4 = (int16_t)G_B224_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_550 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_551 = L_550.___register;
		int16_t L_552 = L_551.___int16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_553 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_554 = L_553.___register;
		int16_t L_555 = L_554.___int16_5;
		if ((((int32_t)L_552) == ((int32_t)L_555)))
		{
			G_B226_0 = (&V_20);
			goto IL_0bd7;
		}
		G_B225_0 = (&V_20);
	}
	{
		G_B227_0 = 0;
		G_B227_1 = G_B225_0;
		goto IL_0bdc;
	}

IL_0bd7:
	{
		int16_t L_556;
		L_556 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B227_0 = ((int32_t)(L_556));
		G_B227_1 = G_B226_0;
	}

IL_0bdc:
	{
		G_B227_1->___int16_5 = (int16_t)G_B227_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_557 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_558 = L_557.___register;
		int16_t L_559 = L_558.___int16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_560 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_561 = L_560.___register;
		int16_t L_562 = L_561.___int16_6;
		if ((((int32_t)L_559) == ((int32_t)L_562)))
		{
			G_B229_0 = (&V_20);
			goto IL_0bfe;
		}
		G_B228_0 = (&V_20);
	}
	{
		G_B230_0 = 0;
		G_B230_1 = G_B228_0;
		goto IL_0c03;
	}

IL_0bfe:
	{
		int16_t L_563;
		L_563 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B230_0 = ((int32_t)(L_563));
		G_B230_1 = G_B229_0;
	}

IL_0c03:
	{
		G_B230_1->___int16_6 = (int16_t)G_B230_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_564 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_565 = L_564.___register;
		int16_t L_566 = L_565.___int16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_567 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_568 = L_567.___register;
		int16_t L_569 = L_568.___int16_7;
		if ((((int32_t)L_566) == ((int32_t)L_569)))
		{
			G_B232_0 = (&V_20);
			goto IL_0c25;
		}
		G_B231_0 = (&V_20);
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		goto IL_0c2a;
	}

IL_0c25:
	{
		int16_t L_570;
		L_570 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B233_0 = ((int32_t)(L_570));
		G_B233_1 = G_B232_0;
	}

IL_0c2a:
	{
		G_B233_1->___int16_7 = (int16_t)G_B233_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_571;
		memset((&L_571), 0, sizeof(L_571));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_571), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_571;
	}

IL_0c37:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_572 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_573;
		L_573 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_572, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_574 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_575;
		L_575 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_574, NULL);
		bool L_576;
		L_576 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_573, L_575, NULL);
		if (!L_576)
		{
			goto IL_0cf9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_577 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_578 = L_577.___register;
		uint32_t L_579 = L_578.___uint32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_580 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_581 = L_580.___register;
		uint32_t L_582 = L_581.___uint32_0;
		if ((((int32_t)L_579) == ((int32_t)L_582)))
		{
			G_B237_0 = (&V_20);
			goto IL_0c72;
		}
		G_B236_0 = (&V_20);
	}
	{
		G_B238_0 = ((uint32_t)(0));
		G_B238_1 = G_B236_0;
		goto IL_0c77;
	}

IL_0c72:
	{
		uint32_t L_583;
		L_583 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B238_0 = L_583;
		G_B238_1 = G_B237_0;
	}

IL_0c77:
	{
		G_B238_1->___uint32_0 = G_B238_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_584 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_585 = L_584.___register;
		uint32_t L_586 = L_585.___uint32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_587 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_588 = L_587.___register;
		uint32_t L_589 = L_588.___uint32_1;
		if ((((int32_t)L_586) == ((int32_t)L_589)))
		{
			G_B240_0 = (&V_20);
			goto IL_0c99;
		}
		G_B239_0 = (&V_20);
	}
	{
		G_B241_0 = ((uint32_t)(0));
		G_B241_1 = G_B239_0;
		goto IL_0c9e;
	}

IL_0c99:
	{
		uint32_t L_590;
		L_590 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B241_0 = L_590;
		G_B241_1 = G_B240_0;
	}

IL_0c9e:
	{
		G_B241_1->___uint32_1 = G_B241_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_591 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_592 = L_591.___register;
		uint32_t L_593 = L_592.___uint32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_594 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_595 = L_594.___register;
		uint32_t L_596 = L_595.___uint32_2;
		if ((((int32_t)L_593) == ((int32_t)L_596)))
		{
			G_B243_0 = (&V_20);
			goto IL_0cc0;
		}
		G_B242_0 = (&V_20);
	}
	{
		G_B244_0 = ((uint32_t)(0));
		G_B244_1 = G_B242_0;
		goto IL_0cc5;
	}

IL_0cc0:
	{
		uint32_t L_597;
		L_597 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B244_0 = L_597;
		G_B244_1 = G_B243_0;
	}

IL_0cc5:
	{
		G_B244_1->___uint32_2 = G_B244_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_598 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_599 = L_598.___register;
		uint32_t L_600 = L_599.___uint32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_601 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_602 = L_601.___register;
		uint32_t L_603 = L_602.___uint32_3;
		if ((((int32_t)L_600) == ((int32_t)L_603)))
		{
			G_B246_0 = (&V_20);
			goto IL_0ce7;
		}
		G_B245_0 = (&V_20);
	}
	{
		G_B247_0 = ((uint32_t)(0));
		G_B247_1 = G_B245_0;
		goto IL_0cec;
	}

IL_0ce7:
	{
		uint32_t L_604;
		L_604 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B247_0 = L_604;
		G_B247_1 = G_B246_0;
	}

IL_0cec:
	{
		G_B247_1->___uint32_3 = G_B247_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_605;
		memset((&L_605), 0, sizeof(L_605));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_605), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_605;
	}

IL_0cf9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_606 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_607;
		L_607 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_606, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_608 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_609;
		L_609 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_608, NULL);
		bool L_610;
		L_610 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_607, L_609, NULL);
		if (!L_610)
		{
			goto IL_0dbb;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_611 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_612 = L_611.___register;
		int32_t L_613 = L_612.___int32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_614 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_615 = L_614.___register;
		int32_t L_616 = L_615.___int32_0;
		if ((((int32_t)L_613) == ((int32_t)L_616)))
		{
			G_B251_0 = (&V_20);
			goto IL_0d34;
		}
		G_B250_0 = (&V_20);
	}
	{
		G_B252_0 = 0;
		G_B252_1 = G_B250_0;
		goto IL_0d39;
	}

IL_0d34:
	{
		int32_t L_617;
		L_617 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B252_0 = L_617;
		G_B252_1 = G_B251_0;
	}

IL_0d39:
	{
		G_B252_1->___int32_0 = G_B252_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_618 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_619 = L_618.___register;
		int32_t L_620 = L_619.___int32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_621 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_622 = L_621.___register;
		int32_t L_623 = L_622.___int32_1;
		if ((((int32_t)L_620) == ((int32_t)L_623)))
		{
			G_B254_0 = (&V_20);
			goto IL_0d5b;
		}
		G_B253_0 = (&V_20);
	}
	{
		G_B255_0 = 0;
		G_B255_1 = G_B253_0;
		goto IL_0d60;
	}

IL_0d5b:
	{
		int32_t L_624;
		L_624 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B255_0 = L_624;
		G_B255_1 = G_B254_0;
	}

IL_0d60:
	{
		G_B255_1->___int32_1 = G_B255_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_625 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_626 = L_625.___register;
		int32_t L_627 = L_626.___int32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_628 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_629 = L_628.___register;
		int32_t L_630 = L_629.___int32_2;
		if ((((int32_t)L_627) == ((int32_t)L_630)))
		{
			G_B257_0 = (&V_20);
			goto IL_0d82;
		}
		G_B256_0 = (&V_20);
	}
	{
		G_B258_0 = 0;
		G_B258_1 = G_B256_0;
		goto IL_0d87;
	}

IL_0d82:
	{
		int32_t L_631;
		L_631 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B258_0 = L_631;
		G_B258_1 = G_B257_0;
	}

IL_0d87:
	{
		G_B258_1->___int32_2 = G_B258_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_632 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_633 = L_632.___register;
		int32_t L_634 = L_633.___int32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_635 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_636 = L_635.___register;
		int32_t L_637 = L_636.___int32_3;
		if ((((int32_t)L_634) == ((int32_t)L_637)))
		{
			G_B260_0 = (&V_20);
			goto IL_0da9;
		}
		G_B259_0 = (&V_20);
	}
	{
		G_B261_0 = 0;
		G_B261_1 = G_B259_0;
		goto IL_0dae;
	}

IL_0da9:
	{
		int32_t L_638;
		L_638 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B261_0 = L_638;
		G_B261_1 = G_B260_0;
	}

IL_0dae:
	{
		G_B261_1->___int32_3 = G_B261_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_639;
		memset((&L_639), 0, sizeof(L_639));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_639), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_639;
	}

IL_0dbb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_640 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_641;
		L_641 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_640, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_642 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_643;
		L_643 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_642, NULL);
		bool L_644;
		L_644 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_641, L_643, NULL);
		if (!L_644)
		{
			goto IL_0e2e;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_645 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_646 = L_645.___register;
		uint64_t L_647 = L_646.___uint64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_648 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_649 = L_648.___register;
		uint64_t L_650 = L_649.___uint64_0;
		if ((((int64_t)L_647) == ((int64_t)L_650)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
		G_B264_0 = (&V_20);
	}
	{
		G_B266_0 = ((uint64_t)(((int64_t)0)));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_651;
		L_651 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_651;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0 = G_B266_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_652 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_653 = L_652.___register;
		uint64_t L_654 = L_653.___uint64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_655 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_656 = L_655.___register;
		uint64_t L_657 = L_656.___uint64_1;
		if ((((int64_t)L_654) == ((int64_t)L_657)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
		G_B267_0 = (&V_20);
	}
	{
		G_B269_0 = ((uint64_t)(((int64_t)0)));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_658;
		L_658 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_658;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1 = G_B269_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_659;
		memset((&L_659), 0, sizeof(L_659));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_659), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_659;
	}

IL_0e2e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_660 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_661;
		L_661 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_660, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_662 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_663;
		L_663 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_662, NULL);
		bool L_664;
		L_664 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_661, L_663, NULL);
		if (!L_664)
		{
			goto IL_0ea1;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_665 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_666 = L_665.___register;
		int64_t L_667 = L_666.___int64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_668 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_669 = L_668.___register;
		int64_t L_670 = L_669.___int64_0;
		if ((((int64_t)L_667) == ((int64_t)L_670)))
		{
			G_B273_0 = (&V_20);
			goto IL_0e67;
		}
		G_B272_0 = (&V_20);
	}
	{
		G_B274_0 = ((int64_t)0);
		G_B274_1 = G_B272_0;
		goto IL_0e6c;
	}

IL_0e67:
	{
		int64_t L_671;
		L_671 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B274_0 = L_671;
		G_B274_1 = G_B273_0;
	}

IL_0e6c:
	{
		G_B274_1->___int64_0 = G_B274_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_672 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_673 = L_672.___register;
		int64_t L_674 = L_673.___int64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_675 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_676 = L_675.___register;
		int64_t L_677 = L_676.___int64_1;
		if ((((int64_t)L_674) == ((int64_t)L_677)))
		{
			G_B276_0 = (&V_20);
			goto IL_0e8f;
		}
		G_B275_0 = (&V_20);
	}
	{
		G_B277_0 = ((int64_t)0);
		G_B277_1 = G_B275_0;
		goto IL_0e94;
	}

IL_0e8f:
	{
		int64_t L_678;
		L_678 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B277_0 = L_678;
		G_B277_1 = G_B276_0;
	}

IL_0e94:
	{
		G_B277_1->___int64_1 = G_B277_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_679;
		memset((&L_679), 0, sizeof(L_679));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_679), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_679;
	}

IL_0ea1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_680 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_681;
		L_681 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_680, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_682 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_683;
		L_683 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_682, NULL);
		bool L_684;
		L_684 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_681, L_683, NULL);
		if (!L_684)
		{
			goto IL_0f73;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_685 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_686 = L_685.___register;
		float L_687 = L_686.___single_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_688 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_689 = L_688.___register;
		float L_690 = L_689.___single_0;
		if ((((float)L_687) == ((float)L_690)))
		{
			G_B281_0 = (&V_20);
			goto IL_0ee0;
		}
		G_B280_0 = (&V_20);
	}
	{
		G_B282_0 = (0.0f);
		G_B282_1 = G_B280_0;
		goto IL_0ee5;
	}

IL_0ee0:
	{
		float L_691;
		L_691 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B282_0 = L_691;
		G_B282_1 = G_B281_0;
	}

IL_0ee5:
	{
		G_B282_1->___single_0 = G_B282_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_692 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_693 = L_692.___register;
		float L_694 = L_693.___single_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_695 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_696 = L_695.___register;
		float L_697 = L_696.___single_1;
		if ((((float)L_694) == ((float)L_697)))
		{
			G_B284_0 = (&V_20);
			goto IL_0f0b;
		}
		G_B283_0 = (&V_20);
	}
	{
		G_B285_0 = (0.0f);
		G_B285_1 = G_B283_0;
		goto IL_0f10;
	}

IL_0f0b:
	{
		float L_698;
		L_698 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B285_0 = L_698;
		G_B285_1 = G_B284_0;
	}

IL_0f10:
	{
		G_B285_1->___single_1 = G_B285_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_699 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_700 = L_699.___register;
		float L_701 = L_700.___single_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_702 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_703 = L_702.___register;
		float L_704 = L_703.___single_2;
		if ((((float)L_701) == ((float)L_704)))
		{
			G_B287_0 = (&V_20);
			goto IL_0f36;
		}
		G_B286_0 = (&V_20);
	}
	{
		G_B288_0 = (0.0f);
		G_B288_1 = G_B286_0;
		goto IL_0f3b;
	}

IL_0f36:
	{
		float L_705;
		L_705 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B288_0 = L_705;
		G_B288_1 = G_B287_0;
	}

IL_0f3b:
	{
		G_B288_1->___single_2 = G_B288_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_706 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_707 = L_706.___register;
		float L_708 = L_707.___single_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_709 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_710 = L_709.___register;
		float L_711 = L_710.___single_3;
		if ((((float)L_708) == ((float)L_711)))
		{
			G_B290_0 = (&V_20);
			goto IL_0f61;
		}
		G_B289_0 = (&V_20);
	}
	{
		G_B291_0 = (0.0f);
		G_B291_1 = G_B289_0;
		goto IL_0f66;
	}

IL_0f61:
	{
		float L_712;
		L_712 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B291_0 = L_712;
		G_B291_1 = G_B290_0;
	}

IL_0f66:
	{
		G_B291_1->___single_3 = G_B291_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_713;
		memset((&L_713), 0, sizeof(L_713));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_713), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_713;
	}

IL_0f73:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_714 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_715;
		L_715 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_714, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_716 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_717;
		L_717 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_716, NULL);
		bool L_718;
		L_718 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_715, L_717, NULL);
		if (!L_718)
		{
			goto IL_0ff4;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_719 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_720 = L_719.___register;
		double L_721 = L_720.___double_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_722 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_723 = L_722.___register;
		double L_724 = L_723.___double_0;
		if ((((double)L_721) == ((double)L_724)))
		{
			G_B295_0 = (&V_20);
			goto IL_0fb3;
		}
		G_B294_0 = (&V_20);
	}
	{
		G_B296_0 = (0.0);
		G_B296_1 = G_B294_0;
		goto IL_0fb8;
	}

IL_0fb3:
	{
		double L_725;
		L_725 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B296_0 = L_725;
		G_B296_1 = G_B295_0;
	}

IL_0fb8:
	{
		G_B296_1->___double_0 = G_B296_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_726 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_727 = L_726.___register;
		double L_728 = L_727.___double_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_729 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_730 = L_729.___register;
		double L_731 = L_730.___double_1;
		if ((((double)L_728) == ((double)L_731)))
		{
			G_B298_0 = (&V_20);
			goto IL_0fe2;
		}
		G_B297_0 = (&V_20);
	}
	{
		G_B299_0 = (0.0);
		G_B299_1 = G_B297_0;
		goto IL_0fe7;
	}

IL_0fe2:
	{
		double L_732;
		L_732 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B299_0 = L_732;
		G_B299_1 = G_B298_0;
	}

IL_0fe7:
	{
		G_B299_1->___double_1 = G_B299_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_733;
		memset((&L_733), 0, sizeof(L_733));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_733), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_733;
	}

IL_0ff4:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_734 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_734, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_734, method);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)((int32_t)255);
		uint8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		V_0 = (int8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)(-1);
		int8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)((int32_t)65535);
		uint16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		V_0 = (int16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)(-1);
		int16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		uint32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		uint64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		int64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		double L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		uint16_t L_5 = ___0_left;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_6);
		uint16_t L_8 = ___1_right;
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_9);
		return (bool)((((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_7, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		uint16_t L_16 = ___0_left;
		uint16_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_17);
		uint16_t L_19 = ___1_right;
		uint16_t L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_20);
		return (bool)((((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_18, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_21, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_27 = ___0_left;
		uint16_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_28);
		uint16_t L_30 = ___1_right;
		uint16_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_31);
		return (bool)((((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_29, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_32, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00d0;
		}
	}
	{
		uint16_t L_38 = ___0_left;
		uint16_t L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_39);
		uint16_t L_41 = ___1_right;
		uint16_t L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_42);
		return (bool)((((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_40, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_43, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_00d0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		uint16_t L_49 = ___0_left;
		uint16_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_50);
		uint16_t L_52 = ___1_right;
		uint16_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_53);
		return (bool)((((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_51, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_54, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		bool L_59;
		L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
		if (!L_59)
		{
			goto IL_0138;
		}
	}
	{
		uint16_t L_60 = ___0_left;
		uint16_t L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_61);
		uint16_t L_63 = ___1_right;
		uint16_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_64);
		return (bool)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_62, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0138:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_67, L_69, NULL);
		if (!L_70)
		{
			goto IL_016c;
		}
	}
	{
		uint16_t L_71 = ___0_left;
		uint16_t L_72 = L_71;
		RuntimeObject* L_73 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_72);
		uint16_t L_74 = ___1_right;
		uint16_t L_75 = L_74;
		RuntimeObject* L_76 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_75);
		return (bool)((((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_73, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))) == ((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_76, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_016c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01a0;
		}
	}
	{
		uint16_t L_82 = ___0_left;
		uint16_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_83);
		uint16_t L_85 = ___1_right;
		uint16_t L_86 = L_85;
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_86);
		return (bool)((((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_84, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))) == ((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_87, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_01d4;
		}
	}
	{
		uint16_t L_93 = ___0_left;
		uint16_t L_94 = L_93;
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_94);
		uint16_t L_96 = ___1_right;
		uint16_t L_97 = L_96;
		RuntimeObject* L_98 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_97);
		return (bool)((((float)((*(float*)((float*)(float*)UnBox(L_95, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))) == ((float)((*(float*)((float*)(float*)UnBox(L_98, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_0208;
		}
	}
	{
		uint16_t L_104 = ___0_left;
		uint16_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_105);
		uint16_t L_107 = ___1_right;
		uint16_t L_108 = L_107;
		RuntimeObject* L_109 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_108);
		return (bool)((((double)((*(double*)((double*)(double*)UnBox(L_106, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))) == ((double)((*(double*)((double*)(double*)UnBox(L_109, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0208:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_110 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_110, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_110, method);
	}
}
