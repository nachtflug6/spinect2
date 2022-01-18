#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`2<System.Int32,System.Int32>
struct Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39;
// MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Numerics.Complex>
struct DenseVectorStorage_1_tFEFBCD463D1D0F92D92410D51FAAB6EFBDA4532E;
// MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<MathNet.Numerics.Complex32>
struct DenseVectorStorage_1_t89C60D717FC710E192C2A92D3AA98DE14B709563;
// MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Double>
struct DenseVectorStorage_1_tA59E04C952863313AF87B367F1EFCB0E370458A2;
// MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Single>
struct DenseVectorStorage_1_t8A745064A670B3C8239E6D74F783AA432BBA107A;
// System.Func`2<System.Numerics.Complex,System.Numerics.Complex>
struct Func_2_t07A8C3DB493D3FE14259D33200443036194A8695;
// System.Func`2<MathNet.Numerics.Complex32,MathNet.Numerics.Complex32>
struct Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF;
// System.Func`3<System.Double,System.Double,System.Double>
struct Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836;
// System.Func`3<System.Single,System.Single,System.Single>
struct Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029;
// System.Lazy`1<MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>>
struct Lazy_1_t6C877FAEBF8F765EBD90038ED9C322E88E482B6B;
// MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Single>
struct MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762;
// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>
struct MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106;
// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>
struct Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824;
// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>
struct SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828;
// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>
struct SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942;
// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>
struct SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A;
// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>
struct SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D;
// System.Tuple`2<System.Int32,System.Int32>
struct Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800;
// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Numerics.Complex>
struct VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292;
// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<MathNet.Numerics.Complex32>
struct VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759;
// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Double>
struct VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D;
// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Single>
struct VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50;
// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>
struct VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C;
// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>
struct VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C;
// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>
struct VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22;
// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>
struct VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286;
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Numerics.Complex>
struct Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D;
// MathNet.Numerics.LinearAlgebra.Vector`1<MathNet.Numerics.Complex32>
struct Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B;
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Double>
struct Vector_1_t04BD986700481778192B0CF621635E64D169D13C;
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>
struct Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808;
// System.Numerics.Complex[][]
struct ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248;
// MathNet.Numerics.Complex32[][]
struct Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82;
// System.Double[][]
struct DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D;
// System.Single[][]
struct SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9;
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
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// MathNet.Numerics.LinearAlgebra.Complex.DenseVector
struct DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861;
// MathNet.Numerics.LinearAlgebra.Complex32.DenseVector
struct DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61;
// MathNet.Numerics.LinearAlgebra.Double.DenseVector
struct DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719;
// MathNet.Numerics.LinearAlgebra.Single.DenseVector
struct DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MathNet.Numerics.NonConvergenceException
struct NonConvergenceException_t50AF57E869B91728CE433AA3E1827B660F1598BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// MathNet.Numerics.LinearAlgebra.Complex.SparseVector
struct SparseVector_tADDFA71354E35713852E7DB76ED9DBA9D9E20AD6;
// MathNet.Numerics.LinearAlgebra.Complex32.SparseVector
struct SparseVector_tA82AA2D97D9C24EDDCB39F1A127D026ABC144884;
// MathNet.Numerics.LinearAlgebra.Double.SparseVector
struct SparseVector_t9702CC2012FE9D6DEE89F1C3AD8943BAB98FB8D7;
// MathNet.Numerics.LinearAlgebra.Single.SparseVector
struct SparseVector_t64BD0A0497E347BF9DB9CD3757AA84D57000AE9E;
// System.String
struct String_t;
// MathNet.Numerics.LinearAlgebra.Single.Factorization.Svd
struct Svd_t9E10F99365B0F565E7DE6C1B40524E9B3EE4B63C;
// MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd
struct UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B;
// MathNet.Numerics.LinearAlgebra.Complex.Vector
struct Vector_t84EE4BAA5EDA2E942AAD609FF75367ADA443BE07;
// MathNet.Numerics.LinearAlgebra.Complex32.Vector
struct Vector_t6DFC94D581E7CF23762737E2B0568804DAE09347;
// MathNet.Numerics.LinearAlgebra.Double.Vector
struct Vector_tBD4436AB437CD3DFA0CBED53A472B4B10F222CF4;
// MathNet.Numerics.LinearAlgebra.Single.Vector
struct Vector_tC2B16E18D2F08FAB11EBC3F53BD921019D483A23;
// MathNet.Numerics.LinearAlgebra.Complex.VectorBuilder
struct VectorBuilder_t262221E67253468CF11E5EF5BBE7CBBE3EAF3682;
// MathNet.Numerics.LinearAlgebra.Complex32.VectorBuilder
struct VectorBuilder_tB5B8F36B1891DDC21BFC2835929362AA85BC5760;
// MathNet.Numerics.LinearAlgebra.Double.VectorBuilder
struct VectorBuilder_t27F544C8F272F10718BA58EB8B90D61FDFF837B4;
// MathNet.Numerics.LinearAlgebra.Single.VectorBuilder
struct VectorBuilder_tBD84D67FCAE41E7AC3F9063986B69F3A4310C560;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// MathNet.Numerics.Threading.CommonParallel/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD71DDD18BA374CDF471F0C79150D68FFD786200E;
// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798;
// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A;
// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0
struct U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307;
// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0
struct U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF;
// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626;
// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF;
// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0
struct U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6;
// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0
struct U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F;
// MathNet.Numerics.LinearAlgebra.Complex.Matrix/<>c
struct U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E;
// MathNet.Numerics.LinearAlgebra.Complex32.Matrix/<>c
struct U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D;
// MathNet.Numerics.LinearAlgebra.Double.Matrix/<>c
struct U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026;
// MathNet.Numerics.LinearAlgebra.Single.Matrix/<>c
struct U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C;
// MathNet.Numerics.LinearAlgebra.Complex.SparseMatrix/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t408578E6F10F91FF8F82BD142E9AF9CA2101B43D;
// MathNet.Numerics.LinearAlgebra.Complex32.SparseMatrix/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t15A696C0D5871085BFEB945F9F3E5B9D0A0DC927;
// MathNet.Numerics.LinearAlgebra.Double.SparseMatrix/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t2D9281B3976A6A09CFF574EC00CD13CA026BA4AC;
// MathNet.Numerics.LinearAlgebra.Single.SparseMatrix/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t9F5BEB6EE44DB006FE4080ED7EC922A10946E1CC;

IL2CPP_EXTERN_C RuntimeClass* Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NonConvergenceException_t50AF57E869B91728CE433AA3E1827B660F1598BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Precision_t09A54474F11AC81B64BA6ED0F3D1589CECA59AC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SparseVector_t64BD0A0497E347BF9DB9CD3757AA84D57000AE9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SparseVector_t9702CC2012FE9D6DEE89F1C3AD8943BAB98FB8D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SparseVector_tA82AA2D97D9C24EDDCB39F1A127D026ABC144884_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SparseVector_tADDFA71354E35713852E7DB76ED9DBA9D9E20AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_t04BD986700481778192B0CF621635E64D169D13C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatrixBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1DC606BB20504AA9BBCA6A1554DDC6B7DD735534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_Clone_m28F38218ED4D4BADB091639903F0EF34F3741FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_Transpose_m2D5102E11EF061BCE3E47EF6F56E9E0ABA11912F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mDD80BAE31CBB45588E597B8480586D0505C3CA9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m5D6F7E4C92BBD480D813546956284E11D1809F85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserSvd_Create_m5820D2FBF3BDD708D12469D119A82570F25B1D02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB8B0DD72229D523384C33BBB467BBA92F7036D5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorBuilder_1__ctor_m5B68D5011AD6688AAAAA5CF784DFE4CF657E30ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorBuilder_1__ctor_m907E0AAC305E7E9D046B5CCB341AA2277DF482F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorBuilder_1__ctor_mC499D888CF00D8AAD275C438F97D5D3BAD82EAED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorBuilder_1__ctor_mE82A7CC3BE0D90168D2C047BD0E69808EF813B7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_m24B7094461F1152A5BCCDEA4D2FA8F3C685F2E69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_m6D77CB1F245A3AB32848A64D6B2825335FE61DE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_mCA8B762CC49EC6905C66863F43EEC8018DBF5B8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_mD9B3622F27B4C2F9726878D7A20A4DB21AB37F32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248;
struct Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82;
struct DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D;
struct SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9;
struct ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5;
struct Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Single>
struct MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762  : public RuntimeObject
{
public:

public:
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


// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>
struct Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824  : public RuntimeObject
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1::<Storage>k__BackingField
	MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * ___U3CStorageU3Ek__BackingField_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1::<ColumnCount>k__BackingField
	int32_t ___U3CColumnCountU3Ek__BackingField_4;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1::<RowCount>k__BackingField
	int32_t ___U3CRowCountU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStorageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824, ___U3CStorageU3Ek__BackingField_3)); }
	inline MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * get_U3CStorageU3Ek__BackingField_3() const { return ___U3CStorageU3Ek__BackingField_3; }
	inline MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 ** get_address_of_U3CStorageU3Ek__BackingField_3() { return &___U3CStorageU3Ek__BackingField_3; }
	inline void set_U3CStorageU3Ek__BackingField_3(MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * value)
	{
		___U3CStorageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CColumnCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824, ___U3CColumnCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CColumnCountU3Ek__BackingField_4() const { return ___U3CColumnCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CColumnCountU3Ek__BackingField_4() { return &___U3CColumnCountU3Ek__BackingField_4; }
	inline void set_U3CColumnCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CColumnCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRowCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824, ___U3CRowCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CRowCountU3Ek__BackingField_5() const { return ___U3CRowCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CRowCountU3Ek__BackingField_5() { return &___U3CRowCountU3Ek__BackingField_5; }
	inline void set_U3CRowCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CRowCountU3Ek__BackingField_5 = value;
	}
};

struct Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Matrix`1::One
	float ___One_0;
	// T MathNet.Numerics.LinearAlgebra.Matrix`1::Zero
	float ___Zero_1;
	// MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1::Build
	MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762 * ___Build_2;

public:
	inline static int32_t get_offset_of_One_0() { return static_cast<int32_t>(offsetof(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_StaticFields, ___One_0)); }
	inline float get_One_0() const { return ___One_0; }
	inline float* get_address_of_One_0() { return &___One_0; }
	inline void set_One_0(float value)
	{
		___One_0 = value;
	}

	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_StaticFields, ___Zero_1)); }
	inline float get_Zero_1() const { return ___Zero_1; }
	inline float* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(float value)
	{
		___Zero_1 = value;
	}

	inline static int32_t get_offset_of_Build_2() { return static_cast<int32_t>(offsetof(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_StaticFields, ___Build_2)); }
	inline MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762 * get_Build_2() const { return ___Build_2; }
	inline MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762 ** get_address_of_Build_2() { return &___Build_2; }
	inline void set_Build_2(MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762 * value)
	{
		___Build_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Build_2), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Factorization.Svd`1<System.Single>
struct Svd_1_t262EFC899C6A4189458E42758F7867708CE218A5  : public RuntimeObject
{
public:
	// System.Lazy`1<MathNet.Numerics.LinearAlgebra.Matrix`1<T>> MathNet.Numerics.LinearAlgebra.Factorization.Svd`1::_lazyW
	Lazy_1_t6C877FAEBF8F765EBD90038ED9C322E88E482B6B * ____lazyW_0;
	// System.Boolean MathNet.Numerics.LinearAlgebra.Factorization.Svd`1::VectorsComputed
	bool ___VectorsComputed_1;
	// MathNet.Numerics.LinearAlgebra.Vector`1<T> MathNet.Numerics.LinearAlgebra.Factorization.Svd`1::<S>k__BackingField
	Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * ___U3CSU3Ek__BackingField_2;
	// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Factorization.Svd`1::<U>k__BackingField
	Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___U3CUU3Ek__BackingField_3;
	// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Factorization.Svd`1::<VT>k__BackingField
	Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___U3CVTU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__lazyW_0() { return static_cast<int32_t>(offsetof(Svd_1_t262EFC899C6A4189458E42758F7867708CE218A5, ____lazyW_0)); }
	inline Lazy_1_t6C877FAEBF8F765EBD90038ED9C322E88E482B6B * get__lazyW_0() const { return ____lazyW_0; }
	inline Lazy_1_t6C877FAEBF8F765EBD90038ED9C322E88E482B6B ** get_address_of__lazyW_0() { return &____lazyW_0; }
	inline void set__lazyW_0(Lazy_1_t6C877FAEBF8F765EBD90038ED9C322E88E482B6B * value)
	{
		____lazyW_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lazyW_0), (void*)value);
	}

	inline static int32_t get_offset_of_VectorsComputed_1() { return static_cast<int32_t>(offsetof(Svd_1_t262EFC899C6A4189458E42758F7867708CE218A5, ___VectorsComputed_1)); }
	inline bool get_VectorsComputed_1() const { return ___VectorsComputed_1; }
	inline bool* get_address_of_VectorsComputed_1() { return &___VectorsComputed_1; }
	inline void set_VectorsComputed_1(bool value)
	{
		___VectorsComputed_1 = value;
	}

	inline static int32_t get_offset_of_U3CSU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Svd_1_t262EFC899C6A4189458E42758F7867708CE218A5, ___U3CSU3Ek__BackingField_2)); }
	inline Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * get_U3CSU3Ek__BackingField_2() const { return ___U3CSU3Ek__BackingField_2; }
	inline Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 ** get_address_of_U3CSU3Ek__BackingField_2() { return &___U3CSU3Ek__BackingField_2; }
	inline void set_U3CSU3Ek__BackingField_2(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * value)
	{
		___U3CSU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Svd_1_t262EFC899C6A4189458E42758F7867708CE218A5, ___U3CUU3Ek__BackingField_3)); }
	inline Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * get_U3CUU3Ek__BackingField_3() const { return ___U3CUU3Ek__BackingField_3; }
	inline Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 ** get_address_of_U3CUU3Ek__BackingField_3() { return &___U3CUU3Ek__BackingField_3; }
	inline void set_U3CUU3Ek__BackingField_3(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * value)
	{
		___U3CUU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVTU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Svd_1_t262EFC899C6A4189458E42758F7867708CE218A5, ___U3CVTU3Ek__BackingField_4)); }
	inline Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * get_U3CVTU3Ek__BackingField_4() const { return ___U3CVTU3Ek__BackingField_4; }
	inline Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 ** get_address_of_U3CVTU3Ek__BackingField_4() { return &___U3CVTU3Ek__BackingField_4; }
	inline void set_U3CVTU3Ek__BackingField_4(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * value)
	{
		___U3CVTU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVTU3Ek__BackingField_4), (void*)value);
	}
};


// System.Tuple`2<System.Int32,System.Int32>
struct Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800, ___m_Item1_0)); }
	inline int32_t get_m_Item1_0() const { return ___m_Item1_0; }
	inline int32_t* get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(int32_t value)
	{
		___m_Item1_0 = value;
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800, ___m_Item2_1)); }
	inline int32_t get_m_Item2_1() const { return ___m_Item2_1; }
	inline int32_t* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(int32_t value)
	{
		___m_Item2_1 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Numerics.Complex>
struct VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292  : public RuntimeObject
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<MathNet.Numerics.Complex32>
struct VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759  : public RuntimeObject
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Double>
struct VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D  : public RuntimeObject
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Single>
struct VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50  : public RuntimeObject
{
public:

public:
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


// MathNet.Numerics.LinearAlgebra.Vector`1<System.Double>
struct Vector_1_t04BD986700481778192B0CF621635E64D169D13C  : public RuntimeObject
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::<Storage>k__BackingField
	VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * ___U3CStorageU3Ek__BackingField_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Vector`1::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CStorageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Vector_1_t04BD986700481778192B0CF621635E64D169D13C, ___U3CStorageU3Ek__BackingField_3)); }
	inline VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * get_U3CStorageU3Ek__BackingField_3() const { return ___U3CStorageU3Ek__BackingField_3; }
	inline VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 ** get_address_of_U3CStorageU3Ek__BackingField_3() { return &___U3CStorageU3Ek__BackingField_3; }
	inline void set_U3CStorageU3Ek__BackingField_3(VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * value)
	{
		___U3CStorageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Vector_1_t04BD986700481778192B0CF621635E64D169D13C, ___U3CCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CCountU3Ek__BackingField_4() const { return ___U3CCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_4() { return &___U3CCountU3Ek__BackingField_4; }
	inline void set_U3CCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CCountU3Ek__BackingField_4 = value;
	}
};

struct Vector_1_t04BD986700481778192B0CF621635E64D169D13C_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Vector`1::Zero
	double ___Zero_0;
	// T MathNet.Numerics.LinearAlgebra.Vector`1::One
	double ___One_1;
	// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::Build
	VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D * ___Build_2;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vector_1_t04BD986700481778192B0CF621635E64D169D13C_StaticFields, ___Zero_0)); }
	inline double get_Zero_0() const { return ___Zero_0; }
	inline double* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(double value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_One_1() { return static_cast<int32_t>(offsetof(Vector_1_t04BD986700481778192B0CF621635E64D169D13C_StaticFields, ___One_1)); }
	inline double get_One_1() const { return ___One_1; }
	inline double* get_address_of_One_1() { return &___One_1; }
	inline void set_One_1(double value)
	{
		___One_1 = value;
	}

	inline static int32_t get_offset_of_Build_2() { return static_cast<int32_t>(offsetof(Vector_1_t04BD986700481778192B0CF621635E64D169D13C_StaticFields, ___Build_2)); }
	inline VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D * get_Build_2() const { return ___Build_2; }
	inline VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D ** get_address_of_Build_2() { return &___Build_2; }
	inline void set_Build_2(VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D * value)
	{
		___Build_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Build_2), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>
struct Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808  : public RuntimeObject
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::<Storage>k__BackingField
	VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * ___U3CStorageU3Ek__BackingField_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Vector`1::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CStorageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808, ___U3CStorageU3Ek__BackingField_3)); }
	inline VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * get_U3CStorageU3Ek__BackingField_3() const { return ___U3CStorageU3Ek__BackingField_3; }
	inline VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 ** get_address_of_U3CStorageU3Ek__BackingField_3() { return &___U3CStorageU3Ek__BackingField_3; }
	inline void set_U3CStorageU3Ek__BackingField_3(VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * value)
	{
		___U3CStorageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808, ___U3CCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CCountU3Ek__BackingField_4() const { return ___U3CCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_4() { return &___U3CCountU3Ek__BackingField_4; }
	inline void set_U3CCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CCountU3Ek__BackingField_4 = value;
	}
};

struct Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Vector`1::Zero
	float ___Zero_0;
	// T MathNet.Numerics.LinearAlgebra.Vector`1::One
	float ___One_1;
	// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::Build
	VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 * ___Build_2;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_StaticFields, ___Zero_0)); }
	inline float get_Zero_0() const { return ___Zero_0; }
	inline float* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(float value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_One_1() { return static_cast<int32_t>(offsetof(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_StaticFields, ___One_1)); }
	inline float get_One_1() const { return ___One_1; }
	inline float* get_address_of_One_1() { return &___One_1; }
	inline void set_One_1(float value)
	{
		___One_1 = value;
	}

	inline static int32_t get_offset_of_Build_2() { return static_cast<int32_t>(offsetof(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_StaticFields, ___Build_2)); }
	inline VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 * get_Build_2() const { return ___Build_2; }
	inline VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 ** get_address_of_Build_2() { return &___Build_2; }
	inline void set_Build_2(VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 * value)
	{
		___Build_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Build_2), (void*)value);
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

// MathNet.Numerics.Threading.CommonParallel/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD71DDD18BA374CDF471F0C79150D68FFD786200E  : public RuntimeObject
{
public:
	// System.Action`2<System.Int32,System.Int32> MathNet.Numerics.Threading.CommonParallel/<>c__DisplayClass2_0::body
	Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___body_0;

public:
	inline static int32_t get_offset_of_body_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tD71DDD18BA374CDF471F0C79150D68FFD786200E, ___body_0)); }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * get_body_0() const { return ___body_0; }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 ** get_address_of_body_0() { return &___body_0; }
	inline void set_body_0(Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * value)
	{
		___body_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_0), (void*)value);
	}
};


// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0::columnsX
	int32_t ___columnsX_0;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0::rowsX
	int32_t ___rowsX_1;
	// System.Numerics.Complex[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0::x
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ___x_2;
	// System.Numerics.Complex[][] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0::columnDataB
	ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248* ___columnDataB_3;
	// System.Numerics.Complex[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0::result
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ___result_4;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0::columnsY
	int32_t ___columnsY_5;

public:
	inline static int32_t get_offset_of_columnsX_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798, ___columnsX_0)); }
	inline int32_t get_columnsX_0() const { return ___columnsX_0; }
	inline int32_t* get_address_of_columnsX_0() { return &___columnsX_0; }
	inline void set_columnsX_0(int32_t value)
	{
		___columnsX_0 = value;
	}

	inline static int32_t get_offset_of_rowsX_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798, ___rowsX_1)); }
	inline int32_t get_rowsX_1() const { return ___rowsX_1; }
	inline int32_t* get_address_of_rowsX_1() { return &___rowsX_1; }
	inline void set_rowsX_1(int32_t value)
	{
		___rowsX_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798, ___x_2)); }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* get_x_2() const { return ___x_2; }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		___x_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_2), (void*)value);
	}

	inline static int32_t get_offset_of_columnDataB_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798, ___columnDataB_3)); }
	inline ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248* get_columnDataB_3() const { return ___columnDataB_3; }
	inline ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248** get_address_of_columnDataB_3() { return &___columnDataB_3; }
	inline void set_columnDataB_3(ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248* value)
	{
		___columnDataB_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnDataB_3), (void*)value);
	}

	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798, ___result_4)); }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* get_result_4() const { return ___result_4; }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_4), (void*)value);
	}

	inline static int32_t get_offset_of_columnsY_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798, ___columnsY_5)); }
	inline int32_t get_columnsY_5() const { return ___columnsY_5; }
	inline int32_t* get_address_of_columnsY_5() { return &___columnsY_5; }
	inline void set_columnsY_5(int32_t value)
	{
		___columnsY_5 = value;
	}
};


// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0
struct U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0::columnsX
	int32_t ___columnsX_0;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0::rowsX
	int32_t ___rowsX_1;
	// System.Single[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0::x
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___x_2;
	// System.Single[][] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0::columnDataB
	SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* ___columnDataB_3;
	// System.Single[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0::result
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___result_4;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0::columnsY
	int32_t ___columnsY_5;

public:
	inline static int32_t get_offset_of_columnsX_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307, ___columnsX_0)); }
	inline int32_t get_columnsX_0() const { return ___columnsX_0; }
	inline int32_t* get_address_of_columnsX_0() { return &___columnsX_0; }
	inline void set_columnsX_0(int32_t value)
	{
		___columnsX_0 = value;
	}

	inline static int32_t get_offset_of_rowsX_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307, ___rowsX_1)); }
	inline int32_t get_rowsX_1() const { return ___rowsX_1; }
	inline int32_t* get_address_of_rowsX_1() { return &___rowsX_1; }
	inline void set_rowsX_1(int32_t value)
	{
		___rowsX_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307, ___x_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_x_2() const { return ___x_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___x_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_2), (void*)value);
	}

	inline static int32_t get_offset_of_columnDataB_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307, ___columnDataB_3)); }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* get_columnDataB_3() const { return ___columnDataB_3; }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9** get_address_of_columnDataB_3() { return &___columnDataB_3; }
	inline void set_columnDataB_3(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* value)
	{
		___columnDataB_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnDataB_3), (void*)value);
	}

	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307, ___result_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_result_4() const { return ___result_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_4), (void*)value);
	}

	inline static int32_t get_offset_of_columnsY_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307, ___columnsY_5)); }
	inline int32_t get_columnsY_5() const { return ___columnsY_5; }
	inline int32_t* get_address_of_columnsY_5() { return &___columnsY_5; }
	inline void set_columnsY_5(int32_t value)
	{
		___columnsY_5 = value;
	}
};


// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0::columnsX
	int32_t ___columnsX_0;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0::rowsX
	int32_t ___rowsX_1;
	// MathNet.Numerics.Complex32[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0::x
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___x_2;
	// MathNet.Numerics.Complex32[][] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0::columnDataB
	Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82* ___columnDataB_3;
	// MathNet.Numerics.Complex32[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0::result
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___result_4;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0::columnsY
	int32_t ___columnsY_5;

public:
	inline static int32_t get_offset_of_columnsX_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626, ___columnsX_0)); }
	inline int32_t get_columnsX_0() const { return ___columnsX_0; }
	inline int32_t* get_address_of_columnsX_0() { return &___columnsX_0; }
	inline void set_columnsX_0(int32_t value)
	{
		___columnsX_0 = value;
	}

	inline static int32_t get_offset_of_rowsX_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626, ___rowsX_1)); }
	inline int32_t get_rowsX_1() const { return ___rowsX_1; }
	inline int32_t* get_address_of_rowsX_1() { return &___rowsX_1; }
	inline void set_rowsX_1(int32_t value)
	{
		___rowsX_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626, ___x_2)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get_x_2() const { return ___x_2; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		___x_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_2), (void*)value);
	}

	inline static int32_t get_offset_of_columnDataB_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626, ___columnDataB_3)); }
	inline Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82* get_columnDataB_3() const { return ___columnDataB_3; }
	inline Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82** get_address_of_columnDataB_3() { return &___columnDataB_3; }
	inline void set_columnDataB_3(Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82* value)
	{
		___columnDataB_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnDataB_3), (void*)value);
	}

	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626, ___result_4)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get_result_4() const { return ___result_4; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_4), (void*)value);
	}

	inline static int32_t get_offset_of_columnsY_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626, ___columnsY_5)); }
	inline int32_t get_columnsY_5() const { return ___columnsY_5; }
	inline int32_t* get_address_of_columnsY_5() { return &___columnsY_5; }
	inline void set_columnsY_5(int32_t value)
	{
		___columnsY_5 = value;
	}
};


// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0
struct U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0::columnsX
	int32_t ___columnsX_0;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0::rowsX
	int32_t ___rowsX_1;
	// System.Double[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0::x
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___x_2;
	// System.Double[][] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0::columnDataB
	DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* ___columnDataB_3;
	// System.Double[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0::result
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___result_4;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0::columnsY
	int32_t ___columnsY_5;

