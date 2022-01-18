#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<MathNet.Numerics.Complex32>
struct DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF;
// MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<System.Double>
struct DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A;
// MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<System.Single>
struct DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD;
// System.Func`2<MathNet.Numerics.Complex32,MathNet.Numerics.Complex32>
struct Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF;
// System.Func`2<System.Double,System.Double>
struct Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857;
// System.Func`2<System.Single,System.Single>
struct Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149;
// System.Collections.Generic.IEnumerable`1<System.Numerics.Complex>
struct IEnumerable_1_tF17C4423FA7D07F70471E2AEEE9159E571790D8E;
// System.Collections.Generic.IEnumerable`1<MathNet.Numerics.Complex32>
struct IEnumerable_1_t4B2D427AF9CB02627FF79789762E27659F959C7F;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t4DFA5CB8F95829BAC3B2C5251EA018F27F9EFCB2;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>
struct MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304;
// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>
struct MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0;
// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>
struct MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106;
// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>
struct SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204;
// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>
struct SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83;
// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>
struct SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305;
// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>
struct SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828;
// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>
struct SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942;
// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>
struct SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A;
// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>
struct SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D;
// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>
struct VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C;
// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>
struct VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C;
// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>
struct VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22;
// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>
struct VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Numerics.Complex[]
struct ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5;
// MathNet.Numerics.Complex32[]
struct Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral773E15CBF4C1429363B537638F241A5DA2092F74;
IL2CPP_EXTERN_C String_t* _stringLiteral9815A9500AB457D45B58664314E25D1047D857A8;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparseCompressedRowMatrixStorage_1_At_m10F1A5DD7B1F9AAE4AFC3E156DA3E6A7E63B2072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparseCompressedRowMatrixStorage_1_At_m481E8E9C512590CE71C1144728F49E350C3F75E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparseCompressedRowMatrixStorage_1_At_mC8DC3080AEB2FBB515AD416543374E7F66FDE625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparseVectorStorage_1_CopyToUnchecked_m19A330536BDB4546B7AE1A15FB494FC84B9C87BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparseVectorStorage_1_CopyToUnchecked_mA3687633199BF7E15AD3CC512C33AAFC33202E09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparseVectorStorage_1_CopyToUnchecked_mAEC013CC8674F9F9DA5C3C48C9E315033656889C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparseVectorStorage_1_CopyToUnchecked_mB70B8D4831483F8B76FF1369615F030E84951315_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5;
struct Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c<MathNet.Numerics.Complex32>
struct U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9_StaticFields
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c<T> MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c::<>9
	U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9 * ___U3CU3E9_0;
	// System.Func`2<T,T> MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c::<>9__19_0
	Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c<System.Double>
struct U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062_StaticFields
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c<T> MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c::<>9
	U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062 * ___U3CU3E9_0;
	// System.Func`2<T,T> MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c::<>9__19_0
	Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c<System.Single>
struct U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF_StaticFields
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c<T> MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c::<>9
	U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF * ___U3CU3E9_0;
	// System.Func`2<T,T> MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1/<>c::<>9__19_0
	Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27<System.Double>
struct U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>2__current
	double ___U3CU3E2__current_1;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T> MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>4__this
	SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * ___U3CU3E4__this_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<k>5__2
	int32_t ___U3CkU3E5__2_4;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82, ___U3CU3E2__current_1)); }
	inline double get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline double* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(double value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82, ___U3CU3E4__this_3)); }
	inline SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CkU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82, ___U3CkU3E5__2_4)); }
	inline int32_t get_U3CkU3E5__2_4() const { return ___U3CkU3E5__2_4; }
	inline int32_t* get_address_of_U3CkU3E5__2_4() { return &___U3CkU3E5__2_4; }
	inline void set_U3CkU3E5__2_4(int32_t value)
	{
		___U3CkU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27<System.Single>
struct U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>2__current
	float ___U3CU3E2__current_1;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T> MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>4__this
	SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * ___U3CU3E4__this_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<k>5__2
	int32_t ___U3CkU3E5__2_4;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A, ___U3CU3E2__current_1)); }
	inline float get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline float* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(float value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A, ___U3CU3E4__this_3)); }
	inline SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CkU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A, ___U3CkU3E5__2_4)); }
	inline int32_t get_U3CkU3E5__2_4() const { return ___U3CkU3E5__2_4; }
	inline int32_t* get_address_of_U3CkU3E5__2_4() { return &___U3CkU3E5__2_4; }
	inline void set_U3CkU3E5__2_4(int32_t value)
	{
		___U3CkU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// System.Collections.Generic.List`1<MathNet.Numerics.Complex32>
struct List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5, ____items_1)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get__items_1() const { return ____items_1; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5_StaticFields, ____emptyArray_5)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Double>
struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____items_1)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__items_1() const { return ____items_1; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields, ____emptyArray_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>
struct MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::RowCount
	int32_t ___RowCount_1;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::ColumnCount
	int32_t ___ColumnCount_2;

public:
	inline static int32_t get_offset_of_RowCount_1() { return static_cast<int32_t>(offsetof(MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0, ___RowCount_1)); }
	inline int32_t get_RowCount_1() const { return ___RowCount_1; }
	inline int32_t* get_address_of_RowCount_1() { return &___RowCount_1; }
	inline void set_RowCount_1(int32_t value)
	{
		___RowCount_1 = value;
	}

	inline static int32_t get_offset_of_ColumnCount_2() { return static_cast<int32_t>(offsetof(MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0, ___ColumnCount_2)); }
	inline int32_t get_ColumnCount_2() const { return ___ColumnCount_2; }
	inline int32_t* get_address_of_ColumnCount_2() { return &___ColumnCount_2; }
	inline void set_ColumnCount_2(int32_t value)
	{
		___ColumnCount_2 = value;
	}
};

struct MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::Zero
	double ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields, ___Zero_0)); }
	inline double get_Zero_0() const { return ___Zero_0; }
	inline double* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(double value)
	{
		___Zero_0 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>
struct MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::RowCount
	int32_t ___RowCount_1;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::ColumnCount
	int32_t ___ColumnCount_2;

public:
	inline static int32_t get_offset_of_RowCount_1() { return static_cast<int32_t>(offsetof(MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106, ___RowCount_1)); }
	inline int32_t get_RowCount_1() const { return ___RowCount_1; }
	inline int32_t* get_address_of_RowCount_1() { return &___RowCount_1; }
	inline void set_RowCount_1(int32_t value)
	{
		___RowCount_1 = value;
	}

	inline static int32_t get_offset_of_ColumnCount_2() { return static_cast<int32_t>(offsetof(MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106, ___ColumnCount_2)); }
	inline int32_t get_ColumnCount_2() const { return ___ColumnCount_2; }
	inline int32_t* get_address_of_ColumnCount_2() { return &___ColumnCount_2; }
	inline void set_ColumnCount_2(int32_t value)
	{
		___ColumnCount_2 = value;
	}
};

struct MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::Zero
	float ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields, ___Zero_0)); }
	inline float get_Zero_0() const { return ___Zero_0; }
	inline float* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(float value)
	{
		___Zero_0 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>
struct VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1::Length
	int32_t ___Length_1;

public:
	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}
};

struct VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1::Zero
	double ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22_StaticFields, ___Zero_0)); }
	inline double get_Zero_0() const { return ___Zero_0; }
	inline double* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(double value)
	{
		___Zero_0 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>
struct VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1::Length
	int32_t ___Length_1;

public:
	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}
};

struct VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1::Zero
	float ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286_StaticFields, ___Zero_0)); }
	inline float get_Zero_0() const { return ___Zero_0; }
	inline float* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(float value)
	{
		___Zero_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<System.Double>
struct DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A  : public MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0
{
public:
	// T[] MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1::Data
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___Data_3;

public:
	inline static int32_t get_offset_of_Data_3() { return static_cast<int32_t>(offsetof(DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A, ___Data_3)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_Data_3() const { return ___Data_3; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_Data_3() { return &___Data_3; }
	inline void set_Data_3(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___Data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_3), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<System.Single>
struct DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD  : public MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106
{
public:
	// T[] MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1::Data
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Data_3;

public:
	inline static int32_t get_offset_of_Data_3() { return static_cast<int32_t>(offsetof(DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD, ___Data_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Data_3() const { return ___Data_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Data_3() { return &___Data_3; }
	inline void set_Data_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_3), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>
struct SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83  : public MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0
{
public:
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1::RowPointers
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___RowPointers_3;
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1::ColumnIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ColumnIndices_4;
	// T[] MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1::Values
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___Values_5;

public:
	inline static int32_t get_offset_of_RowPointers_3() { return static_cast<int32_t>(offsetof(SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83, ___RowPointers_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_RowPointers_3() const { return ___RowPointers_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_RowPointers_3() { return &___RowPointers_3; }
	inline void set_RowPointers_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___RowPointers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RowPointers_3), (void*)value);
	}

	inline static int32_t get_offset_of_ColumnIndices_4() { return static_cast<int32_t>(offsetof(SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83, ___ColumnIndices_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ColumnIndices_4() const { return ___ColumnIndices_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ColumnIndices_4() { return &___ColumnIndices_4; }
	inline void set_ColumnIndices_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ColumnIndices_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnIndices_4), (void*)value);
	}

	inline static int32_t get_offset_of_Values_5() { return static_cast<int32_t>(offsetof(SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83, ___Values_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_Values_5() const { return ___Values_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_Values_5() { return &___Values_5; }
	inline void set_Values_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___Values_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_5), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>
struct SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305  : public MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106
{
public:
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1::RowPointers
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___RowPointers_3;
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1::ColumnIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ColumnIndices_4;
	// T[] MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1::Values
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Values_5;

public:
	inline static int32_t get_offset_of_RowPointers_3() { return static_cast<int32_t>(offsetof(SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305, ___RowPointers_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_RowPointers_3() const { return ___RowPointers_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_RowPointers_3() { return &___RowPointers_3; }
	inline void set_RowPointers_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___RowPointers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RowPointers_3), (void*)value);
	}

	inline static int32_t get_offset_of_ColumnIndices_4() { return static_cast<int32_t>(offsetof(SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305, ___ColumnIndices_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ColumnIndices_4() const { return ___ColumnIndices_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ColumnIndices_4() { return &___ColumnIndices_4; }
	inline void set_ColumnIndices_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ColumnIndices_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnIndices_4), (void*)value);
	}

	inline static int32_t get_offset_of_Values_5() { return static_cast<int32_t>(offsetof(SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305, ___Values_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Values_5() const { return ___Values_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Values_5() { return &___Values_5; }
	inline void set_Values_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Values_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_5), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>
struct SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A  : public VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22
{
public:
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::Indices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Indices_2;
	// T[] MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::Values
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___Values_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::ValueCount
	int32_t ___ValueCount_4;

public:
	inline static int32_t get_offset_of_Indices_2() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A, ___Indices_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Indices_2() const { return ___Indices_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Indices_2() { return &___Indices_2; }
	inline void set_Indices_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Indices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Indices_2), (void*)value);
	}

	inline static int32_t get_offset_of_Values_3() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A, ___Values_3)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_Values_3() const { return ___Values_3; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_Values_3() { return &___Values_3; }
	inline void set_Values_3(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___Values_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_3), (void*)value);
	}

	inline static int32_t get_offset_of_ValueCount_4() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A, ___ValueCount_4)); }
	inline int32_t get_ValueCount_4() const { return ___ValueCount_4; }
	inline int32_t* get_address_of_ValueCount_4() { return &___ValueCount_4; }
	inline void set_ValueCount_4(int32_t value)
	{
		___ValueCount_4 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>
struct SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D  : public VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286
{
public:
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::Indices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Indices_2;
	// T[] MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::Values
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Values_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::ValueCount
	int32_t ___ValueCount_4;

public:
	inline static int32_t get_offset_of_Indices_2() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D, ___Indices_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Indices_2() const { return ___Indices_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Indices_2() { return &___Indices_2; }
	inline void set_Indices_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Indices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Indices_2), (void*)value);
	}

	inline static int32_t get_offset_of_Values_3() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D, ___Values_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Values_3() const { return ___Values_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Values_3() { return &___Values_3; }
	inline void set_Values_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Values_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_3), (void*)value);
	}

	inline static int32_t get_offset_of_ValueCount_4() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D, ___ValueCount_4)); }
	inline int32_t get_ValueCount_4() const { return ___ValueCount_4; }
	inline int32_t* get_address_of_ValueCount_4() { return &___ValueCount_4; }
	inline void set_ValueCount_4(int32_t value)
	{
		___ValueCount_4 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Numerics.Complex
struct Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C 
{
public:
	// System.Double System.Numerics.Complex::m_real
	double ___m_real_6;
	// System.Double System.Numerics.Complex::m_imaginary
	double ___m_imaginary_7;

public:
	inline static int32_t get_offset_of_m_real_6() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C, ___m_real_6)); }
	inline double get_m_real_6() const { return ___m_real_6; }
	inline double* get_address_of_m_real_6() { return &___m_real_6; }
	inline void set_m_real_6(double value)
	{
		___m_real_6 = value;
	}

	inline static int32_t get_offset_of_m_imaginary_7() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C, ___m_imaginary_7)); }
	inline double get_m_imaginary_7() const { return ___m_imaginary_7; }
	inline double* get_address_of_m_imaginary_7() { return &___m_imaginary_7; }
	inline void set_m_imaginary_7(double value)
	{
		___m_imaginary_7 = value;
	}
};

struct Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields
{
public:
	// System.Numerics.Complex System.Numerics.Complex::Zero
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___Zero_0;
	// System.Numerics.Complex System.Numerics.Complex::One
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___One_1;
	// System.Numerics.Complex System.Numerics.Complex::ImaginaryOne
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___ImaginaryOne_2;
	// System.Double System.Numerics.Complex::s_sqrtRescaleThreshold
	double ___s_sqrtRescaleThreshold_3;
	// System.Double System.Numerics.Complex::s_asinOverflowThreshold
	double ___s_asinOverflowThreshold_4;
	// System.Double System.Numerics.Complex::s_log2
	double ___s_log2_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___Zero_0)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_Zero_0() const { return ___Zero_0; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_One_1() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___One_1)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_One_1() const { return ___One_1; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_One_1() { return &___One_1; }
	inline void set_One_1(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___One_1 = value;
	}

	inline static int32_t get_offset_of_ImaginaryOne_2() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___ImaginaryOne_2)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_ImaginaryOne_2() const { return ___ImaginaryOne_2; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_ImaginaryOne_2() { return &___ImaginaryOne_2; }
	inline void set_ImaginaryOne_2(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___ImaginaryOne_2 = value;
	}

	inline static int32_t get_offset_of_s_sqrtRescaleThreshold_3() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___s_sqrtRescaleThreshold_3)); }
	inline double get_s_sqrtRescaleThreshold_3() const { return ___s_sqrtRescaleThreshold_3; }
	inline double* get_address_of_s_sqrtRescaleThreshold_3() { return &___s_sqrtRescaleThreshold_3; }
	inline void set_s_sqrtRescaleThreshold_3(double value)
	{
		___s_sqrtRescaleThreshold_3 = value;
	}

	inline static int32_t get_offset_of_s_asinOverflowThreshold_4() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___s_asinOverflowThreshold_4)); }
	inline double get_s_asinOverflowThreshold_4() const { return ___s_asinOverflowThreshold_4; }
	inline double* get_address_of_s_asinOverflowThreshold_4() { return &___s_asinOverflowThreshold_4; }
	inline void set_s_asinOverflowThreshold_4(double value)
	{
		___s_asinOverflowThreshold_4 = value;
	}

	inline static int32_t get_offset_of_s_log2_5() { return static_cast<int32_t>(offsetof(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields, ___s_log2_5)); }
	inline double get_s_log2_5() const { return ___s_log2_5; }
	inline double* get_address_of_s_log2_5() { return &___s_log2_5; }
	inline void set_s_log2_5(double value)
	{
		___s_log2_5 = value;
	}
};


// MathNet.Numerics.Complex32
struct Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 
{
public:
	// System.Single MathNet.Numerics.Complex32::_real
	float ____real_0;
	// System.Single MathNet.Numerics.Complex32::_imag
	float ____imag_1;

public:
	inline static int32_t get_offset_of__real_0() { return static_cast<int32_t>(offsetof(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894, ____real_0)); }
	inline float get__real_0() const { return ____real_0; }
	inline float* get_address_of__real_0() { return &____real_0; }
	inline void set__real_0(float value)
	{
		____real_0 = value;
	}

	inline static int32_t get_offset_of__imag_1() { return static_cast<int32_t>(offsetof(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894, ____imag_1)); }
	inline float get__imag_1() const { return ____imag_1; }
	inline float* get_address_of__imag_1() { return &____imag_1; }
	inline void set__imag_1(float value)
	{
		____imag_1 = value;
	}
};

struct Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields
{
public:
	// MathNet.Numerics.Complex32 MathNet.Numerics.Complex32::Zero
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___Zero_2;
	// MathNet.Numerics.Complex32 MathNet.Numerics.Complex32::One
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___One_3;
	// MathNet.Numerics.Complex32 MathNet.Numerics.Complex32::ImaginaryOne
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___ImaginaryOne_4;
	// MathNet.Numerics.Complex32 MathNet.Numerics.Complex32::PositiveInfinity
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___PositiveInfinity_5;
	// MathNet.Numerics.Complex32 MathNet.Numerics.Complex32::NaN
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___NaN_6;

public:
	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields, ___Zero_2)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_Zero_2() const { return ___Zero_2; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___Zero_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields, ___One_3)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_One_3() const { return ___One_3; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_ImaginaryOne_4() { return static_cast<int32_t>(offsetof(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields, ___ImaginaryOne_4)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_ImaginaryOne_4() const { return ___ImaginaryOne_4; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_ImaginaryOne_4() { return &___ImaginaryOne_4; }
	inline void set_ImaginaryOne_4(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___ImaginaryOne_4 = value;
	}

	inline static int32_t get_offset_of_PositiveInfinity_5() { return static_cast<int32_t>(offsetof(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields, ___PositiveInfinity_5)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_PositiveInfinity_5() const { return ___PositiveInfinity_5; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_PositiveInfinity_5() { return &___PositiveInfinity_5; }
	inline void set_PositiveInfinity_5(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___PositiveInfinity_5 = value;
	}

	inline static int32_t get_offset_of_NaN_6() { return static_cast<int32_t>(offsetof(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields, ___NaN_6)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_NaN_6() const { return ___NaN_6; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_NaN_6() { return &___NaN_6; }
	inline void set_NaN_6(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___NaN_6 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27<System.Numerics.Complex>
struct U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>2__current
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___U3CU3E2__current_1;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T> MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>4__this
	SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * ___U3CU3E4__this_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<k>5__2
	int32_t ___U3CkU3E5__2_4;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3, ___U3CU3E2__current_1)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3, ___U3CU3E4__this_3)); }
	inline SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CkU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3, ___U3CkU3E5__2_4)); }
	inline int32_t get_U3CkU3E5__2_4() const { return ___U3CkU3E5__2_4; }
	inline int32_t* get_address_of_U3CkU3E5__2_4() { return &___U3CkU3E5__2_4; }
	inline void set_U3CkU3E5__2_4(int32_t value)
	{
		___U3CkU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27<MathNet.Numerics.Complex32>
struct U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>2__current
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___U3CU3E2__current_1;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T> MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<>4__this
	SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * ___U3CU3E4__this_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<k>5__2
	int32_t ___U3CkU3E5__2_4;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1/<Enumerate>d__27::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13, ___U3CU3E2__current_1)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13, ___U3CU3E4__this_3)); }
	inline SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CkU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13, ___U3CkU3E5__2_4)); }
	inline int32_t get_U3CkU3E5__2_4() const { return ___U3CkU3E5__2_4; }
	inline int32_t* get_address_of_U3CkU3E5__2_4() { return &___U3CkU3E5__2_4; }
	inline void set_U3CkU3E5__2_4(int32_t value)
	{
		___U3CkU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>
struct MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::RowCount
	int32_t ___RowCount_1;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::ColumnCount
	int32_t ___ColumnCount_2;

public:
	inline static int32_t get_offset_of_RowCount_1() { return static_cast<int32_t>(offsetof(MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304, ___RowCount_1)); }
	inline int32_t get_RowCount_1() const { return ___RowCount_1; }
	inline int32_t* get_address_of_RowCount_1() { return &___RowCount_1; }
	inline void set_RowCount_1(int32_t value)
	{
		___RowCount_1 = value;
	}

	inline static int32_t get_offset_of_ColumnCount_2() { return static_cast<int32_t>(offsetof(MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304, ___ColumnCount_2)); }
	inline int32_t get_ColumnCount_2() const { return ___ColumnCount_2; }
	inline int32_t* get_address_of_ColumnCount_2() { return &___ColumnCount_2; }
	inline void set_ColumnCount_2(int32_t value)
	{
		___ColumnCount_2 = value;
	}
};

struct MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::Zero
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields, ___Zero_0)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_Zero_0() const { return ___Zero_0; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___Zero_0 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>
struct VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1::Length
	int32_t ___Length_1;

public:
	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}
};

struct VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1::Zero
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C_StaticFields, ___Zero_0)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_Zero_0() const { return ___Zero_0; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___Zero_0 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>
struct VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1::Length
	int32_t ___Length_1;

public:
	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}
};