public:
	inline static int32_t get_offset_of_columnsX_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6, ___columnsX_0)); }
	inline int32_t get_columnsX_0() const { return ___columnsX_0; }
	inline int32_t* get_address_of_columnsX_0() { return &___columnsX_0; }
	inline void set_columnsX_0(int32_t value)
	{
		___columnsX_0 = value;
	}

	inline static int32_t get_offset_of_rowsX_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6, ___rowsX_1)); }
	inline int32_t get_rowsX_1() const { return ___rowsX_1; }
	inline int32_t* get_address_of_rowsX_1() { return &___rowsX_1; }
	inline void set_rowsX_1(int32_t value)
	{
		___rowsX_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6, ___x_2)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_x_2() const { return ___x_2; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___x_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_2), (void*)value);
	}

	inline static int32_t get_offset_of_columnDataB_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6, ___columnDataB_3)); }
	inline DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* get_columnDataB_3() const { return ___columnDataB_3; }
	inline DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D** get_address_of_columnDataB_3() { return &___columnDataB_3; }
	inline void set_columnDataB_3(DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* value)
	{
		___columnDataB_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnDataB_3), (void*)value);
	}

	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6, ___result_4)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_result_4() const { return ___result_4; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_4), (void*)value);
	}

	inline static int32_t get_offset_of_columnsY_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6, ___columnsY_5)); }
	inline int32_t get_columnsY_5() const { return ___columnsY_5; }
	inline int32_t* get_address_of_columnsY_5() { return &___columnsY_5; }
	inline void set_columnsY_5(int32_t value)
	{
		___columnsY_5 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Complex.Matrix/<>c
struct U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E_StaticFields
{
public:
	// MathNet.Numerics.LinearAlgebra.Complex.Matrix/<>c MathNet.Numerics.LinearAlgebra.Complex.Matrix/<>c::<>9
	U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E * ___U3CU3E9_0;
	// System.Func`2<System.Numerics.Complex,System.Numerics.Complex> MathNet.Numerics.LinearAlgebra.Complex.Matrix/<>c::<>9__2_0
	Func_2_t07A8C3DB493D3FE14259D33200443036194A8695 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t07A8C3DB493D3FE14259D33200443036194A8695 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t07A8C3DB493D3FE14259D33200443036194A8695 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t07A8C3DB493D3FE14259D33200443036194A8695 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Complex32.Matrix/<>c
struct U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D_StaticFields
{
public:
	// MathNet.Numerics.LinearAlgebra.Complex32.Matrix/<>c MathNet.Numerics.LinearAlgebra.Complex32.Matrix/<>c::<>9
	U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D * ___U3CU3E9_0;
	// System.Func`2<MathNet.Numerics.Complex32,MathNet.Numerics.Complex32> MathNet.Numerics.LinearAlgebra.Complex32.Matrix/<>c::<>9__2_0
	Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t3AB2DBEEB61960C71E8C7FD4236D4D377805F8CF * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Double.Matrix/<>c
struct U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026_StaticFields
{
public:
	// MathNet.Numerics.LinearAlgebra.Double.Matrix/<>c MathNet.Numerics.LinearAlgebra.Double.Matrix/<>c::<>9
	U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026 * ___U3CU3E9_0;
	// System.Func`3<System.Double,System.Double,System.Double> MathNet.Numerics.LinearAlgebra.Double.Matrix/<>c::<>9__7_0
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Single.Matrix/<>c
struct U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C_StaticFields
{
public:
	// MathNet.Numerics.LinearAlgebra.Single.Matrix/<>c MathNet.Numerics.LinearAlgebra.Single.Matrix/<>c::<>9
	U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C * ___U3CU3E9_0;
	// System.Func`3<System.Single,System.Single,System.Single> MathNet.Numerics.LinearAlgebra.Single.Matrix/<>c::<>9__7_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// MathNet.Numerics.Providers.Common.NativeProviderLoader/UnixLoader
struct UnixLoader_t2EE7BD1BA818E50A14BA40FF19A446FF55FF0D17  : public RuntimeObject
{
public:

public:
};


// MathNet.Numerics.Providers.Common.NativeProviderLoader/WindowsLoader
struct WindowsLoader_t1F0181AAC5C35D5CE3D5D51340CBA4B0D0B8E04A  : public RuntimeObject
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.Complex.SparseMatrix/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t408578E6F10F91FF8F82BD142E9AF9CA2101B43D  : public RuntimeObject
{
public:
	// System.Numerics.Complex[] MathNet.Numerics.LinearAlgebra.Complex.SparseMatrix/<>c__DisplayClass50_0::diagonal
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ___diagonal_0;

public:
	inline static int32_t get_offset_of_diagonal_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t408578E6F10F91FF8F82BD142E9AF9CA2101B43D, ___diagonal_0)); }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* get_diagonal_0() const { return ___diagonal_0; }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** get_address_of_diagonal_0() { return &___diagonal_0; }
	inline void set_diagonal_0(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		___diagonal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagonal_0), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Complex32.SparseMatrix/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t15A696C0D5871085BFEB945F9F3E5B9D0A0DC927  : public RuntimeObject
{
public:
	// MathNet.Numerics.Complex32[] MathNet.Numerics.LinearAlgebra.Complex32.SparseMatrix/<>c__DisplayClass50_0::diagonal
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___diagonal_0;

public:
	inline static int32_t get_offset_of_diagonal_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t15A696C0D5871085BFEB945F9F3E5B9D0A0DC927, ___diagonal_0)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get_diagonal_0() const { return ___diagonal_0; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of_diagonal_0() { return &___diagonal_0; }
	inline void set_diagonal_0(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		___diagonal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagonal_0), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Double.SparseMatrix/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t2D9281B3976A6A09CFF574EC00CD13CA026BA4AC  : public RuntimeObject
{
public:
	// System.Double[] MathNet.Numerics.LinearAlgebra.Double.SparseMatrix/<>c__DisplayClass50_0::diagonal
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___diagonal_0;

public:
	inline static int32_t get_offset_of_diagonal_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t2D9281B3976A6A09CFF574EC00CD13CA026BA4AC, ___diagonal_0)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_diagonal_0() const { return ___diagonal_0; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_diagonal_0() { return &___diagonal_0; }
	inline void set_diagonal_0(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___diagonal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagonal_0), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Single.SparseMatrix/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t9F5BEB6EE44DB006FE4080ED7EC922A10946E1CC  : public RuntimeObject
{
public:
	// System.Single[] MathNet.Numerics.LinearAlgebra.Single.SparseMatrix/<>c__DisplayClass50_0::diagonal
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___diagonal_0;

public:
	inline static int32_t get_offset_of_diagonal_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t9F5BEB6EE44DB006FE4080ED7EC922A10946E1CC, ___diagonal_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_diagonal_0() const { return ___diagonal_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_diagonal_0() { return &___diagonal_0; }
	inline void set_diagonal_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___diagonal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagonal_0), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Double>
struct DenseVectorStorage_1_tA59E04C952863313AF87B367F1EFCB0E370458A2  : public VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22
{
public:
	// T[] MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1::Data
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(DenseVectorStorage_1_tA59E04C952863313AF87B367F1EFCB0E370458A2, ___Data_2)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_Data_2() const { return ___Data_2; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_2), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Single>
struct DenseVectorStorage_1_t8A745064A670B3C8239E6D74F783AA432BBA107A  : public VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286
{
public:
	// T[] MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1::Data
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(DenseVectorStorage_1_t8A745064A670B3C8239E6D74F783AA432BBA107A, ___Data_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Data_2() const { return ___Data_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_2), (void*)value);
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


// MathNet.Numerics.LinearAlgebra.Single.Factorization.Svd
struct Svd_t9E10F99365B0F565E7DE6C1B40524E9B3EE4B63C  : public Svd_1_t262EFC899C6A4189458E42758F7867708CE218A5
{
public:

public:
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Double.Vector
struct Vector_tBD4436AB437CD3DFA0CBED53A472B4B10F222CF4  : public Vector_1_t04BD986700481778192B0CF621635E64D169D13C
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.Single.Vector
struct Vector_tC2B16E18D2F08FAB11EBC3F53BD921019D483A23  : public Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.Complex.VectorBuilder
struct VectorBuilder_t262221E67253468CF11E5EF5BBE7CBBE3EAF3682  : public VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.Complex32.VectorBuilder
struct VectorBuilder_tB5B8F36B1891DDC21BFC2835929362AA85BC5760  : public VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.Double.VectorBuilder
struct VectorBuilder_t27F544C8F272F10718BA58EB8B90D61FDFF837B4  : public VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.Single.VectorBuilder
struct VectorBuilder_tBD84D67FCAE41E7AC3F9063986B69F3A4310C560  : public VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50
{
public:

public:
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


// MathNet.Numerics.LinearAlgebra.Vector`1<System.Numerics.Complex>
struct Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D  : public RuntimeObject
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::<Storage>k__BackingField
	VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * ___U3CStorageU3Ek__BackingField_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Vector`1::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CStorageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D, ___U3CStorageU3Ek__BackingField_3)); }
	inline VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * get_U3CStorageU3Ek__BackingField_3() const { return ___U3CStorageU3Ek__BackingField_3; }
	inline VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C ** get_address_of_U3CStorageU3Ek__BackingField_3() { return &___U3CStorageU3Ek__BackingField_3; }
	inline void set_U3CStorageU3Ek__BackingField_3(VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * value)
	{
		___U3CStorageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D, ___U3CCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CCountU3Ek__BackingField_4() const { return ___U3CCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_4() { return &___U3CCountU3Ek__BackingField_4; }
	inline void set_U3CCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CCountU3Ek__BackingField_4 = value;
	}
};

struct Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Vector`1::Zero
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___Zero_0;
	// T MathNet.Numerics.LinearAlgebra.Vector`1::One
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___One_1;
	// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::Build
	VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292 * ___Build_2;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D_StaticFields, ___Zero_0)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_Zero_0() const { return ___Zero_0; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_One_1() { return static_cast<int32_t>(offsetof(Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D_StaticFields, ___One_1)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_One_1() const { return ___One_1; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_One_1() { return &___One_1; }
	inline void set_One_1(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___One_1 = value;
	}

	inline static int32_t get_offset_of_Build_2() { return static_cast<int32_t>(offsetof(Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D_StaticFields, ___Build_2)); }
	inline VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292 * get_Build_2() const { return ___Build_2; }
	inline VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292 ** get_address_of_Build_2() { return &___Build_2; }
	inline void set_Build_2(VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292 * value)
	{
		___Build_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Build_2), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Vector`1<MathNet.Numerics.Complex32>
struct Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B  : public RuntimeObject
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::<Storage>k__BackingField
	VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * ___U3CStorageU3Ek__BackingField_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Vector`1::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CStorageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B, ___U3CStorageU3Ek__BackingField_3)); }
	inline VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * get_U3CStorageU3Ek__BackingField_3() const { return ___U3CStorageU3Ek__BackingField_3; }
	inline VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C ** get_address_of_U3CStorageU3Ek__BackingField_3() { return &___U3CStorageU3Ek__BackingField_3; }
	inline void set_U3CStorageU3Ek__BackingField_3(VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * value)
	{
		___U3CStorageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B, ___U3CCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CCountU3Ek__BackingField_4() const { return ___U3CCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_4() { return &___U3CCountU3Ek__BackingField_4; }
	inline void set_U3CCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CCountU3Ek__BackingField_4 = value;
	}
};

struct Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B_StaticFields
{
public:
	// T MathNet.Numerics.LinearAlgebra.Vector`1::Zero
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___Zero_0;
	// T MathNet.Numerics.LinearAlgebra.Vector`1::One
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___One_1;
	// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::Build
	VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759 * ___Build_2;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B_StaticFields, ___Zero_0)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_Zero_0() const { return ___Zero_0; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_One_1() { return static_cast<int32_t>(offsetof(Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B_StaticFields, ___One_1)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_One_1() const { return ___One_1; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_One_1() { return &___One_1; }
	inline void set_One_1(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___One_1 = value;
	}

	inline static int32_t get_offset_of_Build_2() { return static_cast<int32_t>(offsetof(Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B_StaticFields, ___Build_2)); }
	inline VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759 * get_Build_2() const { return ___Build_2; }
	inline VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759 ** get_address_of_Build_2() { return &___Build_2; }
	inline void set_Build_2(VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759 * value)
	{
		___Build_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Build_2), (void*)value);
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

// MathNet.Numerics.LinearAlgebra.Double.DenseVector
struct DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719  : public Vector_tBD4436AB437CD3DFA0CBED53A472B4B10F222CF4
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Double.DenseVector::_length
	int32_t ____length_5;
	// System.Double[] MathNet.Numerics.LinearAlgebra.Double.DenseVector::_values
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____values_6;

public:
	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__values_6() { return static_cast<int32_t>(offsetof(DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719, ____values_6)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__values_6() const { return ____values_6; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__values_6() { return &____values_6; }
	inline void set__values_6(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____values_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_6), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Single.DenseVector
struct DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4  : public Vector_tC2B16E18D2F08FAB11EBC3F53BD921019D483A23
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Single.DenseVector::_length
	int32_t ____length_5;
	// System.Single[] MathNet.Numerics.LinearAlgebra.Single.DenseVector::_values
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____values_6;

public:
	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__values_6() { return static_cast<int32_t>(offsetof(DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4, ____values_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__values_6() const { return ____values_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__values_6() { return &____values_6; }
	inline void set__values_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____values_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_6), (void*)value);
	}
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

// MathNet.Numerics.LinearAlgebra.Double.SparseVector
struct SparseVector_t9702CC2012FE9D6DEE89F1C3AD8943BAB98FB8D7  : public Vector_tBD4436AB437CD3DFA0CBED53A472B4B10F222CF4
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double> MathNet.Numerics.LinearAlgebra.Double.SparseVector::_storage
	SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * ____storage_5;

public:
	inline static int32_t get_offset_of__storage_5() { return static_cast<int32_t>(offsetof(SparseVector_t9702CC2012FE9D6DEE89F1C3AD8943BAB98FB8D7, ____storage_5)); }
	inline SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * get__storage_5() const { return ____storage_5; }
	inline SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A ** get_address_of__storage_5() { return &____storage_5; }
	inline void set__storage_5(SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * value)
	{
		____storage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storage_5), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Single.SparseVector
struct SparseVector_t64BD0A0497E347BF9DB9CD3757AA84D57000AE9E  : public Vector_tC2B16E18D2F08FAB11EBC3F53BD921019D483A23
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single> MathNet.Numerics.LinearAlgebra.Single.SparseVector::_storage
	SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * ____storage_5;

public:
	inline static int32_t get_offset_of__storage_5() { return static_cast<int32_t>(offsetof(SparseVector_t64BD0A0497E347BF9DB9CD3757AA84D57000AE9E, ____storage_5)); }
	inline SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * get__storage_5() const { return ____storage_5; }
	inline SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D ** get_address_of__storage_5() { return &____storage_5; }
	inline void set__storage_5(SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * value)
	{
		____storage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storage_5), (void*)value);
	}
};


// MathNet.Numerics.Providers.LinearAlgebra.Transpose
struct Transpose_tF8F7165A0D2F3013E462FE048FC1E4A301F79271 
{
public:
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Transpose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transpose_tF8F7165A0D2F3013E462FE048FC1E4A301F79271, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd
struct UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B  : public Svd_t9E10F99365B0F565E7DE6C1B40524E9B3EE4B63C
{
public:

public:
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


// MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Numerics.Complex>
struct DenseVectorStorage_1_tFEFBCD463D1D0F92D92410D51FAAB6EFBDA4532E  : public VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C
{
public:
	// T[] MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1::Data
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(DenseVectorStorage_1_tFEFBCD463D1D0F92D92410D51FAAB6EFBDA4532E, ___Data_2)); }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* get_Data_2() const { return ___Data_2; }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_2), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<MathNet.Numerics.Complex32>
struct DenseVectorStorage_1_t89C60D717FC710E192C2A92D3AA98DE14B709563  : public VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C
{
public:
	// T[] MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1::Data
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___Data_2;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(DenseVectorStorage_1_t89C60D717FC710E192C2A92D3AA98DE14B709563, ___Data_2)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get_Data_2() const { return ___Data_2; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_2), (void*)value);
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

// MathNet.Numerics.NonConvergenceException
struct NonConvergenceException_t50AF57E869B91728CE433AA3E1827B660F1598BC  : public Exception_t
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.Complex.Vector
struct Vector_t84EE4BAA5EDA2E942AAD609FF75367ADA443BE07  : public Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.Complex32.Vector
struct Vector_t6DFC94D581E7CF23762737E2B0568804DAE09347  : public Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B
{
public:

public:
};


// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::columnsA
	int32_t ___columnsA_0;
	// MathNet.Numerics.Providers.LinearAlgebra.Transpose MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::transposeA
	int32_t ___transposeA_1;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::rowsA
	int32_t ___rowsA_2;
	// System.Numerics.Complex[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::a
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ___a_3;
	// System.Numerics.Complex[][] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::columnDataB
	ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248* ___columnDataB_4;
	// System.Numerics.Complex[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::c
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ___c_5;
	// System.Numerics.Complex MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::alpha
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___alpha_6;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::columnsB
	int32_t ___columnsB_7;

public:
	inline static int32_t get_offset_of_columnsA_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A, ___columnsA_0)); }
	inline int32_t get_columnsA_0() const { return ___columnsA_0; }
	inline int32_t* get_address_of_columnsA_0() { return &___columnsA_0; }
	inline void set_columnsA_0(int32_t value)
	{
		___columnsA_0 = value;
	}

	inline static int32_t get_offset_of_transposeA_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A, ___transposeA_1)); }
	inline int32_t get_transposeA_1() const { return ___transposeA_1; }
	inline int32_t* get_address_of_transposeA_1() { return &___transposeA_1; }
	inline void set_transposeA_1(int32_t value)
	{
		___transposeA_1 = value;
	}

	inline static int32_t get_offset_of_rowsA_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A, ___rowsA_2)); }
	inline int32_t get_rowsA_2() const { return ___rowsA_2; }
	inline int32_t* get_address_of_rowsA_2() { return &___rowsA_2; }
	inline void set_rowsA_2(int32_t value)
	{
		___rowsA_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A, ___a_3)); }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* get_a_3() const { return ___a_3; }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		___a_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a_3), (void*)value);
	}

	inline static int32_t get_offset_of_columnDataB_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A, ___columnDataB_4)); }
	inline ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248* get_columnDataB_4() const { return ___columnDataB_4; }
	inline ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248** get_address_of_columnDataB_4() { return &___columnDataB_4; }
	inline void set_columnDataB_4(ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248* value)
	{
		___columnDataB_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnDataB_4), (void*)value);
	}

	inline static int32_t get_offset_of_c_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A, ___c_5)); }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* get_c_5() const { return ___c_5; }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** get_address_of_c_5() { return &___c_5; }
	inline void set_c_5(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		___c_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_5), (void*)value);
	}

	inline static int32_t get_offset_of_alpha_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A, ___alpha_6)); }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  get_alpha_6() const { return ___alpha_6; }
	inline Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * get_address_of_alpha_6() { return &___alpha_6; }
	inline void set_alpha_6(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  value)
	{
		___alpha_6 = value;
	}

	inline static int32_t get_offset_of_columnsB_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A, ___columnsB_7)); }
	inline int32_t get_columnsB_7() const { return ___columnsB_7; }
	inline int32_t* get_address_of_columnsB_7() { return &___columnsB_7; }
	inline void set_columnsB_7(int32_t value)
	{
		___columnsB_7 = value;
	}
};


// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0
struct U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::columnsA
	int32_t ___columnsA_0;
	// MathNet.Numerics.Providers.LinearAlgebra.Transpose MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::transposeA
	int32_t ___transposeA_1;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::rowsA
	int32_t ___rowsA_2;
	// System.Single[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::a
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a_3;
	// System.Single[][] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::columnDataB
	SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* ___columnDataB_4;
	// System.Single[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::c
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___c_5;
	// System.Single MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::alpha
	float ___alpha_6;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::columnsB
	int32_t ___columnsB_7;

public:
	inline static int32_t get_offset_of_columnsA_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF, ___columnsA_0)); }
	inline int32_t get_columnsA_0() const { return ___columnsA_0; }
	inline int32_t* get_address_of_columnsA_0() { return &___columnsA_0; }
	inline void set_columnsA_0(int32_t value)
	{
		___columnsA_0 = value;
	}

	inline static int32_t get_offset_of_transposeA_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF, ___transposeA_1)); }
	inline int32_t get_transposeA_1() const { return ___transposeA_1; }
	inline int32_t* get_address_of_transposeA_1() { return &___transposeA_1; }
	inline void set_transposeA_1(int32_t value)
	{
		___transposeA_1 = value;
	}

	inline static int32_t get_offset_of_rowsA_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF, ___rowsA_2)); }
	inline int32_t get_rowsA_2() const { return ___rowsA_2; }
	inline int32_t* get_address_of_rowsA_2() { return &___rowsA_2; }
	inline void set_rowsA_2(int32_t value)
	{
		___rowsA_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF, ___a_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_a_3() const { return ___a_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___a_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a_3), (void*)value);
	}

	inline static int32_t get_offset_of_columnDataB_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF, ___columnDataB_4)); }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* get_columnDataB_4() const { return ___columnDataB_4; }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9** get_address_of_columnDataB_4() { return &___columnDataB_4; }
	inline void set_columnDataB_4(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* value)
	{
		___columnDataB_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnDataB_4), (void*)value);
	}

	inline static int32_t get_offset_of_c_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF, ___c_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_c_5() const { return ___c_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_c_5() { return &___c_5; }
	inline void set_c_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___c_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_5), (void*)value);
	}

	inline static int32_t get_offset_of_alpha_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF, ___alpha_6)); }
	inline float get_alpha_6() const { return ___alpha_6; }
	inline float* get_address_of_alpha_6() { return &___alpha_6; }
	inline void set_alpha_6(float value)
	{
		___alpha_6 = value;
	}

	inline static int32_t get_offset_of_columnsB_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF, ___columnsB_7)); }
	inline int32_t get_columnsB_7() const { return ___columnsB_7; }
	inline int32_t* get_address_of_columnsB_7() { return &___columnsB_7; }
	inline void set_columnsB_7(int32_t value)
	{
		___columnsB_7 = value;
	}
};


// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::columnsA
	int32_t ___columnsA_0;
	// MathNet.Numerics.Providers.LinearAlgebra.Transpose MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::transposeA
	int32_t ___transposeA_1;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::rowsA
	int32_t ___rowsA_2;
	// MathNet.Numerics.Complex32[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::a
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___a_3;
	// MathNet.Numerics.Complex32[][] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::columnDataB
	Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82* ___columnDataB_4;
	// MathNet.Numerics.Complex32[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::c
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___c_5;
	// MathNet.Numerics.Complex32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::alpha
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___alpha_6;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::columnsB
	int32_t ___columnsB_7;

public:
	inline static int32_t get_offset_of_columnsA_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF, ___columnsA_0)); }
	inline int32_t get_columnsA_0() const { return ___columnsA_0; }
	inline int32_t* get_address_of_columnsA_0() { return &___columnsA_0; }
	inline void set_columnsA_0(int32_t value)
	{
		___columnsA_0 = value;
	}

	inline static int32_t get_offset_of_transposeA_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF, ___transposeA_1)); }
	inline int32_t get_transposeA_1() const { return ___transposeA_1; }
	inline int32_t* get_address_of_transposeA_1() { return &___transposeA_1; }
	inline void set_transposeA_1(int32_t value)
	{
		___transposeA_1 = value;
	}

	inline static int32_t get_offset_of_rowsA_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF, ___rowsA_2)); }
	inline int32_t get_rowsA_2() const { return ___rowsA_2; }
	inline int32_t* get_address_of_rowsA_2() { return &___rowsA_2; }
	inline void set_rowsA_2(int32_t value)
	{
		___rowsA_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF, ___a_3)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get_a_3() const { return ___a_3; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		___a_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a_3), (void*)value);
	}

	inline static int32_t get_offset_of_columnDataB_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF, ___columnDataB_4)); }
	inline Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82* get_columnDataB_4() const { return ___columnDataB_4; }
	inline Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82** get_address_of_columnDataB_4() { return &___columnDataB_4; }
	inline void set_columnDataB_4(Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82* value)
	{
		___columnDataB_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnDataB_4), (void*)value);
	}

	inline static int32_t get_offset_of_c_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF, ___c_5)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get_c_5() const { return ___c_5; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of_c_5() { return &___c_5; }
	inline void set_c_5(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		___c_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_5), (void*)value);
	}

	inline static int32_t get_offset_of_alpha_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF, ___alpha_6)); }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  get_alpha_6() const { return ___alpha_6; }
	inline Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * get_address_of_alpha_6() { return &___alpha_6; }
	inline void set_alpha_6(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  value)
	{
		___alpha_6 = value;
	}

	inline static int32_t get_offset_of_columnsB_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF, ___columnsB_7)); }
	inline int32_t get_columnsB_7() const { return ___columnsB_7; }
	inline int32_t* get_address_of_columnsB_7() { return &___columnsB_7; }
	inline void set_columnsB_7(int32_t value)
	{
		___columnsB_7 = value;
	}
};


// MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0
struct U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F  : public RuntimeObject
{
public:
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::columnsA
	int32_t ___columnsA_0;
	// MathNet.Numerics.Providers.LinearAlgebra.Transpose MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::transposeA
	int32_t ___transposeA_1;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::rowsA
	int32_t ___rowsA_2;
	// System.Double[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::a
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___a_3;
	// System.Double[][] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::columnDataB
	DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* ___columnDataB_4;
	// System.Double[] MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::c
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___c_5;
	// System.Double MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::alpha
	double ___alpha_6;
	// System.Int32 MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::columnsB
	int32_t ___columnsB_7;

public:
	inline static int32_t get_offset_of_columnsA_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F, ___columnsA_0)); }
	inline int32_t get_columnsA_0() const { return ___columnsA_0; }
	inline int32_t* get_address_of_columnsA_0() { return &___columnsA_0; }
	inline void set_columnsA_0(int32_t value)
	{
		___columnsA_0 = value;
	}

	inline static int32_t get_offset_of_transposeA_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F, ___transposeA_1)); }
	inline int32_t get_transposeA_1() const { return ___transposeA_1; }
	inline int32_t* get_address_of_transposeA_1() { return &___transposeA_1; }
	inline void set_transposeA_1(int32_t value)
	{
		___transposeA_1 = value;
	}

	inline static int32_t get_offset_of_rowsA_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F, ___rowsA_2)); }
	inline int32_t get_rowsA_2() const { return ___rowsA_2; }
	inline int32_t* get_address_of_rowsA_2() { return &___rowsA_2; }
	inline void set_rowsA_2(int32_t value)
	{
		___rowsA_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F, ___a_3)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_a_3() const { return ___a_3; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___a_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a_3), (void*)value);
	}

	inline static int32_t get_offset_of_columnDataB_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F, ___columnDataB_4)); }
	inline DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* get_columnDataB_4() const { return ___columnDataB_4; }
	inline DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D** get_address_of_columnDataB_4() { return &___columnDataB_4; }
	inline void set_columnDataB_4(DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* value)
	{
		___columnDataB_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnDataB_4), (void*)value);
	}

	inline static int32_t get_offset_of_c_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F, ___c_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_c_5() const { return ___c_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_c_5() { return &___c_5; }
	inline void set_c_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___c_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_5), (void*)value);
	}

	inline static int32_t get_offset_of_alpha_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F, ___alpha_6)); }
	inline double get_alpha_6() const { return ___alpha_6; }
	inline double* get_address_of_alpha_6() { return &___alpha_6; }
	inline void set_alpha_6(double value)
	{
		___alpha_6 = value;
	}

	inline static int32_t get_offset_of_columnsB_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F, ___columnsB_7)); }
	inline int32_t get_columnsB_7() const { return ___columnsB_7; }
	inline int32_t* get_address_of_columnsB_7() { return &___columnsB_7; }
	inline void set_columnsB_7(int32_t value)
	{
		___columnsB_7 = value;
	}
};


// System.Action`2<System.Int32,System.Int32>
struct Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39  : public MulticastDelegate_t
{
public:

public:
};


// MathNet.Numerics.LinearAlgebra.Complex.DenseVector
struct DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861  : public Vector_t84EE4BAA5EDA2E942AAD609FF75367ADA443BE07
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Complex.DenseVector::_length
	int32_t ____length_5;
	// System.Numerics.Complex[] MathNet.Numerics.LinearAlgebra.Complex.DenseVector::_values
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ____values_6;

public:
	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__values_6() { return static_cast<int32_t>(offsetof(DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861, ____values_6)); }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* get__values_6() const { return ____values_6; }
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** get_address_of__values_6() { return &____values_6; }
	inline void set__values_6(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		____values_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_6), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Complex32.DenseVector
struct DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61  : public Vector_t6DFC94D581E7CF23762737E2B0568804DAE09347
{
public:
	// System.Int32 MathNet.Numerics.LinearAlgebra.Complex32.DenseVector::_length
	int32_t ____length_5;
	// MathNet.Numerics.Complex32[] MathNet.Numerics.LinearAlgebra.Complex32.DenseVector::_values
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ____values_6;

public:
	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__values_6() { return static_cast<int32_t>(offsetof(DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61, ____values_6)); }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* get__values_6() const { return ____values_6; }
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** get_address_of__values_6() { return &____values_6; }
	inline void set__values_6(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		____values_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_6), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Complex.SparseVector
struct SparseVector_tADDFA71354E35713852E7DB76ED9DBA9D9E20AD6  : public Vector_t84EE4BAA5EDA2E942AAD609FF75367ADA443BE07
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex> MathNet.Numerics.LinearAlgebra.Complex.SparseVector::_storage
	SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * ____storage_5;

public:
	inline static int32_t get_offset_of__storage_5() { return static_cast<int32_t>(offsetof(SparseVector_tADDFA71354E35713852E7DB76ED9DBA9D9E20AD6, ____storage_5)); }
	inline SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * get__storage_5() const { return ____storage_5; }
	inline SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 ** get_address_of__storage_5() { return &____storage_5; }
	inline void set__storage_5(SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * value)
	{
		____storage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storage_5), (void*)value);
	}
};


// MathNet.Numerics.LinearAlgebra.Complex32.SparseVector
struct SparseVector_tA82AA2D97D9C24EDDCB39F1A127D026ABC144884  : public Vector_t6DFC94D581E7CF23762737E2B0568804DAE09347
{
public:
	// MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32> MathNet.Numerics.LinearAlgebra.Complex32.SparseVector::_storage
	SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * ____storage_5;

public:
	inline static int32_t get_offset_of__storage_5() { return static_cast<int32_t>(offsetof(SparseVector_tA82AA2D97D9C24EDDCB39F1A127D026ABC144884, ____storage_5)); }
	inline SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * get__storage_5() const { return ____storage_5; }
	inline SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 ** get_address_of__storage_5() { return &____storage_5; }
	inline void set__storage_5(SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * value)
	{
		____storage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storage_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Numerics.Complex[][]
struct ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* m_Items[1];

public:
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[][]
struct SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* m_Items[1];

public:
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// MathNet.Numerics.Complex32[][]
struct Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* m_Items[1];

public:
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Double[][]
struct DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* m_Items[1];

public:
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::get_RowCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_gshared_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method);
// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::get_ColumnCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_gshared_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method);
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * Matrix_1_Clone_m28F38218ED4D4BADB091639903F0EF34F3741FE4_gshared (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method);
// MathNet.Numerics.LinearAlgebra.Vector`1<T> MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Single>::SameAs<System.Single>(MathNet.Numerics.LinearAlgebra.Matrix`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * VectorBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB8B0DD72229D523384C33BBB467BBA92F7036D5B_gshared (VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 * __this, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___example0, int32_t ___length1, const RuntimeMethod* method);
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Single>::SameAs<System.Single>(MathNet.Numerics.LinearAlgebra.Matrix`1<!!0>,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * MatrixBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1DC606BB20504AA9BBCA6A1554DDC6B7DD735534_gshared (MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762 * __this, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___example0, int32_t ___rows1, int32_t ___columns2, bool ___fullyMutable3, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>::set_Item(System.Int32,T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_gshared_inline (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// T MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_gshared_inline (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * __this, int32_t ___index0, const RuntimeMethod* method);
// T MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::At(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_gshared_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::At(System.Int32,System.Int32,T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_gshared_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method);
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::Transpose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * Matrix_1_Transpose_m2D5102E11EF061BCE3E47EF6F56E9E0ABA11912F_gshared (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<System.Numerics.Complex>::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mD9B3622F27B4C2F9726878D7A20A4DB21AB37F32_gshared (Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D * __this, VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<MathNet.Numerics.Complex32>::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m6D77CB1F245A3AB32848A64D6B2825335FE61DE5_gshared (Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B * __this, VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<System.Double>::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mCA8B762CC49EC6905C66863F43EEC8018DBF5B8C_gshared (Vector_1_t04BD986700481778192B0CF621635E64D169D13C * __this, VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m24B7094461F1152A5BCCDEA4D2FA8F3C685F2E69_gshared (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * __this, VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Numerics.Complex>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorBuilder_1__ctor_mE82A7CC3BE0D90168D2C047BD0E69808EF813B7A_gshared (VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292 * __this, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.VectorBuilder`1<MathNet.Numerics.Complex32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorBuilder_1__ctor_m907E0AAC305E7E9D046B5CCB341AA2277DF482F7_gshared (VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759 * __this, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorBuilder_1__ctor_mC499D888CF00D8AAD275C438F97D5D3BAD82EAED_gshared (VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D * __this, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorBuilder_1__ctor_m5B68D5011AD6688AAAAA5CF784DFE4CF657E30ED_gshared (VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 * __this, const RuntimeMethod* method);
// !0 System.Tuple`2<System.Int32,System.Int32>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_mDD80BAE31CBB45588E597B8480586D0505C3CA9E_gshared_inline (Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * __this, const RuntimeMethod* method);
// !1 System.Tuple`2<System.Int32,System.Int32>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_m5D6F7E4C92BBD480D813546956284E11D1809F85_gshared_inline (Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_gshared (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider::GetRow<System.Single>(MathNet.Numerics.Providers.LinearAlgebra.Transpose,System.Int32,System.Int32,System.Int32,T[],T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE_gshared (int32_t ___transpose0, int32_t ___rowindx1, int32_t ___numRows2, int32_t ___numCols3, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix4, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___row5, const RuntimeMethod* method);
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider::GetRow<System.Double>(MathNet.Numerics.Providers.LinearAlgebra.Transpose,System.Int32,System.Int32,System.Int32,T[],T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B_gshared (int32_t ___transpose0, int32_t ___rowindx1, int32_t ___numRows2, int32_t ___numCols3, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___matrix4, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___row5, const RuntimeMethod* method);

// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::get_RowCount()
inline int32_t Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, const RuntimeMethod*))Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_gshared_inline)(__this, method);
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::get_ColumnCount()
inline int32_t Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, const RuntimeMethod*))Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_gshared_inline)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::Clone()
inline Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * Matrix_1_Clone_m28F38218ED4D4BADB091639903F0EF34F3741FE4 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method)
{
	return ((  Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * (*) (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, const RuntimeMethod*))Matrix_1_Clone_m28F38218ED4D4BADB091639903F0EF34F3741FE4_gshared)(__this, method);
}
// MathNet.Numerics.LinearAlgebra.Vector`1<T> MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Single>::SameAs<System.Single>(MathNet.Numerics.LinearAlgebra.Matrix`1<!!0>,System.Int32)
inline Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * VectorBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB8B0DD72229D523384C33BBB467BBA92F7036D5B (VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 * __this, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___example0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * (*) (VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 *, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, int32_t, const RuntimeMethod*))VectorBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB8B0DD72229D523384C33BBB467BBA92F7036D5B_gshared)(__this, ___example0, ___length1, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Single>::SameAs<System.Single>(MathNet.Numerics.LinearAlgebra.Matrix`1<!!0>,System.Int32,System.Int32,System.Boolean)
inline Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * MatrixBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1DC606BB20504AA9BBCA6A1554DDC6B7DD735534 (MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762 * __this, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___example0, int32_t ___rows1, int32_t ___columns2, bool ___fullyMutable3, const RuntimeMethod* method)
{
	return ((  Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * (*) (MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762 *, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, int32_t, int32_t, bool, const RuntimeMethod*))MatrixBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1DC606BB20504AA9BBCA6A1554DDC6B7DD735534_gshared)(__this, ___example0, ___rows1, ___columns2, ___fullyMutable3, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Single MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Dnrm2Column(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UserSvd_Dnrm2Column_mB49E6474E1031C29CDBE0A2D8772B6D78947A753 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___column2, int32_t ___rowStart3, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>::set_Item(System.Int32,T)
inline void Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 *, int32_t, float, const RuntimeMethod*))Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_gshared_inline)(__this, ___index0, ___value1, method);
}
// T MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>::get_Item(System.Int32)
inline float Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 *, int32_t, const RuntimeMethod*))Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_gshared_inline)(__this, ___index0, method);
}
// T MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::At(System.Int32,System.Int32)
inline float Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method)
{
	return ((  float (*) (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, int32_t, int32_t, const RuntimeMethod*))Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_gshared_inline)(__this, ___row0, ___column1, method);
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Dsign(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UserSvd_Dsign_mF96FB9296080EDB32843E8C3F42D1FAFB95E5CE1 (float ___z10, float ___z21, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::DscalColumn(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_DscalColumn_mA30253C1FCCBCB917C326AE06A334F7546BD9A38 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___column2, int32_t ___rowStart3, float ___z4, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::At(System.Int32,System.Int32,T)
inline void Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method)
{
	((  void (*) (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, int32_t, int32_t, float, const RuntimeMethod*))Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_gshared_inline)(__this, ___row0, ___column1, ___value2, method);
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Ddot(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UserSvd_Ddot_m8DF45A2D947285486C9ECFB23A2243F72028A955 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___columnA2, int32_t ___columnB3, int32_t ___rowStart4, const RuntimeMethod* method);
// System.Single MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Dnrm2Vector(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UserSvd_Dnrm2Vector_m34DF7DD4D192482E35216FEE40F411A863361DBA (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___rowStart1, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::DscalVector(System.Single[],System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_DscalVector_m648BE140CB82C14C062BFACF041C50B30F674676 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___start1, float ___z2, const RuntimeMethod* method);
// System.Void MathNet.Numerics.NonConvergenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonConvergenceException__ctor_m3548C091B237B862DBE5F6AB15A52F64FFEC955E (NonConvergenceException_t50AF57E869B91728CE433AA3E1827B660F1598BC * __this, const RuntimeMethod* method);
// System.Boolean MathNet.Numerics.Precision::AlmostEqualRelative(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Precision_AlmostEqualRelative_m7E54E8323A7EE66DDF1E721CCE4803FD95FCF1F3 (float ___a0, float ___b1, int32_t ___decimalPlaces2, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Drotg(System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_Drotg_m0CF3A3B7A1B1313385A18158260FEB59B3C1B550 (float* ___da0, float* ___db1, float* ___c2, float* ___s3, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Drot(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_Drot_m78FFDD4F83E477473892CF430F9A3DEE7446F1C8 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___columnA2, int32_t ___columnB3, float ___c4, float ___s5, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247 (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Dswap(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_Dswap_mA6A0B8DA52A8F3A6847C3FA7EBBDFA2837612C72 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___columnA2, int32_t ___columnB3, const RuntimeMethod* method);
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>::Transpose()
inline Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * Matrix_1_Transpose_m2D5102E11EF061BCE3E47EF6F56E9E0ABA11912F (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method)
{
	return ((  Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * (*) (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, const RuntimeMethod*))Matrix_1_Transpose_m2D5102E11EF061BCE3E47EF6F56E9E0ABA11912F_gshared)(__this, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::.ctor(MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd__ctor_mEBAAA457B2AE20AD4A6979E422DC06EA27F7C4B1 (UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B * __this, Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * ___s0, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___u1, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___vt2, bool ___vectorsComputed3, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.Svd::.ctor(MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Svd__ctor_m713F0B2C8DEE6847A8E479DC06E98B5EC02A0B28 (Svd_t9E10F99365B0F565E7DE6C1B40524E9B3EE4B63C * __this, Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * ___s0, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___u1, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___vt2, bool ___vectorsComputed3, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<System.Numerics.Complex>::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
inline void Vector_1__ctor_mD9B3622F27B4C2F9726878D7A20A4DB21AB37F32 (Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D * __this, VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * ___storage0, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D *, VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C *, const RuntimeMethod*))Vector_1__ctor_mD9B3622F27B4C2F9726878D7A20A4DB21AB37F32_gshared)(__this, ___storage0, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<MathNet.Numerics.Complex32>::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
inline void Vector_1__ctor_m6D77CB1F245A3AB32848A64D6B2825335FE61DE5 (Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B * __this, VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * ___storage0, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B *, VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C *, const RuntimeMethod*))Vector_1__ctor_m6D77CB1F245A3AB32848A64D6B2825335FE61DE5_gshared)(__this, ___storage0, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<System.Double>::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
inline void Vector_1__ctor_mCA8B762CC49EC6905C66863F43EEC8018DBF5B8C (Vector_1_t04BD986700481778192B0CF621635E64D169D13C * __this, VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * ___storage0, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t04BD986700481778192B0CF621635E64D169D13C *, VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 *, const RuntimeMethod*))Vector_1__ctor_mCA8B762CC49EC6905C66863F43EEC8018DBF5B8C_gshared)(__this, ___storage0, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T>)
inline void Vector_1__ctor_m24B7094461F1152A5BCCDEA4D2FA8F3C685F2E69 (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * __this, VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * ___storage0, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 *, VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *, const RuntimeMethod*))Vector_1__ctor_m24B7094461F1152A5BCCDEA4D2FA8F3C685F2E69_gshared)(__this, ___storage0, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Complex.DenseVector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Numerics.Complex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DenseVector__ctor_mD221D35E15A02744D3F6A7FC70EA0D452E526421 (DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861 * __this, DenseVectorStorage_1_tFEFBCD463D1D0F92D92410D51FAAB6EFBDA4532E * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Complex.SparseVector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVector__ctor_mE23E0A559BE8CA5B2E9D766A5136E5493B5666D2 (SparseVector_tADDFA71354E35713852E7DB76ED9DBA9D9E20AD6 * __this, SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Numerics.Complex>::.ctor()
inline void VectorBuilder_1__ctor_mE82A7CC3BE0D90168D2C047BD0E69808EF813B7A (VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorBuilder_1_tA590665149F4BDC8EAC2DF4F0F072AA54E155292 *, const RuntimeMethod*))VectorBuilder_1__ctor_mE82A7CC3BE0D90168D2C047BD0E69808EF813B7A_gshared)(__this, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Complex32.DenseVector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<MathNet.Numerics.Complex32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DenseVector__ctor_mAE479FADF49032DBE94EBBED36E20276CFBA8F5A (DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61 * __this, DenseVectorStorage_1_t89C60D717FC710E192C2A92D3AA98DE14B709563 * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Complex32.SparseVector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVector__ctor_m9C24627A931CC3FDDC3FEF68FD7A4BB77ED9539F (SparseVector_tA82AA2D97D9C24EDDCB39F1A127D026ABC144884 * __this, SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.VectorBuilder`1<MathNet.Numerics.Complex32>::.ctor()
inline void VectorBuilder_1__ctor_m907E0AAC305E7E9D046B5CCB341AA2277DF482F7 (VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorBuilder_1_tF4AE2731DCEECB30132AEBBB9DD2A1C2B36D4759 *, const RuntimeMethod*))VectorBuilder_1__ctor_m907E0AAC305E7E9D046B5CCB341AA2277DF482F7_gshared)(__this, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Double.DenseVector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DenseVector__ctor_mC554C661551BB9E648FF55F77B16E70E240107B5 (DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719 * __this, DenseVectorStorage_1_tA59E04C952863313AF87B367F1EFCB0E370458A2 * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Double.SparseVector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVector__ctor_m27CC8EF9C4A1211B9813CDC4E5FABB9D6AF0C085 (SparseVector_t9702CC2012FE9D6DEE89F1C3AD8943BAB98FB8D7 * __this, SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Double>::.ctor()
inline void VectorBuilder_1__ctor_mC499D888CF00D8AAD275C438F97D5D3BAD82EAED (VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorBuilder_1_tCA21120266E58865E4CF900312EA0F3A8902ED2D *, const RuntimeMethod*))VectorBuilder_1__ctor_mC499D888CF00D8AAD275C438F97D5D3BAD82EAED_gshared)(__this, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.DenseVector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DenseVector__ctor_m5EC9BC524925E0DDDA0514D913A4BE5BD89CA3ED (DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4 * __this, DenseVectorStorage_1_t8A745064A670B3C8239E6D74F783AA432BBA107A * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Single.SparseVector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVector__ctor_mFDB30BE6C4A5980F8D0655DC2E9E22E7D0FED71B (SparseVector_t64BD0A0497E347BF9DB9CD3757AA84D57000AE9E * __this, SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * ___storage0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Single>::.ctor()
inline void VectorBuilder_1__ctor_m5B68D5011AD6688AAAAA5CF784DFE4CF657E30ED (VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 * __this, const RuntimeMethod* method)
{
	((  void (*) (VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 *, const RuntimeMethod*))VectorBuilder_1__ctor_m5B68D5011AD6688AAAAA5CF784DFE4CF657E30ED_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Tuple`2<System.Int32,System.Int32>::get_Item1()
inline int32_t Tuple_2_get_Item1_mDD80BAE31CBB45588E597B8480586D0505C3CA9E_inline (Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 *, const RuntimeMethod*))Tuple_2_get_Item1_mDD80BAE31CBB45588E597B8480586D0505C3CA9E_gshared_inline)(__this, method);
}
// !1 System.Tuple`2<System.Int32,System.Int32>::get_Item2()
inline int32_t Tuple_2_get_Item2_m5D6F7E4C92BBD480D813546956284E11D1809F85_inline (Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 *, const RuntimeMethod*))Tuple_2_get_Item2_m5D6F7E4C92BBD480D813546956284E11D1809F85_gshared_inline)(__this, method);
}
// System.Void System.Action`2<System.Int32,System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670 (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider::GetRow(MathNet.Numerics.Providers.LinearAlgebra.Transpose,System.Int32,System.Int32,System.Int32,System.Numerics.Complex[],System.Numerics.Complex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedLinearAlgebraProvider_GetRow_m5B623C7702D8E3F7B3C2FA9308F60285AC495301 (int32_t ___transpose0, int32_t ___rowindx1, int32_t ___numRows2, int32_t ___numCols3, ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ___matrix4, ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* ___row5, const RuntimeMethod* method);
// System.Numerics.Complex System.Numerics.Complex::op_Multiply(System.Numerics.Complex,System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  Complex_op_Multiply_mEEC05B318FACC0395EFDEA156316AC522177B8F8 (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___left0, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___right1, const RuntimeMethod* method);
// System.Numerics.Complex System.Numerics.Complex::op_Addition(System.Numerics.Complex,System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  Complex_op_Addition_m0B4E0A93A89F995EE9DD6F5F3EA69E54B3B99F32 (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___left0, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___right1, const RuntimeMethod* method);
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider::GetRow<System.Single>(MathNet.Numerics.Providers.LinearAlgebra.Transpose,System.Int32,System.Int32,System.Int32,T[],T[])
inline void ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE (int32_t ___transpose0, int32_t ___rowindx1, int32_t ___numRows2, int32_t ___numCols3, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix4, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___row5, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, int32_t, int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE_gshared)(___transpose0, ___rowindx1, ___numRows2, ___numCols3, ___matrix4, ___row5, method);
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider::GetRow(MathNet.Numerics.Providers.LinearAlgebra.Transpose,System.Int32,System.Int32,System.Int32,MathNet.Numerics.Complex32[],MathNet.Numerics.Complex32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedLinearAlgebraProvider_GetRow_m47099E836AFD5AFB03C2A2BA3072B9ADFDA0A044 (int32_t ___transpose0, int32_t ___rowindx1, int32_t ___numRows2, int32_t ___numCols3, Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___matrix4, Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* ___row5, const RuntimeMethod* method);
// MathNet.Numerics.Complex32 MathNet.Numerics.Complex32::op_Multiply(MathNet.Numerics.Complex32,MathNet.Numerics.Complex32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  Complex32_op_Multiply_m2D153B75BD6A9A7B702397FCE978513631322C41 (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___multiplicand0, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___multiplier1, const RuntimeMethod* method);
// MathNet.Numerics.Complex32 MathNet.Numerics.Complex32::op_Addition(MathNet.Numerics.Complex32,MathNet.Numerics.Complex32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  Complex32_op_Addition_m6FCC7BB8C473FEFA0893D9CC26101EBCEAC2C9E0 (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___summand10, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___summand21, const RuntimeMethod* method);
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider::GetRow<System.Double>(MathNet.Numerics.Providers.LinearAlgebra.Transpose,System.Int32,System.Int32,System.Int32,T[],T[])
inline void ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B (int32_t ___transpose0, int32_t ___rowindx1, int32_t ___numRows2, int32_t ___numCols3, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___matrix4, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___row5, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, int32_t, int32_t, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*, const RuntimeMethod*))ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B_gshared)(___transpose0, ___rowindx1, ___numRows2, ___numCols3, ___matrix4, ___row5, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Complex.Matrix/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDE1FA4E82DC8502FC9B4D558144B28EC8AE7139F (U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E * __this, const RuntimeMethod* method);
// System.Numerics.Complex MathNet.Numerics.ComplexExtensions::Conjugate(System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ComplexExtensions_Conjugate_m023E3F145E8E5C8F9F4C619493DC4A2DFA2A79DA (Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___complex0, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Complex32.Matrix/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10669F396CD60B1C85A301AB5A55F3FEBC5CB0DA (U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D * __this, const RuntimeMethod* method);
// MathNet.Numerics.Complex32 MathNet.Numerics.Complex32::Conjugate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  Complex32_Conjugate_m0A0C7CF0D8AFCD96DB48F633FE2A166C2C77B689 (Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * __this, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Double.Matrix/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4401F226FF440AF5379C9ACB438D9E92B9A27E30 (U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026 * __this, const RuntimeMethod* method);
// System.Void MathNet.Numerics.LinearAlgebra.Single.Matrix/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD21970B5A64777AA49BB2C74155A1215D659C3D7 (U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C * __this, const RuntimeMethod* method);
// System.IntPtr MathNet.Numerics.Providers.Common.NativeProviderLoader/UnixLoader::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnixLoader_dlopen_mA5CDA350C367430C98B77AB76F58EDBD3E4F9A6E (String_t* ___fileName0, int32_t ___flags1, const RuntimeMethod* method);
// System.IntPtr MathNet.Numerics.Providers.Common.NativeProviderLoader/WindowsLoader::LoadLibraryEx(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsLoader_LoadLibraryEx_mA1DA3F8894F53D1F164282DA8722C00DEDB42216 (String_t* ___fileName0, intptr_t ___reservedNull1, uint32_t ___flags2, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlopen(char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibraryEx(Il2CppChar*, intptr_t, uint32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Create(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B * UserSvd_Create_m5820D2FBF3BDD708D12469D119A82570F25B1D02 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___matrix0, bool ___computeVectors1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1DC606BB20504AA9BBCA6A1554DDC6B7DD735534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Clone_m28F38218ED4D4BADB091639903F0EF34F3741FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Transpose_m2D5102E11EF061BCE3E47EF6F56E9E0ABA11912F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Precision_t09A54474F11AC81B64BA6ED0F3D1589CECA59AC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB8B0DD72229D523384C33BBB467BBA92F7036D5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * V_1 = NULL;
	Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * V_2 = NULL;
	Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * V_3 = NULL;
	Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * V_4 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_5 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	float V_25 = 0.0f;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	float V_29 = 0.0f;
	float V_30 = 0.0f;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	float V_33 = 0.0f;
	float V_34 = 0.0f;
	float V_35 = 0.0f;
	int32_t V_36 = 0;
	float V_37 = 0.0f;
	float V_38 = 0.0f;
	float V_39 = 0.0f;
	float V_40 = 0.0f;
	float V_41 = 0.0f;
	float V_42 = 0.0f;
	float V_43 = 0.0f;
	float V_44 = 0.0f;
	float V_45 = 0.0f;
	float V_46 = 0.0f;
	float V_47 = 0.0f;
	int32_t V_48 = 0;
	Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * V_49 = NULL;
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_0 = ___matrix0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_0, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_2 = ___matrix0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_2, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_5 = ___matrix0;
		NullCheck(L_5);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_6;
		L_6 = Matrix_1_Clone_m28F38218ED4D4BADB091639903F0EF34F3741FE4(L_5, /*hidden argument*/Matrix_1_Clone_m28F38218ED4D4BADB091639903F0EF34F3741FE4_RuntimeMethod_var);
		V_1 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_il2cpp_TypeInfo_var);
		VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 * L_7 = ((Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_StaticFields*)il2cpp_codegen_static_fields_for(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_il2cpp_TypeInfo_var))->get_Build_2();
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_10;
		L_10 = VectorBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB8B0DD72229D523384C33BBB467BBA92F7036D5B(L_7, L_8, L_9, /*hidden argument*/VectorBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB8B0DD72229D523384C33BBB467BBA92F7036D5B_RuntimeMethod_var);
		V_2 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_il2cpp_TypeInfo_var);
		MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762 * L_11 = ((Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_il2cpp_TypeInfo_var))->get_Build_2();
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_12 = V_1;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_13, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_15, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		NullCheck(L_11);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_17;
		L_17 = MatrixBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1DC606BB20504AA9BBCA6A1554DDC6B7DD735534(L_11, L_12, L_14, L_16, (bool)1, /*hidden argument*/MatrixBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1DC606BB20504AA9BBCA6A1554DDC6B7DD735534_RuntimeMethod_var);
		V_3 = L_17;
		MatrixBuilder_1_t245F748D8B29A77A701081F701B1324E67040762 * L_18 = ((Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824_il2cpp_TypeInfo_var))->get_Build_2();
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_19 = V_1;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_20, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_22, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		NullCheck(L_18);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_24;
		L_24 = MatrixBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1DC606BB20504AA9BBCA6A1554DDC6B7DD735534(L_18, L_19, L_21, L_23, (bool)1, /*hidden argument*/MatrixBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1DC606BB20504AA9BBCA6A1554DDC6B7DD735534_RuntimeMethod_var);
		V_4 = L_24;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_25, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_26);
		V_5 = L_27;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_28, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_30 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_29);
		V_6 = L_30;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_31, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		V_12 = L_32;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_33, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_35, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		int32_t L_37;
		L_37 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)), L_36, /*hidden argument*/NULL);
		V_13 = L_37;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_38, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_40, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_42;
		L_42 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)2)), L_41, /*hidden argument*/NULL);
		int32_t L_43;
		L_43 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(0, L_42, /*hidden argument*/NULL);
		V_14 = L_43;
		int32_t L_44 = V_13;
		int32_t L_45 = V_14;
		int32_t L_46;
		L_46 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_44, L_45, /*hidden argument*/NULL);
		V_15 = L_46;
		V_9 = 0;
		goto IL_03dd;
	}