struct VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1::Zero
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C_StaticFields, ___Zero_0)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_Zero_0() const { return ___Zero_0; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___Zero_0 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// MathNet.Numerics.LinearAlgebra.ExistingData
struct ExistingData_t24BF6A2DD09189B76B7AC8AF4D232E4451299C0B 
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.ExistingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExistingData_t24BF6A2DD09189B76B7AC8AF4D232E4451299C0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Zeros
struct Zeros_t2093AC7F5FE1F3EBDE512DFFA991C84F9BEC0231 
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Zeros::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Zeros_t2093AC7F5FE1F3EBDE512DFFA991C84F9BEC0231, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<MathNet.Numerics.Complex32>
struct DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF  : public MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304
{
public:
	// T[] MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1::Data
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___Data_3;

public:
	inline static int32_t get_offset_of_Data_3() { return static_cast<int32_t>(offsetof(DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF, ___Data_3)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get_Data_3() const { return ___Data_3; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of_Data_3() { return &___Data_3; }
	inline void set_Data_3(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		___Data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_3), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>
struct SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204  : public MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304
{
public:
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1::RowPointers
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___RowPointers_3;
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1::ColumnIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ColumnIndices_4;
	// T[] MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1::Values
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___Values_5;

public:
	inline static int32_t get_offset_of_RowPointers_3() { return static_cast<int32_t>(offsetof(SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204, ___RowPointers_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_RowPointers_3() const { return ___RowPointers_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_RowPointers_3() { return &___RowPointers_3; }
	inline void set_RowPointers_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___RowPointers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RowPointers_3), (void*)value);
	}

	inline static int32_t get_offset_of_ColumnIndices_4() { return static_cast<int32_t>(offsetof(SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204, ___ColumnIndices_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ColumnIndices_4() const { return ___ColumnIndices_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ColumnIndices_4() { return &___ColumnIndices_4; }
	inline void set_ColumnIndices_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ColumnIndices_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnIndices_4), (void*)value);
	}

	inline static int32_t get_offset_of_Values_5() { return static_cast<int32_t>(offsetof(SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204, ___Values_5)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get_Values_5() const { return ___Values_5; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of_Values_5() { return &___Values_5; }
	inline void set_Values_5(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		___Values_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_5), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>
struct SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828  : public VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C
{
public:
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::Indices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Indices_2;
	// T[] MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::Values
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ___Values_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::ValueCount
	int32_t ___ValueCount_4;

public:
	inline static int32_t get_offset_of_Indices_2() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828, ___Indices_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Indices_2() const { return ___Indices_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Indices_2() { return &___Indices_2; }
	inline void set_Indices_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Indices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Indices_2), (void*)value);
	}

	inline static int32_t get_offset_of_Values_3() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828, ___Values_3)); }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* get_Values_3() const { return ___Values_3; }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** get_address_of_Values_3() { return &___Values_3; }
	inline void set_Values_3(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		___Values_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_3), (void*)value);
	}

	inline static int32_t get_offset_of_ValueCount_4() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828, ___ValueCount_4)); }
	inline int32_t get_ValueCount_4() const { return ___ValueCount_4; }
	inline int32_t* get_address_of_ValueCount_4() { return &___ValueCount_4; }
	inline void set_ValueCount_4(int32_t value)
	{
		___ValueCount_4 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>
struct SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942  : public VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C
{
public:
	// System.Int32[] MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::Indices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Indices_2;
	// T[] MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::Values
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___Values_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1::ValueCount
	int32_t ___ValueCount_4;

public:
	inline static int32_t get_offset_of_Indices_2() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942, ___Indices_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Indices_2() const { return ___Indices_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Indices_2() { return &___Indices_2; }
	inline void set_Indices_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Indices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Indices_2), (void*)value);
	}

	inline static int32_t get_offset_of_Values_3() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942, ___Values_3)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get_Values_3() const { return ___Values_3; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of_Values_3() { return &___Values_3; }
	inline void set_Values_3(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		___Values_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_3), (void*)value);
	}

	inline static int32_t get_offset_of_ValueCount_4() { return static_cast<int32_t>(offsetof(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942, ___ValueCount_4)); }
	inline int32_t get_ValueCount_4() const { return ___ValueCount_4; }
	inline int32_t* get_address_of_ValueCount_4() { return &___ValueCount_4; }
	inline void set_ValueCount_4(int32_t value)
	{
		___ValueCount_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Func`2<MathNet.Numerics.Complex32,MathNet.Numerics.Complex32>
struct Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Double,System.Double>
struct Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Single,System.Single>
struct Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// MathNet.Numerics.Complex32[]
struct Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  m_Items[1];

public:
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Numerics.Complex[]
struct ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  m_Items[1];

public:
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_gshared (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Int32 System.Array::BinarySearch<System.Int32>(!!0[],System.Int32,System.Int32,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_gshared (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___index1, int32_t ___length2, int32_t ___value3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);

// System.Boolean MathNet.Numerics.Complex32::Equals(MathNet.Numerics.Complex32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * __this, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___other0, const RuntimeMethod* method);
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_m63E8ED32ABF3637E5BE49943F6760922C2876087 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
inline void Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Int32 System.Array::BinarySearch<System.Int32>(!!0[],System.Int32,System.Int32,!!0)
inline int32_t Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___index1, int32_t ___length2, int32_t ___value3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_gshared)(___array0, ___index1, ___length2, ___value3, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 MathNet.Numerics.Complex32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Complex32_GetHashCode_m05D0B1698B014D3EA811AF14CA3D30B35F6567F7 (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * __this, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared)(__this, method);
}
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B (double* __this, double ___obj0, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39 (double* __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Boolean System.Numerics.Complex::Equals(System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_m4303E6572230C3368EEFFE54A5F3B3E067318F2D (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * __this, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___value0, const RuntimeMethod* method);
// System.Int32 System.Numerics.Complex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Complex_GetHashCode_mBAC61B12E34E786C0E95BB8CB48D7819976D9A35 (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::get_ValueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_get_ValueCount_m6F6D9F8BF4A0D377AEF8EB0769A296FE216851FB_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_1 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (int32_t)L_3;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1__ctor_m411E6ECCBF2924D1279572C0B6C96207855A54BD_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___rows0;
		int32_t L_1 = ___columns1;
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_2 = ___rows0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		__this->set_RowPointers_3(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_ColumnIndices_4(L_4);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_5 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)0);
		__this->set_Values_5(L_5);
		return;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::get_IsDense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseCompressedRowMatrixStorage_1_get_IsDense_m24DF2061C45135C6DBCCBD15BFF10F500ADC0DC1_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// T MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  SparseCompressedRowMatrixStorage_1_At_mD34F3C2AF4B6EFA59E65D490B60D0DD4012B252D_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_4 = ((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		return (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_4;
	}

IL_0013:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_5 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_8;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_At_m10F1A5DD7B1F9AAE4AFC3E156DA3E6A7E63B2072_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, int32_t ___row0, int32_t ___column1, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_4 = ((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_4;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_5 = ___value2;
		bool L_6;
		L_6 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&V_1), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___row0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return;
	}

IL_002c:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_9 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_10 = V_0;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_11 = ___value2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_11);
		return;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_12 = ((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_12;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_13 = ___value2;
		bool L_14;
		L_14 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&V_1), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((~L_15));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_17);
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))), (int32_t)1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = (int32_t)L_19;
		int32_t L_20 = V_2;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_21 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		NullCheck(L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_22 = V_2;
		int32_t L_23 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		int32_t L_24 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_ColumnCount_2();
		if ((((int64_t)((int64_t)((int64_t)L_22))) >= ((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_23)), (int64_t)((int64_t)((int64_t)L_24)))))))
		{
			goto IL_00d7;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_25 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		NullCheck(L_25);
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_26;
		L_26 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_27 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		int32_t L_28 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_ColumnCount_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int64_t L_29;
		L_29 = Math_Min_m63E8ED32ABF3637E5BE49943F6760922C2876087((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))), (int32_t)L_26)))), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_27)), (int64_t)((int64_t)((int64_t)L_28)))), /*hidden argument*/NULL);
		V_3 = (int64_t)L_29;
		int64_t L_30 = V_3;
		if ((((int64_t)L_30) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
		{
			goto IL_00bd;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_31 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_31, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9815A9500AB457D45B58664314E25D1047D857A8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparseCompressedRowMatrixStorage_1_At_m10F1A5DD7B1F9AAE4AFC3E156DA3E6A7E63B2072_RuntimeMethod_var)));
	}

IL_00bd:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** L_32 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)__this->get_address_of_Values_5();
		int64_t L_33 = V_3;
		((  void (*) (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)L_32, (int32_t)((int32_t)((int32_t)L_33)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int64_t L_35 = V_3;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_34, (int32_t)((int32_t)((int32_t)L_35)), /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_00d7:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_36 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_37 = V_0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_38 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_39 = V_0;
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_36, (int32_t)L_37, (RuntimeArray *)(RuntimeArray *)L_38, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_41)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_43 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_45 = V_0;
		int32_t L_46 = V_2;
		int32_t L_47 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_42, (int32_t)L_43, (RuntimeArray *)(RuntimeArray *)L_44, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), /*hidden argument*/NULL);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_48 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_49 = V_0;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_50 = ___value2;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_50);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_52 = V_0;
		int32_t L_53 = ___column1;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int32_t)L_53);
		int32_t L_54 = ___row0;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		goto IL_013c;
	}

IL_0124:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t* L_57 = (int32_t*)((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)));
		int32_t L_58 = *((int32_t*)L_57);
		*((int32_t*)L_57) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_013c:
	{
		int32_t L_60 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length))))))
		{
			goto IL_0124;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::RemoveAtIndexUnchecked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_RemoveAtIndexUnchecked_mA0557E7B17934CDF80823D1410BB2553557C9CC1_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, int32_t ___itemIndex0, int32_t ___row1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (int32_t)L_3;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_4 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_5 = ___itemIndex0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_6 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_7 = ___itemIndex0;
		int32_t L_8 = V_0;
		int32_t L_9 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_6, (int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_11 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_13 = ___itemIndex0;
		int32_t L_14 = V_0;
		int32_t L_15 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_10, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_12, (int32_t)L_13, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_16 = ___row1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		goto IL_0061;
	}

IL_004c:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_22 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_26 = V_0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_27 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		NullCheck(L_27);
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))/(int32_t)2)))))
		{
			goto IL_009d;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** L_28 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)__this->get_address_of_Values_5();
		int32_t L_29 = V_0;
		((  void (*) (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)L_28, (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int32_t L_31 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_30, (int32_t)L_31, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_009d:
	{
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::FindItem(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_FindItem_mB72849205B54D463643589750644DF4A5C0F7923_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_2 = ___row0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_6 = ___row0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_10 = ___row0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = ___column1;
		int32_t L_14;
		L_14 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_12)), (int32_t)L_13, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		return (int32_t)L_14;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::GrowthSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_GrowthSize_m99EED9A38C57C9F83346C740D9DCADA80E4892F8_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_0 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_1 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		NullCheck(L_1);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))/(int32_t)4));
		goto IL_0049;
	}

IL_001c:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_2 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (int32_t)((int32_t)512);
		goto IL_0049;
	}

IL_0033:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_3 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) > ((int32_t)((int32_t)64))))
		{
			goto IL_0043;
		}
	}
	{
		G_B7_0 = ((int32_t)32);
		goto IL_0048;
	}

IL_0043:
	{
		G_B7_0 = ((int32_t)128);
	}

IL_0048:
	{
		V_0 = (int32_t)G_B7_0;
	}

IL_0049:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_Normalize_m64035A39ED89B7D0148DEC0834CC6FCFDA694D88_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::NormalizeOrdering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_NormalizeOrdering_mB9BD45EC8DEC491E1A546B90E5858DC231D30D96_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0036;
	}

IL_0004:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = (int32_t)L_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_11 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		((  void (*) (RuntimeObject*, RuntimeObject*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((RuntimeObject*)(RuntimeObject*)L_10, (RuntimeObject*)(RuntimeObject*)L_11, (int32_t)L_12, (int32_t)L_13, (RuntimeObject*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
	}

IL_0032:
	{
		int32_t L_14 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::NormalizeZeros()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_NormalizeZeros_m7F977ADBFADFBE2D393576AC0F43C27E6768F4E1_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, const RuntimeMethod* method)
{
	Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * G_B2_0 = NULL;
	SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * G_B2_1 = NULL;
	Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * G_B1_0 = NULL;
	SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * L_0 = ((U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13)))->get_U3CU3E9__19_0_1();
		Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * L_1 = (Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_0;
		G_B1_0 = L_1;
		G_B1_1 = ((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)(__this));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = ((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)(__this));
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9 * L_2 = ((U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13)))->get_U3CU3E9_0();
		Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * L_3 = (Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 15));
		((  void (*) (Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)(L_3, (RuntimeObject *)L_2, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * L_4 = (Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_3;
		((U3CU3Ec_t248C4C649D6D9EABF621F1C2B7924E1392DD53C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13)))->set_U3CU3E9__19_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = ((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)(G_B1_1));
	}

IL_0020:
	{
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)G_B2_1);
		VirtActionInvoker2< Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *, int32_t >::Invoke(14 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>::MapInplace(System.Func`2<T,T>,MathNet.Numerics.LinearAlgebra.Zeros) */, (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)G_B2_1, (Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)G_B2_0, (int32_t)0);
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_GetHashCode_m54F912D02A38AA5F402A6DC13AEA32981FBFC83F_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_0 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		V_0 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)L_1, (int32_t)((int32_t)25), /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		V_2 = (int32_t)((int32_t)17);
		V_3 = (int32_t)0;
		goto IL_003a;
	}

IL_001c:
	{
		int32_t L_3 = V_2;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Complex32_GetHashCode_m05D0B1698B014D3EA811AF14CA3D30B35F6567F7((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)31))), (int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_10 = V_2;
		return (int32_t)L_10;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_Clear_mD9AA34500C439FA58F2E78D356F5C93E557BCF07_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_1);
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_0, (int32_t)0, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::ClearUnchecked(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_ClearUnchecked_mC662739E2CD87BF32D85455C3A211C8FD66BF75A_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, int32_t ___rowIndex0, int32_t ___rowCount1, int32_t ___columnIndex2, int32_t ___columnCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = ___rowIndex0;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___columnIndex2;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___rowCount1;
		int32_t L_3 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___columnCount3;
		int32_t L_5 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_ColumnCount_2();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0020;
		}
	}
	{
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>::Clear() */, (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this);
		return;
	}

IL_0020:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_7);
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)1));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = (int32_t)L_9;
		int32_t L_10 = ___rowIndex0;
		int32_t L_11 = ___rowCount1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), (int32_t)1));
		goto IL_0118;
	}

IL_003d:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = (int32_t)L_15;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = (int32_t)L_19;
		int32_t L_20 = V_2;
		int32_t L_21 = V_3;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0114;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		int32_t L_26 = ___columnIndex2;
		int32_t L_27;
		L_27 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_22, (int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), (int32_t)L_26, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_4 = (int32_t)L_27;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		int32_t L_32 = ___columnIndex2;
		int32_t L_33 = ___columnCount3;
		int32_t L_34;
		L_34 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_28, (int32_t)L_29, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_5 = (int32_t)L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_36 = V_4;
		V_4 = (int32_t)((~L_36));
	}

IL_008b:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_38 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_38)), (int32_t)1));
	}

IL_0097:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_4;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)), (int32_t)1));
		int32_t L_41 = V_6;
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_0114;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_42 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_43 = V_4;
		int32_t L_44 = V_6;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_45 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_46 = V_4;
		int32_t L_47 = V_0;
		int32_t L_48 = V_4;
		int32_t L_49 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_42, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (RuntimeArray *)(RuntimeArray *)L_45, (int32_t)L_46, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_48)), (int32_t)L_49)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_51 = V_4;
		int32_t L_52 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_54 = V_4;
		int32_t L_55 = V_0;
		int32_t L_56 = V_4;
		int32_t L_57 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_50, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52)), (RuntimeArray *)(RuntimeArray *)L_53, (int32_t)L_54, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)L_56)), (int32_t)L_57)), /*hidden argument*/NULL);
		int32_t L_58 = V_1;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		goto IL_0103;
	}

IL_00ea:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_60 = V_7;
		NullCheck(L_59);
		int32_t* L_61 = (int32_t*)((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)));
		int32_t L_62 = *((int32_t*)L_61);
		int32_t L_63 = V_6;
		*((int32_t*)L_61) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)L_63));
		int32_t L_64 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0103:
	{
		int32_t L_65 = V_7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_66 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_67 = V_0;
		int32_t L_68 = V_6;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68));
	}

IL_0114:
	{
		int32_t L_69 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
	}

IL_0118:
	{
		int32_t L_70 = V_1;
		int32_t L_71 = ___rowIndex0;
		if ((((int32_t)L_70) >= ((int32_t)L_71)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_72 = V_0;
		if ((((int32_t)L_72) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_73 = V_0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_74 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		NullCheck(L_74);
		if ((((int32_t)L_73) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))/(int32_t)2)))))
		{
			goto IL_014c;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** L_75 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)__this->get_address_of_Values_5();
		int32_t L_76 = V_0;
		((  void (*) (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)L_75, (int32_t)L_76, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_77 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int32_t L_78 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_77, (int32_t)L_78, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_014c:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_CopyToUnchecked_mA46F75C4D84BDF0B5A0EA840274881A7C3AAF21C_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * V_0 = NULL;
	DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * L_0 = ___target0;
		V_0 = (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20)));
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_2 = V_0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		return;
	}

IL_0012:
	{
		MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * L_3 = ___target0;
		V_1 = (DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF *)((DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22)));
		DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * L_5 = V_1;
		int32_t L_6 = ___existingData1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, (DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23));
		return;
	}

IL_0025:
	{
		int32_t L_7 = ___existingData1;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * L_8 = ___target0;
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_8);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>::Clear() */, (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_8);
	}

IL_002e:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_9;
		L_9 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_007d;
	}

IL_003a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (int32_t)L_17;
		V_4 = (int32_t)L_13;
		goto IL_0074;
	}

IL_0051:
	{
		MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * L_18 = ___target0;
		int32_t L_19 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_24 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_18);
		VirtActionInvoker3< int32_t, int32_t, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_18, (int32_t)L_19, (int32_t)L_23, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_27);
		int32_t L_28 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_003a;
		}
	}

IL_0086:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_CopyToUnchecked_mC3E03FF70F7546E815A8B0318C3CF964A6E537A0_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_0 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_2 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_1);
		NullCheck(L_0);
		L_0->set_Values_5(L_2);
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_3 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_4;
		L_4 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_4);
		NullCheck(L_3);
		L_3->set_ColumnIndices_4(L_5);
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_6;
		L_6 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_7 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_8 = ___target0;
		NullCheck(L_8);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_9 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_8->get_Values_5();
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_10;
		L_10 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_9, (int32_t)0, (int32_t)L_10, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_12 = ___target0;
		NullCheck(L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_12->get_ColumnIndices_4();
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_14;
		L_14 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_11, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_13, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)4)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_16 = ___target0;
		NullCheck(L_16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_16->get_RowPointers_3();
		int32_t L_18 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_15, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_17, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_CopyToUnchecked_m68259483FC2EEE6D1D0068F1DFC42AC548A7D0A4_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___existingData1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * L_1 = ___target0;
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_1);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>::Clear() */, (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_1);
	}

IL_0009:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		V_0 = (int32_t)0;
		goto IL_0052;
	}

IL_0015:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = (int32_t)L_10;
		V_2 = (int32_t)L_6;
		goto IL_004a;
	}

IL_002b:
	{
		DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * L_11 = ___target0;
		int32_t L_12 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_17 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_11);
		VirtActionInvoker3< int32_t, int32_t, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_11, (int32_t)L_12, (int32_t)L_16, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_20);
		int32_t L_21 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_005b:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::TransposeToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_TransposeToUnchecked_mE412E92D246E6A991D44C2A9C527B10B512D4B81_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * V_0 = NULL;
	DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * L_0 = ___target0;
		V_0 = (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20)));
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_2 = V_0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
		return;
	}

IL_0012:
	{
		MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * L_3 = ___target0;
		V_1 = (DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF *)((DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22)));
		DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * L_5 = V_1;
		int32_t L_6 = ___existingData1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, (DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
		return;
	}

IL_0025:
	{
		int32_t L_7 = ___existingData1;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * L_8 = ___target0;
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_8);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>::Clear() */, (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_8);
	}

IL_002e:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_9;
		L_9 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_007d;
	}

IL_003a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (int32_t)L_17;
		V_4 = (int32_t)L_13;
		goto IL_0074;
	}

IL_0051:
	{
		MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 * L_18 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = V_2;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_24 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_18);
		VirtActionInvoker3< int32_t, int32_t, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_18, (int32_t)L_22, (int32_t)L_23, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_27);
		int32_t L_28 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_003a;
		}
	}

IL_0086:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::TransposeToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_TransposeToUnchecked_m27A3751F4757793530EDBB680B518C388DFB7204_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* V_0 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_0 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_2 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_1);
		NullCheck(L_0);
		L_0->set_Values_5(L_2);
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_3 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_4;
		L_4 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_4);
		NullCheck(L_3);
		L_3->set_ColumnIndices_4(L_5);
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_6 = ___target0;
		NullCheck(L_6);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_7 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_6->get_Values_5();
		V_0 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_7;
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_8 = ___target0;
		NullCheck(L_8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_8->get_RowPointers_3();
		V_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_9;
		SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * L_10 = ___target0;
		NullCheck(L_10);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_10->get_ColumnIndices_4();
		V_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_11;
		int32_t L_12 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_ColumnCount_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_13;
		V_5 = (int32_t)0;
		goto IL_0062;
	}

IL_0048:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		int32_t* L_19 = (int32_t*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_22 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_24 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((((int32_t)L_22) < ((int32_t)L_26)))
		{
			goto IL_0048;
		}
	}
	{
		V_4 = (int32_t)0;
		V_6 = (int32_t)0;
		goto IL_0098;
	}

IL_007b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_1;
		int32_t L_28 = V_6;
		int32_t L_29 = V_4;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		int32_t L_30 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = V_3;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_34));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = V_3;
		int32_t L_36 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = V_1;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)L_40);
		int32_t L_41 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_42 = V_6;
		int32_t L_43 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_ColumnCount_2();
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_007b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = V_1;
		int32_t L_45 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_ColumnCount_2();
		int32_t L_46 = V_4;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (int32_t)L_46);
		V_7 = (int32_t)0;
		goto IL_0110;
	}

IL_00b1:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		int32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_8 = (int32_t)L_50;
		goto IL_00fb;
	}

IL_00be:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_53 = V_8;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		int32_t* L_56 = (int32_t*)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)));
		int32_t L_57 = *((int32_t*)L_56);
		V_10 = (int32_t)L_57;
		int32_t L_58 = V_10;
		*((int32_t*)L_56) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_10;
		V_9 = (int32_t)L_59;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = V_2;
		int32_t L_61 = V_9;
		int32_t L_62 = V_7;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (int32_t)L_62);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_63 = V_0;
		int32_t L_64 = V_9;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_65 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_66 = V_8;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_68);
		int32_t L_69 = V_8;
		V_8 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_00fb:
	{
		int32_t L_70 = V_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_72 = V_7;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		int32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		if ((((int32_t)L_70) < ((int32_t)L_74)))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_75 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_0110:
	{
		int32_t L_76 = V_7;
		int32_t L_77 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_00b1;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::TransposeToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_TransposeToUnchecked_mD6FDDD884273F8945EA2FA1A57B314ACFFBA3252_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___existingData1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * L_1 = ___target0;
		NullCheck((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_1);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<MathNet.Numerics.Complex32>::Clear() */, (MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)L_1);
	}

IL_0009:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_2)
		{
			goto IL_006a;
		}
	}
	{
		V_0 = (int32_t)0;
		goto IL_0061;
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_ColumnCount_2();
		V_1 = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = (int32_t)L_12;
		V_3 = (int32_t)L_8;
		goto IL_0059;
	}

IL_0034:
	{
		DenseColumnMajorMatrixStorage_1_tADD248401C8E162FC8FD86C94EF8822447EF04BF * L_13 = ___target0;
		NullCheck(L_13);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_14 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_13->get_Data_3();
		int32_t L_15 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_20 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_19))), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_23);
		int32_t L_24 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0015;
		}
	}

IL_006a:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<MathNet.Numerics.Complex32>::MapInplace(System.Func`2<T,T>,MathNet.Numerics.LinearAlgebra.Zeros)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapInplace_m5FCC26CAB595FABE8B855CA71AB4C748E52684CD_gshared (SparseCompressedRowMatrixStorage_1_t5B8B9EA3F4A71865435974E8D55574A4DA5D8204 * __this, Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * ___f0, int32_t ___zeros1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_2 = NULL;
	List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	{
		int32_t L_0 = ___zeros1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_1 = ((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_0 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_1;
		Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * L_2 = ___f0;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_3 = ((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		NullCheck((Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_2);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_4;
		L_4 = ((  Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  (*) (Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_2, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		bool L_5;
		L_5 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&V_0), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0118;
		}
	}

IL_0027:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		V_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		NullCheck(L_7);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_8 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91(L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		V_2 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_8;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_9 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		NullCheck(L_9);
		List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 * L_10 = (List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 28));
		((  void (*) (List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29)->methodPointer)(L_10, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
		V_3 = (List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)L_10;
		V_4 = (int32_t)0;
		V_5 = (int32_t)0;
		goto IL_00e4;
	}

IL_0055:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = V_1;
		int32_t L_12 = V_5;
		List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 * L_13 = V_3;
		NullCheck((List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)L_13);
		int32_t L_14;
		L_14 = ((  int32_t (*) (List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30)->methodPointer)((List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_14);
		V_6 = (int32_t)0;
		goto IL_00d4;
	}

IL_0064:
	{
		int32_t L_15 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((((int32_t)L_15) >= ((int32_t)L_19)))
		{
			goto IL_0080;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_6;
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_008d;
		}
	}

IL_0080:
	{
		Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * L_25 = ___f0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_26 = ((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		NullCheck((Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_25);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_27;
		L_27 = ((  Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  (*) (Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_25, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		G_B8_0 = L_27;
		goto IL_00a5;
	}

IL_008d:
	{
		Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * L_28 = ___f0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_29 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)L_30;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck((Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_28);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_34;
		L_34 = ((  Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  (*) (Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_28, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		G_B8_0 = L_34;
	}

IL_00a5:
	{
		V_7 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )G_B8_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_35 = ((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_0 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_35;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_36 = V_7;
		bool L_37;
		L_37 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&V_0), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00ce;
		}
	}
	{
		List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 * L_38 = V_3;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_39 = V_7;
		NullCheck((List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)L_38);
		((  void (*) (List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31)->methodPointer)((List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)L_38, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_39, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_40 = V_2;
		int32_t L_41 = V_6;
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_40);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_40, (int32_t)L_41, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_00ce:
	{
		int32_t L_42 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00d4:
	{
		int32_t L_43 = V_6;
		int32_t L_44 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_ColumnCount_2();
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_45 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00e4:
	{
		int32_t L_46 = V_5;
		int32_t L_47 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0055;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_48 = V_2;
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_48);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49;
		L_49 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_48, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		__this->set_ColumnIndices_4(L_49);
		List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 * L_50 = V_3;
		NullCheck((List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)L_50);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_51;
		L_51 = ((  Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* (*) (List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		__this->set_Values_5(L_51);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = V_1;
		int32_t L_53 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 * L_54 = V_3;
		NullCheck((List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)L_54);
		int32_t L_55;
		L_55 = ((  int32_t (*) (List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30)->methodPointer)((List_1_tA8E9836FBCE7599AF334057D7AC97D0F06BA77A5 *)L_54, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_55);
		return;
	}

IL_0118:
	{
		V_8 = (int32_t)0;
		V_9 = (int32_t)0;
		goto IL_01ad;
	}

IL_0123:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_57 = V_9;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_61 = V_9;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_10 = (int32_t)L_63;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_65 = V_9;
		int32_t L_66 = V_8;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (int32_t)L_66);
		V_11 = (int32_t)L_59;
		goto IL_01a1;
	}

IL_0148:
	{
		Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * L_67 = ___f0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_68 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_69 = V_11;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck((Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_67);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_72;
		L_72 = ((  Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  (*) (Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF *)L_67, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_71, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		V_12 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_72;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_73 = ((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_0 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_73;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_74 = V_12;
		bool L_75;
		L_75 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&V_0), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_74, /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_019b;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_76 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_5();
		int32_t L_77 = V_8;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_78 = V_12;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_78);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_80 = V_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_81 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_82 = V_11;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		int32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (int32_t)L_84);
		int32_t L_85 = V_8;
		V_8 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_019b:
	{
		int32_t L_86 = V_11;
		V_11 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_01a1:
	{
		int32_t L_87 = V_11;
		int32_t L_88 = V_10;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_89 = V_9;
		V_9 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_01ad:
	{
		int32_t L_90 = V_9;
		int32_t L_91 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0123;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_92 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int32_t L_93 = V_8;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_92, (int32_t)L_93, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** L_94 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)__this->get_address_of_Values_5();
		int32_t L_95 = V_8;
		((  void (*) (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)L_94, (int32_t)L_95, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_96 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_97 = (int32_t)((MatrixStorage_1_t85F6A7AA01D4787DFA9535A69581E4D8DE87A304 *)__this)->get_RowCount_1();
		int32_t L_98 = V_8;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (int32_t)L_98);
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
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::get_ValueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_get_ValueCount_mF1174F63A7A40BDB5D43734D46CDCE83A7DB0EA0_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_1 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (int32_t)L_3;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1__ctor_mA18B88195AE873BBDFCABF69230D4417148DAFE0_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___rows0;
		int32_t L_1 = ___columns1;
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_2 = ___rows0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		__this->set_RowPointers_3(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_ColumnIndices_4(L_4);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_5 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)0);
		__this->set_Values_5(L_5);
		return;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::get_IsDense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseCompressedRowMatrixStorage_1_get_IsDense_m01661B79FA35661AC1B66D2B5B90EFB8D2B3113D_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// T MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::At(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SparseCompressedRowMatrixStorage_1_At_m479FB5B178D58DC1F097E4942677DDA8D5EAB2F6_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_4 = ((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		return (double)L_4;
	}

IL_0013:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_5 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		double L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return (double)L_8;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::At(System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_At_m481E8E9C512590CE71C1144728F49E350C3F75E1_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, int32_t ___row0, int32_t ___column1, double ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_4 = ((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (double)L_4;
		double L_5 = ___value2;
		bool L_6;
		L_6 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)(&V_1), (double)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___row0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return;
	}

IL_002c:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_9 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_10 = V_0;
		double L_11 = ___value2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (double)L_11);
		return;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_12 = ((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (double)L_12;
		double L_13 = ___value2;
		bool L_14;
		L_14 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)(&V_1), (double)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((~L_15));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_17);
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))), (int32_t)1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = (int32_t)L_19;
		int32_t L_20 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_21 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		NullCheck(L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_22 = V_2;
		int32_t L_23 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		int32_t L_24 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_ColumnCount_2();
		if ((((int64_t)((int64_t)((int64_t)L_22))) >= ((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_23)), (int64_t)((int64_t)((int64_t)L_24)))))))
		{
			goto IL_00d7;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_25 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		NullCheck(L_25);
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_26;
		L_26 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_27 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		int32_t L_28 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_ColumnCount_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int64_t L_29;
		L_29 = Math_Min_m63E8ED32ABF3637E5BE49943F6760922C2876087((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))), (int32_t)L_26)))), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_27)), (int64_t)((int64_t)((int64_t)L_28)))), /*hidden argument*/NULL);
		V_3 = (int64_t)L_29;
		int64_t L_30 = V_3;
		if ((((int64_t)L_30) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
		{
			goto IL_00bd;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_31 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_31, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9815A9500AB457D45B58664314E25D1047D857A8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparseCompressedRowMatrixStorage_1_At_m481E8E9C512590CE71C1144728F49E350C3F75E1_RuntimeMethod_var)));
	}

IL_00bd:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** L_32 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)__this->get_address_of_Values_5();
		int64_t L_33 = V_3;
		((  void (*) (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)L_32, (int32_t)((int32_t)((int32_t)L_33)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int64_t L_35 = V_3;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_34, (int32_t)((int32_t)((int32_t)L_35)), /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_00d7:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_36 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_37 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_38 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_39 = V_0;
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_36, (int32_t)L_37, (RuntimeArray *)(RuntimeArray *)L_38, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_41)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_43 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_45 = V_0;
		int32_t L_46 = V_2;
		int32_t L_47 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_42, (int32_t)L_43, (RuntimeArray *)(RuntimeArray *)L_44, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), /*hidden argument*/NULL);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_48 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_49 = V_0;
		double L_50 = ___value2;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (double)L_50);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_52 = V_0;
		int32_t L_53 = ___column1;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int32_t)L_53);
		int32_t L_54 = ___row0;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		goto IL_013c;
	}

IL_0124:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t* L_57 = (int32_t*)((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)));
		int32_t L_58 = *((int32_t*)L_57);
		*((int32_t*)L_57) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_013c:
	{
		int32_t L_60 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length))))))
		{
			goto IL_0124;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::RemoveAtIndexUnchecked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_RemoveAtIndexUnchecked_m4739095D8C0F2421CF152671BF6B12899E26C9B9_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, int32_t ___itemIndex0, int32_t ___row1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (int32_t)L_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_5 = ___itemIndex0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_6 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_7 = ___itemIndex0;
		int32_t L_8 = V_0;
		int32_t L_9 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_6, (int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_11 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_13 = ___itemIndex0;
		int32_t L_14 = V_0;
		int32_t L_15 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_10, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_12, (int32_t)L_13, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_16 = ___row1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		goto IL_0061;
	}

IL_004c:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_22 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_26 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_27 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		NullCheck(L_27);
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))/(int32_t)2)))))
		{
			goto IL_009d;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** L_28 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)__this->get_address_of_Values_5();
		int32_t L_29 = V_0;
		((  void (*) (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)L_28, (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int32_t L_31 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_30, (int32_t)L_31, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_009d:
	{
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::FindItem(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_FindItem_mFF909A14871A98FAC073888065A080C1BC81C715_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_2 = ___row0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_6 = ___row0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_10 = ___row0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = ___column1;
		int32_t L_14;
		L_14 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_12)), (int32_t)L_13, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		return (int32_t)L_14;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::GrowthSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_GrowthSize_mD89D109F0E4461DF546D9BAB5E7C5CAFB6404581_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		NullCheck(L_1);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))/(int32_t)4));
		goto IL_0049;
	}

IL_001c:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (int32_t)((int32_t)512);
		goto IL_0049;
	}

IL_0033:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) > ((int32_t)((int32_t)64))))
		{
			goto IL_0043;
		}
	}
	{
		G_B7_0 = ((int32_t)32);
		goto IL_0048;
	}

IL_0043:
	{
		G_B7_0 = ((int32_t)128);
	}

IL_0048:
	{
		V_0 = (int32_t)G_B7_0;
	}

IL_0049:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_Normalize_mC594DC92CFD28D3CE3E4E42909E9496612CB88DF_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::NormalizeOrdering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_NormalizeOrdering_m63A4B4A0F0D10BF4146547135AE5FD269DFECCAD_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0036;
	}

IL_0004:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = (int32_t)L_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_11 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		((  void (*) (RuntimeObject*, RuntimeObject*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((RuntimeObject*)(RuntimeObject*)L_10, (RuntimeObject*)(RuntimeObject*)L_11, (int32_t)L_12, (int32_t)L_13, (RuntimeObject*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
	}

IL_0032:
	{
		int32_t L_14 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::NormalizeZeros()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_NormalizeZeros_m40002F3A331C8EE584983259FE5E11928B5982ED_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, const RuntimeMethod* method)
{
	Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * G_B2_0 = NULL;
	SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * G_B2_1 = NULL;
	Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * G_B1_0 = NULL;
	SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_0 = ((U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13)))->get_U3CU3E9__19_0_1();
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_1 = (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_0;
		G_B1_0 = L_1;
		G_B1_1 = ((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)(__this));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = ((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)(__this));
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062 * L_2 = ((U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13)))->get_U3CU3E9_0();
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_3 = (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 15));
		((  void (*) (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)(L_3, (RuntimeObject *)L_2, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_4 = (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_3;
		((U3CU3Ec_t5CED5C058BB2A3D49AC9910CE317CC8FBF310062_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13)))->set_U3CU3E9__19_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = ((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)(G_B1_1));
	}

IL_0020:
	{
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)G_B2_1);
		VirtActionInvoker2< Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *, int32_t >::Invoke(14 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>::MapInplace(System.Func`2<T,T>,MathNet.Numerics.LinearAlgebra.Zeros) */, (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)G_B2_1, (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)G_B2_0, (int32_t)0);
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_GetHashCode_mAD28DF2A285E0E3509EE5E50F732D1ADD72FF566_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		V_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)L_1, (int32_t)((int32_t)25), /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		V_2 = (int32_t)((int32_t)17);
		V_3 = (int32_t)0;
		goto IL_003a;
	}

IL_001c:
	{
		int32_t L_3 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(double*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)31))), (int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_10 = V_2;
		return (int32_t)L_10;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_Clear_mB2A1CCBF847FC253DBC434A8CD52DB80584CAE53_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_1);
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_0, (int32_t)0, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::ClearUnchecked(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_ClearUnchecked_m1FD9301E47FD3F4D07B13A6292A9215B678DDFA1_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, int32_t ___rowIndex0, int32_t ___rowCount1, int32_t ___columnIndex2, int32_t ___columnCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = ___rowIndex0;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___columnIndex2;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___rowCount1;
		int32_t L_3 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___columnCount3;
		int32_t L_5 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_ColumnCount_2();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0020;
		}
	}
	{
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>::Clear() */, (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this);
		return;
	}

IL_0020:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_7);
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)1));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = (int32_t)L_9;
		int32_t L_10 = ___rowIndex0;
		int32_t L_11 = ___rowCount1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), (int32_t)1));
		goto IL_0118;
	}

IL_003d:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = (int32_t)L_15;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = (int32_t)L_19;
		int32_t L_20 = V_2;
		int32_t L_21 = V_3;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0114;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		int32_t L_26 = ___columnIndex2;
		int32_t L_27;
		L_27 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_22, (int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), (int32_t)L_26, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_4 = (int32_t)L_27;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		int32_t L_32 = ___columnIndex2;
		int32_t L_33 = ___columnCount3;
		int32_t L_34;
		L_34 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_28, (int32_t)L_29, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_5 = (int32_t)L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_36 = V_4;
		V_4 = (int32_t)((~L_36));
	}

IL_008b:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_38 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_38)), (int32_t)1));
	}

IL_0097:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_4;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)), (int32_t)1));
		int32_t L_41 = V_6;
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_0114;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_42 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_43 = V_4;
		int32_t L_44 = V_6;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_45 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_46 = V_4;
		int32_t L_47 = V_0;
		int32_t L_48 = V_4;
		int32_t L_49 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_42, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (RuntimeArray *)(RuntimeArray *)L_45, (int32_t)L_46, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_48)), (int32_t)L_49)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_51 = V_4;
		int32_t L_52 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_54 = V_4;
		int32_t L_55 = V_0;
		int32_t L_56 = V_4;
		int32_t L_57 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_50, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52)), (RuntimeArray *)(RuntimeArray *)L_53, (int32_t)L_54, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)L_56)), (int32_t)L_57)), /*hidden argument*/NULL);
		int32_t L_58 = V_1;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		goto IL_0103;
	}

IL_00ea:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_60 = V_7;
		NullCheck(L_59);
		int32_t* L_61 = (int32_t*)((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)));
		int32_t L_62 = *((int32_t*)L_61);
		int32_t L_63 = V_6;
		*((int32_t*)L_61) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)L_63));
		int32_t L_64 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0103:
	{
		int32_t L_65 = V_7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_66 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_67 = V_0;
		int32_t L_68 = V_6;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68));
	}

IL_0114:
	{
		int32_t L_69 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
	}

IL_0118:
	{
		int32_t L_70 = V_1;
		int32_t L_71 = ___rowIndex0;
		if ((((int32_t)L_70) >= ((int32_t)L_71)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_72 = V_0;
		if ((((int32_t)L_72) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_73 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_74 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		NullCheck(L_74);
		if ((((int32_t)L_73) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))/(int32_t)2)))))
		{
			goto IL_014c;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** L_75 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)__this->get_address_of_Values_5();
		int32_t L_76 = V_0;
		((  void (*) (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)L_75, (int32_t)L_76, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_77 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int32_t L_78 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_77, (int32_t)L_78, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_014c:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_CopyToUnchecked_m88CA2EB9A62CF0BBBDB7C4395988C664C7F937AD_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * V_0 = NULL;
	DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * L_0 = ___target0;
		V_0 = (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20)));
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_2 = V_0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		return;
	}

IL_0012:
	{
		MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * L_3 = ___target0;
		V_1 = (DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A *)((DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22)));
		DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * L_5 = V_1;
		int32_t L_6 = ___existingData1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, (DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23));
		return;
	}

IL_0025:
	{
		int32_t L_7 = ___existingData1;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * L_8 = ___target0;
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_8);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>::Clear() */, (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_8);
	}

IL_002e:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_9;
		L_9 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_007d;
	}

IL_003a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (int32_t)L_17;
		V_4 = (int32_t)L_13;
		goto IL_0074;
	}

IL_0051:
	{
		MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * L_18 = ___target0;
		int32_t L_19 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		double L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_18);
		VirtActionInvoker3< int32_t, int32_t, double >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_18, (int32_t)L_19, (int32_t)L_23, (double)L_27);
		int32_t L_28 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_003a;
		}
	}

IL_0086:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_CopyToUnchecked_m3F5DEFEEE1E446281473E5EB611998F2C08EDC27_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_0 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_1);
		NullCheck(L_0);
		L_0->set_Values_5(L_2);
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_3 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_4;
		L_4 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_4);
		NullCheck(L_3);
		L_3->set_ColumnIndices_4(L_5);
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_6;
		L_6 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_8 = ___target0;
		NullCheck(L_8);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_9 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_8->get_Values_5();
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_10;
		L_10 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_9, (int32_t)0, (int32_t)L_10, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_12 = ___target0;
		NullCheck(L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_12->get_ColumnIndices_4();
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_14;
		L_14 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_11, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_13, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)4)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_16 = ___target0;
		NullCheck(L_16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_16->get_RowPointers_3();
		int32_t L_18 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_15, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_17, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_CopyToUnchecked_mAD274E933B1093626F4E740F7FBCDD71B34B9C28_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___existingData1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * L_1 = ___target0;
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_1);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>::Clear() */, (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_1);
	}

IL_0009:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		V_0 = (int32_t)0;
		goto IL_0052;
	}

IL_0015:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = (int32_t)L_10;
		V_2 = (int32_t)L_6;
		goto IL_004a;
	}

IL_002b:
	{
		DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * L_11 = ___target0;
		int32_t L_12 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_17 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		double L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_11);
		VirtActionInvoker3< int32_t, int32_t, double >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_11, (int32_t)L_12, (int32_t)L_16, (double)L_20);
		int32_t L_21 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_005b:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::TransposeToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_TransposeToUnchecked_mE3A75E837D79C847CD4C9B2284BF7C7EBF9113AF_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * V_0 = NULL;
	DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * L_0 = ___target0;
		V_0 = (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20)));
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_2 = V_0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
		return;
	}

IL_0012:
	{
		MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * L_3 = ___target0;
		V_1 = (DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A *)((DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22)));
		DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * L_5 = V_1;
		int32_t L_6 = ___existingData1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, (DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
		return;
	}

IL_0025:
	{
		int32_t L_7 = ___existingData1;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * L_8 = ___target0;
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_8);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>::Clear() */, (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_8);
	}

IL_002e:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_9;
		L_9 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_007d;
	}

IL_003a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (int32_t)L_17;
		V_4 = (int32_t)L_13;
		goto IL_0074;
	}