IL_00c0:
	{
		int32_t L_47 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
		int32_t L_48 = V_9;
		int32_t L_49 = V_13;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_017d;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_50 = V_1;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_51, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_53 = V_9;
		int32_t L_54 = V_9;
		float L_55;
		L_55 = UserSvd_Dnrm2Column_mB49E6474E1031C29CDBE0A2D8772B6D78947A753(L_50, L_52, L_53, L_54, /*hidden argument*/NULL);
		V_22 = L_55;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_56 = V_2;
		int32_t L_57 = V_9;
		float L_58 = V_22;
		NullCheck(L_56);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_56, L_57, L_58, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_59 = V_2;
		int32_t L_60 = V_9;
		NullCheck(L_59);
		float L_61;
		L_61 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_59, L_60, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		if ((((double)((double)((double)L_61))) == ((double)(0.0))))
		{
			goto IL_016c;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_62 = V_1;
		int32_t L_63 = V_9;
		int32_t L_64 = V_9;
		NullCheck(L_62);
		float L_65;
		L_65 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_62, L_63, L_64, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		if ((((double)((double)((double)L_65))) == ((double)(0.0))))
		{
			goto IL_0134;
		}
	}
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_66 = V_2;
		int32_t L_67 = V_9;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_68 = V_2;
		int32_t L_69 = V_9;
		NullCheck(L_68);
		float L_70;
		L_70 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_68, L_69, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_71 = V_1;
		int32_t L_72 = V_9;
		int32_t L_73 = V_9;
		NullCheck(L_71);
		float L_74;
		L_74 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_71, L_72, L_73, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		float L_75;
		L_75 = UserSvd_Dsign_mF96FB9296080EDB32843E8C3F42D1FAFB95E5CE1(L_70, L_74, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_66, L_67, L_75, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
	}

IL_0134:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_76 = V_1;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_77 = V_1;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_77, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_79 = V_9;
		int32_t L_80 = V_9;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_81 = V_2;
		int32_t L_82 = V_9;
		NullCheck(L_81);
		float L_83;
		L_83 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_81, L_82, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		UserSvd_DscalColumn_mA30253C1FCCBCB917C326AE06A334F7546BD9A38(L_76, L_78, L_79, L_80, ((float)((float)(1.0f)/(float)L_83)), /*hidden argument*/NULL);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_84 = V_1;
		int32_t L_85 = V_9;
		int32_t L_86 = V_9;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_87 = V_1;
		int32_t L_88 = V_9;
		int32_t L_89 = V_9;
		NullCheck(L_87);
		float L_90;
		L_90 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_87, L_88, L_89, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_84);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_84, L_85, L_86, ((float)il2cpp_codegen_add((float)(1.0f), (float)L_90)), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
	}

IL_016c:
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_91 = V_2;
		int32_t L_92 = V_9;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_93 = V_2;
		int32_t L_94 = V_9;
		NullCheck(L_93);
		float L_95;
		L_95 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_93, L_94, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		NullCheck(L_91);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_91, L_92, ((-L_95)), /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
	}

IL_017d:
	{
		int32_t L_96 = V_10;
		V_8 = L_96;
		goto IL_020d;
	}

IL_0186:
	{
		int32_t L_97 = V_9;
		int32_t L_98 = V_13;
		if ((((int32_t)L_97) >= ((int32_t)L_98)))
		{
			goto IL_01f8;
		}
	}
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_99 = V_2;
		int32_t L_100 = V_9;
		NullCheck(L_99);
		float L_101;
		L_101 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_99, L_100, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		if ((((double)((double)((double)L_101))) == ((double)(0.0))))
		{
			goto IL_01f8;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_102 = V_1;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_103 = V_1;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_103, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_105 = V_9;
		int32_t L_106 = V_8;
		int32_t L_107 = V_9;
		float L_108;
		L_108 = UserSvd_Ddot_m8DF45A2D947285486C9ECFB23A2243F72028A955(L_102, L_104, L_105, L_106, L_107, /*hidden argument*/NULL);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_109 = V_1;
		int32_t L_110 = V_9;
		int32_t L_111 = V_9;
		NullCheck(L_109);
		float L_112;
		L_112 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_109, L_110, L_111, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		V_11 = ((float)((float)((-L_108))/(float)L_112));
		int32_t L_113 = V_9;
		V_23 = L_113;
		goto IL_01ee;
	}

IL_01c6:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_114 = V_1;
		int32_t L_115 = V_23;
		int32_t L_116 = V_8;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_117 = V_1;
		int32_t L_118 = V_23;
		int32_t L_119 = V_8;
		NullCheck(L_117);
		float L_120;
		L_120 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_117, L_118, L_119, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		float L_121 = V_11;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_122 = V_1;
		int32_t L_123 = V_23;
		int32_t L_124 = V_9;
		NullCheck(L_122);
		float L_125;
		L_125 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_122, L_123, L_124, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_114);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_114, L_115, L_116, ((float)il2cpp_codegen_add((float)L_120, (float)((float)il2cpp_codegen_multiply((float)L_121, (float)L_125)))), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_126 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
	}

IL_01ee:
	{
		int32_t L_127 = V_23;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_128 = V_1;
		NullCheck(L_128);
		int32_t L_129;
		L_129 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_128, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_127) < ((int32_t)L_129)))
		{
			goto IL_01c6;
		}
	}

IL_01f8:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_130 = V_5;
		int32_t L_131 = V_8;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_132 = V_1;
		int32_t L_133 = V_9;
		int32_t L_134 = V_8;
		NullCheck(L_132);
		float L_135;
		L_135 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_132, L_133, L_134, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(L_131), (float)L_135);
		int32_t L_136 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1));
	}

IL_020d:
	{
		int32_t L_137 = V_8;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_138 = V_1;
		NullCheck(L_138);
		int32_t L_139;
		L_139 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_138, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_137) < ((int32_t)L_139)))
		{
			goto IL_0186;
		}
	}
	{
		bool L_140 = ___computeVectors1;
		if (!L_140)
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_141 = V_9;
		int32_t L_142 = V_13;
		if ((((int32_t)L_141) >= ((int32_t)L_142)))
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_143 = V_9;
		V_7 = L_143;
		goto IL_0243;
	}

IL_0229:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_144 = V_3;
		int32_t L_145 = V_7;
		int32_t L_146 = V_9;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_147 = V_1;
		int32_t L_148 = V_7;
		int32_t L_149 = V_9;
		NullCheck(L_147);
		float L_150;
		L_150 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_147, L_148, L_149, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_144);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_144, L_145, L_146, L_150, /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_151 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1));
	}

IL_0243:
	{
		int32_t L_152 = V_7;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_153 = V_1;
		NullCheck(L_153);
		int32_t L_154;
		L_154 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_153, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_152) < ((int32_t)L_154)))
		{
			goto IL_0229;
		}
	}

IL_024d:
	{
		int32_t L_155 = V_9;
		int32_t L_156 = V_14;
		if ((((int32_t)L_155) >= ((int32_t)L_156)))
		{
			goto IL_03d7;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_157 = V_5;
		int32_t L_158 = V_10;
		float L_159;
		L_159 = UserSvd_Dnrm2Vector_m34DF7DD4D192482E35216FEE40F411A863361DBA(L_157, L_158, /*hidden argument*/NULL);
		V_21 = L_159;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_160 = V_5;
		int32_t L_161 = V_9;
		float L_162 = V_21;
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_161), (float)L_162);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_163 = V_5;
		int32_t L_164 = V_9;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		float L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		if ((((double)((double)((double)L_166))) == ((double)(0.0))))
		{
			goto IL_02c2;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_167 = V_5;
		int32_t L_168 = V_10;
		NullCheck(L_167);
		int32_t L_169 = L_168;
		float L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		if ((((double)((double)((double)L_170))) == ((double)(0.0))))
		{
			goto IL_029e;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_171 = V_5;
		int32_t L_172 = V_9;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_173 = V_5;
		int32_t L_174 = V_9;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		float L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_177 = V_5;
		int32_t L_178 = V_10;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		float L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		float L_181;
		L_181 = UserSvd_Dsign_mF96FB9296080EDB32843E8C3F42D1FAFB95E5CE1(L_176, L_180, /*hidden argument*/NULL);
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(L_172), (float)L_181);
	}

IL_029e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_182 = V_5;
		int32_t L_183 = V_10;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_184 = V_5;
		int32_t L_185 = V_9;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		float L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		UserSvd_DscalVector_m648BE140CB82C14C062BFACF041C50B30F674676(L_182, L_183, ((float)((float)(1.0f)/(float)L_187)), /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_188 = V_5;
		int32_t L_189 = V_10;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_190 = V_5;
		int32_t L_191 = V_10;
		NullCheck(L_190);
		int32_t L_192 = L_191;
		float L_193 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(L_189), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_193)));
	}

IL_02c2:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_194 = V_5;
		int32_t L_195 = V_9;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_196 = V_5;
		int32_t L_197 = V_9;
		NullCheck(L_196);
		int32_t L_198 = L_197;
		float L_199 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(L_195), (float)((-L_199)));
		int32_t L_200 = V_10;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_201 = V_1;
		NullCheck(L_201);
		int32_t L_202;
		L_202 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_201, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_200) >= ((int32_t)L_202)))
		{
			goto IL_03ae;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_203 = V_5;
		int32_t L_204 = V_9;
		NullCheck(L_203);
		int32_t L_205 = L_204;
		float L_206 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		if ((((double)((double)((double)L_206))) == ((double)(0.0))))
		{
			goto IL_03ae;
		}
	}
	{
		int32_t L_207 = V_10;
		V_7 = L_207;
		goto IL_0304;
	}

IL_02f4:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_208 = V_6;
		int32_t L_209 = V_7;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(L_209), (float)(0.0f));
		int32_t L_210 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)1));
	}

IL_0304:
	{
		int32_t L_211 = V_7;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_212 = V_1;
		NullCheck(L_212);
		int32_t L_213;
		L_213 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_212, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_211) < ((int32_t)L_213)))
		{
			goto IL_02f4;
		}
	}
	{
		int32_t L_214 = V_10;
		V_8 = L_214;
		goto IL_034d;
	}

IL_0314:
	{
		int32_t L_215 = V_10;
		V_24 = L_215;
		goto IL_033d;
	}

IL_031a:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_216 = V_6;
		int32_t L_217 = V_24;
		NullCheck(L_216);
		float* L_218 = ((L_216)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_217)));
		float L_219 = *((float*)L_218);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_220 = V_5;
		int32_t L_221 = V_8;
		NullCheck(L_220);
		int32_t L_222 = L_221;
		float L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_224 = V_1;
		int32_t L_225 = V_24;
		int32_t L_226 = V_8;
		NullCheck(L_224);
		float L_227;
		L_227 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_224, L_225, L_226, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		*((float*)L_218) = (float)((float)il2cpp_codegen_add((float)L_219, (float)((float)il2cpp_codegen_multiply((float)L_223, (float)L_227))));
		int32_t L_228 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)1));
	}

IL_033d:
	{
		int32_t L_229 = V_24;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_230 = V_1;
		NullCheck(L_230);
		int32_t L_231;
		L_231 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_230, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_229) < ((int32_t)L_231)))
		{
			goto IL_031a;
		}
	}
	{
		int32_t L_232 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_232, (int32_t)1));
	}

IL_034d:
	{
		int32_t L_233 = V_8;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_234 = V_1;
		NullCheck(L_234);
		int32_t L_235;
		L_235 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_234, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_233) < ((int32_t)L_235)))
		{
			goto IL_0314;
		}
	}
	{
		int32_t L_236 = V_10;
		V_8 = L_236;
		goto IL_03a4;
	}

IL_035d:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_237 = V_5;
		int32_t L_238 = V_8;
		NullCheck(L_237);
		int32_t L_239 = L_238;
		float L_240 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_241 = V_5;
		int32_t L_242 = V_10;
		NullCheck(L_241);
		int32_t L_243 = L_242;
		float L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		V_25 = ((float)((float)((-L_240))/(float)L_244));
		int32_t L_245 = V_10;
		V_26 = L_245;
		goto IL_0394;
	}

IL_0371:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_246 = V_1;
		int32_t L_247 = V_26;
		int32_t L_248 = V_8;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_249 = V_1;
		int32_t L_250 = V_26;
		int32_t L_251 = V_8;
		NullCheck(L_249);
		float L_252;
		L_252 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_249, L_250, L_251, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		float L_253 = V_25;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_254 = V_6;
		int32_t L_255 = V_26;
		NullCheck(L_254);
		int32_t L_256 = L_255;
		float L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		NullCheck(L_246);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_246, L_247, L_248, ((float)il2cpp_codegen_add((float)L_252, (float)((float)il2cpp_codegen_multiply((float)L_253, (float)L_257)))), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_258 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_258, (int32_t)1));
	}

IL_0394:
	{
		int32_t L_259 = V_26;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_260 = V_1;
		NullCheck(L_260);
		int32_t L_261;
		L_261 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_260, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_259) < ((int32_t)L_261)))
		{
			goto IL_0371;
		}
	}
	{
		int32_t L_262 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_262, (int32_t)1));
	}

IL_03a4:
	{
		int32_t L_263 = V_8;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_264 = V_1;
		NullCheck(L_264);
		int32_t L_265;
		L_265 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_264, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_263) < ((int32_t)L_265)))
		{
			goto IL_035d;
		}
	}

IL_03ae:
	{
		bool L_266 = ___computeVectors1;
		if (!L_266)
		{
			goto IL_03d7;
		}
	}
	{
		int32_t L_267 = V_10;
		V_7 = L_267;
		goto IL_03cd;
	}

IL_03b7:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_268 = V_4;
		int32_t L_269 = V_7;
		int32_t L_270 = V_9;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_271 = V_5;
		int32_t L_272 = V_7;
		NullCheck(L_271);
		int32_t L_273 = L_272;
		float L_274 = (L_271)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		NullCheck(L_268);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_268, L_269, L_270, L_274, /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_275 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_275, (int32_t)1));
	}

IL_03cd:
	{
		int32_t L_276 = V_7;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_277 = V_1;
		NullCheck(L_277);
		int32_t L_278;
		L_278 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_277, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_276) < ((int32_t)L_278)))
		{
			goto IL_03b7;
		}
	}

IL_03d7:
	{
		int32_t L_279 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_279, (int32_t)1));
	}

IL_03dd:
	{
		int32_t L_280 = V_9;
		int32_t L_281 = V_15;
		if ((((int32_t)L_280) < ((int32_t)L_281)))
		{
			goto IL_00c0;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_282 = V_1;
		NullCheck(L_282);
		int32_t L_283;
		L_283 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_282, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_284 = V_1;
		NullCheck(L_284);
		int32_t L_285;
		L_285 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_284, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_286;
		L_286 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_283, ((int32_t)il2cpp_codegen_add((int32_t)L_285, (int32_t)1)), /*hidden argument*/NULL);
		V_16 = L_286;
		int32_t L_287 = V_13;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_287, (int32_t)1));
		int32_t L_288 = V_14;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_288, (int32_t)1));
		int32_t L_289 = V_13;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_290 = V_1;
		NullCheck(L_290);
		int32_t L_291;
		L_291 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_290, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_289) >= ((int32_t)L_291)))
		{
			goto IL_0429;
		}
	}
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_292 = V_2;
		int32_t L_293 = V_17;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_294 = V_1;
		int32_t L_295 = V_17;
		int32_t L_296 = V_17;
		NullCheck(L_294);
		float L_297;
		L_297 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_294, ((int32_t)il2cpp_codegen_subtract((int32_t)L_295, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_296, (int32_t)1)), /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_292);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_292, ((int32_t)il2cpp_codegen_subtract((int32_t)L_293, (int32_t)1)), L_297, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
	}

IL_0429:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_298 = V_1;
		NullCheck(L_298);
		int32_t L_299;
		L_299 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_298, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_300 = V_16;
		if ((((int32_t)L_299) >= ((int32_t)L_300)))
		{
			goto IL_0442;
		}
	}
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_301 = V_2;
		int32_t L_302 = V_16;
		NullCheck(L_301);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_301, ((int32_t)il2cpp_codegen_subtract((int32_t)L_302, (int32_t)1)), (0.0f), /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
	}

IL_0442:
	{
		int32_t L_303 = V_18;
		int32_t L_304 = V_16;
		if ((((int32_t)L_303) >= ((int32_t)L_304)))
		{
			goto IL_045d;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_305 = V_5;
		int32_t L_306 = V_18;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_307 = V_1;
		int32_t L_308 = V_18;
		int32_t L_309 = V_16;
		NullCheck(L_307);
		float L_310;
		L_310 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_307, ((int32_t)il2cpp_codegen_subtract((int32_t)L_308, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_309, (int32_t)1)), /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_305);
		(L_305)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_306, (int32_t)1))), (float)L_310);
	}

IL_045d:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_311 = V_5;
		int32_t L_312 = V_16;
		NullCheck(L_311);
		(L_311)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_312, (int32_t)1))), (float)(0.0f));
		bool L_313 = ___computeVectors1;
		if (!L_313)
		{
			goto IL_05d6;
		}
	}
	{
		int32_t L_314 = V_17;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_314, (int32_t)1));
		goto IL_04b0;
	}

IL_0477:
	{
		V_7 = 0;
		goto IL_0491;
	}

IL_047c:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_315 = V_3;
		int32_t L_316 = V_7;
		int32_t L_317 = V_8;
		NullCheck(L_315);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_315, L_316, L_317, (0.0f), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_318 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_318, (int32_t)1));
	}

IL_0491:
	{
		int32_t L_319 = V_7;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_320 = V_1;
		NullCheck(L_320);
		int32_t L_321;
		L_321 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_320, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_319) < ((int32_t)L_321)))
		{
			goto IL_047c;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_322 = V_3;
		int32_t L_323 = V_8;
		int32_t L_324 = V_8;
		NullCheck(L_322);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_322, L_323, L_324, (1.0f), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_325 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_325, (int32_t)1));
	}

IL_04b0:
	{
		int32_t L_326 = V_8;
		int32_t L_327 = V_12;
		if ((((int32_t)L_326) < ((int32_t)L_327)))
		{
			goto IL_0477;
		}
	}
	{
		int32_t L_328 = V_13;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_328, (int32_t)1));
		goto IL_05ce;
	}

IL_04c1:
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_329 = V_2;
		int32_t L_330 = V_9;
		NullCheck(L_329);
		float L_331;
		L_331 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_329, L_330, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		if ((((double)((double)((double)L_331))) == ((double)(0.0))))
		{
			goto IL_0595;
		}
	}
	{
		int32_t L_332 = V_9;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_332, (int32_t)1));
		goto IL_053e;
	}

IL_04e0:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_333 = V_3;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_334 = V_1;
		NullCheck(L_334);
		int32_t L_335;
		L_335 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_334, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_336 = V_9;
		int32_t L_337 = V_8;
		int32_t L_338 = V_9;
		float L_339;
		L_339 = UserSvd_Ddot_m8DF45A2D947285486C9ECFB23A2243F72028A955(L_333, L_335, L_336, L_337, L_338, /*hidden argument*/NULL);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_340 = V_3;
		int32_t L_341 = V_9;
		int32_t L_342 = V_9;
		NullCheck(L_340);
		float L_343;
		L_343 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_340, L_341, L_342, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		V_11 = ((float)((float)((-L_339))/(float)L_343));
		int32_t L_344 = V_9;
		V_27 = L_344;
		goto IL_052e;
	}

IL_0506:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_345 = V_3;
		int32_t L_346 = V_27;
		int32_t L_347 = V_8;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_348 = V_3;
		int32_t L_349 = V_27;
		int32_t L_350 = V_8;
		NullCheck(L_348);
		float L_351;
		L_351 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_348, L_349, L_350, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		float L_352 = V_11;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_353 = V_3;
		int32_t L_354 = V_27;
		int32_t L_355 = V_9;
		NullCheck(L_353);
		float L_356;
		L_356 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_353, L_354, L_355, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_345);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_345, L_346, L_347, ((float)il2cpp_codegen_add((float)L_351, (float)((float)il2cpp_codegen_multiply((float)L_352, (float)L_356)))), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_357 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_357, (int32_t)1));
	}

IL_052e:
	{
		int32_t L_358 = V_27;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_359 = V_1;
		NullCheck(L_359);
		int32_t L_360;
		L_360 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_359, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_358) < ((int32_t)L_360)))
		{
			goto IL_0506;
		}
	}
	{
		int32_t L_361 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_361, (int32_t)1));
	}

IL_053e:
	{
		int32_t L_362 = V_8;
		int32_t L_363 = V_12;
		if ((((int32_t)L_362) < ((int32_t)L_363)))
		{
			goto IL_04e0;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_364 = V_3;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_365 = V_1;
		NullCheck(L_365);
		int32_t L_366;
		L_366 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_365, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_367 = V_9;
		int32_t L_368 = V_9;
		UserSvd_DscalColumn_mA30253C1FCCBCB917C326AE06A334F7546BD9A38(L_364, L_366, L_367, L_368, (-1.0f), /*hidden argument*/NULL);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_369 = V_3;
		int32_t L_370 = V_9;
		int32_t L_371 = V_9;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_372 = V_3;
		int32_t L_373 = V_9;
		int32_t L_374 = V_9;
		NullCheck(L_372);
		float L_375;
		L_375 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_372, L_373, L_374, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_369);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_369, L_370, L_371, ((float)il2cpp_codegen_add((float)(1.0f), (float)L_375)), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		V_7 = 0;
		goto IL_058d;
	}

IL_0578:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_376 = V_3;
		int32_t L_377 = V_7;
		int32_t L_378 = V_9;
		NullCheck(L_376);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_376, L_377, L_378, (0.0f), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_379 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_379, (int32_t)1));
	}

IL_058d:
	{
		int32_t L_380 = V_7;
		int32_t L_381 = V_9;
		if ((((int32_t)L_380) < ((int32_t)L_381)))
		{
			goto IL_0578;
		}
	}
	{
		goto IL_05c8;
	}

IL_0595:
	{
		V_7 = 0;
		goto IL_05af;
	}

IL_059a:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_382 = V_3;
		int32_t L_383 = V_7;
		int32_t L_384 = V_9;
		NullCheck(L_382);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_382, L_383, L_384, (0.0f), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_385 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_385, (int32_t)1));
	}

IL_05af:
	{
		int32_t L_386 = V_7;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_387 = V_1;
		NullCheck(L_387);
		int32_t L_388;
		L_388 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_387, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_386) < ((int32_t)L_388)))
		{
			goto IL_059a;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_389 = V_3;
		int32_t L_390 = V_9;
		int32_t L_391 = V_9;
		NullCheck(L_389);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_389, L_390, L_391, (1.0f), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
	}

IL_05c8:
	{
		int32_t L_392 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_392, (int32_t)1));
	}

IL_05ce:
	{
		int32_t L_393 = V_9;
		if ((((int32_t)L_393) >= ((int32_t)0)))
		{
			goto IL_04c1;
		}
	}

IL_05d6:
	{
		bool L_394 = ___computeVectors1;
		if (!L_394)
		{
			goto IL_06c1;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_395 = V_1;
		NullCheck(L_395);
		int32_t L_396;
		L_396 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_395, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_396, (int32_t)1));
		goto IL_06b9;
	}