IL_0051:
	{
		MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 * L_18 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		double L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_18);
		VirtActionInvoker3< int32_t, int32_t, double >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_18, (int32_t)L_22, (int32_t)L_23, (double)L_27);
		int32_t L_28 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_003a;
		}
	}

IL_0086:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::TransposeToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_TransposeToUnchecked_m1EB5540AB48E0D80887188EC13FD09C9AE764C87_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_0 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_0 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_1);
		NullCheck(L_0);
		L_0->set_Values_5(L_2);
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_3 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_4;
		L_4 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_4);
		NullCheck(L_3);
		L_3->set_ColumnIndices_4(L_5);
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_6 = ___target0;
		NullCheck(L_6);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_6->get_Values_5();
		V_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_7;
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_8 = ___target0;
		NullCheck(L_8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_8->get_RowPointers_3();
		V_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_9;
		SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * L_10 = ___target0;
		NullCheck(L_10);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_10->get_ColumnIndices_4();
		V_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_11;
		int32_t L_12 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_ColumnCount_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_13;
		V_5 = (int32_t)0;
		goto IL_0062;
	}

IL_0048:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		int32_t* L_19 = (int32_t*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_22 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_24 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((((int32_t)L_22) < ((int32_t)L_26)))
		{
			goto IL_0048;
		}
	}
	{
		V_4 = (int32_t)0;
		V_6 = (int32_t)0;
		goto IL_0098;
	}

IL_007b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_1;
		int32_t L_28 = V_6;
		int32_t L_29 = V_4;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		int32_t L_30 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = V_3;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_34));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = V_3;
		int32_t L_36 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = V_1;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)L_40);
		int32_t L_41 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_42 = V_6;
		int32_t L_43 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_ColumnCount_2();
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_007b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = V_1;
		int32_t L_45 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_ColumnCount_2();
		int32_t L_46 = V_4;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (int32_t)L_46);
		V_7 = (int32_t)0;
		goto IL_0110;
	}

IL_00b1:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		int32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_8 = (int32_t)L_50;
		goto IL_00fb;
	}

IL_00be:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_53 = V_8;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		int32_t* L_56 = (int32_t*)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)));
		int32_t L_57 = *((int32_t*)L_56);
		V_10 = (int32_t)L_57;
		int32_t L_58 = V_10;
		*((int32_t*)L_56) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_10;
		V_9 = (int32_t)L_59;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = V_2;
		int32_t L_61 = V_9;
		int32_t L_62 = V_7;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (int32_t)L_62);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_63 = V_0;
		int32_t L_64 = V_9;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_65 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_66 = V_8;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		double L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (double)L_68);
		int32_t L_69 = V_8;
		V_8 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_00fb:
	{
		int32_t L_70 = V_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_72 = V_7;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		int32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		if ((((int32_t)L_70) < ((int32_t)L_74)))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_75 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_0110:
	{
		int32_t L_76 = V_7;
		int32_t L_77 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_00b1;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::TransposeToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_TransposeToUnchecked_m7CEEFABB929EB5F1ED015C5D3D873CB3E2113E05_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___existingData1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * L_1 = ___target0;
		NullCheck((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_1);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>::Clear() */, (MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)L_1);
	}

IL_0009:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_2)
		{
			goto IL_006a;
		}
	}
	{
		V_0 = (int32_t)0;
		goto IL_0061;
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_ColumnCount_2();
		V_1 = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = (int32_t)L_12;
		V_3 = (int32_t)L_8;
		goto IL_0059;
	}

IL_0034:
	{
		DenseColumnMajorMatrixStorage_1_t32F19F458A9536740758634496A53C21111B630A * L_13 = ___target0;
		NullCheck(L_13);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_14 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_13->get_Data_3();
		int32_t L_15 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_20 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		double L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_19))), (double)L_23);
		int32_t L_24 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0015;
		}
	}

IL_006a:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Double>::MapInplace(System.Func`2<T,T>,MathNet.Numerics.LinearAlgebra.Zeros)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapInplace_mC25F28932368D44E799236BD6004B5327FE2D845_gshared (SparseCompressedRowMatrixStorage_1_t1669814A048BF9A88A77F1D2AAE88F4414466D83 * __this, Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * ___f0, int32_t ___zeros1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_2 = NULL;
	List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	double V_12 = 0.0;
	double G_B8_0 = 0.0;
	{
		int32_t L_0 = ___zeros1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_1 = ((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_0 = (double)L_1;
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_2 = ___f0;
		double L_3 = ((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		NullCheck((Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_2);
		double L_4;
		L_4 = ((  double (*) (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_2, (double)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		bool L_5;
		L_5 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)(&V_0), (double)L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0118;
		}
	}

IL_0027:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		V_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		NullCheck(L_7);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_8 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91(L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		V_2 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_8;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_9 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		NullCheck(L_9);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_10 = (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 28));
		((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29)->methodPointer)(L_10, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
		V_3 = (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_10;
		V_4 = (int32_t)0;
		V_5 = (int32_t)0;
		goto IL_00e4;
	}

IL_0055:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = V_1;
		int32_t L_12 = V_5;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_13 = V_3;
		NullCheck((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_13);
		int32_t L_14;
		L_14 = ((  int32_t (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30)->methodPointer)((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_14);
		V_6 = (int32_t)0;
		goto IL_00d4;
	}

IL_0064:
	{
		int32_t L_15 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((((int32_t)L_15) >= ((int32_t)L_19)))
		{
			goto IL_0080;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_6;
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_008d;
		}
	}

IL_0080:
	{
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_25 = ___f0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_26 = ((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		NullCheck((Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_25);
		double L_27;
		L_27 = ((  double (*) (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_25, (double)L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		G_B8_0 = L_27;
		goto IL_00a5;
	}

IL_008d:
	{
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_28 = ___f0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_29 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)L_30;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		double L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck((Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_28);
		double L_34;
		L_34 = ((  double (*) (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_28, (double)L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		G_B8_0 = L_34;
	}

IL_00a5:
	{
		V_7 = (double)G_B8_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_35 = ((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_0 = (double)L_35;
		double L_36 = V_7;
		bool L_37;
		L_37 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)(&V_0), (double)L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00ce;
		}
	}
	{
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_38 = V_3;
		double L_39 = V_7;
		NullCheck((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_38);
		((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31)->methodPointer)((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_38, (double)L_39, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_40 = V_2;
		int32_t L_41 = V_6;
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_40);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_40, (int32_t)L_41, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_00ce:
	{
		int32_t L_42 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00d4:
	{
		int32_t L_43 = V_6;
		int32_t L_44 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_ColumnCount_2();
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_45 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00e4:
	{
		int32_t L_46 = V_5;
		int32_t L_47 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0055;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_48 = V_2;
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_48);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49;
		L_49 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_48, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		__this->set_ColumnIndices_4(L_49);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_50 = V_3;
		NullCheck((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_50);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_51;
		L_51 = ((  DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		__this->set_Values_5(L_51);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = V_1;
		int32_t L_53 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_54 = V_3;
		NullCheck((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_54);
		int32_t L_55;
		L_55 = ((  int32_t (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30)->methodPointer)((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_54, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_55);
		return;
	}

IL_0118:
	{
		V_8 = (int32_t)0;
		V_9 = (int32_t)0;
		goto IL_01ad;
	}

IL_0123:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_57 = V_9;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_61 = V_9;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_10 = (int32_t)L_63;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_65 = V_9;
		int32_t L_66 = V_8;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (int32_t)L_66);
		V_11 = (int32_t)L_59;
		goto IL_01a1;
	}

IL_0148:
	{
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_67 = ___f0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_68 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_69 = V_11;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		double L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck((Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_67);
		double L_72;
		L_72 = ((  double (*) (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)L_67, (double)L_71, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		V_12 = (double)L_72;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_73 = ((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_0 = (double)L_73;
		double L_74 = V_12;
		bool L_75;
		L_75 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)(&V_0), (double)L_74, /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_019b;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_76 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_5();
		int32_t L_77 = V_8;
		double L_78 = V_12;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (double)L_78);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_80 = V_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_81 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_82 = V_11;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		int32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (int32_t)L_84);
		int32_t L_85 = V_8;
		V_8 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_019b:
	{
		int32_t L_86 = V_11;
		V_11 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_01a1:
	{
		int32_t L_87 = V_11;
		int32_t L_88 = V_10;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_89 = V_9;
		V_9 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_01ad:
	{
		int32_t L_90 = V_9;
		int32_t L_91 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0123;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_92 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int32_t L_93 = V_8;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_92, (int32_t)L_93, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** L_94 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)__this->get_address_of_Values_5();
		int32_t L_95 = V_8;
		((  void (*) (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)L_94, (int32_t)L_95, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_96 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_97 = (int32_t)((MatrixStorage_1_t77E1AC700F570B26144647D8BEC6C0FD86D9A4C0 *)__this)->get_RowCount_1();
		int32_t L_98 = V_8;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (int32_t)L_98);
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
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::get_ValueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_get_ValueCount_m515A31D04D7FE4C858DB4CE94617AA13ECE32873_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_1 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (int32_t)L_3;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1__ctor_mB96C0C5BEC4B9303E32C573D615B6A011AD961A5_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___rows0;
		int32_t L_1 = ___columns1;
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_2 = ___rows0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		__this->set_RowPointers_3(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_ColumnIndices_4(L_4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)0);
		__this->set_Values_5(L_5);
		return;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::get_IsDense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseCompressedRowMatrixStorage_1_get_IsDense_m52049F1DFFB4958ADF68B8D08DC035550B4F2BC0_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// T MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::At(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SparseCompressedRowMatrixStorage_1_At_m1A755B6F3161A3EA90DCE8C3AD78247E05E049E7_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_4 = ((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		return (float)L_4;
	}

IL_0013:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return (float)L_8;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::At(System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_At_mC8DC3080AEB2FBB515AD416543374E7F66FDE625_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_4 = ((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (float)L_4;
		float L_5 = ___value2;
		bool L_6;
		L_6 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)(&V_1), (float)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___row0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return;
	}

IL_002c:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_10 = V_0;
		float L_11 = ___value2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (float)L_11);
		return;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_12 = ((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (float)L_12;
		float L_13 = ___value2;
		bool L_14;
		L_14 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)(&V_1), (float)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((~L_15));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_17);
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))), (int32_t)1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = (int32_t)L_19;
		int32_t L_20 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		NullCheck(L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_22 = V_2;
		int32_t L_23 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		int32_t L_24 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_ColumnCount_2();
		if ((((int64_t)((int64_t)((int64_t)L_22))) >= ((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_23)), (int64_t)((int64_t)((int64_t)L_24)))))))
		{
			goto IL_00d7;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		NullCheck(L_25);
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_26;
		L_26 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_27 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		int32_t L_28 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_ColumnCount_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int64_t L_29;
		L_29 = Math_Min_m63E8ED32ABF3637E5BE49943F6760922C2876087((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))), (int32_t)L_26)))), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_27)), (int64_t)((int64_t)((int64_t)L_28)))), /*hidden argument*/NULL);
		V_3 = (int64_t)L_29;
		int64_t L_30 = V_3;
		if ((((int64_t)L_30) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
		{
			goto IL_00bd;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_31 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_31, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9815A9500AB457D45B58664314E25D1047D857A8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparseCompressedRowMatrixStorage_1_At_mC8DC3080AEB2FBB515AD416543374E7F66FDE625_RuntimeMethod_var)));
	}

IL_00bd:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_32 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)__this->get_address_of_Values_5();
		int64_t L_33 = V_3;
		((  void (*) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_32, (int32_t)((int32_t)((int32_t)L_33)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int64_t L_35 = V_3;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_34, (int32_t)((int32_t)((int32_t)L_35)), /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_00d7:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_37 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_38 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_39 = V_0;
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_36, (int32_t)L_37, (RuntimeArray *)(RuntimeArray *)L_38, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_41)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_43 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_45 = V_0;
		int32_t L_46 = V_2;
		int32_t L_47 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_42, (int32_t)L_43, (RuntimeArray *)(RuntimeArray *)L_44, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_48 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_49 = V_0;
		float L_50 = ___value2;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (float)L_50);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_52 = V_0;
		int32_t L_53 = ___column1;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int32_t)L_53);
		int32_t L_54 = ___row0;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		goto IL_013c;
	}

IL_0124:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t* L_57 = (int32_t*)((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)));
		int32_t L_58 = *((int32_t*)L_57);
		*((int32_t*)L_57) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_013c:
	{
		int32_t L_60 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length))))))
		{
			goto IL_0124;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::RemoveAtIndexUnchecked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_RemoveAtIndexUnchecked_mCB8642274A8041C211BFE46356747F30A760AF19_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, int32_t ___itemIndex0, int32_t ___row1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (int32_t)L_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_5 = ___itemIndex0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_7 = ___itemIndex0;
		int32_t L_8 = V_0;
		int32_t L_9 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_6, (int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_11 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_13 = ___itemIndex0;
		int32_t L_14 = V_0;
		int32_t L_15 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_10, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_12, (int32_t)L_13, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_16 = ___row1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		goto IL_0061;
	}

IL_004c:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_22 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_26 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		NullCheck(L_27);
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))/(int32_t)2)))))
		{
			goto IL_009d;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_28 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)__this->get_address_of_Values_5();
		int32_t L_29 = V_0;
		((  void (*) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_28, (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int32_t L_31 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_30, (int32_t)L_31, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_009d:
	{
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::FindItem(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_FindItem_mF7533B74F07B49093EAB31698D94749E04A8D6FF_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_2 = ___row0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_6 = ___row0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_10 = ___row0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = ___column1;
		int32_t L_14;
		L_14 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_12)), (int32_t)L_13, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		return (int32_t)L_14;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::GrowthSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_GrowthSize_mB12DD07ECD7FF1EA59DFAAB28850E4679A6DD812_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		NullCheck(L_1);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))/(int32_t)4));
		goto IL_0049;
	}

IL_001c:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (int32_t)((int32_t)512);
		goto IL_0049;
	}

IL_0033:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) > ((int32_t)((int32_t)64))))
		{
			goto IL_0043;
		}
	}
	{
		G_B7_0 = ((int32_t)32);
		goto IL_0048;
	}

IL_0043:
	{
		G_B7_0 = ((int32_t)128);
	}

IL_0048:
	{
		V_0 = (int32_t)G_B7_0;
	}

IL_0049:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_Normalize_m56D5F2BB7801471B0CB46E2F5C8F389146EB94FE_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::NormalizeOrdering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_NormalizeOrdering_m43754FDCAEA2BA3C2B6EC3F50F14EDAB571F426E_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0036;
	}

IL_0004:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = (int32_t)L_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		((  void (*) (RuntimeObject*, RuntimeObject*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((RuntimeObject*)(RuntimeObject*)L_10, (RuntimeObject*)(RuntimeObject*)L_11, (int32_t)L_12, (int32_t)L_13, (RuntimeObject*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
	}

IL_0032:
	{
		int32_t L_14 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::NormalizeZeros()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_NormalizeZeros_m40571ADE78B2778722964EB6214B13159CBFDD52_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, const RuntimeMethod* method)
{
	Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * G_B2_0 = NULL;
	SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * G_B2_1 = NULL;
	Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * G_B1_0 = NULL;
	SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_0 = ((U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13)))->get_U3CU3E9__19_0_1();
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_1 = (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_0;
		G_B1_0 = L_1;
		G_B1_1 = ((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)(__this));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = ((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)(__this));
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF * L_2 = ((U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13)))->get_U3CU3E9_0();
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_3 = (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 15));
		((  void (*) (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)(L_3, (RuntimeObject *)L_2, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_4 = (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_3;
		((U3CU3Ec_tEC0A8620CB9DF6196104AA5F4D6E730CEF25FCCF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13)))->set_U3CU3E9__19_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = ((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)(G_B1_1));
	}

IL_0020:
	{
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)G_B2_1);
		VirtActionInvoker2< Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, int32_t >::Invoke(14 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::MapInplace(System.Func`2<T,T>,MathNet.Numerics.LinearAlgebra.Zeros) */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)G_B2_1, (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)G_B2_0, (int32_t)0);
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_GetHashCode_m0DD6A51BBBFD99A45BE97A8AA172262E0353B8F6_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		V_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)L_1, (int32_t)((int32_t)25), /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		V_2 = (int32_t)((int32_t)17);
		V_3 = (int32_t)0;
		goto IL_003a;
	}

IL_001c:
	{
		int32_t L_3 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(float*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)31))), (int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_10 = V_2;
		return (int32_t)L_10;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_Clear_mBAACD8C0791FDA4B0F18689F95BD503FFB4D31AE_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_1);
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_0, (int32_t)0, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::ClearUnchecked(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_ClearUnchecked_mB1BD86FCD1F7AC754B360204F3E9464904F9EEAF_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, int32_t ___rowIndex0, int32_t ___rowCount1, int32_t ___columnIndex2, int32_t ___columnCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = ___rowIndex0;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___columnIndex2;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___rowCount1;
		int32_t L_3 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___columnCount3;
		int32_t L_5 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_ColumnCount_2();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0020;
		}
	}
	{
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::Clear() */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this);
		return;
	}

IL_0020:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_7);
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)1));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = (int32_t)L_9;
		int32_t L_10 = ___rowIndex0;
		int32_t L_11 = ___rowCount1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), (int32_t)1));
		goto IL_0118;
	}

IL_003d:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = (int32_t)L_15;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = (int32_t)L_19;
		int32_t L_20 = V_2;
		int32_t L_21 = V_3;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0114;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		int32_t L_26 = ___columnIndex2;
		int32_t L_27;
		L_27 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_22, (int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), (int32_t)L_26, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_4 = (int32_t)L_27;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		int32_t L_32 = ___columnIndex2;
		int32_t L_33 = ___columnCount3;
		int32_t L_34;
		L_34 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_28, (int32_t)L_29, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_5 = (int32_t)L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_36 = V_4;
		V_4 = (int32_t)((~L_36));
	}

IL_008b:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_38 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_38)), (int32_t)1));
	}

IL_0097:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_4;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)), (int32_t)1));
		int32_t L_41 = V_6;
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_0114;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_43 = V_4;
		int32_t L_44 = V_6;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_45 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_46 = V_4;
		int32_t L_47 = V_0;
		int32_t L_48 = V_4;
		int32_t L_49 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_42, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (RuntimeArray *)(RuntimeArray *)L_45, (int32_t)L_46, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_48)), (int32_t)L_49)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_51 = V_4;
		int32_t L_52 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_54 = V_4;
		int32_t L_55 = V_0;
		int32_t L_56 = V_4;
		int32_t L_57 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_50, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52)), (RuntimeArray *)(RuntimeArray *)L_53, (int32_t)L_54, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)L_56)), (int32_t)L_57)), /*hidden argument*/NULL);
		int32_t L_58 = V_1;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		goto IL_0103;
	}

IL_00ea:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_60 = V_7;
		NullCheck(L_59);
		int32_t* L_61 = (int32_t*)((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)));
		int32_t L_62 = *((int32_t*)L_61);
		int32_t L_63 = V_6;
		*((int32_t*)L_61) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)L_63));
		int32_t L_64 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0103:
	{
		int32_t L_65 = V_7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_66 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_67 = V_0;
		int32_t L_68 = V_6;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68));
	}

IL_0114:
	{
		int32_t L_69 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
	}

IL_0118:
	{
		int32_t L_70 = V_1;
		int32_t L_71 = ___rowIndex0;
		if ((((int32_t)L_70) >= ((int32_t)L_71)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_72 = V_0;
		if ((((int32_t)L_72) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_73 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_74 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		NullCheck(L_74);
		if ((((int32_t)L_73) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))/(int32_t)2)))))
		{
			goto IL_014c;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_75 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)__this->get_address_of_Values_5();
		int32_t L_76 = V_0;
		((  void (*) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_75, (int32_t)L_76, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_77 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int32_t L_78 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_77, (int32_t)L_78, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_014c:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_CopyToUnchecked_m27FF7EEF523F2ED6083CEC70F4515B26DC1DEB71_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * V_0 = NULL;
	DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_0 = ___target0;
		V_0 = (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20)));
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_2 = V_0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		return;
	}

IL_0012:
	{
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_3 = ___target0;
		V_1 = (DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD *)((DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22)));
		DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * L_5 = V_1;
		int32_t L_6 = ___existingData1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, (DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23));
		return;
	}

IL_0025:
	{
		int32_t L_7 = ___existingData1;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_8 = ___target0;
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_8);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::Clear() */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_8);
	}

IL_002e:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_9;
		L_9 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_007d;
	}

IL_003a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (int32_t)L_17;
		V_4 = (int32_t)L_13;
		goto IL_0074;
	}

IL_0051:
	{
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_18 = ___target0;
		int32_t L_19 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		float L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_18);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_18, (int32_t)L_19, (int32_t)L_23, (float)L_27);
		int32_t L_28 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_003a;
		}
	}

IL_0086:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_CopyToUnchecked_m3AAE97AA8FCC036F240AB533FFEBC7D774718BF8_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_0 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_1);
		NullCheck(L_0);
		L_0->set_Values_5(L_2);
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_3 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_4;
		L_4 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_4);
		NullCheck(L_3);
		L_3->set_ColumnIndices_4(L_5);
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_6;
		L_6 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_8 = ___target0;
		NullCheck(L_8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_8->get_Values_5();
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_10;
		L_10 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_9, (int32_t)0, (int32_t)L_10, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_12 = ___target0;
		NullCheck(L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_12->get_ColumnIndices_4();
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_14;
		L_14 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_11, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_13, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)4)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_16 = ___target0;
		NullCheck(L_16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_16->get_RowPointers_3();
		int32_t L_18 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_15, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_17, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_CopyToUnchecked_m0E3A56E35C1AE63032F214E438B36ED12C93F0DB_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___existingData1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * L_1 = ___target0;
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_1);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::Clear() */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_1);
	}

IL_0009:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		V_0 = (int32_t)0;
		goto IL_0052;
	}