IL_05eb:
	{
		int32_t L_397 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_397, (int32_t)1));
		int32_t L_398 = V_9;
		int32_t L_399 = V_14;
		if ((((int32_t)L_398) >= ((int32_t)L_399)))
		{
			goto IL_067e;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_400 = V_5;
		int32_t L_401 = V_9;
		NullCheck(L_400);
		int32_t L_402 = L_401;
		float L_403 = (L_400)->GetAt(static_cast<il2cpp_array_size_t>(L_402));
		if ((((double)((double)((double)L_403))) == ((double)(0.0))))
		{
			goto IL_067e;
		}
	}
	{
		int32_t L_404 = V_10;
		V_8 = L_404;
		goto IL_0674;
	}

IL_0611:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_405 = V_4;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_406 = V_1;
		NullCheck(L_406);
		int32_t L_407;
		L_407 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_406, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		int32_t L_408 = V_9;
		int32_t L_409 = V_8;
		int32_t L_410 = V_10;
		float L_411;
		L_411 = UserSvd_Ddot_m8DF45A2D947285486C9ECFB23A2243F72028A955(L_405, L_407, L_408, L_409, L_410, /*hidden argument*/NULL);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_412 = V_4;
		int32_t L_413 = V_10;
		int32_t L_414 = V_9;
		NullCheck(L_412);
		float L_415;
		L_415 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_412, L_413, L_414, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		V_11 = ((float)((float)((-L_411))/(float)L_415));
		int32_t L_416 = V_9;
		V_28 = L_416;
		goto IL_0664;
	}

IL_0639:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_417 = V_4;
		int32_t L_418 = V_28;
		int32_t L_419 = V_8;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_420 = V_4;
		int32_t L_421 = V_28;
		int32_t L_422 = V_8;
		NullCheck(L_420);
		float L_423;
		L_423 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_420, L_421, L_422, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		float L_424 = V_11;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_425 = V_4;
		int32_t L_426 = V_28;
		int32_t L_427 = V_9;
		NullCheck(L_425);
		float L_428;
		L_428 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_425, L_426, L_427, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_417);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_417, L_418, L_419, ((float)il2cpp_codegen_add((float)L_423, (float)((float)il2cpp_codegen_multiply((float)L_424, (float)L_428)))), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_429 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_429, (int32_t)1));
	}

IL_0664:
	{
		int32_t L_430 = V_28;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_431 = V_1;
		NullCheck(L_431);
		int32_t L_432;
		L_432 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_431, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_430) < ((int32_t)L_432)))
		{
			goto IL_0639;
		}
	}
	{
		int32_t L_433 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_433, (int32_t)1));
	}

IL_0674:
	{
		int32_t L_434 = V_8;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_435 = V_1;
		NullCheck(L_435);
		int32_t L_436;
		L_436 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_435, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_434) < ((int32_t)L_436)))
		{
			goto IL_0611;
		}
	}

IL_067e:
	{
		V_7 = 0;
		goto IL_0699;
	}

IL_0683:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_437 = V_4;
		int32_t L_438 = V_7;
		int32_t L_439 = V_9;
		NullCheck(L_437);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_437, L_438, L_439, (0.0f), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_440 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_440, (int32_t)1));
	}

IL_0699:
	{
		int32_t L_441 = V_7;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_442 = V_1;
		NullCheck(L_442);
		int32_t L_443;
		L_443 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_442, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_441) < ((int32_t)L_443)))
		{
			goto IL_0683;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_444 = V_4;
		int32_t L_445 = V_9;
		int32_t L_446 = V_9;
		NullCheck(L_444);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_444, L_445, L_446, (1.0f), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_447 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_447, (int32_t)1));
	}

IL_06b9:
	{
		int32_t L_448 = V_9;
		if ((((int32_t)L_448) >= ((int32_t)0)))
		{
			goto IL_05eb;
		}
	}

IL_06c1:
	{
		V_7 = 0;
		goto IL_078c;
	}

IL_06c9:
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_449 = V_2;
		int32_t L_450 = V_7;
		NullCheck(L_449);
		float L_451;
		L_451 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_449, L_450, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		if ((((double)((double)((double)L_451))) == ((double)(0.0))))
		{
			goto IL_0727;
		}
	}
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_452 = V_2;
		int32_t L_453 = V_7;
		NullCheck(L_452);
		float L_454;
		L_454 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_452, L_453, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		V_11 = L_454;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_455 = V_2;
		int32_t L_456 = V_7;
		NullCheck(L_455);
		float L_457;
		L_457 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_455, L_456, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		float L_458 = V_11;
		V_29 = ((float)((float)L_457/(float)L_458));
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_459 = V_2;
		int32_t L_460 = V_7;
		float L_461 = V_11;
		NullCheck(L_459);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_459, L_460, L_461, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		int32_t L_462 = V_7;
		int32_t L_463 = V_16;
		if ((((int32_t)L_462) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_463, (int32_t)1)))))
		{
			goto IL_0713;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_464 = V_5;
		int32_t L_465 = V_7;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_466 = V_5;
		int32_t L_467 = V_7;
		NullCheck(L_466);
		int32_t L_468 = L_467;
		float L_469 = (L_466)->GetAt(static_cast<il2cpp_array_size_t>(L_468));
		float L_470 = V_29;
		NullCheck(L_464);
		(L_464)->SetAt(static_cast<il2cpp_array_size_t>(L_465), (float)((float)((float)L_469/(float)L_470)));
	}

IL_0713:
	{
		bool L_471 = ___computeVectors1;
		if (!L_471)
		{
			goto IL_0727;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_472 = V_3;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_473 = V_1;
		NullCheck(L_473);
		int32_t L_474;
		L_474 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_473, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_475 = V_7;
		float L_476 = V_29;
		UserSvd_DscalColumn_mA30253C1FCCBCB917C326AE06A334F7546BD9A38(L_472, L_474, L_475, 0, L_476, /*hidden argument*/NULL);
	}

IL_0727:
	{
		int32_t L_477 = V_7;
		int32_t L_478 = V_16;
		if ((((int32_t)L_477) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_478, (int32_t)1)))))
		{
			goto IL_0795;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_479 = V_5;
		int32_t L_480 = V_7;
		NullCheck(L_479);
		int32_t L_481 = L_480;
		float L_482 = (L_479)->GetAt(static_cast<il2cpp_array_size_t>(L_481));
		if ((((double)((double)((double)L_482))) == ((double)(0.0))))
		{
			goto IL_0786;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_483 = V_5;
		int32_t L_484 = V_7;
		NullCheck(L_483);
		int32_t L_485 = L_484;
		float L_486 = (L_483)->GetAt(static_cast<il2cpp_array_size_t>(L_485));
		V_11 = L_486;
		float L_487 = V_11;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_488 = V_5;
		int32_t L_489 = V_7;
		NullCheck(L_488);
		int32_t L_490 = L_489;
		float L_491 = (L_488)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		V_29 = ((float)((float)L_487/(float)L_491));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_492 = V_5;
		int32_t L_493 = V_7;
		float L_494 = V_11;
		NullCheck(L_492);
		(L_492)->SetAt(static_cast<il2cpp_array_size_t>(L_493), (float)L_494);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_495 = V_2;
		int32_t L_496 = V_7;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_497 = V_2;
		int32_t L_498 = V_7;
		NullCheck(L_497);
		float L_499;
		L_499 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_497, ((int32_t)il2cpp_codegen_add((int32_t)L_498, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		float L_500 = V_29;
		NullCheck(L_495);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_495, ((int32_t)il2cpp_codegen_add((int32_t)L_496, (int32_t)1)), ((float)il2cpp_codegen_multiply((float)L_499, (float)L_500)), /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		bool L_501 = ___computeVectors1;
		if (!L_501)
		{
			goto IL_0786;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_502 = V_4;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_503 = V_1;
		NullCheck(L_503);
		int32_t L_504;
		L_504 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_503, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		int32_t L_505 = V_7;
		float L_506 = V_29;
		UserSvd_DscalColumn_mA30253C1FCCBCB917C326AE06A334F7546BD9A38(L_502, L_504, ((int32_t)il2cpp_codegen_add((int32_t)L_505, (int32_t)1)), 0, L_506, /*hidden argument*/NULL);
	}

IL_0786:
	{
		int32_t L_507 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_507, (int32_t)1));
	}

IL_078c:
	{
		int32_t L_508 = V_7;
		int32_t L_509 = V_16;
		if ((((int32_t)L_508) < ((int32_t)L_509)))
		{
			goto IL_06c9;
		}
	}

IL_0795:
	{
		int32_t L_510 = V_16;
		V_19 = L_510;
		V_20 = 0;
		goto IL_0d4d;
	}

IL_07a1:
	{
		int32_t L_511 = V_20;
		if ((((int32_t)L_511) < ((int32_t)((int32_t)1000))))
		{
			goto IL_07b0;
		}
	}
	{
		NonConvergenceException_t50AF57E869B91728CE433AA3E1827B660F1598BC * L_512 = (NonConvergenceException_t50AF57E869B91728CE433AA3E1827B660F1598BC *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NonConvergenceException_t50AF57E869B91728CE433AA3E1827B660F1598BC_il2cpp_TypeInfo_var)));
		NonConvergenceException__ctor_m3548C091B237B862DBE5F6AB15A52F64FFEC955E(L_512, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_512, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UserSvd_Create_m5820D2FBF3BDD708D12469D119A82570F25B1D02_RuntimeMethod_var)));
	}

IL_07b0:
	{
		int32_t L_513 = V_16;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_513, (int32_t)2));
		goto IL_0800;
	}

IL_07b8:
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_514 = V_2;
		int32_t L_515 = V_9;
		NullCheck(L_514);
		float L_516;
		L_516 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_514, L_515, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_517;
		L_517 = fabsf(L_516);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_518 = V_2;
		int32_t L_519 = V_9;
		NullCheck(L_518);
		float L_520;
		L_520 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_518, ((int32_t)il2cpp_codegen_add((int32_t)L_519, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		float L_521;
		L_521 = fabsf(L_520);
		V_30 = ((float)il2cpp_codegen_add((float)L_517, (float)L_521));
		float L_522 = V_30;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_523 = V_5;
		int32_t L_524 = V_9;
		NullCheck(L_523);
		int32_t L_525 = L_524;
		float L_526 = (L_523)->GetAt(static_cast<il2cpp_array_size_t>(L_525));
		float L_527;
		L_527 = fabsf(L_526);
		float L_528 = V_30;
		IL2CPP_RUNTIME_CLASS_INIT(Precision_t09A54474F11AC81B64BA6ED0F3D1589CECA59AC0_il2cpp_TypeInfo_var);
		bool L_529;
		L_529 = Precision_AlmostEqualRelative_m7E54E8323A7EE66DDF1E721CCE4803FD95FCF1F3(((float)il2cpp_codegen_add((float)L_522, (float)L_527)), L_528, 7, /*hidden argument*/NULL);
		if (!L_529)
		{
			goto IL_07fa;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_530 = V_5;
		int32_t L_531 = V_9;
		NullCheck(L_530);
		(L_530)->SetAt(static_cast<il2cpp_array_size_t>(L_531), (float)(0.0f));
		goto IL_0805;
	}

IL_07fa:
	{
		int32_t L_532 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_532, (int32_t)1));
	}

IL_0800:
	{
		int32_t L_533 = V_9;
		if ((((int32_t)L_533) >= ((int32_t)0)))
		{
			goto IL_07b8;
		}
	}

IL_0805:
	{
		int32_t L_534 = V_9;
		int32_t L_535 = V_16;
		if ((!(((uint32_t)L_534) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_535, (int32_t)2))))))
		{
			goto IL_0815;
		}
	}
	{
		V_31 = 4;
		goto IL_08a8;
	}

IL_0815:
	{
		int32_t L_536 = V_16;
		V_36 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_536, (int32_t)1));
		goto IL_0883;
	}

IL_081d:
	{
		V_30 = (0.0f);
		int32_t L_537 = V_36;
		int32_t L_538 = V_16;
		if ((((int32_t)L_537) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_538, (int32_t)1)))))
		{
			goto IL_083b;
		}
	}
	{
		float L_539 = V_30;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_540 = V_5;
		int32_t L_541 = V_36;
		NullCheck(L_540);
		int32_t L_542 = L_541;
		float L_543 = (L_540)->GetAt(static_cast<il2cpp_array_size_t>(L_542));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_544;
		L_544 = fabsf(L_543);
		V_30 = ((float)il2cpp_codegen_add((float)L_539, (float)L_544));
	}

IL_083b:
	{
		int32_t L_545 = V_36;
		int32_t L_546 = V_9;
		if ((((int32_t)L_545) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_546, (int32_t)1)))))
		{
			goto IL_0854;
		}
	}
	{
		float L_547 = V_30;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_548 = V_5;
		int32_t L_549 = V_36;
		NullCheck(L_548);
		int32_t L_550 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_549, (int32_t)1));
		float L_551 = (L_548)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_552;
		L_552 = fabsf(L_551);
		V_30 = ((float)il2cpp_codegen_add((float)L_547, (float)L_552));
	}

IL_0854:
	{
		float L_553 = V_30;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_554 = V_2;
		int32_t L_555 = V_36;
		NullCheck(L_554);
		float L_556;
		L_556 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_554, L_555, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_557;
		L_557 = fabsf(L_556);
		float L_558 = V_30;
		IL2CPP_RUNTIME_CLASS_INIT(Precision_t09A54474F11AC81B64BA6ED0F3D1589CECA59AC0_il2cpp_TypeInfo_var);
		bool L_559;
		L_559 = Precision_AlmostEqualRelative_m7E54E8323A7EE66DDF1E721CCE4803FD95FCF1F3(((float)il2cpp_codegen_add((float)L_553, (float)L_557)), L_558, 7, /*hidden argument*/NULL);
		if (!L_559)
		{
			goto IL_087d;
		}
	}
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_560 = V_2;
		int32_t L_561 = V_36;
		NullCheck(L_560);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_560, L_561, (0.0f), /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		goto IL_0889;
	}

IL_087d:
	{
		int32_t L_562 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_562, (int32_t)1));
	}

IL_0883:
	{
		int32_t L_563 = V_36;
		int32_t L_564 = V_9;
		if ((((int32_t)L_563) > ((int32_t)L_564)))
		{
			goto IL_081d;
		}
	}

IL_0889:
	{
		int32_t L_565 = V_36;
		int32_t L_566 = V_9;
		if ((!(((uint32_t)L_565) == ((uint32_t)L_566))))
		{
			goto IL_0894;
		}
	}
	{
		V_31 = 3;
		goto IL_08a8;
	}

IL_0894:
	{
		int32_t L_567 = V_36;
		int32_t L_568 = V_16;
		if ((!(((uint32_t)L_567) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_568, (int32_t)1))))))
		{
			goto IL_08a1;
		}
	}
	{
		V_31 = 1;
		goto IL_08a8;
	}

IL_08a1:
	{
		V_31 = 2;
		int32_t L_569 = V_36;
		V_9 = L_569;
	}

IL_08a8:
	{
		int32_t L_570 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_570, (int32_t)1));
		int32_t L_571 = V_31;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_571, (int32_t)1)))
		{
			case 0:
			{
				goto IL_08cc;
			}
			case 1:
			{
				goto IL_0965;
			}
			case 2:
			{
				goto IL_09e3;
			}
			case 3:
			{
				goto IL_0c70;
			}
		}
	}
	{
		goto IL_0d4d;
	}

IL_08cc:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_572 = V_5;
		int32_t L_573 = V_16;
		NullCheck(L_572);
		int32_t L_574 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_573, (int32_t)2));
		float L_575 = (L_572)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		V_33 = L_575;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_576 = V_5;
		int32_t L_577 = V_16;
		NullCheck(L_576);
		(L_576)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_577, (int32_t)2))), (float)(0.0f));
		int32_t L_578 = V_9;
		V_48 = L_578;
		goto IL_0958;
	}

IL_08e7:
	{
		int32_t L_579 = V_16;
		int32_t L_580 = V_48;
		int32_t L_581 = V_9;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_579, (int32_t)2)), (int32_t)L_580)), (int32_t)L_581));
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_582 = V_2;
		int32_t L_583 = V_32;
		NullCheck(L_582);
		float L_584;
		L_584 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_582, L_583, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		V_37 = L_584;
		UserSvd_Drotg_m0CF3A3B7A1B1313385A18158260FEB59B3C1B550((float*)(&V_37), (float*)(&V_33), (float*)(&V_35), (float*)(&V_34), /*hidden argument*/NULL);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_585 = V_2;
		int32_t L_586 = V_32;
		float L_587 = V_37;
		NullCheck(L_585);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_585, L_586, L_587, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		int32_t L_588 = V_32;
		int32_t L_589 = V_9;
		if ((((int32_t)L_588) == ((int32_t)L_589)))
		{
			goto IL_0938;
		}
	}
	{
		float L_590 = V_34;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_591 = V_5;
		int32_t L_592 = V_32;
		NullCheck(L_591);
		int32_t L_593 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_592, (int32_t)1));
		float L_594 = (L_591)->GetAt(static_cast<il2cpp_array_size_t>(L_593));
		V_33 = ((float)il2cpp_codegen_multiply((float)((-L_590)), (float)L_594));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_595 = V_5;
		int32_t L_596 = V_32;
		float L_597 = V_35;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_598 = V_5;
		int32_t L_599 = V_32;
		NullCheck(L_598);
		int32_t L_600 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_599, (int32_t)1));
		float L_601 = (L_598)->GetAt(static_cast<il2cpp_array_size_t>(L_600));
		NullCheck(L_595);
		(L_595)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_596, (int32_t)1))), (float)((float)il2cpp_codegen_multiply((float)L_597, (float)L_601)));
	}

IL_0938:
	{
		bool L_602 = ___computeVectors1;
		if (!L_602)
		{
			goto IL_0952;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_603 = V_4;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_604 = V_1;
		NullCheck(L_604);
		int32_t L_605;
		L_605 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_604, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		int32_t L_606 = V_32;
		int32_t L_607 = V_16;
		float L_608 = V_35;
		float L_609 = V_34;
		UserSvd_Drot_m78FFDD4F83E477473892CF430F9A3DEE7446F1C8(L_603, L_605, L_606, ((int32_t)il2cpp_codegen_subtract((int32_t)L_607, (int32_t)1)), L_608, L_609, /*hidden argument*/NULL);
	}

IL_0952:
	{
		int32_t L_610 = V_48;
		V_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_610, (int32_t)1));
	}

IL_0958:
	{
		int32_t L_611 = V_48;
		int32_t L_612 = V_16;
		if ((((int32_t)L_611) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_612, (int32_t)1)))))
		{
			goto IL_08e7;
		}
	}
	{
		goto IL_0d4d;
	}

IL_0965:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_613 = V_5;
		int32_t L_614 = V_9;
		NullCheck(L_613);
		int32_t L_615 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_614, (int32_t)1));
		float L_616 = (L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_615));
		V_33 = L_616;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_617 = V_5;
		int32_t L_618 = V_9;
		NullCheck(L_617);
		(L_617)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_618, (int32_t)1))), (float)(0.0f));
		int32_t L_619 = V_9;
		V_32 = L_619;
		goto IL_09d8;
	}

IL_0980:
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_620 = V_2;
		int32_t L_621 = V_32;
		NullCheck(L_620);
		float L_622;
		L_622 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_620, L_621, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		V_37 = L_622;
		UserSvd_Drotg_m0CF3A3B7A1B1313385A18158260FEB59B3C1B550((float*)(&V_37), (float*)(&V_33), (float*)(&V_35), (float*)(&V_34), /*hidden argument*/NULL);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_623 = V_2;
		int32_t L_624 = V_32;
		float L_625 = V_37;
		NullCheck(L_623);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_623, L_624, L_625, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		float L_626 = V_34;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_627 = V_5;
		int32_t L_628 = V_32;
		NullCheck(L_627);
		int32_t L_629 = L_628;
		float L_630 = (L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_629));
		V_33 = ((float)il2cpp_codegen_multiply((float)((-L_626)), (float)L_630));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_631 = V_5;
		int32_t L_632 = V_32;
		float L_633 = V_35;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_634 = V_5;
		int32_t L_635 = V_32;
		NullCheck(L_634);
		int32_t L_636 = L_635;
		float L_637 = (L_634)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		NullCheck(L_631);
		(L_631)->SetAt(static_cast<il2cpp_array_size_t>(L_632), (float)((float)il2cpp_codegen_multiply((float)L_633, (float)L_637)));
		bool L_638 = ___computeVectors1;
		if (!L_638)
		{
			goto IL_09d2;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_639 = V_3;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_640 = V_1;
		NullCheck(L_640);
		int32_t L_641;
		L_641 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_640, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_642 = V_32;
		int32_t L_643 = V_9;
		float L_644 = V_35;
		float L_645 = V_34;
		UserSvd_Drot_m78FFDD4F83E477473892CF430F9A3DEE7446F1C8(L_639, L_641, L_642, ((int32_t)il2cpp_codegen_subtract((int32_t)L_643, (int32_t)1)), L_644, L_645, /*hidden argument*/NULL);
	}

IL_09d2:
	{
		int32_t L_646 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_646, (int32_t)1));
	}

IL_09d8:
	{
		int32_t L_647 = V_32;
		int32_t L_648 = V_16;
		if ((((int32_t)L_647) < ((int32_t)L_648)))
		{
			goto IL_0980;
		}
	}
	{
		goto IL_0d4d;
	}

IL_09e3:
	{
		V_38 = (0.0f);
		float L_649 = V_38;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_650 = V_2;
		int32_t L_651 = V_16;
		NullCheck(L_650);
		float L_652;
		L_652 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_650, ((int32_t)il2cpp_codegen_subtract((int32_t)L_651, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_653;
		L_653 = fabsf(L_652);
		float L_654;
		L_654 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_649, L_653, /*hidden argument*/NULL);
		V_38 = L_654;
		float L_655 = V_38;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_656 = V_2;
		int32_t L_657 = V_16;
		NullCheck(L_656);
		float L_658;
		L_658 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_656, ((int32_t)il2cpp_codegen_subtract((int32_t)L_657, (int32_t)2)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		float L_659;
		L_659 = fabsf(L_658);
		float L_660;
		L_660 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_655, L_659, /*hidden argument*/NULL);
		V_38 = L_660;
		float L_661 = V_38;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_662 = V_5;
		int32_t L_663 = V_16;
		NullCheck(L_662);
		int32_t L_664 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_663, (int32_t)2));
		float L_665 = (L_662)->GetAt(static_cast<il2cpp_array_size_t>(L_664));
		float L_666;
		L_666 = fabsf(L_665);
		float L_667;
		L_667 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_661, L_666, /*hidden argument*/NULL);
		V_38 = L_667;
		float L_668 = V_38;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_669 = V_2;
		int32_t L_670 = V_9;
		NullCheck(L_669);
		float L_671;
		L_671 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_669, L_670, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		float L_672;
		L_672 = fabsf(L_671);
		float L_673;
		L_673 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_668, L_672, /*hidden argument*/NULL);
		V_38 = L_673;
		float L_674 = V_38;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_675 = V_5;
		int32_t L_676 = V_9;
		NullCheck(L_675);
		int32_t L_677 = L_676;
		float L_678 = (L_675)->GetAt(static_cast<il2cpp_array_size_t>(L_677));
		float L_679;
		L_679 = fabsf(L_678);
		float L_680;
		L_680 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_674, L_679, /*hidden argument*/NULL);
		V_38 = L_680;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_681 = V_2;
		int32_t L_682 = V_16;
		NullCheck(L_681);
		float L_683;
		L_683 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_681, ((int32_t)il2cpp_codegen_subtract((int32_t)L_682, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		float L_684 = V_38;
		V_39 = ((float)((float)L_683/(float)L_684));
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_685 = V_2;
		int32_t L_686 = V_16;
		NullCheck(L_685);
		float L_687;
		L_687 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_685, ((int32_t)il2cpp_codegen_subtract((int32_t)L_686, (int32_t)2)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		float L_688 = V_38;
		V_40 = ((float)((float)L_687/(float)L_688));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_689 = V_5;
		int32_t L_690 = V_16;
		NullCheck(L_689);
		int32_t L_691 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_690, (int32_t)2));
		float L_692 = (L_689)->GetAt(static_cast<il2cpp_array_size_t>(L_691));
		float L_693 = V_38;
		V_41 = ((float)((float)L_692/(float)L_693));
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_694 = V_2;
		int32_t L_695 = V_9;
		NullCheck(L_694);
		float L_696;
		L_696 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_694, L_695, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		float L_697 = V_38;
		V_42 = ((float)((float)L_696/(float)L_697));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_698 = V_5;
		int32_t L_699 = V_9;
		NullCheck(L_698);
		int32_t L_700 = L_699;
		float L_701 = (L_698)->GetAt(static_cast<il2cpp_array_size_t>(L_700));
		float L_702 = V_38;
		V_43 = ((float)((float)L_701/(float)L_702));
		float L_703 = V_40;
		float L_704 = V_39;
		float L_705 = V_40;
		float L_706 = V_39;
		float L_707 = V_41;
		float L_708 = V_41;
		V_44 = ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_703, (float)L_704)), (float)((float)il2cpp_codegen_subtract((float)L_705, (float)L_706)))), (float)((float)il2cpp_codegen_multiply((float)L_707, (float)L_708))))/(float)(2.0f)));
		float L_709 = V_39;
		float L_710 = V_41;
		float L_711 = V_39;
		float L_712 = V_41;
		V_45 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_709, (float)L_710)), (float)((float)il2cpp_codegen_multiply((float)L_711, (float)L_712))));
		V_46 = (0.0f);
		float L_713 = V_44;
		if ((!(((double)((double)((double)L_713))) == ((double)(0.0)))))
		{
			goto IL_0ae2;
		}
	}
	{
		float L_714 = V_45;
		if ((((double)((double)((double)L_714))) == ((double)(0.0))))
		{
			goto IL_0b10;
		}
	}

IL_0ae2:
	{
		float L_715 = V_44;
		float L_716 = V_44;
		float L_717 = V_45;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_718;
		L_718 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_715, (float)L_716)), (float)L_717)))));
		V_46 = ((float)((float)L_718));
		float L_719 = V_44;
		if ((!(((double)((double)((double)L_719))) < ((double)(0.0)))))
		{
			goto IL_0b06;
		}
	}
	{
		float L_720 = V_46;
		V_46 = ((-L_720));
	}