IL_0015:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = (int32_t)L_10;
		V_2 = (int32_t)L_6;
		goto IL_004a;
	}

IL_002b:
	{
		DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * L_11 = ___target0;
		int32_t L_12 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		float L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_11);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_11, (int32_t)L_12, (int32_t)L_16, (float)L_20);
		int32_t L_21 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_005b:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::TransposeToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_TransposeToUnchecked_mFD1C7C1DD84BC65EDBC3123B0FB32AF9B393CEB0_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * V_0 = NULL;
	DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_0 = ___target0;
		V_0 = (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20)));
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_2 = V_0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
		return;
	}

IL_0012:
	{
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_3 = ___target0;
		V_1 = (DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD *)((DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22)));
		DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * L_5 = V_1;
		int32_t L_6 = ___existingData1;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		((  void (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, (DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
		return;
	}

IL_0025:
	{
		int32_t L_7 = ___existingData1;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_8 = ___target0;
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_8);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::Clear() */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_8);
	}

IL_002e:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_9;
		L_9 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_007d;
	}

IL_003a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (int32_t)L_17;
		V_4 = (int32_t)L_13;
		goto IL_0074;
	}

IL_0051:
	{
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_18 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		float L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_18);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_18, (int32_t)L_22, (int32_t)L_23, (float)L_27);
		int32_t L_28 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_003a;
		}
	}

IL_0086:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::TransposeToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_TransposeToUnchecked_mF68700618958D5D11E4D021A41F70D219006FDEF_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_0 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_1);
		NullCheck(L_0);
		L_0->set_Values_5(L_2);
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_3 = ___target0;
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_4;
		L_4 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_4);
		NullCheck(L_3);
		L_3->set_ColumnIndices_4(L_5);
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_6 = ___target0;
		NullCheck(L_6);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_6->get_Values_5();
		V_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_7;
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_8 = ___target0;
		NullCheck(L_8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_8->get_RowPointers_3();
		V_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_9;
		SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * L_10 = ___target0;
		NullCheck(L_10);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_10->get_ColumnIndices_4();
		V_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_11;
		int32_t L_12 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_ColumnCount_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_13;
		V_5 = (int32_t)0;
		goto IL_0062;
	}

IL_0048:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		int32_t* L_19 = (int32_t*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_22 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_24 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((((int32_t)L_22) < ((int32_t)L_26)))
		{
			goto IL_0048;
		}
	}
	{
		V_4 = (int32_t)0;
		V_6 = (int32_t)0;
		goto IL_0098;
	}

IL_007b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_1;
		int32_t L_28 = V_6;
		int32_t L_29 = V_4;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		int32_t L_30 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = V_3;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_34));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = V_3;
		int32_t L_36 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = V_1;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)L_40);
		int32_t L_41 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_42 = V_6;
		int32_t L_43 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_ColumnCount_2();
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_007b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = V_1;
		int32_t L_45 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_ColumnCount_2();
		int32_t L_46 = V_4;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (int32_t)L_46);
		V_7 = (int32_t)0;
		goto IL_0110;
	}

IL_00b1:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		int32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_8 = (int32_t)L_50;
		goto IL_00fb;
	}

IL_00be:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_53 = V_8;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		int32_t* L_56 = (int32_t*)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)));
		int32_t L_57 = *((int32_t*)L_56);
		V_10 = (int32_t)L_57;
		int32_t L_58 = V_10;
		*((int32_t*)L_56) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_10;
		V_9 = (int32_t)L_59;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = V_2;
		int32_t L_61 = V_9;
		int32_t L_62 = V_7;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (int32_t)L_62);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_63 = V_0;
		int32_t L_64 = V_9;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_65 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_66 = V_8;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		float L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (float)L_68);
		int32_t L_69 = V_8;
		V_8 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_00fb:
	{
		int32_t L_70 = V_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_72 = V_7;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		int32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		if ((((int32_t)L_70) < ((int32_t)L_74)))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_75 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_0110:
	{
		int32_t L_76 = V_7;
		int32_t L_77 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_00b1;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::TransposeToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.DenseColumnMajorMatrixStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_TransposeToUnchecked_m2CFCA3D669CCA881A19A0F3A5BBFEEF98CE7DFAB_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___existingData1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * L_1 = ___target0;
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_1);
		VirtActionInvoker0::Invoke(8 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::Clear() */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_1);
	}

IL_0009:
	{
		NullCheck((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this);
		int32_t L_2;
		L_2 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		if (!L_2)
		{
			goto IL_006a;
		}
	}
	{
		V_0 = (int32_t)0;
		goto IL_0061;
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_ColumnCount_2();
		V_1 = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = (int32_t)L_12;
		V_3 = (int32_t)L_8;
		goto IL_0059;
	}

IL_0034:
	{
		DenseColumnMajorMatrixStorage_1_t3E9016B96ACCF2D0EACF5075F15944C25E19C7CD * L_13 = ___target0;
		NullCheck(L_13);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_13->get_Data_3();
		int32_t L_15 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		float L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_19))), (float)L_23);
		int32_t L_24 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0015;
		}
	}

IL_006a:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseCompressedRowMatrixStorage`1<System.Single>::MapInplace(System.Func`2<T,T>,MathNet.Numerics.LinearAlgebra.Zeros)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapInplace_mD498C1DC0996A0014431069E30A57AD61B420D33_gshared (SparseCompressedRowMatrixStorage_1_t7BEEA8990090427CEDBE802350DD24E2FD512305 * __this, Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * ___f0, int32_t ___zeros1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_2 = NULL;
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		int32_t L_0 = ___zeros1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_1 = ((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_0 = (float)L_1;
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_2 = ___f0;
		float L_3 = ((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		NullCheck((Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_2);
		float L_4;
		L_4 = ((  float (*) (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		bool L_5;
		L_5 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)(&V_0), (float)L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0118;
		}
	}

IL_0027:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		V_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		NullCheck(L_7);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_8 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91(L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		V_2 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_8;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		NullCheck(L_9);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_10 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 28));
		((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29)->methodPointer)(L_10, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
		V_3 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_10;
		V_4 = (int32_t)0;
		V_5 = (int32_t)0;
		goto IL_00e4;
	}

IL_0055:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = V_1;
		int32_t L_12 = V_5;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_13 = V_3;
		NullCheck((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_13);
		int32_t L_14;
		L_14 = ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_14);
		V_6 = (int32_t)0;
		goto IL_00d4;
	}

IL_0064:
	{
		int32_t L_15 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((((int32_t)L_15) >= ((int32_t)L_19)))
		{
			goto IL_0080;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_6;
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_008d;
		}
	}

IL_0080:
	{
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_25 = ___f0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_26 = ((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		NullCheck((Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_25);
		float L_27;
		L_27 = ((  float (*) (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_25, (float)L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		G_B8_0 = L_27;
		goto IL_00a5;
	}

IL_008d:
	{
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_28 = ___f0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)L_30;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		float L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck((Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_28);
		float L_34;
		L_34 = ((  float (*) (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_28, (float)L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		G_B8_0 = L_34;
	}

IL_00a5:
	{
		V_7 = (float)G_B8_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_35 = ((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_0 = (float)L_35;
		float L_36 = V_7;
		bool L_37;
		L_37 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)(&V_0), (float)L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00ce;
		}
	}
	{
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_38 = V_3;
		float L_39 = V_7;
		NullCheck((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_38);
		((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_38, (float)L_39, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_40 = V_2;
		int32_t L_41 = V_6;
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_40);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_40, (int32_t)L_41, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_00ce:
	{
		int32_t L_42 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00d4:
	{
		int32_t L_43 = V_6;
		int32_t L_44 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_ColumnCount_2();
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_45 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00e4:
	{
		int32_t L_46 = V_5;
		int32_t L_47 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0055;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_48 = V_2;
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_48);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49;
		L_49 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_48, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		__this->set_ColumnIndices_4(L_49);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_50 = V_3;
		NullCheck((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_50);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_51;
		L_51 = ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		__this->set_Values_5(L_51);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = V_1;
		int32_t L_53 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_54 = V_3;
		NullCheck((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_54);
		int32_t L_55;
		L_55 = ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_54, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_55);
		return;
	}

IL_0118:
	{
		V_8 = (int32_t)0;
		V_9 = (int32_t)0;
		goto IL_01ad;
	}

IL_0123:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_57 = V_9;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_61 = V_9;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_10 = (int32_t)L_63;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_65 = V_9;
		int32_t L_66 = V_8;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (int32_t)L_66);
		V_11 = (int32_t)L_59;
		goto IL_01a1;
	}

IL_0148:
	{
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_67 = ___f0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_68 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_69 = V_11;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		float L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck((Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_67);
		float L_72;
		L_72 = ((  float (*) (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)L_67, (float)L_71, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		V_12 = (float)L_72;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_73 = ((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_0 = (float)L_73;
		float L_74 = V_12;
		bool L_75;
		L_75 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)(&V_0), (float)L_74, /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_019b;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_76 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_5();
		int32_t L_77 = V_8;
		float L_78 = V_12;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (float)L_78);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_80 = V_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_81 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_ColumnIndices_4();
		int32_t L_82 = V_11;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		int32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (int32_t)L_84);
		int32_t L_85 = V_8;
		V_8 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_019b:
	{
		int32_t L_86 = V_11;
		V_11 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_01a1:
	{
		int32_t L_87 = V_11;
		int32_t L_88 = V_10;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_89 = V_9;
		V_9 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_01ad:
	{
		int32_t L_90 = V_9;
		int32_t L_91 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0123;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_92 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_ColumnIndices_4();
		int32_t L_93 = V_8;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_92, (int32_t)L_93, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_94 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)__this->get_address_of_Values_5();
		int32_t L_95 = V_8;
		((  void (*) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_94, (int32_t)L_95, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_96 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_RowPointers_3();
		int32_t L_97 = (int32_t)((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)__this)->get_RowCount_1();
		int32_t L_98 = V_8;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (int32_t)L_98);
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
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1__ctor_m85C99D667E2557193092EE50F66ABBD37AC9A7DD_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, int32_t ___length0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___length0;
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_Indices_2(L_1);
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_2 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)0);
		__this->set_Values_3(L_2);
		__this->set_ValueCount_4(0);
		return;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::get_IsDense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseVectorStorage_1_get_IsDense_mD333914AF189459ADE568FB40A0C5B719A95431C_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// T MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::At(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  SparseVectorStorage_1_At_m01D91E1DD9F3D9DC7135DDFD5E912BAD0E0813D6_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		int32_t L_2 = ___index0;
		int32_t L_3;
		L_3 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_5 = ((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		return (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_5;
	}

IL_001e:
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_6 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_9;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::At(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_At_m833D3CFA60008DD072EC4B4E9D901076E6546B73_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, int32_t ___index0, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		int32_t L_2 = ___index0;
		int32_t L_3;
		L_3 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_5 = ((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_5;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_6 = ___value1;
		bool L_7;
		L_7 = Complex_Equals_m4303E6572230C3368EEFFE54A5F3B3E067318F2D((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(&V_1), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_0;
		NullCheck((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this);
		((  void (*) (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}

IL_0036:
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_9 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_10 = V_0;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_11 = ___value1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_11);
		return;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_12 = ((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_12;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_13 = ___value1;
		bool L_14;
		L_14 = Complex_Equals_m4303E6572230C3368EEFFE54A5F3B3E067318F2D((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(&V_1), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___index0;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_17 = ___value1;
		NullCheck((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this);
		((  void (*) (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *, int32_t, int32_t, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this, (int32_t)((~L_15)), (int32_t)L_16, (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0064:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::InsertAtIndexUnchecked(System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_InsertAtIndexUnchecked_mF5A38CFC6F7A122B8D67DD4282AE5CDADAB4B9D4_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, int32_t ___itemIndex0, int32_t ___index1, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_ValueCount_4();
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_1 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->get_ValueCount_4();
		int32_t L_3 = (int32_t)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this)->get_Length_1();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0051;
		}
	}
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_4 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		NullCheck(L_4);
		NullCheck((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this);
		int32_t L_5;
		L_5 = ((  int32_t (*) (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_6 = (int32_t)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this)->get_Length_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)L_5)), (int32_t)L_6, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** L_8 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**)__this->get_address_of_Values_3();
		int32_t L_9 = V_0;
		((  void (*) (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**)(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_11 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_10, (int32_t)L_11, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_0051:
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_12 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_13 = ___itemIndex0;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_14 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_15 = ___itemIndex0;
		int32_t L_16 = (int32_t)__this->get_ValueCount_4();
		int32_t L_17 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_12, (int32_t)L_13, (RuntimeArray *)(RuntimeArray *)L_14, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_19 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_21 = ___itemIndex0;
		int32_t L_22 = (int32_t)__this->get_ValueCount_4();
		int32_t L_23 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_18, (int32_t)L_19, (RuntimeArray *)(RuntimeArray *)L_20, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_24 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_25 = ___itemIndex0;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_26 = ___value2;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_26);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_28 = ___itemIndex0;
		int32_t L_29 = ___index1;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		int32_t L_30 = (int32_t)__this->get_ValueCount_4();
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::RemoveAtIndexUnchecked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_RemoveAtIndexUnchecked_m0FF6220E8F06C9B737B47405520DCEB4E33968AD_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, int32_t ___itemIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_0 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_1 = ___itemIndex0;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_2 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_3 = ___itemIndex0;
		int32_t L_4 = (int32_t)__this->get_ValueCount_4();
		int32_t L_5 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_0, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), (int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_7 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_9 = ___itemIndex0;
		int32_t L_10 = (int32_t)__this->get_ValueCount_4();
		int32_t L_11 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_6, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_8, (int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_12 = (int32_t)__this->get_ValueCount_4();
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		int32_t L_13 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		NullCheck(L_15);
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))/(int32_t)2)))))
		{
			goto IL_008d;
		}
	}
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** L_16 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**)__this->get_address_of_Values_3();
		int32_t L_17 = (int32_t)__this->get_ValueCount_4();
		((  void (*) (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**)(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_18 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_19 = (int32_t)__this->get_ValueCount_4();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_18, (int32_t)L_19, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_008d:
	{
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::GrowthSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseVectorStorage_1_GrowthSize_m38324267EAE517D9514D58A13EB59B49FFDF76D1_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_0 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_1 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		NullCheck(L_1);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))/(int32_t)4));
		goto IL_0049;
	}

IL_001c:
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_2 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (int32_t)((int32_t)512);
		goto IL_0049;
	}

IL_0033:
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_3 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) > ((int32_t)((int32_t)64))))
		{
			goto IL_0043;
		}
	}
	{
		G_B7_0 = ((int32_t)32);
		goto IL_0048;
	}

IL_0043:
	{
		G_B7_0 = ((int32_t)128);
	}

IL_0048:
	{
		V_0 = (int32_t)G_B7_0;
	}

IL_0049:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::Equals(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseVectorStorage_1_Equals_m8992E0C059EA171F4441105F349CDC6F07A2D3C4_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * ___other0, const RuntimeMethod* method)
{
	SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = (int32_t)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this)->get_Length_1();
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->get_Length_1();
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_4 = ___other0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this) == ((RuntimeObject*)(VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_5 = ___other0;
		V_0 = (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0110;
		}
	}
	{
		V_1 = (int32_t)0;
		V_2 = (int32_t)0;
		goto IL_00f6;
	}

IL_002f:
	{
		int32_t L_7 = V_2;
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_ValueCount_4();
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_007a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_16 = V_0;
		NullCheck(L_16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_16->get_Indices_2();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_15) >= ((int32_t)L_20)))
		{
			goto IL_007a;
		}
	}

IL_0053:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_21 = ((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_3 = (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_21;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_22 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_23 = V_1;
		int32_t L_24 = (int32_t)L_23;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27;
		L_27 = Complex_Equals_m4303E6572230C3368EEFFE54A5F3B3E067318F2D((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(&V_3), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_30 = V_2;
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)L_31->get_ValueCount_4();
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00c5;
		}
	}
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_33 = V_0;
		NullCheck(L_33);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_33->get_Indices_2();
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_39 = V_1;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((((int32_t)L_37) >= ((int32_t)L_41)))
		{
			goto IL_00c5;
		}
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_42 = ((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_3 = (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_42;
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_43 = V_0;
		NullCheck(L_43);
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_44 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)L_43->get_Values_3();
		int32_t L_45 = V_2;
		int32_t L_46 = (int32_t)L_45;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		int32_t L_47 = L_46;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = Complex_Equals_m4303E6572230C3368EEFFE54A5F3B3E067318F2D((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(&V_3), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_48, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)0;
	}

IL_00c5:
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_50 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_51 = V_1;
		NullCheck(L_50);
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_52 = V_0;
		NullCheck(L_52);
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_53 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)L_52->get_Values_3();
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		bool L_57;
		L_57 = Complex_Equals_m4303E6572230C3368EEFFE54A5F3B3E067318F2D((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_00ee;
		}
	}
	{
		return (bool)0;
	}

IL_00ee:
	{
		int32_t L_58 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_60 = V_1;
		int32_t L_61 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_62 = V_2;
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = (int32_t)L_63->get_ValueCount_4();
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_002f;
		}
	}
	{
		return (bool)1;
	}

IL_0110:
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_65 = ___other0;
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this);
		bool L_66;
		L_66 = ((  bool (*) (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *, VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_65, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_66;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseVectorStorage_1_GetHashCode_mB26AEB729DD0D97E66375BDD55FAC124581999F1_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_0 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		V_0 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)L_0;
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)L_1, (int32_t)((int32_t)25), /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		V_2 = (int32_t)((int32_t)17);
		V_3 = (int32_t)0;
		goto IL_003a;
	}

IL_001c:
	{
		int32_t L_3 = V_2;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Complex_GetHashCode_mBAC61B12E34E786C0E95BB8CB48D7819976D9A35((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)31))), (int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_10 = V_2;
		return (int32_t)L_10;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_Clear_mC34A2C453E323D69F4047E80EAA5ED2D4078E8EC_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ValueCount_4(0);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::Clear(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_Clear_mA07645E9436F26478156D20BEF620DE89C49A0ED_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___count1;
		int32_t L_2 = (int32_t)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this)->get_Length_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0013;
		}
	}
	{
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>::Clear() */, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this);
		return;
	}

IL_0013:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_4 = (int32_t)__this->get_ValueCount_4();
		int32_t L_5 = ___index0;
		int32_t L_6;
		L_6 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_3, (int32_t)0, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_8 = (int32_t)__this->get_ValueCount_4();
		int32_t L_9 = ___index0;
		int32_t L_10 = ___count1;
		int32_t L_11;
		L_11 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_7, (int32_t)0, (int32_t)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = (int32_t)((~L_13));
	}

IL_0046:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_15)), (int32_t)1));
	}

IL_004f:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), (int32_t)1));
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_19 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_20 = V_0;
		int32_t L_21 = V_2;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_22 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_23 = V_0;
		int32_t L_24 = (int32_t)__this->get_ValueCount_4();
		int32_t L_25 = V_0;
		int32_t L_26 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_19, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (RuntimeArray *)(RuntimeArray *)L_22, (int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), (int32_t)L_26)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_28 = V_0;
		int32_t L_29 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_31 = V_0;
		int32_t L_32 = (int32_t)__this->get_ValueCount_4();
		int32_t L_33 = V_0;
		int32_t L_34 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29)), (RuntimeArray *)(RuntimeArray *)L_30, (int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33)), (int32_t)L_34)), /*hidden argument*/NULL);
		int32_t L_35 = (int32_t)__this->get_ValueCount_4();
		int32_t L_36 = V_2;
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)));
	}

IL_00a5:
	{
		int32_t L_37 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_37) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_38 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		NullCheck(L_39);
		if ((((int32_t)L_38) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))/(int32_t)2)))))
		{
			goto IL_00e6;
		}
	}
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** L_40 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**)__this->get_address_of_Values_3();
		int32_t L_41 = (int32_t)__this->get_ValueCount_4();
		((  void (*) (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**)(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5**)L_40, (int32_t)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_42 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_43 = (int32_t)__this->get_ValueCount_4();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_42, (int32_t)L_43, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_00e6:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopyToUnchecked_mDD8FBABF56730572103F44A636EA11614308B597_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_0 = ___target0;
		V_0 = (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_2 = V_0;
		NullCheck((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this);
		((  void (*) (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *, SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this, (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}

IL_0012:
	{
		int32_t L_3 = ___existingData1;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_4 = ___target0;
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_4);
		VirtActionInvoker0::Invoke(9 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>::Clear() */, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_4);
	}

IL_001b:
	{
		int32_t L_5 = (int32_t)__this->get_ValueCount_4();
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_0045;
	}

IL_0027:
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_6 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_11 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_6);
		VirtActionInvoker2< int32_t, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>::At(System.Int32,T) */, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_6, (int32_t)L_10, (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_14);
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0027;
		}
	}

IL_004e:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopyToUnchecked_mAEC013CC8674F9F9DA5C3C48C9E315033656889C_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_0 = ___target0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this) == ((RuntimeObject*)(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)L_0))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_1 = (int32_t)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this)->get_Length_1();
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_2)->get_Length_1();
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = (int32_t)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this)->get_Length_1();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_5);
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_7 = ___target0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_7)->get_Length_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral773E15CBF4C1429363B537638F241A5DA2092F74)), (RuntimeObject *)L_6, (RuntimeObject *)L_10, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_12 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_12, (String_t*)L_11, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparseVectorStorage_1_CopyToUnchecked_mAEC013CC8674F9F9DA5C3C48C9E315033656889C_RuntimeMethod_var)));
	}