IL_0b06:
	{
		float L_721 = V_45;
		float L_722 = V_44;
		float L_723 = V_46;
		V_46 = ((float)((float)L_721/(float)((float)il2cpp_codegen_add((float)L_722, (float)L_723))));
	}

IL_0b10:
	{
		float L_724 = V_42;
		float L_725 = V_39;
		float L_726 = V_42;
		float L_727 = V_39;
		float L_728 = V_46;
		V_33 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_724, (float)L_725)), (float)((float)il2cpp_codegen_subtract((float)L_726, (float)L_727)))), (float)L_728));
		float L_729 = V_42;
		float L_730 = V_43;
		V_47 = ((float)il2cpp_codegen_multiply((float)L_729, (float)L_730));
		int32_t L_731 = V_9;
		V_32 = L_731;
		goto IL_0c51;
	}

IL_0b30:
	{
		UserSvd_Drotg_m0CF3A3B7A1B1313385A18158260FEB59B3C1B550((float*)(&V_33), (float*)(&V_47), (float*)(&V_35), (float*)(&V_34), /*hidden argument*/NULL);
		int32_t L_732 = V_32;
		int32_t L_733 = V_9;
		if ((((int32_t)L_732) == ((int32_t)L_733)))
		{
			goto IL_0b4c;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_734 = V_5;
		int32_t L_735 = V_32;
		float L_736 = V_33;
		NullCheck(L_734);
		(L_734)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_735, (int32_t)1))), (float)L_736);
	}

IL_0b4c:
	{
		float L_737 = V_35;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_738 = V_2;
		int32_t L_739 = V_32;
		NullCheck(L_738);
		float L_740;
		L_740 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_738, L_739, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		float L_741 = V_34;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_742 = V_5;
		int32_t L_743 = V_32;
		NullCheck(L_742);
		int32_t L_744 = L_743;
		float L_745 = (L_742)->GetAt(static_cast<il2cpp_array_size_t>(L_744));
		V_33 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_737, (float)L_740)), (float)((float)il2cpp_codegen_multiply((float)L_741, (float)L_745))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_746 = V_5;
		int32_t L_747 = V_32;
		float L_748 = V_35;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_749 = V_5;
		int32_t L_750 = V_32;
		NullCheck(L_749);
		int32_t L_751 = L_750;
		float L_752 = (L_749)->GetAt(static_cast<il2cpp_array_size_t>(L_751));
		float L_753 = V_34;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_754 = V_2;
		int32_t L_755 = V_32;
		NullCheck(L_754);
		float L_756;
		L_756 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_754, L_755, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		NullCheck(L_746);
		(L_746)->SetAt(static_cast<il2cpp_array_size_t>(L_747), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_748, (float)L_752)), (float)((float)il2cpp_codegen_multiply((float)L_753, (float)L_756)))));
		float L_757 = V_34;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_758 = V_2;
		int32_t L_759 = V_32;
		NullCheck(L_758);
		float L_760;
		L_760 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_758, ((int32_t)il2cpp_codegen_add((int32_t)L_759, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		V_47 = ((float)il2cpp_codegen_multiply((float)L_757, (float)L_760));
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_761 = V_2;
		int32_t L_762 = V_32;
		float L_763 = V_35;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_764 = V_2;
		int32_t L_765 = V_32;
		NullCheck(L_764);
		float L_766;
		L_766 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_764, ((int32_t)il2cpp_codegen_add((int32_t)L_765, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		NullCheck(L_761);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_761, ((int32_t)il2cpp_codegen_add((int32_t)L_762, (int32_t)1)), ((float)il2cpp_codegen_multiply((float)L_763, (float)L_766)), /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		bool L_767 = ___computeVectors1;
		if (!L_767)
		{
			goto IL_0bbb;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_768 = V_4;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_769 = V_1;
		NullCheck(L_769);
		int32_t L_770;
		L_770 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_769, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		int32_t L_771 = V_32;
		int32_t L_772 = V_32;
		float L_773 = V_35;
		float L_774 = V_34;
		UserSvd_Drot_m78FFDD4F83E477473892CF430F9A3DEE7446F1C8(L_768, L_770, L_771, ((int32_t)il2cpp_codegen_add((int32_t)L_772, (int32_t)1)), L_773, L_774, /*hidden argument*/NULL);
	}

IL_0bbb:
	{
		UserSvd_Drotg_m0CF3A3B7A1B1313385A18158260FEB59B3C1B550((float*)(&V_33), (float*)(&V_47), (float*)(&V_35), (float*)(&V_34), /*hidden argument*/NULL);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_775 = V_2;
		int32_t L_776 = V_32;
		float L_777 = V_33;
		NullCheck(L_775);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_775, L_776, L_777, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		float L_778 = V_35;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_779 = V_5;
		int32_t L_780 = V_32;
		NullCheck(L_779);
		int32_t L_781 = L_780;
		float L_782 = (L_779)->GetAt(static_cast<il2cpp_array_size_t>(L_781));
		float L_783 = V_34;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_784 = V_2;
		int32_t L_785 = V_32;
		NullCheck(L_784);
		float L_786;
		L_786 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_784, ((int32_t)il2cpp_codegen_add((int32_t)L_785, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		V_33 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_778, (float)L_782)), (float)((float)il2cpp_codegen_multiply((float)L_783, (float)L_786))));
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_787 = V_2;
		int32_t L_788 = V_32;
		float L_789 = V_34;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_790 = V_5;
		int32_t L_791 = V_32;
		NullCheck(L_790);
		int32_t L_792 = L_791;
		float L_793 = (L_790)->GetAt(static_cast<il2cpp_array_size_t>(L_792));
		float L_794 = V_35;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_795 = V_2;
		int32_t L_796 = V_32;
		NullCheck(L_795);
		float L_797;
		L_797 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_795, ((int32_t)il2cpp_codegen_add((int32_t)L_796, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		NullCheck(L_787);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_787, ((int32_t)il2cpp_codegen_add((int32_t)L_788, (int32_t)1)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((-L_789)), (float)L_793)), (float)((float)il2cpp_codegen_multiply((float)L_794, (float)L_797)))), /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		float L_798 = V_34;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_799 = V_5;
		int32_t L_800 = V_32;
		NullCheck(L_799);
		int32_t L_801 = ((int32_t)il2cpp_codegen_add((int32_t)L_800, (int32_t)1));
		float L_802 = (L_799)->GetAt(static_cast<il2cpp_array_size_t>(L_801));
		V_47 = ((float)il2cpp_codegen_multiply((float)L_798, (float)L_802));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_803 = V_5;
		int32_t L_804 = V_32;
		float L_805 = V_35;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_806 = V_5;
		int32_t L_807 = V_32;
		NullCheck(L_806);
		int32_t L_808 = ((int32_t)il2cpp_codegen_add((int32_t)L_807, (int32_t)1));
		float L_809 = (L_806)->GetAt(static_cast<il2cpp_array_size_t>(L_808));
		NullCheck(L_803);
		(L_803)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_804, (int32_t)1))), (float)((float)il2cpp_codegen_multiply((float)L_805, (float)L_809)));
		bool L_810 = ___computeVectors1;
		if (!L_810)
		{
			goto IL_0c4b;
		}
	}
	{
		int32_t L_811 = V_32;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_812 = V_1;
		NullCheck(L_812);
		int32_t L_813;
		L_813 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_812, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_811) >= ((int32_t)L_813)))
		{
			goto IL_0c4b;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_814 = V_3;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_815 = V_1;
		NullCheck(L_815);
		int32_t L_816;
		L_816 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_815, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_817 = V_32;
		int32_t L_818 = V_32;
		float L_819 = V_35;
		float L_820 = V_34;
		UserSvd_Drot_m78FFDD4F83E477473892CF430F9A3DEE7446F1C8(L_814, L_816, L_817, ((int32_t)il2cpp_codegen_add((int32_t)L_818, (int32_t)1)), L_819, L_820, /*hidden argument*/NULL);
	}

IL_0c4b:
	{
		int32_t L_821 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_821, (int32_t)1));
	}

IL_0c51:
	{
		int32_t L_822 = V_32;
		int32_t L_823 = V_16;
		if ((((int32_t)L_822) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_823, (int32_t)1)))))
		{
			goto IL_0b30;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_824 = V_5;
		int32_t L_825 = V_16;
		float L_826 = V_33;
		NullCheck(L_824);
		(L_824)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_825, (int32_t)2))), (float)L_826);
		int32_t L_827 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_827, (int32_t)1));
		goto IL_0d4d;
	}

IL_0c70:
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_828 = V_2;
		int32_t L_829 = V_9;
		NullCheck(L_828);
		float L_830;
		L_830 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_828, L_829, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		if ((!(((double)((double)((double)L_830))) < ((double)(0.0)))))
		{
			goto IL_0d39;
		}
	}
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_831 = V_2;
		int32_t L_832 = V_9;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_833 = V_2;
		int32_t L_834 = V_9;
		NullCheck(L_833);
		float L_835;
		L_835 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_833, L_834, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		NullCheck(L_831);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_831, L_832, ((-L_835)), /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		bool L_836 = ___computeVectors1;
		if (!L_836)
		{
			goto IL_0d39;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_837 = V_4;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_838 = V_1;
		NullCheck(L_838);
		int32_t L_839;
		L_839 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_838, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		int32_t L_840 = V_9;
		UserSvd_DscalColumn_mA30253C1FCCBCB917C326AE06A334F7546BD9A38(L_837, L_839, L_840, 0, (-1.0f), /*hidden argument*/NULL);
		goto IL_0d39;
	}

IL_0cb8:
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_841 = V_2;
		int32_t L_842 = V_9;
		NullCheck(L_841);
		float L_843;
		L_843 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_841, L_842, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_844 = V_2;
		int32_t L_845 = V_9;
		NullCheck(L_844);
		float L_846;
		L_846 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_844, ((int32_t)il2cpp_codegen_add((int32_t)L_845, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		if ((((float)L_843) >= ((float)L_846)))
		{
			goto IL_0d44;
		}
	}
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_847 = V_2;
		int32_t L_848 = V_9;
		NullCheck(L_847);
		float L_849;
		L_849 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_847, L_848, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		V_11 = L_849;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_850 = V_2;
		int32_t L_851 = V_9;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_852 = V_2;
		int32_t L_853 = V_9;
		NullCheck(L_852);
		float L_854;
		L_854 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_852, ((int32_t)il2cpp_codegen_add((int32_t)L_853, (int32_t)1)), /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		NullCheck(L_850);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_850, L_851, L_854, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_855 = V_2;
		int32_t L_856 = V_9;
		float L_857 = V_11;
		NullCheck(L_855);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_855, ((int32_t)il2cpp_codegen_add((int32_t)L_856, (int32_t)1)), L_857, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		bool L_858 = ___computeVectors1;
		if (!L_858)
		{
			goto IL_0d14;
		}
	}
	{
		int32_t L_859 = V_9;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_860 = V_1;
		NullCheck(L_860);
		int32_t L_861;
		L_861 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_860, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_859) >= ((int32_t)L_861)))
		{
			goto IL_0d14;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_862 = V_4;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_863 = V_1;
		NullCheck(L_863);
		int32_t L_864;
		L_864 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_863, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		int32_t L_865 = V_9;
		int32_t L_866 = V_9;
		UserSvd_Dswap_mA6A0B8DA52A8F3A6847C3FA7EBBDFA2837612C72(L_862, L_864, L_865, ((int32_t)il2cpp_codegen_add((int32_t)L_866, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0d14:
	{
		bool L_867 = ___computeVectors1;
		if (!L_867)
		{
			goto IL_0d33;
		}
	}
	{
		int32_t L_868 = V_9;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_869 = V_1;
		NullCheck(L_869);
		int32_t L_870;
		L_870 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_869, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		if ((((int32_t)L_868) >= ((int32_t)L_870)))
		{
			goto IL_0d33;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_871 = V_3;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_872 = V_1;
		NullCheck(L_872);
		int32_t L_873;
		L_873 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_872, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		int32_t L_874 = V_9;
		int32_t L_875 = V_9;
		UserSvd_Dswap_mA6A0B8DA52A8F3A6847C3FA7EBBDFA2837612C72(L_871, L_873, L_874, ((int32_t)il2cpp_codegen_add((int32_t)L_875, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0d33:
	{
		int32_t L_876 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_876, (int32_t)1));
	}

IL_0d39:
	{
		int32_t L_877 = V_9;
		int32_t L_878 = V_19;
		if ((!(((uint32_t)L_877) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_878, (int32_t)1))))))
		{
			goto IL_0cb8;
		}
	}

IL_0d44:
	{
		V_20 = 0;
		int32_t L_879 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_879, (int32_t)1));
	}

IL_0d4d:
	{
		int32_t L_880 = V_16;
		if ((((int32_t)L_880) > ((int32_t)0)))
		{
			goto IL_07a1;
		}
	}
	{
		bool L_881 = ___computeVectors1;
		if (!L_881)
		{
			goto IL_0d61;
		}
	}
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_882 = V_4;
		NullCheck(L_882);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_883;
		L_883 = Matrix_1_Transpose_m2D5102E11EF061BCE3E47EF6F56E9E0ABA11912F(L_882, /*hidden argument*/Matrix_1_Transpose_m2D5102E11EF061BCE3E47EF6F56E9E0ABA11912F_RuntimeMethod_var);
		V_4 = L_883;
	}

IL_0d61:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_884 = V_1;
		NullCheck(L_884);
		int32_t L_885;
		L_885 = Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_inline(L_884, /*hidden argument*/Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_886 = V_1;
		NullCheck(L_886);
		int32_t L_887;
		L_887 = Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_inline(L_886, /*hidden argument*/Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_RuntimeMethod_var);
		if ((((int32_t)L_885) >= ((int32_t)L_887)))
		{
			goto IL_0da5;
		}
	}
	{
		int32_t L_888 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_888, (int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_il2cpp_TypeInfo_var);
		VectorBuilder_1_tD8F1B353F0B6F840810CBF707711DCE105A62C50 * L_889 = ((Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_StaticFields*)il2cpp_codegen_static_fields_for(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_il2cpp_TypeInfo_var))->get_Build_2();
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_890 = V_1;
		int32_t L_891 = V_0;
		NullCheck(L_889);
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_892;
		L_892 = VectorBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB8B0DD72229D523384C33BBB467BBA92F7036D5B(L_889, L_890, L_891, /*hidden argument*/VectorBuilder_1_SameAs_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB8B0DD72229D523384C33BBB467BBA92F7036D5B_RuntimeMethod_var);
		V_49 = L_892;
		V_7 = 0;
		goto IL_0d9d;
	}

IL_0d86:
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_893 = V_49;
		int32_t L_894 = V_7;
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_895 = V_2;
		int32_t L_896 = V_7;
		NullCheck(L_895);
		float L_897;
		L_897 = Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_inline(L_895, L_896, /*hidden argument*/Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_RuntimeMethod_var);
		NullCheck(L_893);
		Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_inline(L_893, L_894, L_897, /*hidden argument*/Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_RuntimeMethod_var);
		int32_t L_898 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_898, (int32_t)1));
	}

IL_0d9d:
	{
		int32_t L_899 = V_7;
		int32_t L_900 = V_0;
		if ((((int32_t)L_899) < ((int32_t)L_900)))
		{
			goto IL_0d86;
		}
	}
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_901 = V_49;
		V_2 = L_901;
	}