IL_003e:
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_13 = ___target0;
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		NullCheck(L_13);
		L_13->set_ValueCount_4(L_14);
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_15 = ___target0;
		int32_t L_16 = (int32_t)__this->get_ValueCount_4();
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_17 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_16);
		NullCheck(L_15);
		L_15->set_Values_3(L_17);
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_18 = ___target0;
		int32_t L_19 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_19);
		NullCheck(L_18);
		L_18->set_Indices_2(L_20);
		int32_t L_21 = (int32_t)__this->get_ValueCount_4();
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_22 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_23 = ___target0;
		NullCheck(L_23);
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_24 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)L_23->get_Values_3();
		int32_t L_25 = (int32_t)__this->get_ValueCount_4();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_22, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_27 = ___target0;
		NullCheck(L_27);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_27->get_Indices_2();
		int32_t L_29 = (int32_t)__this->get_ValueCount_4();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_26, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_28, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)4)), /*hidden argument*/NULL);
	}

IL_00a8:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::CopySubVectorToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopySubVectorToUnchecked_m1BEA7ABECB855160905E540B351320B6D529B0EB_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * ___target0, int32_t ___sourceIndex1, int32_t ___targetIndex2, int32_t ___count3, int32_t ___existingData4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_0 = ___target0;
		V_0 = (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_2 = V_0;
		int32_t L_3 = ___sourceIndex1;
		int32_t L_4 = ___targetIndex2;
		int32_t L_5 = ___count3;
		int32_t L_6 = ___existingData4;
		NullCheck((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this);
		((  void (*) (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *, SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this, (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)L_2, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return;
	}

IL_0018:
	{
		int32_t L_7 = ___targetIndex2;
		int32_t L_8 = ___sourceIndex1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_10 = (int32_t)__this->get_ValueCount_4();
		int32_t L_11 = ___sourceIndex1;
		int32_t L_12;
		L_12 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_9, (int32_t)0, (int32_t)L_10, (int32_t)L_11, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_2 = (int32_t)L_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		int32_t L_15 = ___sourceIndex1;
		int32_t L_16 = ___count3;
		int32_t L_17;
		L_17 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_13, (int32_t)0, (int32_t)L_14, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_3 = (int32_t)L_17;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_19 = V_2;
		V_2 = (int32_t)((~L_19));
	}

IL_0050:
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_21 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_21)), (int32_t)1));
	}

IL_0059:
	{
		int32_t L_22 = ___existingData4;
		if (L_22)
		{
			goto IL_0066;
		}
	}
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_23 = ___target0;
		int32_t L_24 = ___targetIndex2;
		int32_t L_25 = ___count3;
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_23);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_23, (int32_t)L_24, (int32_t)L_25);
	}

IL_0066:
	{
		int32_t L_26 = V_2;
		V_4 = (int32_t)L_26;
		goto IL_008f;
	}

IL_006b:
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_27 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_1;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_33 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_27);
		VirtActionInvoker2< int32_t, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>::At(System.Int32,T) */, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32)), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_36);
		int32_t L_37 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_008f:
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_3;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_006b;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::CopySubVectorToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T>,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopySubVectorToUnchecked_m81F05A9FB86BB0959449052FC6C0245BB0BD51E4_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * ___target0, int32_t ___sourceIndex1, int32_t ___targetIndex2, int32_t ___count3, int32_t ___existingData4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* V_4 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* V_8 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___targetIndex2;
		int32_t L_1 = ___sourceIndex1;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_3 = (int32_t)__this->get_ValueCount_4();
		int32_t L_4 = ___sourceIndex1;
		int32_t L_5;
		L_5 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)0, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_1 = (int32_t)L_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_7 = (int32_t)__this->get_ValueCount_4();
		int32_t L_8 = ___sourceIndex1;
		int32_t L_9 = ___count3;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_6, (int32_t)0, (int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_2 = (int32_t)L_10;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = (int32_t)((~L_12));
	}

IL_0038:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_14)), (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), (int32_t)1));
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_17 = ___target0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)__this) == ((RuntimeObject*)(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 *)L_17))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_18 = V_3;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_19 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_18);
		V_4 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)L_19;
		int32_t L_20 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_21;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_22 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_23 = V_1;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_24 = V_4;
		int32_t L_25 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_22, (int32_t)L_23, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		V_6 = (int32_t)0;
		goto IL_0086;
	}

IL_0070:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = V_5;
		int32_t L_27 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_29 = V_6;
		int32_t L_30 = V_1;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		int32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (int32_t)L_32);
		int32_t L_33 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_34 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = V_5;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_36 = ___existingData4;
		if (L_36)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_37 = ___targetIndex2;
		int32_t L_38 = ___count3;
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this, (int32_t)L_37, (int32_t)L_38);
	}

IL_009b:
	{
		int32_t L_39 = V_1;
		V_7 = (int32_t)L_39;
		goto IL_00bc;
	}

IL_00a0:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = V_5;
		int32_t L_41 = V_7;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = V_0;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_45 = V_4;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this);
		VirtActionInvoker2< int32_t, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>::At(System.Int32,T) */, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_48);
		int32_t L_49 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_50 = V_7;
		int32_t L_51 = V_2;
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_00a0;
		}
	}
	{
		return;
	}

IL_00c2:
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_52 = ___target0;
		NullCheck(L_52);
		int32_t L_53 = (int32_t)L_52->get_ValueCount_4();
		if (L_53)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_54 = V_3;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_55 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_54);
		V_8 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)L_55;
		int32_t L_56 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_56);
		V_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_57;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_58 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_59 = V_1;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_60 = V_8;
		int32_t L_61 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_58, (int32_t)L_59, (RuntimeArray *)(RuntimeArray *)L_60, (int32_t)0, (int32_t)L_61, /*hidden argument*/NULL);
		V_10 = (int32_t)0;
		goto IL_0107;
	}

IL_00ef:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = V_9;
		int32_t L_63 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_65 = V_10;
		int32_t L_66 = V_1;
		NullCheck(L_64);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66));
		int32_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		int32_t L_69 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69)));
		int32_t L_70 = V_10;
		V_10 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0107:
	{
		int32_t L_71 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = V_9;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_00ef;
		}
	}
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_73 = ___target0;
		int32_t L_74 = V_3;
		NullCheck(L_73);
		L_73->set_ValueCount_4(L_74);
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_75 = ___target0;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_76 = V_8;
		NullCheck(L_75);
		L_75->set_Values_3(L_76);
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_77 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = V_9;
		NullCheck(L_77);
		L_77->set_Indices_2(L_78);
		return;
	}

IL_0127:
	{
		int32_t L_79 = ___existingData4;
		if (L_79)
		{
			goto IL_0134;
		}
	}
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_80 = ___target0;
		int32_t L_81 = ___targetIndex2;
		int32_t L_82 = ___count3;
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_80);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_80, (int32_t)L_81, (int32_t)L_82);
	}

IL_0134:
	{
		int32_t L_83 = V_1;
		V_11 = (int32_t)L_83;
		goto IL_015d;
	}

IL_0139:
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_84 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_86 = V_11;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		int32_t L_89 = V_0;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_90 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)__this->get_Values_3();
		int32_t L_91 = V_11;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck((VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_84);
		VirtActionInvoker2< int32_t, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>::At(System.Int32,T) */, (VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *)L_84, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_89)), (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C )L_93);
		int32_t L_94 = V_11;
		V_11 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_015d:
	{
		int32_t L_95 = V_11;
		int32_t L_96 = V_2;
		if ((((int32_t)L_95) <= ((int32_t)L_96)))
		{
			goto IL_0139;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<T> MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparseVectorStorage_1_Enumerate_m94298CDB57FFA856BD8D9AC506B1898E87F2469B_gshared (SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * __this, const RuntimeMethod* method)
{
	{
		U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3 * L_0 = (U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 17));
		((  void (*) (U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)(L_0, (int32_t)((int32_t)-2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3 * L_1 = (U3CEnumerateU3Ed__27_tAFF2FC55CA6D08BB4BE787883502C16F044B26B3 *)L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return (RuntimeObject*)L_1;
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
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1__ctor_mFD88BB7767E610CBA36C47562005983F7A53244A_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, int32_t ___length0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___length0;
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_Indices_2(L_1);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_2 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)0);
		__this->set_Values_3(L_2);
		__this->set_ValueCount_4(0);
		return;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::get_IsDense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseVectorStorage_1_get_IsDense_m0F956C8643B585417F1B75F6E309650D9F92005A_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// T MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::At(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  SparseVectorStorage_1_At_mC6743DD656B750382A22D33AB0CC27BCC2CDF917_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		int32_t L_2 = ___index0;
		int32_t L_3;
		L_3 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_5 = ((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		return (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_5;
	}

IL_001e:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_6 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_9;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_At_mAE40DB41F45CAE355CC44D4A1D89BFF1A43D7C93_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, int32_t ___index0, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		int32_t L_2 = ___index0;
		int32_t L_3;
		L_3 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_5 = ((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_5;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_6 = ___value1;
		bool L_7;
		L_7 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&V_1), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_0;
		NullCheck((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this);
		((  void (*) (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}

IL_0036:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_9 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_10 = V_0;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_11 = ___value1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_11);
		return;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_12 = ((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_12;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_13 = ___value1;
		bool L_14;
		L_14 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&V_1), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___index0;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_17 = ___value1;
		NullCheck((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this);
		((  void (*) (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *, int32_t, int32_t, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this, (int32_t)((~L_15)), (int32_t)L_16, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0064:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::InsertAtIndexUnchecked(System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_InsertAtIndexUnchecked_m42BF1ACFBDB2F6EBB1D3E4576E3882BAE5736AB4_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, int32_t ___itemIndex0, int32_t ___index1, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_ValueCount_4();
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_1 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->get_ValueCount_4();
		int32_t L_3 = (int32_t)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this)->get_Length_1();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0051;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_4 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		NullCheck(L_4);
		NullCheck((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this);
		int32_t L_5;
		L_5 = ((  int32_t (*) (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_6 = (int32_t)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this)->get_Length_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)L_5)), (int32_t)L_6, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** L_8 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)__this->get_address_of_Values_3();
		int32_t L_9 = V_0;
		((  void (*) (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_11 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_10, (int32_t)L_11, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_0051:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_12 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_13 = ___itemIndex0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_14 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_15 = ___itemIndex0;
		int32_t L_16 = (int32_t)__this->get_ValueCount_4();
		int32_t L_17 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_12, (int32_t)L_13, (RuntimeArray *)(RuntimeArray *)L_14, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_19 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_21 = ___itemIndex0;
		int32_t L_22 = (int32_t)__this->get_ValueCount_4();
		int32_t L_23 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_18, (int32_t)L_19, (RuntimeArray *)(RuntimeArray *)L_20, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_24 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_25 = ___itemIndex0;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_26 = ___value2;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_26);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_28 = ___itemIndex0;
		int32_t L_29 = ___index1;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		int32_t L_30 = (int32_t)__this->get_ValueCount_4();
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::RemoveAtIndexUnchecked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_RemoveAtIndexUnchecked_m91A58FEFE8F962F83373A472F96C589EF4C50E4B_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, int32_t ___itemIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_0 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_1 = ___itemIndex0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_2 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_3 = ___itemIndex0;
		int32_t L_4 = (int32_t)__this->get_ValueCount_4();
		int32_t L_5 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_0, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), (int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_7 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_9 = ___itemIndex0;
		int32_t L_10 = (int32_t)__this->get_ValueCount_4();
		int32_t L_11 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_6, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_8, (int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_12 = (int32_t)__this->get_ValueCount_4();
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		int32_t L_13 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		NullCheck(L_15);
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))/(int32_t)2)))))
		{
			goto IL_008d;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** L_16 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)__this->get_address_of_Values_3();
		int32_t L_17 = (int32_t)__this->get_ValueCount_4();
		((  void (*) (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_18 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_19 = (int32_t)__this->get_ValueCount_4();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_18, (int32_t)L_19, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_008d:
	{
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::GrowthSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseVectorStorage_1_GrowthSize_m2A2B16259A51131686426B36605D792816954888_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_0 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_1 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		NullCheck(L_1);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))/(int32_t)4));
		goto IL_0049;
	}

IL_001c:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_2 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (int32_t)((int32_t)512);
		goto IL_0049;
	}

IL_0033:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_3 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) > ((int32_t)((int32_t)64))))
		{
			goto IL_0043;
		}
	}
	{
		G_B7_0 = ((int32_t)32);
		goto IL_0048;
	}

IL_0043:
	{
		G_B7_0 = ((int32_t)128);
	}

IL_0048:
	{
		V_0 = (int32_t)G_B7_0;
	}

IL_0049:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::Equals(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseVectorStorage_1_Equals_mB223C263BD7CFFA380887180A4146306B52A6C80_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * ___other0, const RuntimeMethod* method)
{
	SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = (int32_t)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this)->get_Length_1();
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->get_Length_1();
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_4 = ___other0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this) == ((RuntimeObject*)(VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_5 = ___other0;
		V_0 = (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0110;
		}
	}
	{
		V_1 = (int32_t)0;
		V_2 = (int32_t)0;
		goto IL_00f6;
	}

IL_002f:
	{
		int32_t L_7 = V_2;
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_ValueCount_4();
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_007a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_16 = V_0;
		NullCheck(L_16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_16->get_Indices_2();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_15) >= ((int32_t)L_20)))
		{
			goto IL_007a;
		}
	}

IL_0053:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_21 = ((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_3 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_21;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_22 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_23 = V_1;
		int32_t L_24 = (int32_t)L_23;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27;
		L_27 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&V_3), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_30 = V_2;
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)L_31->get_ValueCount_4();
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00c5;
		}
	}
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_33 = V_0;
		NullCheck(L_33);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_33->get_Indices_2();
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_39 = V_1;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((((int32_t)L_37) >= ((int32_t)L_41)))
		{
			goto IL_00c5;
		}
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_42 = ((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_3 = (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_42;
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_43 = V_0;
		NullCheck(L_43);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_44 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_43->get_Values_3();
		int32_t L_45 = V_2;
		int32_t L_46 = (int32_t)L_45;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		int32_t L_47 = L_46;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&V_3), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_48, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)0;
	}

IL_00c5:
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_50 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_51 = V_1;
		NullCheck(L_50);
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_52 = V_0;
		NullCheck(L_52);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_53 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_52->get_Values_3();
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		bool L_57;
		L_57 = Complex32_Equals_mB13373D932750036ADD5489AA66A49187AF6817D((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_00ee;
		}
	}
	{
		return (bool)0;
	}

IL_00ee:
	{
		int32_t L_58 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_60 = V_1;
		int32_t L_61 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_62 = V_2;
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = (int32_t)L_63->get_ValueCount_4();
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_002f;
		}
	}
	{
		return (bool)1;
	}

IL_0110:
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_65 = ___other0;
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this);
		bool L_66;
		L_66 = ((  bool (*) (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *, VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_65, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_66;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseVectorStorage_1_GetHashCode_m0D181D15788B4E3DCC7165B0DCCD0BFA3EE46F16_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_0 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		V_0 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_0;
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)L_1, (int32_t)((int32_t)25), /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		V_2 = (int32_t)((int32_t)17);
		V_3 = (int32_t)0;
		goto IL_003a;
	}

IL_001c:
	{
		int32_t L_3 = V_2;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Complex32_GetHashCode_m05D0B1698B014D3EA811AF14CA3D30B35F6567F7((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)31))), (int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_10 = V_2;
		return (int32_t)L_10;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_Clear_m2AA64468794B9A65856F1A7118561D9E9BF02191_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ValueCount_4(0);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::Clear(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_Clear_mA7641AAE2D116A8C559031F9D6CB5801310F1911_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___count1;
		int32_t L_2 = (int32_t)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this)->get_Length_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0013;
		}
	}
	{
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>::Clear() */, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this);
		return;
	}

IL_0013:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_4 = (int32_t)__this->get_ValueCount_4();
		int32_t L_5 = ___index0;
		int32_t L_6;
		L_6 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_3, (int32_t)0, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_8 = (int32_t)__this->get_ValueCount_4();
		int32_t L_9 = ___index0;
		int32_t L_10 = ___count1;
		int32_t L_11;
		L_11 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_7, (int32_t)0, (int32_t)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = (int32_t)((~L_13));
	}

IL_0046:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_15)), (int32_t)1));
	}

IL_004f:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), (int32_t)1));
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_19 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_20 = V_0;
		int32_t L_21 = V_2;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_22 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_23 = V_0;
		int32_t L_24 = (int32_t)__this->get_ValueCount_4();
		int32_t L_25 = V_0;
		int32_t L_26 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_19, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (RuntimeArray *)(RuntimeArray *)L_22, (int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), (int32_t)L_26)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_28 = V_0;
		int32_t L_29 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_31 = V_0;
		int32_t L_32 = (int32_t)__this->get_ValueCount_4();
		int32_t L_33 = V_0;
		int32_t L_34 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29)), (RuntimeArray *)(RuntimeArray *)L_30, (int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33)), (int32_t)L_34)), /*hidden argument*/NULL);
		int32_t L_35 = (int32_t)__this->get_ValueCount_4();
		int32_t L_36 = V_2;
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)));
	}

IL_00a5:
	{
		int32_t L_37 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_37) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_38 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		NullCheck(L_39);
		if ((((int32_t)L_38) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))/(int32_t)2)))))
		{
			goto IL_00e6;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** L_40 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)__this->get_address_of_Values_3();
		int32_t L_41 = (int32_t)__this->get_ValueCount_4();
		((  void (*) (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9**)L_40, (int32_t)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_42 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_43 = (int32_t)__this->get_ValueCount_4();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_42, (int32_t)L_43, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_00e6:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopyToUnchecked_m620ECAA6EB5ED87F6BEA86CCAB4F8EB9182A990E_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_0 = ___target0;
		V_0 = (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_2 = V_0;
		NullCheck((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this);
		((  void (*) (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *, SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this, (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}

IL_0012:
	{
		int32_t L_3 = ___existingData1;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_4 = ___target0;
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_4);
		VirtActionInvoker0::Invoke(9 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>::Clear() */, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_4);
	}

IL_001b:
	{
		int32_t L_5 = (int32_t)__this->get_ValueCount_4();
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_0045;
	}

IL_0027:
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_6 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_11 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_6);
		VirtActionInvoker2< int32_t, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,T) */, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_6, (int32_t)L_10, (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_14);
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0027;
		}
	}

IL_004e:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopyToUnchecked_mB70B8D4831483F8B76FF1369615F030E84951315_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_0 = ___target0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this) == ((RuntimeObject*)(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)L_0))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_1 = (int32_t)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this)->get_Length_1();
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_2)->get_Length_1();
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = (int32_t)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this)->get_Length_1();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_5);
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_7 = ___target0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_7)->get_Length_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral773E15CBF4C1429363B537638F241A5DA2092F74)), (RuntimeObject *)L_6, (RuntimeObject *)L_10, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_12 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_12, (String_t*)L_11, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparseVectorStorage_1_CopyToUnchecked_mB70B8D4831483F8B76FF1369615F030E84951315_RuntimeMethod_var)));
	}

IL_003e:
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_13 = ___target0;
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		NullCheck(L_13);
		L_13->set_ValueCount_4(L_14);
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_15 = ___target0;
		int32_t L_16 = (int32_t)__this->get_ValueCount_4();
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_17 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_16);
		NullCheck(L_15);
		L_15->set_Values_3(L_17);
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_18 = ___target0;
		int32_t L_19 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_19);
		NullCheck(L_18);
		L_18->set_Indices_2(L_20);
		int32_t L_21 = (int32_t)__this->get_ValueCount_4();
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_22 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_23 = ___target0;
		NullCheck(L_23);
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_24 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_23->get_Values_3();
		int32_t L_25 = (int32_t)__this->get_ValueCount_4();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_22, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_27 = ___target0;
		NullCheck(L_27);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_27->get_Indices_2();
		int32_t L_29 = (int32_t)__this->get_ValueCount_4();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_26, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_28, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)4)), /*hidden argument*/NULL);
	}

IL_00a8:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::CopySubVectorToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopySubVectorToUnchecked_m5973FF093DFB02F8CE37ED9BAB44DB32FF9725EE_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * ___target0, int32_t ___sourceIndex1, int32_t ___targetIndex2, int32_t ___count3, int32_t ___existingData4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_0 = ___target0;
		V_0 = (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_2 = V_0;
		int32_t L_3 = ___sourceIndex1;
		int32_t L_4 = ___targetIndex2;
		int32_t L_5 = ___count3;
		int32_t L_6 = ___existingData4;
		NullCheck((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this);
		((  void (*) (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *, SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this, (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)L_2, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return;
	}

IL_0018:
	{
		int32_t L_7 = ___targetIndex2;
		int32_t L_8 = ___sourceIndex1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_10 = (int32_t)__this->get_ValueCount_4();
		int32_t L_11 = ___sourceIndex1;
		int32_t L_12;
		L_12 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_9, (int32_t)0, (int32_t)L_10, (int32_t)L_11, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_2 = (int32_t)L_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		int32_t L_15 = ___sourceIndex1;
		int32_t L_16 = ___count3;
		int32_t L_17;
		L_17 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_13, (int32_t)0, (int32_t)L_14, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_3 = (int32_t)L_17;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_19 = V_2;
		V_2 = (int32_t)((~L_19));
	}

IL_0050:
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_21 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_21)), (int32_t)1));
	}

IL_0059:
	{
		int32_t L_22 = ___existingData4;
		if (L_22)
		{
			goto IL_0066;
		}
	}
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_23 = ___target0;
		int32_t L_24 = ___targetIndex2;
		int32_t L_25 = ___count3;
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_23);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_23, (int32_t)L_24, (int32_t)L_25);
	}

IL_0066:
	{
		int32_t L_26 = V_2;
		V_4 = (int32_t)L_26;
		goto IL_008f;
	}