IL_0da5:
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_902 = V_2;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_903 = V_3;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_904 = V_4;
		bool L_905 = ___computeVectors1;
		UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B * L_906 = (UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B *)il2cpp_codegen_object_new(UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B_il2cpp_TypeInfo_var);
		UserSvd__ctor_mEBAAA457B2AE20AD4A6979E422DC06EA27F7C4B1(L_906, L_902, L_903, L_904, L_905, /*hidden argument*/NULL);
		return L_906;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::.ctor(MathNet.Numerics.LinearAlgebra.Vector`1<System.Single>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd__ctor_mEBAAA457B2AE20AD4A6979E422DC06EA27F7C4B1 (UserSvd_t0093E0F933DCE4C5D805278F50C3AB8372DD330B * __this, Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * ___s0, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___u1, Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___vt2, bool ___vectorsComputed3, const RuntimeMethod* method)
{
	{
		Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * L_0 = ___s0;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_1 = ___u1;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_2 = ___vt2;
		bool L_3 = ___vectorsComputed3;
		Svd__ctor_m713F0B2C8DEE6847A8E479DC06E98B5EC02A0B28(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Dsign(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UserSvd_Dsign_mF96FB9296080EDB32843E8C3F42D1FAFB95E5CE1 (float ___z10, float ___z21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___z10;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = fabsf(L_0);
		float L_2 = ___z21;
		float L_3 = ___z21;
		float L_4;
		L_4 = fabsf(L_3);
		return ((float)il2cpp_codegen_multiply((float)L_1, (float)((float)((float)L_2/(float)L_4))));
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Dswap(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_Dswap_mA6A0B8DA52A8F3A6847C3FA7EBBDFA2837612C72 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___columnA2, int32_t ___columnB3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_0 = ___a0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___columnA2;
		NullCheck(L_0);
		float L_3;
		L_3 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_0, L_1, L_2, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		V_1 = L_3;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_4 = ___a0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___columnA2;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_7 = ___a0;
		int32_t L_8 = V_0;
		int32_t L_9 = ___columnB3;
		NullCheck(L_7);
		float L_10;
		L_10 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_7, L_8, L_9, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		NullCheck(L_4);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_4, L_5, L_6, L_10, /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_11 = ___a0;
		int32_t L_12 = V_0;
		int32_t L_13 = ___columnB3;
		float L_14 = V_1;
		NullCheck(L_11);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_11, L_12, L_13, L_14, /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___rowCount1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::DscalColumn(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_DscalColumn_mA30253C1FCCBCB917C326AE06A334F7546BD9A38 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___column2, int32_t ___rowStart3, float ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___rowStart3;
		V_0 = L_0;
		goto IL_001b;
	}

IL_0004:
	{
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___column2;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_4 = ___a0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___column2;
		NullCheck(L_4);
		float L_7;
		L_7 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_4, L_5, L_6, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		float L_8 = ___z4;
		NullCheck(L_1);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_1, L_2, L_3, ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___rowCount1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::DscalVector(System.Single[],System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_DscalVector_m648BE140CB82C14C062BFACF041C50B30F674676 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___start1, float ___z2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___start1;
		V_0 = L_0;
		goto IL_0010;
	}

IL_0004:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___a0;
		int32_t L_2 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___a0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = ___z2;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0010:
	{
		int32_t L_9 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___a0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Drotg(System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_Drotg_m0CF3A3B7A1B1313385A18158260FEB59B3C1B550 (float* ___da0, float* ___db1, float* ___c2, float* ___s3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float* L_0 = ___db1;
		float L_1 = *((float*)L_0);
		V_2 = L_1;
		float* L_2 = ___da0;
		float L_3 = *((float*)L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(L_3);
		V_3 = L_4;
		float* L_5 = ___db1;
		float L_6 = *((float*)L_5);
		float L_7;
		L_7 = fabsf(L_6);
		V_4 = L_7;
		float L_8 = V_3;
		float L_9 = V_4;
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_001c;
		}
	}
	{
		float* L_10 = ___da0;
		float L_11 = *((float*)L_10);
		V_2 = L_11;
	}

IL_001c:
	{
		float L_12 = V_3;
		float L_13 = V_4;
		V_5 = ((float)il2cpp_codegen_add((float)L_12, (float)L_13));
		float L_14 = V_5;
		if ((!(((double)((double)((double)L_14))) == ((double)(0.0)))))
		{
			goto IL_004c;
		}
	}
	{
		float* L_15 = ___c2;
		*((float*)L_15) = (float)(1.0f);
		float* L_16 = ___s3;
		*((float*)L_16) = (float)(0.0f);
		V_0 = (0.0f);
		V_1 = (0.0f);
		goto IL_00b6;
	}

IL_004c:
	{
		float* L_17 = ___da0;
		float L_18 = *((float*)L_17);
		float L_19 = V_5;
		V_6 = ((float)((float)L_18/(float)L_19));
		float* L_20 = ___db1;
		float L_21 = *((float*)L_20);
		float L_22 = V_5;
		V_7 = ((float)((float)L_21/(float)L_22));
		float L_23 = V_5;
		float L_24 = V_6;
		float L_25 = V_6;
		float L_26 = V_7;
		float L_27 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_28;
		L_28 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), (float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_27)))))));
		V_0 = ((float)il2cpp_codegen_multiply((float)L_23, (float)((float)((float)L_28))));
		float L_29 = V_2;
		if ((!(((double)((double)((double)L_29))) < ((double)(0.0)))))
		{
			goto IL_0080;
		}
	}
	{
		float L_30 = V_0;
		V_0 = ((-L_30));
	}

IL_0080:
	{
		float* L_31 = ___c2;
		float* L_32 = ___da0;
		float L_33 = *((float*)L_32);
		float L_34 = V_0;
		*((float*)L_31) = (float)((float)((float)L_33/(float)L_34));
		float* L_35 = ___s3;
		float* L_36 = ___db1;
		float L_37 = *((float*)L_36);
		float L_38 = V_0;
		*((float*)L_35) = (float)((float)((float)L_37/(float)L_38));
		V_1 = (1.0f);
		float L_39 = V_3;
		float L_40 = V_4;
		if ((!(((float)L_39) > ((float)L_40))))
		{
			goto IL_009a;
		}
	}
	{
		float* L_41 = ___s3;
		float L_42 = *((float*)L_41);
		V_1 = L_42;
	}

IL_009a:
	{
		float L_43 = V_4;
		float L_44 = V_3;
		if ((!(((float)L_43) >= ((float)L_44))))
		{
			goto IL_00b6;
		}
	}
	{
		float* L_45 = ___c2;
		float L_46 = *((float*)L_45);
		if ((((double)((double)((double)L_46))) == ((double)(0.0))))
		{
			goto IL_00b6;
		}
	}
	{
		float* L_47 = ___c2;
		float L_48 = *((float*)L_47);
		V_1 = ((float)((float)(1.0f)/(float)L_48));
	}

IL_00b6:
	{
		float* L_49 = ___da0;
		float L_50 = V_0;
		*((float*)L_49) = (float)L_50;
		float* L_51 = ___db1;
		float L_52 = V_1;
		*((float*)L_51) = (float)L_52;
		return;
	}
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Dnrm2Column(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UserSvd_Dnrm2Column_mB49E6474E1031C29CDBE0A2D8772B6D78947A753 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___column2, int32_t ___rowStart3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___rowStart3;
		V_1 = L_0;
		goto IL_0022;
	}

IL_000a:
	{
		float L_1 = V_0;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_2 = ___a0;
		int32_t L_3 = V_1;
		int32_t L_4 = ___column2;
		NullCheck(L_2);
		float L_5;
		L_5 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_2, L_3, L_4, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_6 = ___a0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___column2;
		NullCheck(L_6);
		float L_9;
		L_9 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_6, L_7, L_8, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		V_0 = ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___rowCount1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000a;
		}
	}
	{
		float L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = sqrt(((double)((double)L_13)));
		return ((float)((float)L_14));
	}
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Dnrm2Vector(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UserSvd_Dnrm2Vector_m34DF7DD4D192482E35216FEE40F411A863361DBA (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___rowStart1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___rowStart1;
		V_1 = L_0;
		goto IL_0018;
	}

IL_000a:
	{
		float L_1 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___a0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___a0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0018:
	{
		int32_t L_11 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = ___a0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		float L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = sqrt(((double)((double)L_13)));
		return ((float)((float)L_14));
	}
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Ddot(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UserSvd_Ddot_m8DF45A2D947285486C9ECFB23A2243F72028A955 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___columnA2, int32_t ___columnB3, int32_t ___rowStart4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___rowStart4;
		V_1 = L_0;
		goto IL_0023;
	}

IL_000b:
	{
		float L_1 = V_0;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_2 = ___a0;
		int32_t L_3 = V_1;
		int32_t L_4 = ___columnB3;
		NullCheck(L_2);
		float L_5;
		L_5 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_2, L_3, L_4, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_6 = ___a0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___columnA2;
		NullCheck(L_6);
		float L_9;
		L_9 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_6, L_7, L_8, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		V_0 = ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___rowCount1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		float L_13 = V_0;
		return L_13;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.Factorization.UserSvd::Drot(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Single>,System.Int32,System.Int32,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSvd_Drot_m78FFDD4F83E477473892CF430F9A3DEE7446F1C8 (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * ___a0, int32_t ___rowCount1, int32_t ___columnA2, int32_t ___columnB3, float ___c4, float ___s5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		V_0 = 0;
		goto IL_004a;
	}

IL_0004:
	{
		float L_0 = ___c4;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___columnA2;
		NullCheck(L_1);
		float L_4;
		L_4 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_1, L_2, L_3, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		float L_5 = ___s5;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_6 = ___a0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___columnB3;
		NullCheck(L_6);
		float L_9;
		L_9 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_6, L_7, L_8, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_4)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_9))));
		float L_10 = ___c4;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_11 = ___a0;
		int32_t L_12 = V_0;
		int32_t L_13 = ___columnB3;
		NullCheck(L_11);
		float L_14;
		L_14 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_11, L_12, L_13, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		float L_15 = ___s5;
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_16 = ___a0;
		int32_t L_17 = V_0;
		int32_t L_18 = ___columnA2;
		NullCheck(L_16);
		float L_19;
		L_19 = Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_inline(L_16, L_17, L_18, /*hidden argument*/Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_RuntimeMethod_var);
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_14)), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_19))));
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_20 = ___a0;
		int32_t L_21 = V_0;
		int32_t L_22 = ___columnB3;
		float L_23 = V_2;
		NullCheck(L_20);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_20, L_21, L_22, L_23, /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * L_24 = ___a0;
		int32_t L_25 = V_0;
		int32_t L_26 = ___columnA2;
		float L_27 = V_1;
		NullCheck(L_24);
		Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_inline(L_24, L_25, L_26, L_27, /*hidden argument*/Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_RuntimeMethod_var);
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_29 = V_0;
		int32_t L_30 = ___rowCount1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0004;
		}
	}
	{
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
// System.Void MathNet.Numerics.LinearAlgebra.Complex.Vector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Numerics.Complex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector__ctor_mC3A3153CF9317ACAF6963FF9A133C6DC46D6521B (Vector_t84EE4BAA5EDA2E942AAD609FF75367ADA443BE07 * __this, VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_mD9B3622F27B4C2F9726878D7A20A4DB21AB37F32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorStorage_1_tDD04F2786F2C4A9B9112B1EF70B9703A7BB4024C * L_0 = ___storage0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D_il2cpp_TypeInfo_var);
		Vector_1__ctor_mD9B3622F27B4C2F9726878D7A20A4DB21AB37F32(__this, L_0, /*hidden argument*/Vector_1__ctor_mD9B3622F27B4C2F9726878D7A20A4DB21AB37F32_RuntimeMethod_var);
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
// System.Void MathNet.Numerics.LinearAlgebra.Complex32.Vector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<MathNet.Numerics.Complex32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector__ctor_mCBCC6076C70F313E419DA43C427DC0FF1BDF5425 (Vector_t6DFC94D581E7CF23762737E2B0568804DAE09347 * __this, VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_m6D77CB1F245A3AB32848A64D6B2825335FE61DE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorStorage_1_t2C6E304EC43B02D840C53F952710A09381ACC56C * L_0 = ___storage0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B_il2cpp_TypeInfo_var);
		Vector_1__ctor_m6D77CB1F245A3AB32848A64D6B2825335FE61DE5(__this, L_0, /*hidden argument*/Vector_1__ctor_m6D77CB1F245A3AB32848A64D6B2825335FE61DE5_RuntimeMethod_var);
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
// System.Void MathNet.Numerics.LinearAlgebra.Double.Vector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector__ctor_m82C56E379D06EEC309072B95540197797CF6C25D (Vector_tBD4436AB437CD3DFA0CBED53A472B4B10F222CF4 * __this, VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_mCA8B762CC49EC6905C66863F43EEC8018DBF5B8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_t04BD986700481778192B0CF621635E64D169D13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorStorage_1_tA277E5F16CAEF08D29EFF6321141275420B25F22 * L_0 = ___storage0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t04BD986700481778192B0CF621635E64D169D13C_il2cpp_TypeInfo_var);
		Vector_1__ctor_mCA8B762CC49EC6905C66863F43EEC8018DBF5B8C(__this, L_0, /*hidden argument*/Vector_1__ctor_mCA8B762CC49EC6905C66863F43EEC8018DBF5B8C_RuntimeMethod_var);
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
// System.Void MathNet.Numerics.LinearAlgebra.Single.Vector::.ctor(MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector__ctor_mBAE01FC5D4470C33C8D9AA268D600D7881283FB3 (Vector_tC2B16E18D2F08FAB11EBC3F53BD921019D483A23 * __this, VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_m24B7094461F1152A5BCCDEA4D2FA8F3C685F2E69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_0 = ___storage0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808_il2cpp_TypeInfo_var);
		Vector_1__ctor_m24B7094461F1152A5BCCDEA4D2FA8F3C685F2E69(__this, L_0, /*hidden argument*/Vector_1__ctor_m24B7094461F1152A5BCCDEA4D2FA8F3C685F2E69_RuntimeMethod_var);
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
// System.Numerics.Complex MathNet.Numerics.LinearAlgebra.Complex.VectorBuilder::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  VectorBuilder_get_Zero_mCA05F129B73321F6D2B4E788839ED905162791BC (VectorBuilder_t262221E67253468CF11E5EF5BBE7CBBE3EAF3682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_0 = ((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var))->get_Zero_0();
		return L_0;
	}
}
// System.Numerics.Complex MathNet.Numerics.LinearAlgebra.Complex.VectorBuilder::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  VectorBuilder_get_One_mFEAD4C1D2B276E03BA5423FDDE4BB3517765AC43 (VectorBuilder_t262221E67253468CF11E5EF5BBE7CBBE3EAF3682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_0 = ((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var))->get_One_1();
		return L_0;
	}
}
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Numerics.Complex> MathNet.Numerics.LinearAlgebra.Complex.VectorBuilder::Dense(MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Numerics.Complex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D * VectorBuilder_Dense_m81DD5743D8A9A2FB272BBDAEE4B6DF15F682347A (VectorBuilder_t262221E67253468CF11E5EF5BBE7CBBE3EAF3682 * __this, DenseVectorStorage_1_tFEFBCD463D1D0F92D92410D51FAAB6EFBDA4532E * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DenseVectorStorage_1_tFEFBCD463D1D0F92D92410D51FAAB6EFBDA4532E * L_0 = ___storage0;
		DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861 * L_1 = (DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861 *)il2cpp_codegen_object_new(DenseVector_t400355CA72FD4F4D59D24460F51C242F4C4B2861_il2cpp_TypeInfo_var);
		DenseVector__ctor_mD221D35E15A02744D3F6A7FC70EA0D452E526421(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Numerics.Complex> MathNet.Numerics.LinearAlgebra.Complex.VectorBuilder::Sparse(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Numerics.Complex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t7EEFC981EEE2B91F919802AEB6B0734D08B5574D * VectorBuilder_Sparse_mE014E9A859F870130E69B584A1414C7F78E595D6 (VectorBuilder_t262221E67253468CF11E5EF5BBE7CBBE3EAF3682 * __this, SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparseVector_tADDFA71354E35713852E7DB76ED9DBA9D9E20AD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseVectorStorage_1_t3E4E4D209BE13DA83B2834BA61F883B1A5CE9828 * L_0 = ___storage0;
		SparseVector_tADDFA71354E35713852E7DB76ED9DBA9D9E20AD6 * L_1 = (SparseVector_tADDFA71354E35713852E7DB76ED9DBA9D9E20AD6 *)il2cpp_codegen_object_new(SparseVector_tADDFA71354E35713852E7DB76ED9DBA9D9E20AD6_il2cpp_TypeInfo_var);
		SparseVector__ctor_mE23E0A559BE8CA5B2E9D766A5136E5493B5666D2(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Complex.VectorBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorBuilder__ctor_m5B38EB627AE9D4933C3866D0CAB33DB5B0DCF2DE (VectorBuilder_t262221E67253468CF11E5EF5BBE7CBBE3EAF3682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorBuilder_1__ctor_mE82A7CC3BE0D90168D2C047BD0E69808EF813B7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorBuilder_1__ctor_mE82A7CC3BE0D90168D2C047BD0E69808EF813B7A(__this, /*hidden argument*/VectorBuilder_1__ctor_mE82A7CC3BE0D90168D2C047BD0E69808EF813B7A_RuntimeMethod_var);
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
// MathNet.Numerics.Complex32 MathNet.Numerics.LinearAlgebra.Complex32.VectorBuilder::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  VectorBuilder_get_Zero_mE353D9AD43A0782A66E92F031102392CD8BA2E90 (VectorBuilder_tB5B8F36B1891DDC21BFC2835929362AA85BC5760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_0 = ((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields*)il2cpp_codegen_static_fields_for(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var))->get_Zero_2();
		return L_0;
	}
}
// MathNet.Numerics.Complex32 MathNet.Numerics.LinearAlgebra.Complex32.VectorBuilder::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  VectorBuilder_get_One_m7CCBF162FCE7BE7FE489B6B52BE7696A889DE9F9 (VectorBuilder_tB5B8F36B1891DDC21BFC2835929362AA85BC5760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_0 = ((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields*)il2cpp_codegen_static_fields_for(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var))->get_One_3();
		return L_0;
	}
}
// MathNet.Numerics.LinearAlgebra.Vector`1<MathNet.Numerics.Complex32> MathNet.Numerics.LinearAlgebra.Complex32.VectorBuilder::Dense(MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<MathNet.Numerics.Complex32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B * VectorBuilder_Dense_mE3A7B366162ED415F8CEC033B93D22794608299E (VectorBuilder_tB5B8F36B1891DDC21BFC2835929362AA85BC5760 * __this, DenseVectorStorage_1_t89C60D717FC710E192C2A92D3AA98DE14B709563 * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DenseVectorStorage_1_t89C60D717FC710E192C2A92D3AA98DE14B709563 * L_0 = ___storage0;
		DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61 * L_1 = (DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61 *)il2cpp_codegen_object_new(DenseVector_t3F7CA8C0F1229AFFE2A025EFC42C1A68ADA87C61_il2cpp_TypeInfo_var);
		DenseVector__ctor_mAE479FADF49032DBE94EBBED36E20276CFBA8F5A(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// MathNet.Numerics.LinearAlgebra.Vector`1<MathNet.Numerics.Complex32> MathNet.Numerics.LinearAlgebra.Complex32.VectorBuilder::Sparse(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<MathNet.Numerics.Complex32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t06C38DF32D95CCAF2A090B3C7F323B4DAF654A6B * VectorBuilder_Sparse_mA688B1CC04B26B42EF3C5178DCF870A91E6EF026 (VectorBuilder_tB5B8F36B1891DDC21BFC2835929362AA85BC5760 * __this, SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparseVector_tA82AA2D97D9C24EDDCB39F1A127D026ABC144884_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseVectorStorage_1_tB54F41AAF7DDE4A560FE3F872385341D1E238942 * L_0 = ___storage0;
		SparseVector_tA82AA2D97D9C24EDDCB39F1A127D026ABC144884 * L_1 = (SparseVector_tA82AA2D97D9C24EDDCB39F1A127D026ABC144884 *)il2cpp_codegen_object_new(SparseVector_tA82AA2D97D9C24EDDCB39F1A127D026ABC144884_il2cpp_TypeInfo_var);
		SparseVector__ctor_m9C24627A931CC3FDDC3FEF68FD7A4BB77ED9539F(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Complex32.VectorBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorBuilder__ctor_m95264D45D1245981974AAD8BA19A59BE58792308 (VectorBuilder_tB5B8F36B1891DDC21BFC2835929362AA85BC5760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorBuilder_1__ctor_m907E0AAC305E7E9D046B5CCB341AA2277DF482F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorBuilder_1__ctor_m907E0AAC305E7E9D046B5CCB341AA2277DF482F7(__this, /*hidden argument*/VectorBuilder_1__ctor_m907E0AAC305E7E9D046B5CCB341AA2277DF482F7_RuntimeMethod_var);
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
// System.Double MathNet.Numerics.LinearAlgebra.Double.VectorBuilder::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VectorBuilder_get_Zero_m9EAAAD41DFD4022852D621D16AEE2C8AB8DE7B36 (VectorBuilder_t27F544C8F272F10718BA58EB8B90D61FDFF837B4 * __this, const RuntimeMethod* method)
{
	{
		return (0.0);
	}
}
// System.Double MathNet.Numerics.LinearAlgebra.Double.VectorBuilder::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VectorBuilder_get_One_m342670996C9C16347404A33772BDC02782150190 (VectorBuilder_t27F544C8F272F10718BA58EB8B90D61FDFF837B4 * __this, const RuntimeMethod* method)
{
	{
		return (1.0);
	}
}
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Double> MathNet.Numerics.LinearAlgebra.Double.VectorBuilder::Dense(MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t04BD986700481778192B0CF621635E64D169D13C * VectorBuilder_Dense_mE73E586455EAEDFA9A90AC55FC42AA6308E6A7BD (VectorBuilder_t27F544C8F272F10718BA58EB8B90D61FDFF837B4 * __this, DenseVectorStorage_1_tA59E04C952863313AF87B367F1EFCB0E370458A2 * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DenseVectorStorage_1_tA59E04C952863313AF87B367F1EFCB0E370458A2 * L_0 = ___storage0;
		DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719 * L_1 = (DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719 *)il2cpp_codegen_object_new(DenseVector_t0B0B3F92F4E529A76F022A1A1747BB915AFAF719_il2cpp_TypeInfo_var);
		DenseVector__ctor_mC554C661551BB9E648FF55F77B16E70E240107B5(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Double> MathNet.Numerics.LinearAlgebra.Double.VectorBuilder::Sparse(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t04BD986700481778192B0CF621635E64D169D13C * VectorBuilder_Sparse_m7F7A76522353EE05B51C08543E8F446A4B776A0D (VectorBuilder_t27F544C8F272F10718BA58EB8B90D61FDFF837B4 * __this, SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparseVector_t9702CC2012FE9D6DEE89F1C3AD8943BAB98FB8D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseVectorStorage_1_tF77818762314F3FACAE652B4DB9BD68C8AD9F70A * L_0 = ___storage0;
		SparseVector_t9702CC2012FE9D6DEE89F1C3AD8943BAB98FB8D7 * L_1 = (SparseVector_t9702CC2012FE9D6DEE89F1C3AD8943BAB98FB8D7 *)il2cpp_codegen_object_new(SparseVector_t9702CC2012FE9D6DEE89F1C3AD8943BAB98FB8D7_il2cpp_TypeInfo_var);
		SparseVector__ctor_m27CC8EF9C4A1211B9813CDC4E5FABB9D6AF0C085(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Double.VectorBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorBuilder__ctor_mC53D5AB372B453A92B01ABE3AE487EF4668206B7 (VectorBuilder_t27F544C8F272F10718BA58EB8B90D61FDFF837B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorBuilder_1__ctor_mC499D888CF00D8AAD275C438F97D5D3BAD82EAED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorBuilder_1__ctor_mC499D888CF00D8AAD275C438F97D5D3BAD82EAED(__this, /*hidden argument*/VectorBuilder_1__ctor_mC499D888CF00D8AAD275C438F97D5D3BAD82EAED_RuntimeMethod_var);
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
// System.Single MathNet.Numerics.LinearAlgebra.Single.VectorBuilder::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VectorBuilder_get_Zero_mA687E6A1769924DE7D22855DAAC28E7C8ABE9C50 (VectorBuilder_tBD84D67FCAE41E7AC3F9063986B69F3A4310C560 * __this, const RuntimeMethod* method)
{
	{
		return (0.0f);
	}
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.VectorBuilder::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VectorBuilder_get_One_mA4C32101A9115052A6A3B76F0B9740CEE14EFCDE (VectorBuilder_tBD84D67FCAE41E7AC3F9063986B69F3A4310C560 * __this, const RuntimeMethod* method)
{
	{
		return (1.0f);
	}
}
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Single> MathNet.Numerics.LinearAlgebra.Single.VectorBuilder::Dense(MathNet.Numerics.LinearAlgebra.Storage.DenseVectorStorage`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * VectorBuilder_Dense_m4D4C9BAA8547775B5B0844FDF0841974D65FA0F3 (VectorBuilder_tBD84D67FCAE41E7AC3F9063986B69F3A4310C560 * __this, DenseVectorStorage_1_t8A745064A670B3C8239E6D74F783AA432BBA107A * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DenseVectorStorage_1_t8A745064A670B3C8239E6D74F783AA432BBA107A * L_0 = ___storage0;
		DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4 * L_1 = (DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4 *)il2cpp_codegen_object_new(DenseVector_t4F1E2A53EA5AFB1A927A0AFE8F945D6FCA97D9B4_il2cpp_TypeInfo_var);
		DenseVector__ctor_m5EC9BC524925E0DDDA0514D913A4BE5BD89CA3ED(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Single> MathNet.Numerics.LinearAlgebra.Single.VectorBuilder::Sparse(MathNet.Numerics.LinearAlgebra.Storage.SparseVectorStorage`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * VectorBuilder_Sparse_m8EA2FC35F96953EBFFFA8B940BDAFB6BD066541B (VectorBuilder_tBD84D67FCAE41E7AC3F9063986B69F3A4310C560 * __this, SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * ___storage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparseVector_t64BD0A0497E347BF9DB9CD3757AA84D57000AE9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SparseVectorStorage_1_tD3886E7B23C68AECB071DD13B6B0B3733EDDDE3D * L_0 = ___storage0;
		SparseVector_t64BD0A0497E347BF9DB9CD3757AA84D57000AE9E * L_1 = (SparseVector_t64BD0A0497E347BF9DB9CD3757AA84D57000AE9E *)il2cpp_codegen_object_new(SparseVector_t64BD0A0497E347BF9DB9CD3757AA84D57000AE9E_il2cpp_TypeInfo_var);
		SparseVector__ctor_mFDB30BE6C4A5980F8D0655DC2E9E22E7D0FED71B(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.VectorBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorBuilder__ctor_m779B1591692676A73196EBA9D4A2B0F32AD8A9D4 (VectorBuilder_tBD84D67FCAE41E7AC3F9063986B69F3A4310C560 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorBuilder_1__ctor_m5B68D5011AD6688AAAAA5CF784DFE4CF657E30ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VectorBuilder_1__ctor_m5B68D5011AD6688AAAAA5CF784DFE4CF657E30ED(__this, /*hidden argument*/VectorBuilder_1__ctor_m5B68D5011AD6688AAAAA5CF784DFE4CF657E30ED_RuntimeMethod_var);
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
// System.Void MathNet.Numerics.Threading.CommonParallel/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m94B9E5A36605566C80AEBBA5B116F3384CBD0EA9 (U3CU3Ec__DisplayClass2_0_tD71DDD18BA374CDF471F0C79150D68FFD786200E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.Threading.CommonParallel/<>c__DisplayClass2_0::<For>b__0(System.Tuple`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CForU3Eb__0_mE84D12BE7AFAB60BDFF495D274FD866726DF5CB0 (U3CU3Ec__DisplayClass2_0_tD71DDD18BA374CDF471F0C79150D68FFD786200E * __this, Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * ___range0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mDD80BAE31CBB45588E597B8480586D0505C3CA9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m5D6F7E4C92BBD480D813546956284E11D1809F85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * L_0 = __this->get_body_0();
		Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * L_1 = ___range0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Tuple_2_get_Item1_mDD80BAE31CBB45588E597B8480586D0505C3CA9E_inline(L_1, /*hidden argument*/Tuple_2_get_Item1_mDD80BAE31CBB45588E597B8480586D0505C3CA9E_RuntimeMethod_var);
		Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * L_3 = ___range0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Tuple_2_get_Item2_m5D6F7E4C92BBD480D813546956284E11D1809F85_inline(L_3, /*hidden argument*/Tuple_2_get_Item2_m5D6F7E4C92BBD480D813546956284E11D1809F85_RuntimeMethod_var);
		NullCheck(L_0);
		Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670(L_0, L_2, L_4, /*hidden argument*/Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var);
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
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m3B198C07C8A9C9C831099F8977E32BCA50F623C3 (U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass10_0::<MatrixMultiply>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CMatrixMultiplyU3Eb__0_m39C00164CBB0E4FCCB084092F5E1FAFB6B0EB342 (U3CU3Ec__DisplayClass10_0_t83686FBF9BECD0F66CD2193A6645B5016FFEA798 * __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* V_3 = NULL;
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_columnsX_0();
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_1 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)SZArrayNew(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___u0;
		V_1 = L_2;
		goto IL_00b4;
	}

IL_0013:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = __this->get_rowsX_1();
		int32_t L_5 = __this->get_columnsX_0();
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_6 = __this->get_x_2();
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_7 = V_0;
		ManagedLinearAlgebraProvider_GetRow_m5B623C7702D8E3F7B3C2FA9308F60285AC495301(((int32_t)111), L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_00a7;
	}

IL_0032:
	{
		ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248* L_8 = __this->get_columnDataB_3();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_11 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_12 = ((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var))->get_Zero_0();
		V_4 = L_12;
		V_5 = 0;
		goto IL_006b;
	}

IL_0047:
	{
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_13 = V_4;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_14 = V_0;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_18 = V_3;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_22;
		L_22 = Complex_op_Multiply_mEEC05B318FACC0395EFDEA156316AC522177B8F8(L_17, L_21, /*hidden argument*/NULL);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_23;
		L_23 = Complex_op_Addition_m0B4E0A93A89F995EE9DD6F5F3EA69E54B3B99F32(L_13, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_5;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_27 = __this->get_result_4();
		int32_t L_28 = V_2;
		int32_t L_29 = __this->get_rowsX_1();
		int32_t L_30 = V_1;
		NullCheck(L_27);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * L_31 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)L_29)), (int32_t)L_30)))));
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_32 = (*(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_33 = ((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var))->get_One_1();
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_34 = V_4;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_35;
		L_35 = Complex_op_Multiply_mEEC05B318FACC0395EFDEA156316AC522177B8F8(L_33, L_34, /*hidden argument*/NULL);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_36;
		L_36 = Complex_op_Addition_m0B4E0A93A89F995EE9DD6F5F3EA69E54B3B99F32(L_32, L_35, /*hidden argument*/NULL);
		*(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)L_31 = L_36;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = __this->get_columnsY_5();
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00b4:
	{
		int32_t L_41 = V_1;
		int32_t L_42 = ___v1;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0013;
		}
	}
	{
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
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mBC9A0905535C99CD575CD5161C4B13855F425B9A (U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass11_0::<MatrixMultiplyWithUpdate>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CMatrixMultiplyWithUpdateU3Eb__0_m85273485C2E95F214C995294A9EBEB69670B392E (U3CU3Ec__DisplayClass11_0_tB1B99ABFA2E005BF2BE15B62DF2E0CE3E4DA943A * __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* V_3 = NULL;
	Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_columnsA_0();
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_1 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)SZArrayNew(ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___u0;
		V_1 = L_2;
		goto IL_00b9;
	}

IL_0013:
	{
		int32_t L_3 = __this->get_transposeA_1();
		int32_t L_4 = V_1;
		int32_t L_5 = __this->get_rowsA_2();
		int32_t L_6 = __this->get_columnsA_0();
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_7 = __this->get_a_3();
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_8 = V_0;
		ManagedLinearAlgebraProvider_GetRow_m5B623C7702D8E3F7B3C2FA9308F60285AC495301(L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_00ac;
	}

IL_0036:
	{
		ComplexU5BU5DU5BU5D_t1ED125620F26B1742D91D807E2A32BEC01548248* L_9 = __this->get_columnDataB_4();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_12 = (ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5*)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_13 = ((Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var))->get_Zero_0();
		V_4 = L_13;
		V_5 = 0;
		goto IL_006f;
	}

IL_004b:
	{
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_14 = V_4;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_15 = V_0;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_19 = V_3;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_23;
		L_23 = Complex_op_Multiply_mEEC05B318FACC0395EFDEA156316AC522177B8F8(L_18, L_22, /*hidden argument*/NULL);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_24;
		L_24 = Complex_op_Addition_m0B4E0A93A89F995EE9DD6F5F3EA69E54B3B99F32(L_14, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_26 = V_5;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_28 = __this->get_c_5();
		int32_t L_29 = V_2;
		int32_t L_30 = __this->get_rowsA_2();
		int32_t L_31 = V_1;
		NullCheck(L_28);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C * L_32 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)L_30)), (int32_t)L_31)))));
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_33 = (*(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)L_32);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_34 = __this->get_alpha_6();
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_35 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_36;
		L_36 = Complex_op_Multiply_mEEC05B318FACC0395EFDEA156316AC522177B8F8(L_34, L_35, /*hidden argument*/NULL);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_37;
		L_37 = Complex_op_Addition_m0B4E0A93A89F995EE9DD6F5F3EA69E54B3B99F32(L_33, L_36, /*hidden argument*/NULL);
		*(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C *)L_32 = L_37;
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00ac:
	{
		int32_t L_39 = V_2;
		int32_t L_40 = __this->get_columnsB_7();
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00b9:
	{
		int32_t L_42 = V_1;
		int32_t L_43 = ___v1;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0013;
		}
	}
	{
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
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass132_0__ctor_mEEB034D903DDA7FE7BA1436CECFFCA8B90E29EC4 (U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass132_0::<MatrixMultiply>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass132_0_U3CMatrixMultiplyU3Eb__0_mFD2550D9F6C5DD95394083AE255027E2C4C7F81B (U3CU3Ec__DisplayClass132_0_t38D98323D60DAFC5A2DE4DF81C4A60C4DAF43307 * __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_3 = NULL;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_columnsX_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___u0;
		V_1 = L_2;
		goto IL_0094;
	}

IL_0013:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = __this->get_rowsX_1();
		int32_t L_5 = __this->get_columnsX_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_x_2();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = V_0;
		ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE(((int32_t)111), L_3, L_4, L_5, L_6, L_7, /*hidden argument*/ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE_RuntimeMethod_var);
		V_2 = 0;
		goto IL_0087;
	}

IL_0032:
	{
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_8 = __this->get_columnDataB_3();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		V_4 = (0.0f);
		V_5 = 0;
		goto IL_005b;
	}

IL_0047:
	{
		float L_12 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = V_0;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		float L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = ((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_20))));
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_22 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = __this->get_result_4();
		int32_t L_25 = V_2;
		int32_t L_26 = __this->get_rowsX_1();
		int32_t L_27 = V_1;
		NullCheck(L_24);
		float* L_28 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26)), (int32_t)L_27)))));
		float L_29 = *((float*)L_28);
		float L_30 = V_4;
		*((float*)L_28) = (float)((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_30))));
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0087:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = __this->get_columnsY_5();
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0094:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = ___v1;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0013;
		}
	}
	{
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
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass133_0__ctor_mDAE8D9519099A225F0416828022E115308991A32 (U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass133_0::<MatrixMultiplyWithUpdate>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass133_0_U3CMatrixMultiplyWithUpdateU3Eb__0_mB29666162C60D75A719810F9C0D96F0D5DBE9954 (U3CU3Ec__DisplayClass133_0_t7986085071BBC49C72BA6B1C2103E1DE2C50CDCF * __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_3 = NULL;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_columnsA_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___u0;
		V_1 = L_2;
		goto IL_0099;
	}

IL_0013:
	{
		int32_t L_3 = __this->get_transposeA_1();
		int32_t L_4 = V_1;
		int32_t L_5 = __this->get_rowsA_2();
		int32_t L_6 = __this->get_columnsA_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = __this->get_a_3();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = V_0;
		ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE(L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/ManagedLinearAlgebraProvider_GetRow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3A2033E070A73F6820BCE513E3C4E0D605DEA5DE_RuntimeMethod_var);
		V_2 = 0;
		goto IL_008c;
	}

IL_0036:
	{
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_9 = __this->get_columnDataB_4();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		V_4 = (0.0f);
		V_5 = 0;
		goto IL_005f;
	}

IL_004b:
	{
		float L_13 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = V_0;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = V_3;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_21))));
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_23 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = __this->get_c_5();
		int32_t L_26 = V_2;
		int32_t L_27 = __this->get_rowsA_2();
		int32_t L_28 = V_1;
		NullCheck(L_25);
		float* L_29 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)L_27)), (int32_t)L_28)))));
		float L_30 = *((float*)L_29);
		float L_31 = __this->get_alpha_6();
		float L_32 = V_4;
		*((float*)L_29) = (float)((float)il2cpp_codegen_add((float)L_30, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_32))));
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_34 = V_2;
		int32_t L_35 = __this->get_columnsB_7();
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_37 = V_1;
		int32_t L_38 = ___v1;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0013;
		}
	}
	{
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
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m004B0CCF767897FAE40EAE4E0D86DB75B7D4A53F (U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass49_0::<MatrixMultiply>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0_U3CMatrixMultiplyU3Eb__0_mE3A31AB5A0E651B65EC80C30C021640448093260 (U3CU3Ec__DisplayClass49_0_t083F1D532C7C5F6EE0B90F8CD1520E522DC07626 * __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* V_3 = NULL;
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_columnsX_0();
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_1 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)SZArrayNew(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___u0;
		V_1 = L_2;
		goto IL_00b4;
	}

IL_0013:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = __this->get_rowsX_1();
		int32_t L_5 = __this->get_columnsX_0();
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_6 = __this->get_x_2();
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_7 = V_0;
		ManagedLinearAlgebraProvider_GetRow_m47099E836AFD5AFB03C2A2BA3072B9ADFDA0A044(((int32_t)111), L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_00a7;
	}

IL_0032:
	{
		Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82* L_8 = __this->get_columnDataB_3();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_11 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_12 = ((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields*)il2cpp_codegen_static_fields_for(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var))->get_Zero_2();
		V_4 = L_12;
		V_5 = 0;
		goto IL_006b;
	}

IL_0047:
	{
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_13 = V_4;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_14 = V_0;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_18 = V_3;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_22;
		L_22 = Complex32_op_Multiply_m2D153B75BD6A9A7B702397FCE978513631322C41(L_17, L_21, /*hidden argument*/NULL);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_23;
		L_23 = Complex32_op_Addition_m6FCC7BB8C473FEFA0893D9CC26101EBCEAC2C9E0(L_13, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_5;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_27 = __this->get_result_4();
		int32_t L_28 = V_2;
		int32_t L_29 = __this->get_rowsX_1();
		int32_t L_30 = V_1;
		NullCheck(L_27);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * L_31 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)L_29)), (int32_t)L_30)))));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_32 = (*(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_33 = ((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields*)il2cpp_codegen_static_fields_for(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var))->get_One_3();
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_34 = V_4;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_35;
		L_35 = Complex32_op_Multiply_m2D153B75BD6A9A7B702397FCE978513631322C41(L_33, L_34, /*hidden argument*/NULL);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_36;
		L_36 = Complex32_op_Addition_m6FCC7BB8C473FEFA0893D9CC26101EBCEAC2C9E0(L_32, L_35, /*hidden argument*/NULL);
		*(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)L_31 = L_36;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = __this->get_columnsY_5();
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00b4:
	{
		int32_t L_41 = V_1;
		int32_t L_42 = ___v1;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0013;
		}
	}
	{
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
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_mBE3D4CABA0B1D5D3AC55768F19A0DEE702BF9684 (U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass50_0::<MatrixMultiplyWithUpdate>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0_U3CMatrixMultiplyWithUpdateU3Eb__0_m01584CA6F2B25E35D68FEED0B40D448CEA996696 (U3CU3Ec__DisplayClass50_0_t5D43ACDF9B00A61DC9D3C1E4C6E60E21025C79BF * __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* V_3 = NULL;
	Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_columnsA_0();
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_1 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)SZArrayNew(Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___u0;
		V_1 = L_2;
		goto IL_00b9;
	}

IL_0013:
	{
		int32_t L_3 = __this->get_transposeA_1();
		int32_t L_4 = V_1;
		int32_t L_5 = __this->get_rowsA_2();
		int32_t L_6 = __this->get_columnsA_0();
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_7 = __this->get_a_3();
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_8 = V_0;
		ManagedLinearAlgebraProvider_GetRow_m47099E836AFD5AFB03C2A2BA3072B9ADFDA0A044(L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_00ac;
	}

IL_0036:
	{
		Complex32U5BU5DU5BU5D_t81ED40861D35192D51D7709F1858D664794BBC82* L_9 = __this->get_columnDataB_4();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_12 = (Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9*)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_13 = ((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_StaticFields*)il2cpp_codegen_static_fields_for(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var))->get_Zero_2();
		V_4 = L_13;
		V_5 = 0;
		goto IL_006f;
	}

IL_004b:
	{
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_14 = V_4;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_15 = V_0;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_19 = V_3;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_23;
		L_23 = Complex32_op_Multiply_m2D153B75BD6A9A7B702397FCE978513631322C41(L_18, L_22, /*hidden argument*/NULL);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_24;
		L_24 = Complex32_op_Addition_m6FCC7BB8C473FEFA0893D9CC26101EBCEAC2C9E0(L_14, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_26 = V_5;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_28 = __this->get_c_5();
		int32_t L_29 = V_2;
		int32_t L_30 = __this->get_rowsA_2();
		int32_t L_31 = V_1;
		NullCheck(L_28);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 * L_32 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)L_30)), (int32_t)L_31)))));
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_33 = (*(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)L_32);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_34 = __this->get_alpha_6();
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_35 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_36;
		L_36 = Complex32_op_Multiply_m2D153B75BD6A9A7B702397FCE978513631322C41(L_34, L_35, /*hidden argument*/NULL);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_37;
		L_37 = Complex32_op_Addition_m6FCC7BB8C473FEFA0893D9CC26101EBCEAC2C9E0(L_33, L_36, /*hidden argument*/NULL);
		*(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)L_32 = L_37;
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00ac:
	{
		int32_t L_39 = V_2;
		int32_t L_40 = __this->get_columnsB_7();
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00b9:
	{
		int32_t L_42 = V_1;
		int32_t L_43 = ___v1;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0013;
		}
	}
	{
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
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass94_0__ctor_mA97BCF0355298F727DD9EDE89F30F2E9E4797881 (U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass94_0::<MatrixMultiply>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass94_0_U3CMatrixMultiplyU3Eb__0_mCE28DF3AADB828EAE1CBD448FD86BC1443247D25 (U3CU3Ec__DisplayClass94_0_tC7A0CF6D036D46B3DFA1DA809B2CB53D6C8DD7D6 * __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_3 = NULL;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_columnsX_0();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___u0;
		V_1 = L_2;
		goto IL_009c;
	}

IL_0013:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = __this->get_rowsX_1();
		int32_t L_5 = __this->get_columnsX_0();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_6 = __this->get_x_2();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = V_0;
		ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B(((int32_t)111), L_3, L_4, L_5, L_6, L_7, /*hidden argument*/ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B_RuntimeMethod_var);
		V_2 = 0;
		goto IL_008f;
	}

IL_0032:
	{
		DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* L_8 = __this->get_columnDataB_3();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_11 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		V_4 = (0.0);
		V_5 = 0;
		goto IL_005f;
	}

IL_004b:
	{
		double L_12 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_13 = V_0;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		double L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		double L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = ((double)il2cpp_codegen_add((double)L_12, (double)((double)il2cpp_codegen_multiply((double)L_16, (double)L_20))));
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_22 = V_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = __this->get_result_4();
		int32_t L_25 = V_2;
		int32_t L_26 = __this->get_rowsX_1();
		int32_t L_27 = V_1;
		NullCheck(L_24);
		double* L_28 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26)), (int32_t)L_27)))));
		double L_29 = *((double*)L_28);
		double L_30 = V_4;
		*((double*)L_28) = (double)((double)il2cpp_codegen_add((double)L_29, (double)((double)il2cpp_codegen_multiply((double)(1.0), (double)L_30))));
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_008f:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = __this->get_columnsY_5();
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_009c:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = ___v1;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0013;
		}
	}
	{
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
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass95_0__ctor_m32F0F975BD6BB3D623CC6C61E5EB08970AFAB17E (U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MathNet.Numerics.Providers.LinearAlgebra.Managed.ManagedLinearAlgebraProvider/<>c__DisplayClass95_0::<MatrixMultiplyWithUpdate>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass95_0_U3CMatrixMultiplyWithUpdateU3Eb__0_mF930BFA9C5EB8D3C4BD5CF3162C7B519BF26A85E (U3CU3Ec__DisplayClass95_0_t2264099E0A59CC094FB9D16979006D97D16D580F * __this, int32_t ___u0, int32_t ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_3 = NULL;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_columnsA_0();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___u0;
		V_1 = L_2;
		goto IL_009d;
	}

IL_0013:
	{
		int32_t L_3 = __this->get_transposeA_1();
		int32_t L_4 = V_1;
		int32_t L_5 = __this->get_rowsA_2();
		int32_t L_6 = __this->get_columnsA_0();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = __this->get_a_3();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_8 = V_0;
		ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B(L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/ManagedLinearAlgebraProvider_GetRow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m87BE43CCB5C6657C9338C0C082BAB4D1A54FB18B_RuntimeMethod_var);
		V_2 = 0;
		goto IL_0090;
	}

IL_0036:
	{
		DoubleU5BU5DU5BU5D_tEB66623FAD79AC58571D3114151A24977353535D* L_9 = __this->get_columnDataB_4();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_12 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		V_4 = (0.0);
		V_5 = 0;
		goto IL_0063;
	}

IL_004f:
	{
		double L_13 = V_4;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_14 = V_0;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		double L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_18 = V_3;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		double L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((double)il2cpp_codegen_add((double)L_13, (double)((double)il2cpp_codegen_multiply((double)L_17, (double)L_21))));
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_23 = V_5;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_004f;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_25 = __this->get_c_5();
		int32_t L_26 = V_2;
		int32_t L_27 = __this->get_rowsA_2();
		int32_t L_28 = V_1;
		NullCheck(L_25);
		double* L_29 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)L_27)), (int32_t)L_28)))));
		double L_30 = *((double*)L_29);
		double L_31 = __this->get_alpha_6();
		double L_32 = V_4;
		*((double*)L_29) = (double)((double)il2cpp_codegen_add((double)L_30, (double)((double)il2cpp_codegen_multiply((double)L_31, (double)L_32))));
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0090:
	{
		int32_t L_34 = V_2;
		int32_t L_35 = __this->get_columnsB_7();
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_009d:
	{
		int32_t L_37 = V_1;
		int32_t L_38 = ___v1;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0013;
		}
	}
	{
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
// System.Void MathNet.Numerics.LinearAlgebra.Complex.Matrix/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6EC68BE236C96C89C39F9DF0F453CD3EAC53A2CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E * L_0 = (U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E *)il2cpp_codegen_object_new(U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDE1FA4E82DC8502FC9B4D558144B28EC8AE7139F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Complex.Matrix/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDE1FA4E82DC8502FC9B4D558144B28EC8AE7139F (U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Numerics.Complex MathNet.Numerics.LinearAlgebra.Complex.Matrix/<>c::<ConjugateTranspose>b__2_0(System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  U3CU3Ec_U3CConjugateTransposeU3Eb__2_0_m73F1B679FD252375049F3C85C51CDEBC756DC637 (U3CU3Ec_t88DD8A58DFA74212467FC83AA271963947DB065E * __this, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___c0, const RuntimeMethod* method)
{
	{
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_0 = ___c0;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_1;
		L_1 = ComplexExtensions_Conjugate_m023E3F145E8E5C8F9F4C619493DC4A2DFA2A79DA(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void MathNet.Numerics.LinearAlgebra.Complex32.Matrix/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4D1543973D9E58139E4CE11A0B4C2096BEA2832D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D * L_0 = (U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D *)il2cpp_codegen_object_new(U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m10669F396CD60B1C85A301AB5A55F3FEBC5CB0DA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Complex32.Matrix/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10669F396CD60B1C85A301AB5A55F3FEBC5CB0DA (U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// MathNet.Numerics.Complex32 MathNet.Numerics.LinearAlgebra.Complex32.Matrix/<>c::<ConjugateTranspose>b__2_0(MathNet.Numerics.Complex32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  U3CU3Ec_U3CConjugateTransposeU3Eb__2_0_m5C91E820B51EB4F4BE29053EFC948D9AAF0098DD (U3CU3Ec_tF7C8F4EF3D64ADE7E91E7DB04D79F9911688570D * __this, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___c0, const RuntimeMethod* method)
{
	{
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_0;
		L_0 = Complex32_Conjugate_m0A0C7CF0D8AFCD96DB48F633FE2A166C2C77B689((Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894 *)(&___c0), /*hidden argument*/NULL);
		return L_0;
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
// System.Void MathNet.Numerics.LinearAlgebra.Double.Matrix/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFDC29342EDF7E2A1211044042A64A3731201F8B1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026 * L_0 = (U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026 *)il2cpp_codegen_object_new(U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4401F226FF440AF5379C9ACB438D9E92B9A27E30(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Double.Matrix/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4401F226FF440AF5379C9ACB438D9E92B9A27E30 (U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Double MathNet.Numerics.LinearAlgebra.Double.Matrix/<>c::<DoAdd>b__7_0(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3CDoAddU3Eb__7_0_m6D160EA9D861E057484A6BD6DE95ABCF8BD6FD62 (U3CU3Ec_t90D03124E759E9E97F7F5FCED0D7B617CD289026 * __this, double ___x0, double ___y1, const RuntimeMethod* method)
{
	{
		double L_0 = ___x0;
		double L_1 = ___y1;
		return ((double)il2cpp_codegen_add((double)L_0, (double)L_1));
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
// System.Void MathNet.Numerics.LinearAlgebra.Single.Matrix/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB6E44ADB2683FF74D7334C7FEE9F47EFD40F302C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C * L_0 = (U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C *)il2cpp_codegen_object_new(U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD21970B5A64777AA49BB2C74155A1215D659C3D7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MathNet.Numerics.LinearAlgebra.Single.Matrix/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD21970B5A64777AA49BB2C74155A1215D659C3D7 (U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.Matrix/<>c::<DoAdd>b__7_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CDoAddU3Eb__7_0_m6D8D3649C5CBD5B3E73E6F2E656FE0396982F263 (U3CU3Ec_tC2FD7FC10F2A6C5FFD80B927B849D83BE6D5095C * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		return ((float)il2cpp_codegen_add((float)L_0, (float)L_1));
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
// System.IntPtr MathNet.Numerics.Providers.Common.NativeProviderLoader/UnixLoader::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnixLoader_LoadLibrary_m5B9E91C687F1807ED2EBD8BE31E6D070ED15D8E1 (String_t* ___fileName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___fileName0;
		intptr_t L_1;
		L_1 = UnixLoader_dlopen_mA5CDA350C367430C98B77AB76F58EDBD3E4F9A6E(L_0, 2, /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// System.IntPtr MathNet.Numerics.Providers.Common.NativeProviderLoader/UnixLoader::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnixLoader_dlopen_mA5CDA350C367430C98B77AB76F58EDBD3E4F9A6E (String_t* ___fileName0, int32_t ___flags1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl.so"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fileName0' to native representation
	char* ____fileName0_marshaled = NULL;
	____fileName0_marshaled = il2cpp_codegen_marshal_string(___fileName0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____fileName0_marshaled, ___flags1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___flags1);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___fileName0' native representation
	il2cpp_codegen_marshal_free(____fileName0_marshaled);
	____fileName0_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr MathNet.Numerics.Providers.Common.NativeProviderLoader/WindowsLoader::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsLoader_LoadLibrary_m3A29546EAC8FF5F677FC30BDC2735345ECF3B7F4 (String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fileName0;
		intptr_t L_1;
		L_1 = WindowsLoader_LoadLibraryEx_mA1DA3F8894F53D1F164282DA8722C00DEDB42216(L_0, (intptr_t)(0), 8, /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// System.IntPtr MathNet.Numerics.Providers.Common.NativeProviderLoader/WindowsLoader::LoadLibraryEx(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsLoader_LoadLibraryEx_mA1DA3F8894F53D1F164282DA8722C00DEDB42216 (String_t* ___fileName0, intptr_t ___reservedNull1, uint32_t ___flags2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32"), "LoadLibraryEx", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = ___fileName0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibraryEx)(____fileName0_marshaled, ___reservedNull1, ___flags2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___reservedNull1, ___flags2);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MathNet.Numerics.LinearAlgebra.Complex.SparseMatrix/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m59CDBE10C7ACB12DD7698EE3B0A4848E4D320284 (U3CU3Ec__DisplayClass50_0_t408578E6F10F91FF8F82BD142E9AF9CA2101B43D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Numerics.Complex MathNet.Numerics.LinearAlgebra.Complex.SparseMatrix/<>c__DisplayClass50_0::<DoMultiply>b__0(System.Int32,System.Int32,System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  U3CU3Ec__DisplayClass50_0_U3CDoMultiplyU3Eb__0_mEE6FC53208E50A26F04BC8EF301B85E6FDE04873 (U3CU3Ec__DisplayClass50_0_t408578E6F10F91FF8F82BD142E9AF9CA2101B43D * __this, int32_t ___i0, int32_t ___j1, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___x2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_0 = ___x2;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_1 = __this->get_diagonal_0();
		int32_t L_2 = ___j1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_5;
		L_5 = Complex_op_Multiply_mEEC05B318FACC0395EFDEA156316AC522177B8F8(L_0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Numerics.Complex MathNet.Numerics.LinearAlgebra.Complex.SparseMatrix/<>c__DisplayClass50_0::<DoMultiply>b__1(System.Int32,System.Int32,System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  U3CU3Ec__DisplayClass50_0_U3CDoMultiplyU3Eb__1_m830C1562BC7F223D20CDCC14C15D716E5289999F (U3CU3Ec__DisplayClass50_0_t408578E6F10F91FF8F82BD142E9AF9CA2101B43D * __this, int32_t ___i0, int32_t ___j1, Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  ___x2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_0 = ___x2;
		ComplexU5BU5D_tB5D4AFC072030492E5A9410FFA524F81AA2C03B5* L_1 = __this->get_diagonal_0();
		int32_t L_2 = ___j1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C_il2cpp_TypeInfo_var);
		Complex_tBD2241EF40D963D2B55E4A07928FAE97D3A0E02C  L_5;
		L_5 = Complex_op_Multiply_mEEC05B318FACC0395EFDEA156316AC522177B8F8(L_0, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void MathNet.Numerics.LinearAlgebra.Complex32.SparseMatrix/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_mFD635BFA68EBB2846CE5EC08BB3C401E77200C4C (U3CU3Ec__DisplayClass50_0_t15A696C0D5871085BFEB945F9F3E5B9D0A0DC927 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// MathNet.Numerics.Complex32 MathNet.Numerics.LinearAlgebra.Complex32.SparseMatrix/<>c__DisplayClass50_0::<DoMultiply>b__0(System.Int32,System.Int32,MathNet.Numerics.Complex32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  U3CU3Ec__DisplayClass50_0_U3CDoMultiplyU3Eb__0_mFE465F4AB4E6F77293C661BDC38E86BC8ED4FFB5 (U3CU3Ec__DisplayClass50_0_t15A696C0D5871085BFEB945F9F3E5B9D0A0DC927 * __this, int32_t ___i0, int32_t ___j1, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___x2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_0 = ___x2;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_1 = __this->get_diagonal_0();
		int32_t L_2 = ___j1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_5;
		L_5 = Complex32_op_Multiply_m2D153B75BD6A9A7B702397FCE978513631322C41(L_0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// MathNet.Numerics.Complex32 MathNet.Numerics.LinearAlgebra.Complex32.SparseMatrix/<>c__DisplayClass50_0::<DoMultiply>b__1(System.Int32,System.Int32,MathNet.Numerics.Complex32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  U3CU3Ec__DisplayClass50_0_U3CDoMultiplyU3Eb__1_m1C7465F232AC46461825B1F6A8B7A80E15B0220E (U3CU3Ec__DisplayClass50_0_t15A696C0D5871085BFEB945F9F3E5B9D0A0DC927 * __this, int32_t ___i0, int32_t ___j1, Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  ___x2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_0 = ___x2;
		Complex32U5BU5D_tD3934BFC28A1C17EC0ABE0EAE27E104AE5BED1F9* L_1 = __this->get_diagonal_0();
		int32_t L_2 = ___j1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894_il2cpp_TypeInfo_var);
		Complex32_t0E740C58EBF81BF56A722ED589EDB5C2140A9894  L_5;
		L_5 = Complex32_op_Multiply_m2D153B75BD6A9A7B702397FCE978513631322C41(L_0, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void MathNet.Numerics.LinearAlgebra.Double.SparseMatrix/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m773F0C10FE937A1040756AAB7E3ABC230D0D0A22 (U3CU3Ec__DisplayClass50_0_t2D9281B3976A6A09CFF574EC00CD13CA026BA4AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Double MathNet.Numerics.LinearAlgebra.Double.SparseMatrix/<>c__DisplayClass50_0::<DoMultiply>b__0(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec__DisplayClass50_0_U3CDoMultiplyU3Eb__0_m51A5149629B759D7D41D459394B08865759CF0A8 (U3CU3Ec__DisplayClass50_0_t2D9281B3976A6A09CFF574EC00CD13CA026BA4AC * __this, int32_t ___i0, int32_t ___j1, double ___x2, const RuntimeMethod* method)
{
	{
		double L_0 = ___x2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = __this->get_diagonal_0();
		int32_t L_2 = ___j1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		double L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return ((double)il2cpp_codegen_multiply((double)L_0, (double)L_4));
	}
}
// System.Double MathNet.Numerics.LinearAlgebra.Double.SparseMatrix/<>c__DisplayClass50_0::<DoMultiply>b__1(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec__DisplayClass50_0_U3CDoMultiplyU3Eb__1_mD890CD7F4CD139E8A2EA0FEA0CC9E250BF96B04F (U3CU3Ec__DisplayClass50_0_t2D9281B3976A6A09CFF574EC00CD13CA026BA4AC * __this, int32_t ___i0, int32_t ___j1, double ___x2, const RuntimeMethod* method)
{
	{
		double L_0 = ___x2;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = __this->get_diagonal_0();
		int32_t L_2 = ___j1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		double L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return ((double)il2cpp_codegen_multiply((double)L_0, (double)L_4));
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
// System.Void MathNet.Numerics.LinearAlgebra.Single.SparseMatrix/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m45AA2FC0456212C4EADEA19B5DB8CCBD2BAE9833 (U3CU3Ec__DisplayClass50_0_t9F5BEB6EE44DB006FE4080ED7EC922A10946E1CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.SparseMatrix/<>c__DisplayClass50_0::<DoMultiply>b__0(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass50_0_U3CDoMultiplyU3Eb__0_m2ABCBF93027603E33CCED38797C8B629C4688826 (U3CU3Ec__DisplayClass50_0_t9F5BEB6EE44DB006FE4080ED7EC922A10946E1CC * __this, int32_t ___i0, int32_t ___j1, float ___x2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_diagonal_0();
		int32_t L_2 = ___j1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return ((float)il2cpp_codegen_multiply((float)L_0, (float)L_4));
	}
}
// System.Single MathNet.Numerics.LinearAlgebra.Single.SparseMatrix/<>c__DisplayClass50_0::<DoMultiply>b__1(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass50_0_U3CDoMultiplyU3Eb__1_mF4C8A42C5109324078BDE791CFDC0FE14D7D3BAE (U3CU3Ec__DisplayClass50_0_t9F5BEB6EE44DB006FE4080ED7EC922A10946E1CC * __this, int32_t ___i0, int32_t ___j1, float ___x2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_diagonal_0();
		int32_t L_2 = ___j1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return ((float)il2cpp_codegen_multiply((float)L_0, (float)L_4));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix_1_get_RowCount_mCA908443DDC23B1B4D907501816C0721932743FE_gshared_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CRowCountU3Ek__BackingField_5();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix_1_get_ColumnCount_mE1A02620C0887120BB65056496F882F8AF3B71ED_gshared_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CColumnCountU3Ek__BackingField_4();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector_1_set_Item_mFAF232323A52C89872F8BD95C5C7AD7A3F43E404_gshared_inline (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	{
		NullCheck((Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 *)__this);
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_0;
		L_0 = ((  VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * (*) (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_1 = ___index0;
		float L_2 = ___value1;
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_0);
		((  void (*) (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_0, (int32_t)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector_1_get_Item_mDC79609A0751E7797B24AF55D7E79CB1C2199232_gshared_inline (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		NullCheck((Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 *)__this);
		VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * L_0;
		L_0 = ((  VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 * (*) (Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Vector_1_t7B632CD0555BE02C1C1D25C89039625881767808 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_1 = ___index0;
		NullCheck((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_0);
		float L_2;
		L_2 = ((  float (*) (VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((VectorStorage_1_t292723551089F1C59EC575A26EE46FAF3C0C9286 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return (float)L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Matrix_1_At_m72825FB57EC357E5D6C27859DC00828B9020FD47_gshared_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method)
{
	{
		NullCheck((Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *)__this);
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_0;
		L_0 = ((  MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * (*) (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		int32_t L_1 = ___row0;
		int32_t L_2 = ___column1;
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_0);
		float L_3;
		L_3 = VirtFuncInvoker2< float, int32_t, int32_t >::Invoke(6 /* T MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::At(System.Int32,System.Int32) */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_0, (int32_t)L_1, (int32_t)L_2);
		return (float)L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix_1_At_m752B98EE0D880FB5E69CEF0A8818662004BEACB5_gshared_inline (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 * __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method)
{
	{
		NullCheck((Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *)__this);
		MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * L_0;
		L_0 = ((  MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 * (*) (Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Matrix_1_t8FAD70CB7BF571280E82ED0C3DAE39E915B61824 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		int32_t L_1 = ___row0;
		int32_t L_2 = ___column1;
		float L_3 = ___value2;
		NullCheck((MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_0);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(7 /* System.Void MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Single>::At(System.Int32,System.Int32,T) */, (MatrixStorage_1_tDE01745F9972F9096EE8C8F7EDB7187895CF2106 *)L_0, (int32_t)L_1, (int32_t)L_2, (float)L_3);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_mDD80BAE31CBB45588E597B8480586D0505C3CA9E_gshared_inline (Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item1_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_m5D6F7E4C92BBD480D813546956284E11D1809F85_gshared_inline (Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item2_1();
		return (int32_t)L_0;
	}
}