IL_006b:
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_27 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_1;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_33 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_27);
		VirtActionInvoker2< int32_t, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,T) */, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32)), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_36);
		int32_t L_37 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_008f:
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_3;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_006b;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::CopySubVectorToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T>,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopySubVectorToUnchecked_mD0F2D525ABFFE846401F36BD80DF584D07A78AC5_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * ___target0, int32_t ___sourceIndex1, int32_t ___targetIndex2, int32_t ___count3, int32_t ___existingData4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* V_4 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* V_8 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___targetIndex2;
		int32_t L_1 = ___sourceIndex1;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_3 = (int32_t)__this->get_ValueCount_4();
		int32_t L_4 = ___sourceIndex1;
		int32_t L_5;
		L_5 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)0, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_1 = (int32_t)L_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_7 = (int32_t)__this->get_ValueCount_4();
		int32_t L_8 = ___sourceIndex1;
		int32_t L_9 = ___count3;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_6, (int32_t)0, (int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_2 = (int32_t)L_10;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = (int32_t)((~L_12));
	}

IL_0038:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_14)), (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), (int32_t)1));
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_17 = ___target0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)__this) == ((RuntimeObject*)(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 *)L_17))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_18 = V_3;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_19 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_18);
		V_4 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_19;
		int32_t L_20 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_21;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_22 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_23 = V_1;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_24 = V_4;
		int32_t L_25 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_22, (int32_t)L_23, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		V_6 = (int32_t)0;
		goto IL_0086;
	}

IL_0070:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = V_5;
		int32_t L_27 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_29 = V_6;
		int32_t L_30 = V_1;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		int32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (int32_t)L_32);
		int32_t L_33 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_34 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = V_5;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_36 = ___existingData4;
		if (L_36)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_37 = ___targetIndex2;
		int32_t L_38 = ___count3;
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this, (int32_t)L_37, (int32_t)L_38);
	}

IL_009b:
	{
		int32_t L_39 = V_1;
		V_7 = (int32_t)L_39;
		goto IL_00bc;
	}

IL_00a0:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = V_5;
		int32_t L_41 = V_7;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = V_0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_45 = V_4;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this);
		VirtActionInvoker2< int32_t, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,T) */, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_48);
		int32_t L_49 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_50 = V_7;
		int32_t L_51 = V_2;
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_00a0;
		}
	}
	{
		return;
	}

IL_00c2:
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_52 = ___target0;
		NullCheck(L_52);
		int32_t L_53 = (int32_t)L_52->get_ValueCount_4();
		if (L_53)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_54 = V_3;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_55 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_54);
		V_8 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)L_55;
		int32_t L_56 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_56);
		V_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_57;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_58 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_59 = V_1;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_60 = V_8;
		int32_t L_61 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_58, (int32_t)L_59, (RuntimeArray *)(RuntimeArray *)L_60, (int32_t)0, (int32_t)L_61, /*hidden argument*/NULL);
		V_10 = (int32_t)0;
		goto IL_0107;
	}

IL_00ef:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = V_9;
		int32_t L_63 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_65 = V_10;
		int32_t L_66 = V_1;
		NullCheck(L_64);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66));
		int32_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		int32_t L_69 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69)));
		int32_t L_70 = V_10;
		V_10 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0107:
	{
		int32_t L_71 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = V_9;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_00ef;
		}
	}
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_73 = ___target0;
		int32_t L_74 = V_3;
		NullCheck(L_73);
		L_73->set_ValueCount_4(L_74);
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_75 = ___target0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_76 = V_8;
		NullCheck(L_75);
		L_75->set_Values_3(L_76);
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_77 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = V_9;
		NullCheck(L_77);
		L_77->set_Indices_2(L_78);
		return;
	}

IL_0127:
	{
		int32_t L_79 = ___existingData4;
		if (L_79)
		{
			goto IL_0134;
		}
	}
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_80 = ___target0;
		int32_t L_81 = ___targetIndex2;
		int32_t L_82 = ___count3;
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_80);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_80, (int32_t)L_81, (int32_t)L_82);
	}

IL_0134:
	{
		int32_t L_83 = V_1;
		V_11 = (int32_t)L_83;
		goto IL_015d;
	}

IL_0139:
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_84 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_86 = V_11;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		int32_t L_89 = V_0;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_90 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)__this->get_Values_3();
		int32_t L_91 = V_11;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck((VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_84);
		VirtActionInvoker2< int32_t, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>::At(System.Int32,T) */, (VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *)L_84, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_89)), (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 )L_93);
		int32_t L_94 = V_11;
		V_11 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_015d:
	{
		int32_t L_95 = V_11;
		int32_t L_96 = V_2;
		if ((((int32_t)L_95) <= ((int32_t)L_96)))
		{
			goto IL_0139;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<T> MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparseVectorStorage_1_Enumerate_m5B8302EF75AC87059FAE7B54D9DFC29D8161A71D_gshared (SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * __this, const RuntimeMethod* method)
{
	{
		U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13 * L_0 = (U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 17));
		((  void (*) (U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)(L_0, (int32_t)((int32_t)-2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13 * L_1 = (U3CEnumerateU3Ed__27_tDB8E512FC3C8E63CC1163C370AF26D0AB8EC1F13 *)L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return (RuntimeObject*)L_1;
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
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1__ctor_m1F0F35E675DA387B02C7BD68A2FA59A874E2EEF9_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, int32_t ___length0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___length0;
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_Indices_2(L_1);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)0);
		__this->set_Values_3(L_2);
		__this->set_ValueCount_4(0);
		return;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::get_IsDense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseVectorStorage_1_get_IsDense_m924C2BFBE472F1D8F1F6D54FD51B101D3512D371_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// T MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::At(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SparseVectorStorage_1_At_mDCAB3EA85B9CEBEBA72E130E26AA990D42E5B3C5_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		int32_t L_2 = ___index0;
		int32_t L_3;
		L_3 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_5 = ((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		return (double)L_5;
	}

IL_001e:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_6 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		double L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return (double)L_9;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::At(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_At_mC75574499CFD0500F82BCC30458403F19F8106F5_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, int32_t ___index0, double ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		int32_t L_2 = ___index0;
		int32_t L_3;
		L_3 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_5 = ((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (double)L_5;
		double L_6 = ___value1;
		bool L_7;
		L_7 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)(&V_1), (double)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_0;
		NullCheck((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this);
		((  void (*) (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}

IL_0036:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_9 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_10 = V_0;
		double L_11 = ___value1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (double)L_11);
		return;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_12 = ((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (double)L_12;
		double L_13 = ___value1;
		bool L_14;
		L_14 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)(&V_1), (double)L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___index0;
		double L_17 = ___value1;
		NullCheck((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this);
		((  void (*) (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *, int32_t, int32_t, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this, (int32_t)((~L_15)), (int32_t)L_16, (double)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0064:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::InsertAtIndexUnchecked(System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_InsertAtIndexUnchecked_m1763079F53ACA5B812A0F7027D3C04414C3E5545_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, int32_t ___itemIndex0, int32_t ___index1, double ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_ValueCount_4();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->get_ValueCount_4();
		int32_t L_3 = (int32_t)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this)->get_Length_1();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0051;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		NullCheck(L_4);
		NullCheck((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this);
		int32_t L_5;
		L_5 = ((  int32_t (*) (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_6 = (int32_t)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this)->get_Length_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)L_5)), (int32_t)L_6, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** L_8 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)__this->get_address_of_Values_3();
		int32_t L_9 = V_0;
		((  void (*) (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_11 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_10, (int32_t)L_11, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_0051:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_12 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_13 = ___itemIndex0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_14 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_15 = ___itemIndex0;
		int32_t L_16 = (int32_t)__this->get_ValueCount_4();
		int32_t L_17 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_12, (int32_t)L_13, (RuntimeArray *)(RuntimeArray *)L_14, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_19 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_21 = ___itemIndex0;
		int32_t L_22 = (int32_t)__this->get_ValueCount_4();
		int32_t L_23 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_18, (int32_t)L_19, (RuntimeArray *)(RuntimeArray *)L_20, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_25 = ___itemIndex0;
		double L_26 = ___value2;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (double)L_26);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_28 = ___itemIndex0;
		int32_t L_29 = ___index1;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		int32_t L_30 = (int32_t)__this->get_ValueCount_4();
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::RemoveAtIndexUnchecked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_RemoveAtIndexUnchecked_mFF455B4D1BE28BEB5B4E01BFC9A727FFA416AFE1_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, int32_t ___itemIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_1 = ___itemIndex0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_3 = ___itemIndex0;
		int32_t L_4 = (int32_t)__this->get_ValueCount_4();
		int32_t L_5 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_0, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), (int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_7 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_9 = ___itemIndex0;
		int32_t L_10 = (int32_t)__this->get_ValueCount_4();
		int32_t L_11 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_6, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_8, (int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_12 = (int32_t)__this->get_ValueCount_4();
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		int32_t L_13 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		NullCheck(L_15);
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))/(int32_t)2)))))
		{
			goto IL_008d;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** L_16 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)__this->get_address_of_Values_3();
		int32_t L_17 = (int32_t)__this->get_ValueCount_4();
		((  void (*) (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_18 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_19 = (int32_t)__this->get_ValueCount_4();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_18, (int32_t)L_19, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_008d:
	{
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::GrowthSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseVectorStorage_1_GrowthSize_mED56850D7471739D5197D442143FA6CF43289B25_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		NullCheck(L_1);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))/(int32_t)4));
		goto IL_0049;
	}

IL_001c:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (int32_t)((int32_t)512);
		goto IL_0049;
	}

IL_0033:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) > ((int32_t)((int32_t)64))))
		{
			goto IL_0043;
		}
	}
	{
		G_B7_0 = ((int32_t)32);
		goto IL_0048;
	}

IL_0043:
	{
		G_B7_0 = ((int32_t)128);
	}

IL_0048:
	{
		V_0 = (int32_t)G_B7_0;
	}

IL_0049:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::Equals(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseVectorStorage_1_Equals_m3F5828BB1E695246FC3B5E81578727E4DBC09894_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * ___other0, const RuntimeMethod* method)
{
	SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = (int32_t)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this)->get_Length_1();
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->get_Length_1();
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_4 = ___other0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this) == ((RuntimeObject*)(VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_5 = ___other0;
		V_0 = (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0110;
		}
	}
	{
		V_1 = (int32_t)0;
		V_2 = (int32_t)0;
		goto IL_00f6;
	}

IL_002f:
	{
		int32_t L_7 = V_2;
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_ValueCount_4();
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_007a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_16 = V_0;
		NullCheck(L_16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_16->get_Indices_2();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_15) >= ((int32_t)L_20)))
		{
			goto IL_007a;
		}
	}

IL_0053:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_21 = ((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_3 = (double)L_21;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_22 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_23 = V_1;
		int32_t L_24 = (int32_t)L_23;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		double L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27;
		L_27 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)(&V_3), (double)L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_30 = V_2;
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)L_31->get_ValueCount_4();
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00c5;
		}
	}
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_33 = V_0;
		NullCheck(L_33);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_33->get_Indices_2();
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_39 = V_1;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((((int32_t)L_37) >= ((int32_t)L_41)))
		{
			goto IL_00c5;
		}
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		double L_42 = ((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_3 = (double)L_42;
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_43 = V_0;
		NullCheck(L_43);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_44 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_43->get_Values_3();
		int32_t L_45 = V_2;
		int32_t L_46 = (int32_t)L_45;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		int32_t L_47 = L_46;
		double L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)(&V_3), (double)L_48, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)0;
	}

IL_00c5:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_50 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_51 = V_1;
		NullCheck(L_50);
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_52 = V_0;
		NullCheck(L_52);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_52->get_Values_3();
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		double L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		bool L_57;
		L_57 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(double*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), (double)L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_00ee;
		}
	}
	{
		return (bool)0;
	}

IL_00ee:
	{
		int32_t L_58 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_60 = V_1;
		int32_t L_61 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_62 = V_2;
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = (int32_t)L_63->get_ValueCount_4();
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_002f;
		}
	}
	{
		return (bool)1;
	}

IL_0110:
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_65 = ___other0;
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this);
		bool L_66;
		L_66 = ((  bool (*) (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *, VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_65, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_66;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseVectorStorage_1_GetHashCode_m484E87E5E1A7B5801E13AE0C86385681889ECDB9_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		V_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_0;
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)L_1, (int32_t)((int32_t)25), /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		V_2 = (int32_t)((int32_t)17);
		V_3 = (int32_t)0;
		goto IL_003a;
	}

IL_001c:
	{
		int32_t L_3 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(double*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)31))), (int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_10 = V_2;
		return (int32_t)L_10;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_Clear_m869BCFE2013B1601EC554B0722B15EC971C43347_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, const RuntimeMethod* method)
{
	{
		__this->set_ValueCount_4(0);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::Clear(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_Clear_m27C2FE531646D63458E7FCEC7471528272CD9947_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___count1;
		int32_t L_2 = (int32_t)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this)->get_Length_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0013;
		}
	}
	{
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>::Clear() */, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this);
		return;
	}

IL_0013:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_4 = (int32_t)__this->get_ValueCount_4();
		int32_t L_5 = ___index0;
		int32_t L_6;
		L_6 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_3, (int32_t)0, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_8 = (int32_t)__this->get_ValueCount_4();
		int32_t L_9 = ___index0;
		int32_t L_10 = ___count1;
		int32_t L_11;
		L_11 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_7, (int32_t)0, (int32_t)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = (int32_t)((~L_13));
	}

IL_0046:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_15)), (int32_t)1));
	}

IL_004f:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), (int32_t)1));
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_19 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_20 = V_0;
		int32_t L_21 = V_2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_22 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_23 = V_0;
		int32_t L_24 = (int32_t)__this->get_ValueCount_4();
		int32_t L_25 = V_0;
		int32_t L_26 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_19, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (RuntimeArray *)(RuntimeArray *)L_22, (int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), (int32_t)L_26)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_28 = V_0;
		int32_t L_29 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_31 = V_0;
		int32_t L_32 = (int32_t)__this->get_ValueCount_4();
		int32_t L_33 = V_0;
		int32_t L_34 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29)), (RuntimeArray *)(RuntimeArray *)L_30, (int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33)), (int32_t)L_34)), /*hidden argument*/NULL);
		int32_t L_35 = (int32_t)__this->get_ValueCount_4();
		int32_t L_36 = V_2;
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)));
	}

IL_00a5:
	{
		int32_t L_37 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_37) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_38 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		NullCheck(L_39);
		if ((((int32_t)L_38) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))/(int32_t)2)))))
		{
			goto IL_00e6;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** L_40 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)__this->get_address_of_Values_3();
		int32_t L_41 = (int32_t)__this->get_ValueCount_4();
		((  void (*) (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB**)L_40, (int32_t)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_42 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_43 = (int32_t)__this->get_ValueCount_4();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_42, (int32_t)L_43, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_00e6:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopyToUnchecked_m26A9F9978A40ED4E45B362D79645AAE379DFBA93_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * V_0 = NULL;
	int32_t V_1 = 0;
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_0 = ___target0;
		V_0 = (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_2 = V_0;
		NullCheck((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this);
		((  void (*) (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *, SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this, (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}

IL_0012:
	{
		int32_t L_3 = ___existingData1;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_4 = ___target0;
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_4);
		VirtActionInvoker0::Invoke(9 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>::Clear() */, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_4);
	}

IL_001b:
	{
		int32_t L_5 = (int32_t)__this->get_ValueCount_4();
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_0045;
	}

IL_0027:
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_6 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_11 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		double L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_6);
		VirtActionInvoker2< int32_t, double >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>::At(System.Int32,T) */, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_6, (int32_t)L_10, (double)L_14);
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0027;
		}
	}

IL_004e:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopyToUnchecked_m19A330536BDB4546B7AE1A15FB494FC84B9C87BA_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_0 = ___target0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this) == ((RuntimeObject*)(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)L_0))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_1 = (int32_t)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this)->get_Length_1();
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_2)->get_Length_1();
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = (int32_t)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this)->get_Length_1();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_5);
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_7 = ___target0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_7)->get_Length_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral773E15CBF4C1429363B537638F241A5DA2092F74)), (RuntimeObject *)L_6, (RuntimeObject *)L_10, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_12 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_12, (String_t*)L_11, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparseVectorStorage_1_CopyToUnchecked_m19A330536BDB4546B7AE1A15FB494FC84B9C87BA_RuntimeMethod_var)));
	}

IL_003e:
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_13 = ___target0;
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		NullCheck(L_13);
		L_13->set_ValueCount_4(L_14);
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_15 = ___target0;
		int32_t L_16 = (int32_t)__this->get_ValueCount_4();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_17 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_16);
		NullCheck(L_15);
		L_15->set_Values_3(L_17);
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_18 = ___target0;
		int32_t L_19 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_19);
		NullCheck(L_18);
		L_18->set_Indices_2(L_20);
		int32_t L_21 = (int32_t)__this->get_ValueCount_4();
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_22 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_23 = ___target0;
		NullCheck(L_23);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_23->get_Values_3();
		int32_t L_25 = (int32_t)__this->get_ValueCount_4();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_22, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_27 = ___target0;
		NullCheck(L_27);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_27->get_Indices_2();
		int32_t L_29 = (int32_t)__this->get_ValueCount_4();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_26, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_28, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)4)), /*hidden argument*/NULL);
	}

IL_00a8:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::CopySubVectorToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopySubVectorToUnchecked_m073B09A5C90679E46850F53C736B886DEF986556_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * ___target0, int32_t ___sourceIndex1, int32_t ___targetIndex2, int32_t ___count3, int32_t ___existingData4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_0 = ___target0;
		V_0 = (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_2 = V_0;
		int32_t L_3 = ___sourceIndex1;
		int32_t L_4 = ___targetIndex2;
		int32_t L_5 = ___count3;
		int32_t L_6 = ___existingData4;
		NullCheck((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this);
		((  void (*) (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *, SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this, (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)L_2, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return;
	}

IL_0018:
	{
		int32_t L_7 = ___targetIndex2;
		int32_t L_8 = ___sourceIndex1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_10 = (int32_t)__this->get_ValueCount_4();
		int32_t L_11 = ___sourceIndex1;
		int32_t L_12;
		L_12 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_9, (int32_t)0, (int32_t)L_10, (int32_t)L_11, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_2 = (int32_t)L_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		int32_t L_15 = ___sourceIndex1;
		int32_t L_16 = ___count3;
		int32_t L_17;
		L_17 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_13, (int32_t)0, (int32_t)L_14, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_3 = (int32_t)L_17;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_19 = V_2;
		V_2 = (int32_t)((~L_19));
	}

IL_0050:
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_21 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_21)), (int32_t)1));
	}

IL_0059:
	{
		int32_t L_22 = ___existingData4;
		if (L_22)
		{
			goto IL_0066;
		}
	}
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_23 = ___target0;
		int32_t L_24 = ___targetIndex2;
		int32_t L_25 = ___count3;
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_23);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_23, (int32_t)L_24, (int32_t)L_25);
	}

IL_0066:
	{
		int32_t L_26 = V_2;
		V_4 = (int32_t)L_26;
		goto IL_008f;
	}

IL_006b:
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_27 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_33 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		double L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_27);
		VirtActionInvoker2< int32_t, double >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>::At(System.Int32,T) */, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32)), (double)L_36);
		int32_t L_37 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_008f:
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_3;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_006b;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::CopySubVectorToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T>,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopySubVectorToUnchecked_mFBC1F4BDB239B6EFE819912AA503F1FE8A5518DD_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * ___target0, int32_t ___sourceIndex1, int32_t ___targetIndex2, int32_t ___count3, int32_t ___existingData4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_4 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_8 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___targetIndex2;
		int32_t L_1 = ___sourceIndex1;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_3 = (int32_t)__this->get_ValueCount_4();
		int32_t L_4 = ___sourceIndex1;
		int32_t L_5;
		L_5 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)0, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_1 = (int32_t)L_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_7 = (int32_t)__this->get_ValueCount_4();
		int32_t L_8 = ___sourceIndex1;
		int32_t L_9 = ___count3;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_6, (int32_t)0, (int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_2 = (int32_t)L_10;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = (int32_t)((~L_12));
	}

IL_0038:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_14)), (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), (int32_t)1));
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_17 = ___target0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)__this) == ((RuntimeObject*)(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A *)L_17))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_18 = V_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_19 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_18);
		V_4 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_19;
		int32_t L_20 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_21;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_22 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_23 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = V_4;
		int32_t L_25 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_22, (int32_t)L_23, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		V_6 = (int32_t)0;
		goto IL_0086;
	}

IL_0070:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = V_5;
		int32_t L_27 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_29 = V_6;
		int32_t L_30 = V_1;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		int32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (int32_t)L_32);
		int32_t L_33 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_34 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = V_5;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_36 = ___existingData4;
		if (L_36)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_37 = ___targetIndex2;
		int32_t L_38 = ___count3;
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this, (int32_t)L_37, (int32_t)L_38);
	}

IL_009b:
	{
		int32_t L_39 = V_1;
		V_7 = (int32_t)L_39;
		goto IL_00bc;
	}

IL_00a0:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = V_5;
		int32_t L_41 = V_7;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_45 = V_4;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		double L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this);
		VirtActionInvoker2< int32_t, double >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>::At(System.Int32,T) */, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (double)L_48);
		int32_t L_49 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_50 = V_7;
		int32_t L_51 = V_2;
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_00a0;
		}
	}
	{
		return;
	}

IL_00c2:
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_52 = ___target0;
		NullCheck(L_52);
		int32_t L_53 = (int32_t)L_52->get_ValueCount_4();
		if (L_53)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_54 = V_3;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_55 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_54);
		V_8 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_55;
		int32_t L_56 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_56);
		V_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_57;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_58 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_59 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_60 = V_8;
		int32_t L_61 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_58, (int32_t)L_59, (RuntimeArray *)(RuntimeArray *)L_60, (int32_t)0, (int32_t)L_61, /*hidden argument*/NULL);
		V_10 = (int32_t)0;
		goto IL_0107;
	}

IL_00ef:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = V_9;
		int32_t L_63 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_65 = V_10;
		int32_t L_66 = V_1;
		NullCheck(L_64);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66));
		int32_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		int32_t L_69 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69)));
		int32_t L_70 = V_10;
		V_10 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0107:
	{
		int32_t L_71 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = V_9;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_00ef;
		}
	}
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_73 = ___target0;
		int32_t L_74 = V_3;
		NullCheck(L_73);
		L_73->set_ValueCount_4(L_74);
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_75 = ___target0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_76 = V_8;
		NullCheck(L_75);
		L_75->set_Values_3(L_76);
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_77 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = V_9;
		NullCheck(L_77);
		L_77->set_Indices_2(L_78);
		return;
	}

IL_0127:
	{
		int32_t L_79 = ___existingData4;
		if (L_79)
		{
			goto IL_0134;
		}
	}
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_80 = ___target0;
		int32_t L_81 = ___targetIndex2;
		int32_t L_82 = ___count3;
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_80);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_80, (int32_t)L_81, (int32_t)L_82);
	}

IL_0134:
	{
		int32_t L_83 = V_1;
		V_11 = (int32_t)L_83;
		goto IL_015d;
	}

IL_0139:
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_84 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_86 = V_11;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		int32_t L_89 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_90 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get_Values_3();
		int32_t L_91 = V_11;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		double L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck((VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_84);
		VirtActionInvoker2< int32_t, double >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>::At(System.Int32,T) */, (VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *)L_84, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_89)), (double)L_93);
		int32_t L_94 = V_11;
		V_11 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_015d:
	{
		int32_t L_95 = V_11;
		int32_t L_96 = V_2;
		if ((((int32_t)L_95) <= ((int32_t)L_96)))
		{
			goto IL_0139;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<T> MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparseVectorStorage_1_Enumerate_m944D083C42A3C060AF5723975FC5CFA3E14783CB_gshared (SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * __this, const RuntimeMethod* method)
{
	{
		U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82 * L_0 = (U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 17));
		((  void (*) (U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)(L_0, (int32_t)((int32_t)-2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82 * L_1 = (U3CEnumerateU3Ed__27_tE39DA65A4636CA66E40F78D19502FB443727ED82 *)L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return (RuntimeObject*)L_1;
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
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1__ctor_m122E54F585C116422524081424439548504C58B9_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, int32_t ___length0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___length0;
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_Indices_2(L_1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)0);
		__this->set_Values_3(L_2);
		__this->set_ValueCount_4(0);
		return;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::get_IsDense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseVectorStorage_1_get_IsDense_mC3CFA0A8BF248AF6ACE5284573C0763B0238231C_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// T MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::At(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SparseVectorStorage_1_At_mC4BF53515BD4DD4662980687ECA9729D0E40FF05_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		int32_t L_2 = ___index0;
		int32_t L_3;
		L_3 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_5 = ((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		return (float)L_5;
	}

IL_001e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return (float)L_9;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::At(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_At_m1F6801E0F3FB0281206B71CD4C814E87799DA4A7_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		int32_t L_2 = ___index0;
		int32_t L_3;
		L_3 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (int32_t)0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_5 = ((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (float)L_5;
		float L_6 = ___value1;
		bool L_7;
		L_7 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)(&V_1), (float)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_0;
		NullCheck((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this);
		((  void (*) (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}

IL_0036:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_10 = V_0;
		float L_11 = ___value1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (float)L_11);
		return;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_12 = ((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_1 = (float)L_12;
		float L_13 = ___value1;
		bool L_14;
		L_14 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)(&V_1), (float)L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___index0;
		float L_17 = ___value1;
		NullCheck((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this);
		((  void (*) (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this, (int32_t)((~L_15)), (int32_t)L_16, (float)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0064:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::InsertAtIndexUnchecked(System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_InsertAtIndexUnchecked_m7857BDF0445969470864435E0F741322C617D566_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, int32_t ___itemIndex0, int32_t ___index1, float ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_ValueCount_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->get_ValueCount_4();
		int32_t L_3 = (int32_t)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this)->get_Length_1();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0051;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		NullCheck(L_4);
		NullCheck((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this);
		int32_t L_5;
		L_5 = ((  int32_t (*) (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_6 = (int32_t)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this)->get_Length_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)L_5)), (int32_t)L_6, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_8 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)__this->get_address_of_Values_3();
		int32_t L_9 = V_0;
		((  void (*) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_11 = V_0;
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_10, (int32_t)L_11, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_0051:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_13 = ___itemIndex0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_15 = ___itemIndex0;
		int32_t L_16 = (int32_t)__this->get_ValueCount_4();
		int32_t L_17 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_12, (int32_t)L_13, (RuntimeArray *)(RuntimeArray *)L_14, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_19 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_21 = ___itemIndex0;
		int32_t L_22 = (int32_t)__this->get_ValueCount_4();
		int32_t L_23 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_18, (int32_t)L_19, (RuntimeArray *)(RuntimeArray *)L_20, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_25 = ___itemIndex0;
		float L_26 = ___value2;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (float)L_26);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_28 = ___itemIndex0;
		int32_t L_29 = ___index1;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		int32_t L_30 = (int32_t)__this->get_ValueCount_4();
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::RemoveAtIndexUnchecked(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_RemoveAtIndexUnchecked_m61BCE28150521F79F4164B13B54668325D3D3050_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, int32_t ___itemIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_1 = ___itemIndex0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_3 = ___itemIndex0;
		int32_t L_4 = (int32_t)__this->get_ValueCount_4();
		int32_t L_5 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_0, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), (int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_7 = ___itemIndex0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_9 = ___itemIndex0;
		int32_t L_10 = (int32_t)__this->get_ValueCount_4();
		int32_t L_11 = ___itemIndex0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_6, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_8, (int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)), (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_12 = (int32_t)__this->get_ValueCount_4();
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		int32_t L_13 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		NullCheck(L_15);
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))/(int32_t)2)))))
		{
			goto IL_008d;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_16 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)__this->get_address_of_Values_3();
		int32_t L_17 = (int32_t)__this->get_ValueCount_4();
		((  void (*) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_18 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_19 = (int32_t)__this->get_ValueCount_4();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_18, (int32_t)L_19, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_008d:
	{
		return;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::GrowthSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseVectorStorage_1_GrowthSize_m0B907E7CD93CE9A8677929131F708A51D9F5A93D_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		NullCheck(L_1);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))/(int32_t)4));
		goto IL_0049;
	}

IL_001c:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (int32_t)((int32_t)512);
		goto IL_0049;
	}

IL_0033:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) > ((int32_t)((int32_t)64))))
		{
			goto IL_0043;
		}
	}
	{
		G_B7_0 = ((int32_t)32);
		goto IL_0048;
	}

IL_0043:
	{
		G_B7_0 = ((int32_t)128);
	}

IL_0048:
	{
		V_0 = (int32_t)G_B7_0;
	}

IL_0049:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// System.Boolean MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::Equals(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparseVectorStorage_1_Equals_m3D77B19E44351DDA9A6441A8FE81FDB77914A9BC_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * ___other0, const RuntimeMethod* method)
{
	SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = (int32_t)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this)->get_Length_1();
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)L_2->get_Length_1();
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_4 = ___other0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this) == ((RuntimeObject*)(VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_5 = ___other0;
		V_0 = (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0110;
		}
	}
	{
		V_1 = (int32_t)0;
		V_2 = (int32_t)0;
		goto IL_00f6;
	}

IL_002f:
	{
		int32_t L_7 = V_2;
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_ValueCount_4();
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_007a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_16 = V_0;
		NullCheck(L_16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_16->get_Indices_2();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_15) >= ((int32_t)L_20)))
		{
			goto IL_007a;
		}
	}

IL_0053:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_21 = ((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_3 = (float)L_21;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_23 = V_1;
		int32_t L_24 = (int32_t)L_23;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		float L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27;
		L_27 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)(&V_3), (float)L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_30 = V_2;
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)L_31->get_ValueCount_4();
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00c5;
		}
	}
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_33 = V_0;
		NullCheck(L_33);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_33->get_Indices_2();
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_39 = V_1;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((((int32_t)L_37) >= ((int32_t)L_41)))
		{
			goto IL_00c5;
		}
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		float L_42 = ((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_Zero_0();
		V_3 = (float)L_42;
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_43 = V_0;
		NullCheck(L_43);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_44 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_43->get_Values_3();
		int32_t L_45 = V_2;
		int32_t L_46 = (int32_t)L_45;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		int32_t L_47 = L_46;
		float L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)(&V_3), (float)L_48, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_00f6;
		}
	}
	{
		return (bool)0;
	}

IL_00c5:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_51 = V_1;
		NullCheck(L_50);
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_52 = V_0;
		NullCheck(L_52);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_53 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_52->get_Values_3();
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		float L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		bool L_57;
		L_57 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(float*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), (float)L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_00ee;
		}
	}
	{
		return (bool)0;
	}

IL_00ee:
	{
		int32_t L_58 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_60 = V_1;
		int32_t L_61 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_62 = V_2;
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = (int32_t)L_63->get_ValueCount_4();
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_002f;
		}
	}
	{
		return (bool)1;
	}

IL_0110:
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_65 = ___other0;
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this);
		bool L_66;
		L_66 = ((  bool (*) (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *, VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_65, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_66;
	}
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseVectorStorage_1_GetHashCode_mF338DFD32EB78A707CF4D51CC90ED1C63A6F9340_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		V_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_0;
		int32_t L_1 = (int32_t)__this->get_ValueCount_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574((int32_t)L_1, (int32_t)((int32_t)25), /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		V_2 = (int32_t)((int32_t)17);
		V_3 = (int32_t)0;
		goto IL_003a;
	}

IL_001c:
	{
		int32_t L_3 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(float*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)31))), (int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_10 = V_2;
		return (int32_t)L_10;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_Clear_mFD3CDB0BD9D01E2378D881DF6603E5AC0DEC135E_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, const RuntimeMethod* method)
{
	{
		__this->set_ValueCount_4(0);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::Clear(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_Clear_m966448D855CDB5326FD9E3FFD05CB8F1601B58A7_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___count1;
		int32_t L_2 = (int32_t)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this)->get_Length_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0013;
		}
	}
	{
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>::Clear() */, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this);
		return;
	}

IL_0013:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_4 = (int32_t)__this->get_ValueCount_4();
		int32_t L_5 = ___index0;
		int32_t L_6;
		L_6 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_3, (int32_t)0, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_0 = (int32_t)L_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_8 = (int32_t)__this->get_ValueCount_4();
		int32_t L_9 = ___index0;
		int32_t L_10 = ___count1;
		int32_t L_11;
		L_11 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_7, (int32_t)0, (int32_t)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = (int32_t)((~L_13));
	}

IL_0046:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_15)), (int32_t)1));
	}

IL_004f:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), (int32_t)1));
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_20 = V_0;
		int32_t L_21 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_23 = V_0;
		int32_t L_24 = (int32_t)__this->get_ValueCount_4();
		int32_t L_25 = V_0;
		int32_t L_26 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_19, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (RuntimeArray *)(RuntimeArray *)L_22, (int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), (int32_t)L_26)), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_28 = V_0;
		int32_t L_29 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_31 = V_0;
		int32_t L_32 = (int32_t)__this->get_ValueCount_4();
		int32_t L_33 = V_0;
		int32_t L_34 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29)), (RuntimeArray *)(RuntimeArray *)L_30, (int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33)), (int32_t)L_34)), /*hidden argument*/NULL);
		int32_t L_35 = (int32_t)__this->get_ValueCount_4();
		int32_t L_36 = V_2;
		__this->set_ValueCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)));
	}

IL_00a5:
	{
		int32_t L_37 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_37) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_38 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		NullCheck(L_39);
		if ((((int32_t)L_38) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))/(int32_t)2)))))
		{
			goto IL_00e6;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_40 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)__this->get_address_of_Values_3();
		int32_t L_41 = (int32_t)__this->get_ValueCount_4();
		((  void (*) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_40, (int32_t)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_42 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Indices_2();
		int32_t L_43 = (int32_t)__this->get_ValueCount_4();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_42, (int32_t)L_43, /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_00e6:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopyToUnchecked_mFC8C9EDC9BFEF9F648A2A47D969AC19F8453C0DE_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * ___target0, int32_t ___existingData1, const RuntimeMethod* method)
{
	SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * V_0 = NULL;
	int32_t V_1 = 0;
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_0 = ___target0;
		V_0 = (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_2 = V_0;
		NullCheck((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this);
		((  void (*) (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *, SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this, (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}

IL_0012:
	{
		int32_t L_3 = ___existingData1;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_4 = ___target0;
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_4);
		VirtActionInvoker0::Invoke(9 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>::Clear() */, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_4);
	}

IL_001b:
	{
		int32_t L_5 = (int32_t)__this->get_ValueCount_4();
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_0045;
	}

IL_0027:
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_6 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		float L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_6);
		VirtActionInvoker2< int32_t, float >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>::At(System.Int32,T) */, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_6, (int32_t)L_10, (float)L_14);
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = (int32_t)__this->get_ValueCount_4();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0027;
		}
	}

IL_004e:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::CopyToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopyToUnchecked_mA3687633199BF7E15AD3CC512C33AAFC33202E09_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_0 = ___target0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this) == ((RuntimeObject*)(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)L_0))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_1 = (int32_t)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this)->get_Length_1();
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_2)->get_Length_1();
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = (int32_t)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this)->get_Length_1();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_5);
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_7 = ___target0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_7)->get_Length_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral773E15CBF4C1429363B537638F241A5DA2092F74)), (RuntimeObject *)L_6, (RuntimeObject *)L_10, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_12 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_12, (String_t*)L_11, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparseVectorStorage_1_CopyToUnchecked_mA3687633199BF7E15AD3CC512C33AAFC33202E09_RuntimeMethod_var)));
	}

IL_003e:
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_13 = ___target0;
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		NullCheck(L_13);
		L_13->set_ValueCount_4(L_14);
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_15 = ___target0;
		int32_t L_16 = (int32_t)__this->get_ValueCount_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_16);
		NullCheck(L_15);
		L_15->set_Values_3(L_17);
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_18 = ___target0;
		int32_t L_19 = (int32_t)__this->get_ValueCount_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_19);
		NullCheck(L_18);
		L_18->set_Indices_2(L_20);
		int32_t L_21 = (int32_t)__this->get_ValueCount_4();
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_23 = ___target0;
		NullCheck(L_23);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_23->get_Values_3();
		int32_t L_25 = (int32_t)__this->get_ValueCount_4();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_22, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_27 = ___target0;
		NullCheck(L_27);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_27->get_Indices_2();
		int32_t L_29 = (int32_t)__this->get_ValueCount_4();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_26, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_28, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)4)), /*hidden argument*/NULL);
	}

IL_00a8:
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::CopySubVectorToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopySubVectorToUnchecked_mE838BE38195718FADD1710A2421595EF5FF80260_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * ___target0, int32_t ___sourceIndex1, int32_t ___targetIndex2, int32_t ___count3, int32_t ___existingData4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_0 = ___target0;
		V_0 = (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10)));
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_2 = V_0;
		int32_t L_3 = ___sourceIndex1;
		int32_t L_4 = ___targetIndex2;
		int32_t L_5 = ___count3;
		int32_t L_6 = ___existingData4;
		NullCheck((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this);
		((  void (*) (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *, SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this, (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)L_2, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return;
	}

IL_0018:
	{
		int32_t L_7 = ___targetIndex2;
		int32_t L_8 = ___sourceIndex1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_10 = (int32_t)__this->get_ValueCount_4();
		int32_t L_11 = ___sourceIndex1;
		int32_t L_12;
		L_12 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_9, (int32_t)0, (int32_t)L_10, (int32_t)L_11, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_2 = (int32_t)L_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_14 = (int32_t)__this->get_ValueCount_4();
		int32_t L_15 = ___sourceIndex1;
		int32_t L_16 = ___count3;
		int32_t L_17;
		L_17 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_13, (int32_t)0, (int32_t)L_14, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_3 = (int32_t)L_17;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_19 = V_2;
		V_2 = (int32_t)((~L_19));
	}

IL_0050:
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_21 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_21)), (int32_t)1));
	}

IL_0059:
	{
		int32_t L_22 = ___existingData4;
		if (L_22)
		{
			goto IL_0066;
		}
	}
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_23 = ___target0;
		int32_t L_24 = ___targetIndex2;
		int32_t L_25 = ___count3;
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_23);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_23, (int32_t)L_24, (int32_t)L_25);
	}

IL_0066:
	{
		int32_t L_26 = V_2;
		V_4 = (int32_t)L_26;
		goto IL_008f;
	}

IL_006b:
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_27 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		float L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_27);
		VirtActionInvoker2< int32_t, float >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>::At(System.Int32,T) */, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32)), (float)L_36);
		int32_t L_37 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_008f:
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_3;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_006b;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::CopySubVectorToUnchecked(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<T>,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.ExistingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_CopySubVectorToUnchecked_mEE711B6253EEFE8733F0FD11EC23DAD8BB14BE14_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * ___target0, int32_t ___sourceIndex1, int32_t ___targetIndex2, int32_t ___count3, int32_t ___existingData4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_4 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_8 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___targetIndex2;
		int32_t L_1 = ___sourceIndex1;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_3 = (int32_t)__this->get_ValueCount_4();
		int32_t L_4 = ___sourceIndex1;
		int32_t L_5;
		L_5 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)0, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_1 = (int32_t)L_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_7 = (int32_t)__this->get_ValueCount_4();
		int32_t L_8 = ___sourceIndex1;
		int32_t L_9 = ___count3;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_6, (int32_t)0, (int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)1)), /*hidden argument*/Array_BinarySearch_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2DEBB6F0E0EA9BC51A66DBF2CD7F73D0D8C4E97B_RuntimeMethod_var);
		V_2 = (int32_t)L_10;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = (int32_t)((~L_12));
	}

IL_0038:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((~L_14)), (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), (int32_t)1));
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_17 = ___target0;
		if ((!(((RuntimeObject*)(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)__this) == ((RuntimeObject*)(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D *)L_17))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_18 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_18);
		V_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_19;
		int32_t L_20 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_21;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_23 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = V_4;
		int32_t L_25 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_22, (int32_t)L_23, (RuntimeArray *)(RuntimeArray *)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		V_6 = (int32_t)0;
		goto IL_0086;
	}

IL_0070:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = V_5;
		int32_t L_27 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_29 = V_6;
		int32_t L_30 = V_1;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		int32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (int32_t)L_32);
		int32_t L_33 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_34 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = V_5;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_36 = ___existingData4;
		if (L_36)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_37 = ___targetIndex2;
		int32_t L_38 = ___count3;
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this, (int32_t)L_37, (int32_t)L_38);
	}

IL_009b:
	{
		int32_t L_39 = V_1;
		V_7 = (int32_t)L_39;
		goto IL_00bc;
	}

IL_00a0:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = V_5;
		int32_t L_41 = V_7;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_45 = V_4;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this);
		VirtActionInvoker2< int32_t, float >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>::At(System.Int32,T) */, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (float)L_48);
		int32_t L_49 = V_7;
		V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_50 = V_7;
		int32_t L_51 = V_2;
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_00a0;
		}
	}
	{
		return;
	}

IL_00c2:
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_52 = ___target0;
		NullCheck(L_52);
		int32_t L_53 = (int32_t)L_52->get_ValueCount_4();
		if (L_53)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_54 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_55 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_54);
		V_8 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_55;
		int32_t L_56 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_56);
		V_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_57;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_58 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_59 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_60 = V_8;
		int32_t L_61 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_58, (int32_t)L_59, (RuntimeArray *)(RuntimeArray *)L_60, (int32_t)0, (int32_t)L_61, /*hidden argument*/NULL);
		V_10 = (int32_t)0;
		goto IL_0107;
	}

IL_00ef:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = V_9;
		int32_t L_63 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_65 = V_10;
		int32_t L_66 = V_1;
		NullCheck(L_64);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66));
		int32_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		int32_t L_69 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69)));
		int32_t L_70 = V_10;
		V_10 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0107:
	{
		int32_t L_71 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = V_9;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_00ef;
		}
	}
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_73 = ___target0;
		int32_t L_74 = V_3;
		NullCheck(L_73);
		L_73->set_ValueCount_4(L_74);
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_75 = ___target0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_76 = V_8;
		NullCheck(L_75);
		L_75->set_Values_3(L_76);
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_77 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = V_9;
		NullCheck(L_77);
		L_77->set_Indices_2(L_78);
		return;
	}

IL_0127:
	{
		int32_t L_79 = ___existingData4;
		if (L_79)
		{
			goto IL_0134;
		}
	}
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_80 = ___target0;
		int32_t L_81 = ___targetIndex2;
		int32_t L_82 = ___count3;
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_80);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>::Clear(System.Int32,System.Int32) */, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_80, (int32_t)L_81, (int32_t)L_82);
	}

IL_0134:
	{
		int32_t L_83 = V_1;
		V_11 = (int32_t)L_83;
		goto IL_015d;
	}

IL_0139:
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_84 = ___target0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Indices_2();
		int32_t L_86 = V_11;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		int32_t L_89 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_90 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get_Values_3();
		int32_t L_91 = V_11;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		float L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_84);
		VirtActionInvoker2< int32_t, float >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>::At(System.Int32,T) */, (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_84, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_89)), (float)L_93);
		int32_t L_94 = V_11;
		V_11 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_015d:
	{
		int32_t L_95 = V_11;
		int32_t L_96 = V_2;
		if ((((int32_t)L_95) <= ((int32_t)L_96)))
		{
			goto IL_0139;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<T> MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparseVectorStorage_1_Enumerate_mCB4E8AD458E9E15D13320A906DF6569C0870ED22_gshared (SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * __this, const RuntimeMethod* method)
{
	{
		U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A * L_0 = (U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 17));
		((  void (*) (U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)(L_0, (int32_t)((int32_t)-2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A * L_1 = (U3CEnumerateU3Ed__27_tCF4A143AD7E383A399E70A70CA1742B56DD8C75A *)L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
