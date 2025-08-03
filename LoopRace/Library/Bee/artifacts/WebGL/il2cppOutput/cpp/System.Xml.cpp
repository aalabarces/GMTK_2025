#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IXmlSchemaInfo_tF7DB6310A471259B33C4081B30E73925164204DB;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
struct XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18;
struct XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0;
struct XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939;
struct XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2;
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B;
struct XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57;
struct XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794;
struct XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79;
struct XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84;
struct XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D;
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C;
struct XmlName_t0704430D24D202146901D342E34D878246E14F33;
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8;
struct XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C;
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
struct XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A;
struct XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B;
struct XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85;
struct XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04;
struct XmlSchemaAttribute_t04AF3100B886867E3F0495E22F44305EDEC5550F;
struct XmlSchemaElement_t24D5940E4EB4E5FFDAD1772AFBD7A83CD992C970;
struct XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B;
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D;
struct XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE;
struct XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8;
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
struct EmptyParticle_tB70737785BCC28912378BA174C18956FF658454A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmptyParticle_tB70737785BCC28912378BA174C18956FF658454A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2FF4A9E93E0170BF78F5B084F76C8B3194FAE523;
IL2CPP_EXTERN_C String_t* _stringLiteral3C67F6F3D5AD1DF5DD1E3B7F8583419767796154;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralFBD1A9745DCC4D80697D44756437CCB57698AE21;
IL2CPP_EXTERN_C const RuntimeMethod* EmptyEnumerator_System_Collections_IEnumerator_get_Current_m7F54B324E8E3410019E56521EE61CF97A7CED9B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallXmlNodeList_get_Item_mFE828A47A297981D034EFC9244E53B3D34FC9576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlAttributeCollection_get_ItemOf_m8F968C39C03DFEB9998B2122F4A26B76B1DB2EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlElementListEnumerator_MoveNext_mAA954F4C42CDB8AF1602675835099FD6B5162ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlElementListListener_OnListChanged_mD4D9B710020444018B7CA3A06C295978B38943DD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t4791F64F4B6411D4D033A002CAD365D597AA2451 
{
};
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA  : public RuntimeObject
{
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};
struct Ref_t4AE893B7D0F8A6F31DFD7F8B30847A9050BA5AFF  : public RuntimeObject
{
};
struct Res_t9D2D9AFBC694346FDF3C1FCBE2D6D7AAEADB3B9A  : public RuntimeObject
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
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939  : public RuntimeObject
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___container;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___child;
	bool ___isFirst;
};
struct XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794  : public RuntimeObject
{
	XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* ___list;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___curElem;
	int32_t ___changeCount;
};
struct XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79  : public RuntimeObject
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___elemList;
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___doc;
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___nodeChangeHandler;
};
struct XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84  : public RuntimeObject
{
};
struct XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D  : public RuntimeObject
{
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable;
};
struct XmlName_t0704430D24D202146901D342E34D878246E14F33  : public RuntimeObject
{
	String_t* ___prefix;
	String_t* ___localName;
	String_t* ___name;
	int32_t ___hashCode;
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___ownerDoc;
};
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8  : public RuntimeObject
{
};
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parentNode;
};
struct XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85  : public RuntimeObject
{
};
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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
struct XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	XmlName_t0704430D24D202146901D342E34D878246E14F33* ___name;
};
struct XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2  : public XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___container;
};
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D* ___implementation;
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeInsertedDelegate;
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeRemovedDelegate;
	String_t* ___strDocumentName;
};
struct XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57  : public XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85
{
	String_t* ___asterisk;
	int32_t ___changeCount;
	String_t* ___name;
	String_t* ___localName;
	String_t* ___namespaceURI;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___rootNode;
	int32_t ___curInd;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___curElem;
	bool ___empty;
	bool ___atomized;
	int32_t ___matchCount;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___listener;
};
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___next;
};
struct XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04  : public XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D
{
};
struct SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0 
{
	RuntimeObject* ___field;
};
struct SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_pinvoke
{
	Il2CppIUnknown* ___field;
};
struct SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_com
{
	Il2CppIUnknown* ___field;
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
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C  : public RuntimeObject
{
	SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0 ___nodes;
};
struct XmlNodeChangedAction_tDF172D469BF61A7AF723976395070B130A65A233 
{
	int32_t ___value__;
};
struct XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95 
{
	int32_t ___value__;
};
struct XmlSchemaAttribute_t04AF3100B886867E3F0495E22F44305EDEC5550F  : public XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04
{
};
struct XmlSchemaContentType_t30F65D76DF78B49262A67031AF1B166EDF032600 
{
	int32_t ___value__;
};
struct XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE  : public XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___minOccurs;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___maxOccurs;
};
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF  : public XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04
{
};
struct XmlSchemaValidity_t6A23BF5BB6AF73795630FCCCF46F0F600BA8B4F6 
{
	int32_t ___value__;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	bool ___isLongReference;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle;
};
struct XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0  : public XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C
{
};
struct XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	int32_t ___action;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node;
};
struct XmlSchemaElement_t24D5940E4EB4E5FFDAD1772AFBD7A83CD992C970  : public XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE
{
};
struct XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B  : public RuntimeObject
{
	bool ___isDefault;
	bool ___isNil;
	XmlSchemaElement_t24D5940E4EB4E5FFDAD1772AFBD7A83CD992C970* ___schemaElement;
	XmlSchemaAttribute_t04AF3100B886867E3F0495E22F44305EDEC5550F* ___schemaAttribute;
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType;
	XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8* ___memberType;
	int32_t ___validity;
	int32_t ___contentType;
};
struct XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8  : public XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF
{
};
struct EmptyParticle_tB70737785BCC28912378BA174C18956FF658454A  : public XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B  : public MulticastDelegate_t
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	uint32_t ___IsTextualNodeBitmap;
	uint32_t ___CanReadContentAsBitmap;
	uint32_t ___HasValueBitmap;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields
{
	EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* ___EmptyEnumerator;
	RuntimeObject* ___NotKnownSchemaInfo;
	RuntimeObject* ___ValidSchemaInfo;
	RuntimeObject* ___InvalidSchemaInfo;
};
struct XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE_StaticFields
{
	XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE* ___Empty;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlName_get_HashCode_m329A9FEAF3BDEAA5F1F40CB84F7E51E1BDE58B2D_inline (XmlName_t0704430D24D202146901D342E34D878246E14F33* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlName_get_Name_m77B33DD36549E6E3E728EA1AD3325E339EC30435 (XmlName_t0704430D24D202146901D342E34D878246E14F33* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlName_get_LocalName_mD4DE8695A21CB393834F0DDFDD6D6B610E91A64D_inline (XmlName_t0704430D24D202146901D342E34D878246E14F33* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmallXmlNodeList_get_Item_mFE828A47A297981D034EFC9244E53B3D34FC9576 (SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlName_GetHashCode_mC2C5513D62B0E10E556D1241BC33C4AFFAD1DDCD (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlAttribute_get_LocalNameHash_m09745CA0C4CEA4D07864D977FF90DEBD43C0AE46 (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallXmlNodeList_get_Count_m79F61C89FC8ABD73BCB56938310461EFF1DF14BF (SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlChildEnumerator_MoveNext_m038B637C00AC0482CAD4E35995F2CF2AE8E3D556 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeList__ctor_m29940F85BF8D20E6FFB9732648DC6DAD10539BD3 (XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlChildEnumerator__ctor_mC51E8B709CB2FCB079D44B180D5EF3DF9DBC3671 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementList__ctor_m38E1065BC153887F600A64F0FAF6D595A928BCB1 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_parent, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XmlImplementation_get_NameTable_m8951702F59619310BD4A9528D2FF471352518CDF_inline (XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyEnumerator__ctor_m05DA73C42354A4E549CCA7E9485B294057ABA981 (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaInfo__ctor_mEB56BD698D44A8AAA47668230E0CDFE8463ABD08 (XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B* __this, int32_t ___0_validity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* XmlNode_get_Document_mF9753FAD0D7BFDBDAE7FEA6B196D7CA2982A373C (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementListListener__ctor_mDCC66BFA14921AA8ADAF5ED16079AB47D603B557 (XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* __this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___0_doc, XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* ___1_elemList, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XmlDocument_get_NameTable_m4B913865A24AEA917172F75CBDCE94C81CCB7E2C (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNodeChangedEventArgs_get_Node_mB5FA92B160E0200CF56DFCBAE3FC40F0D5C9B138_inline (XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlElementList_IsMatch_m9459349F92B576BEB725AA24F6337126DC1DE34B (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_curNode, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlNodeChangedEventArgs_get_Action_mD307B00A56DE5422A4EE4915400EC966DF80BD04_inline (XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementList__ctor_mE9CE5108CF2B91213733B81C26C40C57D5726B07 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_parent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ref_Equal_m60FD3EF02546279815B785F856568B01F60FE1AF (String_t* ___0_strA, String_t* ___1_strB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlElementList_NextElemInPreOrder_m6AA47AD12DFF62032C6A09B5EC1879631E0E0A6C (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_curNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlElementList_PrevElemInPreOrder_m3DE0B0989925E78696BA5CAA68854052E911EE2B (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_curNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlElementList_GetMatchingNode_m2CC1EB6A57B17D3B4A8FC7B16226F8ED1E3EC137 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_n, bool ___1_bNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEmptyElementListEnumerator__ctor_m7433D2C2DDEF90DD50C7AF1816454F41949D5314 (XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84* __this, XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementListEnumerator__ctor_m98B779C6190C647319FDF934EEC2C9DC22B63204 (XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794* __this, XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementListListener_Unregister_m200394882802F40AE1337CE7EEC60ACAA606287C (XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlElementList_get_ChangeCount_m6C653A302721EA1D8C41326E169F2ED54CD9EE34_inline (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlElementList_GetNextNode_m54C6F8839217646D19DF43C2AB3FFE87ECABF04B (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeChangedEventHandler__ctor_mD51AE5833F8A9B1EA9DB8DC54FEF3AD64763AED9 (XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument_add_NodeInserted_m5B03345EAC48958B104BA2033818370BA6E2243D (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument_add_NodeRemoved_m30754B20BE8A674BD5FDECF175E2419DD2AE3E1C (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementList_ConcurrencyCheck_mFC4A7DF2FC6B07D06430F714671AB3468E068386 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument_remove_NodeInserted_mF46D0B84DB934188F551BCC766080CDA9A787616 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument_remove_NodeRemoved_m33B3778BE1EB94A010FDE8F860641821A7A079A3 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlChildNodes__ctor_mE297CC7E680D376A26339D6067C7E434271234B5 (XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNode_AppendChildText_m8C1493DF2F031942BD58F96DE8EFC365194561A1 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, StringBuilder_t* ___0_builder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaObject__ctor_m72D9D6DC7E5B4FBB6ADEB97F688474AF8AC7CADE (XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaInfo_Clear_m6EACF6A1BB70B47CBC2865B8CCC74BEA67F96FFE (XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaInfo__ctor_mEEC95F1F490C5D62BF1CC6DB16FE4938E5C1C341 (XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaAnnotated__ctor_m094C7E3CD496FCF801D2A9A68E6D410B634096BC (XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyParticle__ctor_m7FE5C70CB31BBBE2FAF38D403AC196F379DAC079 (EmptyParticle_tB70737785BCC28912378BA174C18956FF658454A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaParticle__ctor_mDF61E3EE9B7D4102592DA20D02619EBF4D04F9A1 (XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReader__cctor_m9FF3BD38D3644E099B8305E251679A77A0DF493E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields*)il2cpp_codegen_static_fields_for(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var))->___IsTextualNodeBitmap = ((int32_t)24600);
		((XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields*)il2cpp_codegen_static_fields_for(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var))->___CanReadContentAsBitmap = ((int32_t)123324);
		((XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields*)il2cpp_codegen_static_fields_for(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var))->___HasValueBitmap = ((int32_t)157084);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlAttribute_get_LocalNameHash_m09745CA0C4CEA4D07864D977FF90DEBD43C0AE46 (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, const RuntimeMethod* method) 
{
	{
		XmlName_t0704430D24D202146901D342E34D878246E14F33* L_0 = __this->___name;
		int32_t L_1;
		L_1 = XmlName_get_HashCode_m329A9FEAF3BDEAA5F1F40CB84F7E51E1BDE58B2D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlAttribute_get_Name_m97BC4F92BC4CB9D0580EFA1339FD713B6C31DBC2 (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, const RuntimeMethod* method) 
{
	{
		XmlName_t0704430D24D202146901D342E34D878246E14F33* L_0 = __this->___name;
		String_t* L_1;
		L_1 = XmlName_get_Name_m77B33DD36549E6E3E728EA1AD3325E339EC30435(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlAttribute_get_LocalName_mC876CE8B71B1C4F72035B2843E3EE0FACB5FB3A3 (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, const RuntimeMethod* method) 
{
	{
		XmlName_t0704430D24D202146901D342E34D878246E14F33* L_0 = __this->___name;
		String_t* L_1;
		L_1 = XmlName_get_LocalName_mD4DE8695A21CB393834F0DDFDD6D6B610E91A64D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlAttribute_get_NodeType_m8B876087E6C0E79E6E02A25D0580E678F0D8A14C (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* XmlAttributeCollection_get_ItemOf_m8F968C39C03DFEB9998B2122F4A26B76B1DB2EDB (XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* L_0 = (SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0*)(&((XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C*)__this)->___nodes);
		int32_t L_1 = ___0_i;
		RuntimeObject* L_2;
		L_2 = SmallXmlNodeList_get_Item_mFE828A47A297981D034EFC9244E53B3D34FC9576(L_0, L_1, NULL);
		V_0 = ((XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*)CastclassClass((RuntimeObject*)L_2, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var));
		goto IL_0025;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		throw e;
	}

CATCH_0014:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = ((ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*));;
		String_t* L_4;
		L_4 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C67F6F3D5AD1DF5DD1E3B7F8583419767796154)), NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_5 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_5, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlAttributeCollection_get_ItemOf_m8F968C39C03DFEB9998B2122F4A26B76B1DB2EDB_RuntimeMethod_var)));
	}

IL_0025:
	{
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* XmlAttributeCollection_get_ItemOf_mE6997455F03EC8A99F4ECAFF32E4F212BE70D7CF (XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* V_2 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1;
		L_1 = XmlName_GetHashCode_mC2C5513D62B0E10E556D1241BC33C4AFFAD1DDCD(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_003a;
	}

IL_000b:
	{
		SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* L_2 = (SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0*)(&((XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C*)__this)->___nodes);
		int32_t L_3 = V_1;
		RuntimeObject* L_4;
		L_4 = SmallXmlNodeList_get_Item_mFE828A47A297981D034EFC9244E53B3D34FC9576(L_2, L_3, NULL);
		V_2 = ((XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*)CastclassClass((RuntimeObject*)L_4, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var));
		int32_t L_5 = V_0;
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_6 = V_2;
		int32_t L_7;
		L_7 = XmlAttribute_get_LocalNameHash_m09745CA0C4CEA4D07864D977FF90DEBD43C0AE46(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_8 = ___0_name;
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_9 = V_2;
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(4, L_9);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0036;
		}
	}
	{
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_12 = V_2;
		return L_12;
	}

IL_0036:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003a:
	{
		int32_t L_14 = V_1;
		SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* L_15 = (SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0*)(&((XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C*)__this)->___nodes);
		int32_t L_16;
		L_16 = SmallXmlNodeList_get_Count_m79F61C89FC8ABD73BCB56938310461EFF1DF14BF(L_15, NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_000b;
		}
	}
	{
		return (XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlChildEnumerator__ctor_mC51E8B709CB2FCB079D44B180D5EF3DF9DBC3671 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_container, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_container;
		__this->___container = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___container), (void*)L_0);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = ___0_container;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2;
		L_2 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(13, L_1);
		__this->___child = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child), (void*)L_2);
		__this->___isFirst = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlChildEnumerator_System_Collections_IEnumerator_MoveNext_m9DF8D71649BD5173C9E9859A12E9E6777450A55D (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlChildEnumerator_MoveNext_m038B637C00AC0482CAD4E35995F2CF2AE8E3D556(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlChildEnumerator_MoveNext_m038B637C00AC0482CAD4E35995F2CF2AE8E3D556 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isFirst;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = __this->___container;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2;
		L_2 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(13, L_1);
		__this->___child = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child), (void*)L_2);
		__this->___isFirst = (bool)0;
		goto IL_003b;
	}

IL_0022:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = __this->___child;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = __this->___child;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5;
		L_5 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(10, L_4);
		__this->___child = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child), (void*)L_5);
	}

IL_003b:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = __this->___child;
		return (bool)((!(((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlChildEnumerator_System_Collections_IEnumerator_Reset_m3E1BD7C0BE0E5576593A8C53ABC11109F275C4EF (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		__this->___isFirst = (bool)1;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->___container;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1;
		L_1 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(13, L_0);
		__this->___child = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlChildEnumerator_System_Collections_IEnumerator_get_Current_mEC0FD9B4CD70461AD71D93AB21025A3D83AE0418 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0;
		L_0 = XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isFirst;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = __this->___child;
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		String_t* L_2;
		L_2 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBD1A9745DCC4D80697D44756437CCB57698AE21)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46_RuntimeMethod_var)));
	}

IL_0020:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = __this->___child;
		return L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlChildNodes__ctor_mE297CC7E680D376A26339D6067C7E434271234B5 (XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_container, const RuntimeMethod* method) 
{
	{
		XmlNodeList__ctor_m29940F85BF8D20E6FFB9732648DC6DAD10539BD3(__this, NULL);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_container;
		__this->___container = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___container), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlChildNodes_GetEnumerator_m79ACE972A13482959B5E446059C899FC9988A81C (XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->___container;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1;
		L_1 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(13, L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* L_2 = ((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var))->___EmptyEnumerator;
		return L_2;
	}

IL_0013:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = __this->___container;
		XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* L_4 = (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939*)il2cpp_codegen_object_new(XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939_il2cpp_TypeInfo_var);
		XmlChildEnumerator__ctor_mC51E8B709CB2FCB079D44B180D5EF3DF9DBC3671(L_4, L_3, NULL);
		return L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlDocument_get_NodeType_m49BC1016CABB8F3949B923DA9E6C89EEB676BC37 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(((int32_t)9));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocument_get_Name_mDD3B83B70FA0065CE4959C41BD569084E2219C35 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___strDocumentName;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocument_get_LocalName_mF25545A8C83B64CB8E28DC2983997B2F860AD5A9 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___strDocumentName;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* XmlDocument_GetElementsByTagName_m2553763C9CE3E5DAC070E91D271FDD2923A99544 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* L_1 = (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57*)il2cpp_codegen_object_new(XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57_il2cpp_TypeInfo_var);
		XmlElementList__ctor_m38E1065BC153887F600A64F0FAF6D595A928BCB1(L_1, __this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XmlDocument_get_NameTable_m4B913865A24AEA917172F75CBDCE94C81CCB7E2C (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) 
{
	{
		XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D* L_0 = __this->___implementation;
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_1;
		L_1 = XmlImplementation_get_NameTable_m8951702F59619310BD4A9528D2FF471352518CDF_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument_add_NodeInserted_m5B03345EAC48958B104BA2033818370BA6E2243D (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_0 = __this->___onNodeInsertedDelegate;
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_1 = ___0_value;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		__this->___onNodeInsertedDelegate = ((XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*)CastclassSealed((RuntimeObject*)L_2, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onNodeInsertedDelegate), (void*)((XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*)CastclassSealed((RuntimeObject*)L_2, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument_remove_NodeInserted_mF46D0B84DB934188F551BCC766080CDA9A787616 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_0 = __this->___onNodeInsertedDelegate;
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_1 = ___0_value;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		__this->___onNodeInsertedDelegate = ((XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*)CastclassSealed((RuntimeObject*)L_2, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onNodeInsertedDelegate), (void*)((XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*)CastclassSealed((RuntimeObject*)L_2, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument_add_NodeRemoved_m30754B20BE8A674BD5FDECF175E2419DD2AE3E1C (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_0 = __this->___onNodeRemovedDelegate;
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_1 = ___0_value;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		__this->___onNodeRemovedDelegate = ((XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*)CastclassSealed((RuntimeObject*)L_2, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onNodeRemovedDelegate), (void*)((XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*)CastclassSealed((RuntimeObject*)L_2, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument_remove_NodeRemoved_m33B3778BE1EB94A010FDE8F860641821A7A079A3 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_0 = __this->___onNodeRemovedDelegate;
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_1 = ___0_value;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		__this->___onNodeRemovedDelegate = ((XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*)CastclassSealed((RuntimeObject*)L_2, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onNodeRemovedDelegate), (void*)((XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*)CastclassSealed((RuntimeObject*)L_2, XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument__cctor_m27626C1CF5AC7AB088D03782DE104EB671099C45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* L_0 = (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA*)il2cpp_codegen_object_new(EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA_il2cpp_TypeInfo_var);
		EmptyEnumerator__ctor_m05DA73C42354A4E549CCA7E9485B294057ABA981(L_0, NULL);
		((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var))->___EmptyEnumerator = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var))->___EmptyEnumerator), (void*)L_0);
		XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B* L_1 = (XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B*)il2cpp_codegen_object_new(XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B_il2cpp_TypeInfo_var);
		XmlSchemaInfo__ctor_mEB56BD698D44A8AAA47668230E0CDFE8463ABD08(L_1, 0, NULL);
		((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var))->___NotKnownSchemaInfo = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var))->___NotKnownSchemaInfo), (void*)L_1);
		XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B* L_2 = (XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B*)il2cpp_codegen_object_new(XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B_il2cpp_TypeInfo_var);
		XmlSchemaInfo__ctor_mEB56BD698D44A8AAA47668230E0CDFE8463ABD08(L_2, 1, NULL);
		((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var))->___ValidSchemaInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var))->___ValidSchemaInfo), (void*)L_2);
		XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B* L_3 = (XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B*)il2cpp_codegen_object_new(XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B_il2cpp_TypeInfo_var);
		XmlSchemaInfo__ctor_mEB56BD698D44A8AAA47668230E0CDFE8463ABD08(L_3, 2, NULL);
		((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var))->___InvalidSchemaInfo = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields*)il2cpp_codegen_static_fields_for(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var))->___InvalidSchemaInfo), (void*)L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementList__ctor_mE9CE5108CF2B91213733B81C26C40C57D5726B07 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNodeList__ctor_m29940F85BF8D20E6FFB9732648DC6DAD10539BD3(__this, NULL);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_parent;
		__this->___rootNode = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rootNode), (void*)L_0);
		__this->___curInd = (-1);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = __this->___rootNode;
		__this->___curElem = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curElem), (void*)L_1);
		__this->___changeCount = 0;
		__this->___empty = (bool)0;
		__this->___atomized = (bool)1;
		__this->___matchCount = (-1);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = ___0_parent;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_3;
		L_3 = XmlNode_get_Document_mF9753FAD0D7BFDBDAE7FEA6B196D7CA2982A373C(L_2, NULL);
		XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* L_4 = (XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79*)il2cpp_codegen_object_new(XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79_il2cpp_TypeInfo_var);
		XmlElementListListener__ctor_mDCC66BFA14921AA8ADAF5ED16079AB47D603B557(L_4, L_3, __this, NULL);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_5, L_4, NULL);
		__this->___listener = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementList_Finalize_mE7104C4073E9CBBC56F2B0428E14B3645798DE93 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			VirtualActionInvoker1< bool >::Invoke(8, __this, (bool)0);
			goto IL_0010;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementList_ConcurrencyCheck_mFC4A7DF2FC6B07D06430F714671AB3468E068386 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___0_args, const RuntimeMethod* method) 
{
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* V_0 = NULL;
	{
		bool L_0 = __this->___atomized;
		if (L_0)
		{
			goto IL_0044;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = __this->___rootNode;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_2;
		L_2 = XmlNode_get_Document_mF9753FAD0D7BFDBDAE7FEA6B196D7CA2982A373C(L_1, NULL);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_3;
		L_3 = XmlDocument_get_NameTable_m4B913865A24AEA917172F75CBDCE94C81CCB7E2C(L_2, NULL);
		V_0 = L_3;
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_4 = V_0;
		String_t* L_5 = __this->___localName;
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(4, L_4, L_5);
		__this->___localName = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localName), (void*)L_6);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_7 = V_0;
		String_t* L_8 = __this->___namespaceURI;
		String_t* L_9;
		L_9 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(4, L_7, L_8);
		__this->___namespaceURI = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___namespaceURI), (void*)L_9);
		__this->___atomized = (bool)1;
	}

IL_0044:
	{
		XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* L_10 = ___0_args;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_11;
		L_11 = XmlNodeChangedEventArgs_get_Node_mB5FA92B160E0200CF56DFCBAE3FC40F0D5C9B138_inline(L_10, NULL);
		bool L_12;
		L_12 = XmlElementList_IsMatch_m9459349F92B576BEB725AA24F6337126DC1DE34B(__this, L_11, NULL);
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_13 = __this->___changeCount;
		__this->___changeCount = ((int32_t)il2cpp_codegen_add(L_13, 1));
		__this->___curInd = (-1);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_14 = __this->___rootNode;
		__this->___curElem = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curElem), (void*)L_14);
		XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* L_15 = ___0_args;
		int32_t L_16;
		L_16 = XmlNodeChangedEventArgs_get_Action_mD307B00A56DE5422A4EE4915400EC966DF80BD04_inline(L_15, NULL);
		if (L_16)
		{
			goto IL_0082;
		}
	}
	{
		__this->___empty = (bool)0;
	}

IL_0082:
	{
		__this->___matchCount = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementList__ctor_m38E1065BC153887F600A64F0FAF6D595A928BCB1 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_parent, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* V_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_parent;
		XmlElementList__ctor_mE9CE5108CF2B91213733B81C26C40C57D5726B07(__this, L_0, NULL);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = ___0_parent;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_2;
		L_2 = XmlNode_get_Document_mF9753FAD0D7BFDBDAE7FEA6B196D7CA2982A373C(L_1, NULL);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_3;
		L_3 = XmlDocument_get_NameTable_m4B913865A24AEA917172F75CBDCE94C81CCB7E2C(L_2, NULL);
		V_0 = L_3;
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_4 = V_0;
		String_t* L_5;
		L_5 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(4, L_4, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		__this->___asterisk = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___asterisk), (void*)L_5);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_6 = V_0;
		String_t* L_7 = ___1_name;
		String_t* L_8;
		L_8 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(4, L_6, L_7);
		__this->___name = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name), (void*)L_8);
		__this->___localName = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localName), (void*)(String_t*)NULL);
		__this->___namespaceURI = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___namespaceURI), (void*)(String_t*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlElementList_get_ChangeCount_m6C653A302721EA1D8C41326E169F2ED54CD9EE34 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___changeCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlElementList_NextElemInPreOrder_m6AA47AD12DFF62032C6A09B5EC1879631E0E0A6C (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_curNode, const RuntimeMethod* method) 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_curNode;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1;
		L_1 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(13, L_0);
		V_0 = L_1;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = V_0;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = ___0_curNode;
		V_0 = L_3;
		goto IL_0015;
	}

IL_000e:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5;
		L_5 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(7, L_4);
		V_0 = L_5;
	}

IL_0015:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = __this->___rootNode;
		if ((((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_7) == ((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_8)))
		{
			goto IL_0029;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_10;
		L_10 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(10, L_9);
		if (!L_10)
		{
			goto IL_000e;
		}
	}

IL_0029:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_11 = V_0;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_12 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_13 = __this->___rootNode;
		if ((((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_12) == ((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_14 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_15;
		L_15 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(10, L_14);
		V_0 = L_15;
	}

IL_003c:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_16 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_17 = __this->___rootNode;
		if ((!(((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_16) == ((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_17))))
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}

IL_0047:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlElementList_PrevElemInPreOrder_m3DE0B0989925E78696BA5CAA68854052E911EE2B (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_curNode, const RuntimeMethod* method) 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_curNode;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1;
		L_1 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(9, L_0);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0009:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3;
		L_3 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(14, L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5;
		L_5 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(14, L_4);
		V_0 = L_5;
	}

IL_0018:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = V_0;
		if (L_6)
		{
			goto IL_0009;
		}
	}

IL_001b:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = V_0;
		if (L_7)
		{
			goto IL_0025;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = ___0_curNode;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9;
		L_9 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(7, L_8);
		V_0 = L_9;
	}

IL_0025:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_10 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_11 = __this->___rootNode;
		if ((!(((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_10) == ((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_11))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}

IL_0030:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlElementList_IsMatch_m9459349F92B576BEB725AA24F6337126DC1DE34B (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_curNode, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_curNode;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_2 = __this->___name;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_3 = __this->___name;
		String_t* L_4 = __this->___asterisk;
		bool L_5;
		L_5 = Ref_Equal_m60FD3EF02546279815B785F856568B01F60FE1AF(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = ___0_curNode;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(4, L_6);
		String_t* L_8 = __this->___name;
		bool L_9;
		L_9 = Ref_Equal_m60FD3EF02546279815B785F856568B01F60FE1AF(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0087;
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		String_t* L_10 = __this->___localName;
		String_t* L_11 = __this->___asterisk;
		bool L_12;
		L_12 = Ref_Equal_m60FD3EF02546279815B785F856568B01F60FE1AF(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_005f;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_13 = ___0_curNode;
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(17, L_13);
		String_t* L_15 = __this->___localName;
		bool L_16;
		L_16 = Ref_Equal_m60FD3EF02546279815B785F856568B01F60FE1AF(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0087;
		}
	}

IL_005f:
	{
		String_t* L_17 = __this->___namespaceURI;
		String_t* L_18 = __this->___asterisk;
		bool L_19;
		L_19 = Ref_Equal_m60FD3EF02546279815B785F856568B01F60FE1AF(L_17, L_18, NULL);
		if (L_19)
		{
			goto IL_0085;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_20 = ___0_curNode;
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(16, L_20);
		String_t* L_22 = __this->___namespaceURI;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_0087;
		}
	}

IL_0085:
	{
		return (bool)1;
	}

IL_0087:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlElementList_GetMatchingNode_m2CC1EB6A57B17D3B4A8FC7B16226F8ED1E3EC137 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_n, bool ___1_bNext, const RuntimeMethod* method) 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_n;
		V_0 = L_0;
	}

IL_0002:
	{
		bool L_1 = ___1_bNext;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3;
		L_3 = XmlElementList_NextElemInPreOrder_m6AA47AD12DFF62032C6A09B5EC1879631E0E0A6C(__this, L_2, NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_000f:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5;
		L_5 = XmlElementList_PrevElemInPreOrder_m3DE0B0989925E78696BA5CAA68854052E911EE2B(__this, L_4, NULL);
		V_0 = L_5;
	}

IL_0017:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = V_0;
		bool L_8;
		L_8 = XmlElementList_IsMatch_m9459349F92B576BEB725AA24F6337126DC1DE34B(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_0002;
		}
	}

IL_0023:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlElementList_GetNextNode_m54C6F8839217646D19DF43C2AB3FFE87ECABF04B (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_n, const RuntimeMethod* method) 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* G_B5_0 = NULL;
	{
		bool L_0 = __this->___empty;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}

IL_000a:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = ___0_n;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = ___0_n;
		G_B5_0 = L_2;
		goto IL_0016;
	}

IL_0010:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = __this->___rootNode;
		G_B5_0 = L_3;
	}

IL_0016:
	{
		V_0 = G_B5_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5;
		L_5 = XmlElementList_GetMatchingNode_m2CC1EB6A57B17D3B4A8FC7B16226F8ED1E3EC137(__this, L_4, (bool)1, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlElementList_GetEnumerator_m9C65429533CBB5B262B9CBF50F87376187D99BCE (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___empty;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84* L_1 = (XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84*)il2cpp_codegen_object_new(XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84_il2cpp_TypeInfo_var);
		XmlEmptyElementListEnumerator__ctor_m7433D2C2DDEF90DD50C7AF1816454F41949D5314(L_1, __this, NULL);
		return L_1;
	}

IL_000f:
	{
		XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794* L_2 = (XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794*)il2cpp_codegen_object_new(XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794_il2cpp_TypeInfo_var);
		XmlElementListEnumerator__ctor_m98B779C6190C647319FDF934EEC2C9DC22B63204(L_2, __this, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementList_PrivateDisposeNodeList_m91F3D67969060E933FD09BA62FD222477C04BFAB (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		VirtualActionInvoker1< bool >::Invoke(8, __this, (bool)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementList_Dispose_mE31A421BA8D482AEE3F8FE4F0CEAFF6B03E105D3 (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* V_0 = NULL;
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_0 = __this->___listener;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = __this->___listener;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5, L_1);
		V_0 = ((XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79*)CastclassClass((RuntimeObject*)L_2, XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79_il2cpp_TypeInfo_var));
		XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* L_4 = V_0;
		XmlElementListListener_Unregister_m200394882802F40AE1337CE7EEC60ACAA606287C(L_4, NULL);
	}

IL_0022:
	{
		__this->___listener = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
	}

IL_0029:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementListEnumerator__ctor_m98B779C6190C647319FDF934EEC2C9DC22B63204 (XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794* __this, XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* L_0 = ___0_list;
		__this->___list = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_0);
		__this->___curElem = (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curElem), (void*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL);
		XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* L_1 = ___0_list;
		int32_t L_2;
		L_2 = XmlElementList_get_ChangeCount_m6C653A302721EA1D8C41326E169F2ED54CD9EE34_inline(L_1, NULL);
		__this->___changeCount = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlElementListEnumerator_MoveNext_mAA954F4C42CDB8AF1602675835099FD6B5162ED1 (XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794* __this, const RuntimeMethod* method) 
{
	{
		XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* L_0 = __this->___list;
		int32_t L_1;
		L_1 = XmlElementList_get_ChangeCount_m6C653A302721EA1D8C41326E169F2ED54CD9EE34_inline(L_0, NULL);
		int32_t L_2 = __this->___changeCount;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2FF4A9E93E0170BF78F5B084F76C8B3194FAE523)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlElementListEnumerator_MoveNext_mAA954F4C42CDB8AF1602675835099FD6B5162ED1_RuntimeMethod_var)));
	}

IL_0023:
	{
		XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* L_5 = __this->___list;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = __this->___curElem;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7;
		L_7 = XmlElementList_GetNextNode_m54C6F8839217646D19DF43C2AB3FFE87ECABF04B(L_5, L_6, NULL);
		__this->___curElem = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curElem), (void*)L_7);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = __this->___curElem;
		return (bool)((!(((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementListEnumerator_Reset_mA13C38F5A39A5926F4CA0CAAF25288482366B876 (XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794* __this, const RuntimeMethod* method) 
{
	{
		__this->___curElem = (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curElem), (void*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL);
		XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* L_0 = __this->___list;
		int32_t L_1;
		L_1 = XmlElementList_get_ChangeCount_m6C653A302721EA1D8C41326E169F2ED54CD9EE34_inline(L_0, NULL);
		__this->___changeCount = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlElementListEnumerator_get_Current_mA75BD3576C64F7039DD8332157BEE7683841D079 (XmlElementListEnumerator_tFF3D3868A2EFB7D39A510085383C371172943794* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->___curElem;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEmptyElementListEnumerator__ctor_m7433D2C2DDEF90DD50C7AF1816454F41949D5314 (XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84* __this, XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlEmptyElementListEnumerator_MoveNext_m66678E54A5EC0906958E81FE3BD490AEB7613109 (XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlEmptyElementListEnumerator_Reset_mFB303DE624E20111A7B8797137A84907EE82A7A4 (XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlEmptyElementListEnumerator_get_Current_mA23B6E85AD48001156124865EA9D5C5BA94AB51F (XmlEmptyElementListEnumerator_tBA7DE21795A44BB9D31419C2CBB40A83D6DBEE84* __this, const RuntimeMethod* method) 
{
	{
		return NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementListListener__ctor_mDCC66BFA14921AA8ADAF5ED16079AB47D603B557 (XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* __this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___0_doc, XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* ___1_elemList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementListListener_OnListChanged_mD4D9B710020444018B7CA3A06C295978B38943DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = ___0_doc;
		__this->___doc = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___doc), (void*)L_0);
		XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* L_1 = ___1_elemList;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_2 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_2, L_1, NULL);
		__this->___elemList = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elemList), (void*)L_2);
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_3 = (XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*)il2cpp_codegen_object_new(XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B_il2cpp_TypeInfo_var);
		XmlNodeChangedEventHandler__ctor_mD51AE5833F8A9B1EA9DB8DC54FEF3AD64763AED9(L_3, __this, (intptr_t)((void*)XmlElementListListener_OnListChanged_mD4D9B710020444018B7CA3A06C295978B38943DD_RuntimeMethod_var), NULL);
		__this->___nodeChangeHandler = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeChangeHandler), (void*)L_3);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_4 = ___0_doc;
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_5 = __this->___nodeChangeHandler;
		XmlDocument_add_NodeInserted_m5B03345EAC48958B104BA2033818370BA6E2243D(L_4, L_5, NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_6 = ___0_doc;
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_7 = __this->___nodeChangeHandler;
		XmlDocument_add_NodeRemoved_m30754B20BE8A674BD5FDECF175E2419DD2AE3E1C(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementListListener_OnListChanged_mD4D9B710020444018B7CA3A06C295978B38943DD (XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* __this, RuntimeObject* ___0_sender, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* V_0 = NULL;
	bool V_1 = false;
	XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* V_2 = NULL;
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0065;
					}
				}
				{
					XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0065:
				{
					return;
				}
			}
		});
		try
		{
			{
				XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->___elemList;
				if (!L_3)
				{
					goto IL_005a_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_4 = __this->___elemList;
				RuntimeObject* L_5;
				L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5, L_4);
				V_2 = ((XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57*)CastclassClass((RuntimeObject*)L_5, XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57_il2cpp_TypeInfo_var));
				XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* L_6 = V_2;
				if (!L_6)
				{
					goto IL_0031_1;
				}
			}
			{
				XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* L_7 = V_2;
				XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* L_8 = ___1_args;
				XmlElementList_ConcurrencyCheck_mFC4A7DF2FC6B07D06430F714671AB3468E068386(L_7, L_8, NULL);
				goto IL_0066;
			}

IL_0031_1:
			{
				XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_9 = __this->___doc;
				XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_10 = __this->___nodeChangeHandler;
				XmlDocument_remove_NodeInserted_mF46D0B84DB934188F551BCC766080CDA9A787616(L_9, L_10, NULL);
				XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_11 = __this->___doc;
				XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_12 = __this->___nodeChangeHandler;
				XmlDocument_remove_NodeRemoved_m33B3778BE1EB94A010FDE8F860641821A7A079A3(L_11, L_12, NULL);
				__this->___elemList = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___elemList), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
			}

IL_005a_1:
			{
				goto IL_0066;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementListListener_Unregister_m200394882802F40AE1337CE7EEC60ACAA606287C (XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* __this, const RuntimeMethod* method) 
{
	XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* V_0 = NULL;
	bool V_1 = false;
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0048;
					}
				}
				{
					XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0048:
				{
					return;
				}
			}
		});
		try
		{
			{
				XmlElementListListener_t1513DCDD9C9C5B56690342DCC4445CB4BE6E7E79* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->___elemList;
				if (!L_3)
				{
					goto IL_003d_1;
				}
			}
			{
				XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_4 = __this->___doc;
				XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_5 = __this->___nodeChangeHandler;
				XmlDocument_remove_NodeInserted_mF46D0B84DB934188F551BCC766080CDA9A787616(L_4, L_5, NULL);
				XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_6 = __this->___doc;
				XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* L_7 = __this->___nodeChangeHandler;
				XmlDocument_remove_NodeRemoved_m33B3778BE1EB94A010FDE8F860641821A7A079A3(L_6, L_7, NULL);
				__this->___elemList = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___elemList), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
			}

IL_003d_1:
			{
				goto IL_0049;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XmlImplementation_get_NameTable_m8951702F59619310BD4A9528D2FF471352518CDF (XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D* __this, const RuntimeMethod* method) 
{
	{
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_0 = __this->___nameTable;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlName_get_LocalName_mD4DE8695A21CB393834F0DDFDD6D6B610E91A64D (XmlName_t0704430D24D202146901D342E34D878246E14F33* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___localName;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlName_get_HashCode_m329A9FEAF3BDEAA5F1F40CB84F7E51E1BDE58B2D (XmlName_t0704430D24D202146901D342E34D878246E14F33* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___hashCode;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlName_get_Name_m77B33DD36549E6E3E728EA1AD3325E339EC30435 (XmlName_t0704430D24D202146901D342E34D878246E14F33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* V_1 = NULL;
	bool V_2 = false;
	{
		String_t* L_0 = __this->___name;
		if (L_0)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_1 = __this->___prefix;
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_3 = __this->___localName;
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_5 = __this->___prefix;
		String_t* L_6 = __this->___localName;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_5, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_6, NULL);
		V_0 = L_7;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_8 = __this->___ownerDoc;
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_9;
		L_9 = XmlDocument_get_NameTable_m4B913865A24AEA917172F75CBDCE94C81CCB7E2C(L_8, NULL);
		V_1 = L_9;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{
				{
					bool L_10 = V_2;
					if (!L_10)
					{
						goto IL_007e;
					}
				}
				{
					XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_11 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_11, NULL);
				}

IL_007e:
				{
					return;
				}
			}
		});
		try
		{
			{
				XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_12 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_12, (&V_2), NULL);
				String_t* L_13 = __this->___name;
				if (L_13)
				{
					goto IL_0073_1;
				}
			}
			{
				XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_14 = __this->___ownerDoc;
				XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_15;
				L_15 = XmlDocument_get_NameTable_m4B913865A24AEA917172F75CBDCE94C81CCB7E2C(L_14, NULL);
				String_t* L_16 = V_0;
				String_t* L_17;
				L_17 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(4, L_15, L_16);
				__this->___name = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___name), (void*)L_17);
			}

IL_0073_1:
			{
				goto IL_0099;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		String_t* L_18 = __this->___prefix;
		__this->___name = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name), (void*)L_18);
		goto IL_0099;
	}

IL_008d:
	{
		String_t* L_19 = __this->___localName;
		__this->___name = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name), (void*)L_19);
	}

IL_0099:
	{
		String_t* L_20 = __this->___name;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlName_GetHashCode_mC2C5513D62B0E10E556D1241BC33C4AFFAD1DDCD (String_t* ___0_name, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		V_0 = 0;
		String_t* L_0 = ___0_name;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_1 = ___0_name;
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_0029;
	}

IL_0010:
	{
		String_t* L_3 = ___0_name;
		int32_t L_4 = V_1;
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		V_2 = L_5;
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)58))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		Il2CppChar L_9 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((int32_t)(L_8<<7))^(int32_t)L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0029:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}

IL_002d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)(L_13>>((int32_t)17)))));
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)(L_15>>((int32_t)11)))));
		int32_t L_16 = V_0;
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)(L_17>>5))));
	}

IL_0041:
	{
		int32_t L_18 = V_0;
		return L_18;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNamedNodeMap_get_Count_m383C4A91707F8FE7D905507CD35A043A5A7CFF29 (XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C* __this, const RuntimeMethod* method) 
{
	{
		SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* L_0 = (SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0*)(&__this->___nodes);
		int32_t L_1;
		L_1 = SmallXmlNodeList_get_Count_m79F61C89FC8ABD73BCB56938310461EFF1DF14BF(L_0, NULL);
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
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke(const SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0& unmarshaled, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___field != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___field))
		{
			marshaled.___field = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___field));
			(marshaled.___field)->AddRef();
		}
		else
		{
			marshaled.___field = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___field);
		}
	}
	else
	{
		marshaled.___field = NULL;
	}
}
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_back(const SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_pinvoke& marshaled, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___field != NULL)
	{
		unmarshaled.___field = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___field, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___field), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___field, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___field))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___field), Il2CppIUnknown::IID, marshaled.___field);
		}
	}
	else
	{
		unmarshaled.___field = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___field), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_cleanup(SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_pinvoke& marshaled)
{
	if (marshaled.___field != NULL)
	{
		(marshaled.___field)->Release();
		marshaled.___field = NULL;
	}
}
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_com(const SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0& unmarshaled, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_com& marshaled)
{
	if (unmarshaled.___field != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___field))
		{
			marshaled.___field = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___field));
			(marshaled.___field)->AddRef();
		}
		else
		{
			marshaled.___field = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___field);
		}
	}
	else
	{
		marshaled.___field = NULL;
	}
}
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_com_back(const SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_com& marshaled, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___field != NULL)
	{
		unmarshaled.___field = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___field, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___field), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___field, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___field))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___field), Il2CppIUnknown::IID, marshaled.___field);
		}
	}
	else
	{
		unmarshaled.___field = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___field), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_com_cleanup(SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_com& marshaled)
{
	if (marshaled.___field != NULL)
	{
		(marshaled.___field)->Release();
		marshaled.___field = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SmallXmlNodeList_get_Count_m79F61C89FC8ABD73BCB56938310461EFF1DF14BF (SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___field;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___field;
		V_0 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_1, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = V_0;
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(21, L_3);
		return L_4;
	}

IL_0020:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t SmallXmlNodeList_get_Count_m79F61C89FC8ABD73BCB56938310461EFF1DF14BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SmallXmlNodeList_get_Count_m79F61C89FC8ABD73BCB56938310461EFF1DF14BF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmallXmlNodeList_get_Item_mFE828A47A297981D034EFC9244E53B3D34FC9576 (SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___field;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SmallXmlNodeList_get_Item_mFE828A47A297981D034EFC9244E53B3D34FC9576_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->___field;
		V_0 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_2, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = V_0;
		int32_t L_5 = ___0_index;
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25, L_4, L_5);
		return L_6;
	}

IL_002a:
	{
		int32_t L_7 = ___0_index;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SmallXmlNodeList_get_Item_mFE828A47A297981D034EFC9244E53B3D34FC9576_RuntimeMethod_var)));
	}

IL_0038:
	{
		RuntimeObject* L_9 = __this->___field;
		return L_9;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* SmallXmlNodeList_get_Item_mFE828A47A297981D034EFC9244E53B3D34FC9576_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = SmallXmlNodeList_get_Item_mFE828A47A297981D034EFC9244E53B3D34FC9576(_thisAdjusted, ___0_index, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNode_get_Value_m21CB160306F9CE778A143C9D753E99F8EF801592 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNode_get_ParentNode_mF576AC1CF834069B79BF32E497BB1A05E3E4AF63 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* V_0 = NULL;
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* V_1 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->___parentNode;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)9))))
		{
			goto IL_0016;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = __this->___parentNode;
		return L_2;
	}

IL_0016:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = __this->___parentNode;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4;
		L_4 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(13, L_3);
		V_0 = ((XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C*)IsInstClass((RuntimeObject*)L_4, XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C_il2cpp_TypeInfo_var));
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_6 = V_0;
		V_1 = L_6;
	}

IL_002c:
	{
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_7 = V_1;
		if ((!(((RuntimeObject*)(XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C*)L_7) == ((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)__this))))
		{
			goto IL_0037;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = __this->___parentNode;
		return L_8;
	}

IL_0037:
	{
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_9 = V_1;
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_10 = L_9->___next;
		V_1 = L_10;
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_11 = V_1;
		if (!L_11)
		{
			goto IL_0045;
		}
	}
	{
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_12 = V_1;
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_13 = V_0;
		if ((!(((RuntimeObject*)(XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C*)L_12) == ((RuntimeObject*)(XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C*)L_13))))
		{
			goto IL_002c;
		}
	}

IL_0045:
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* XmlNode_get_ChildNodes_m6437D40A51810BEF219E307A3821C80DB48B1FA7 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2* L_0 = (XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2*)il2cpp_codegen_object_new(XmlChildNodes_tBD3126123F4810D8B272B8201C07FE70CDC9C5E2_il2cpp_TypeInfo_var);
		XmlChildNodes__ctor_mE297CC7E680D376A26339D6067C7E434271234B5(L_0, __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNode_get_PreviousSibling_mF0D096FB5E4D09F658F36BF1B5EFFC5B60377045 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNode_get_NextSibling_mB3B3EFD4597AF366F3010C0CC80DC5C5B6885492 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* XmlNode_get_Attributes_m04E6956D2BBF4491EF6310F83E382B1416378EB7 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	{
		return (XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* XmlNode_get_OwnerDocument_m202868042E0CA116D7C337701E1140E16E4624EE (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->___parentNode;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_001b;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = __this->___parentNode;
		return ((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B*)CastclassClass((RuntimeObject*)L_2, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var));
	}

IL_001b:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = __this->___parentNode;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_4;
		L_4 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(12, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNode_get_FirstChild_m5F667C696492597141F3F92F048DB73C5546F1CD (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* V_0 = NULL;
	{
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_0;
		L_0 = VirtualFuncInvoker0< XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* >::Invoke(15, __this);
		V_0 = L_0;
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_2 = V_0;
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_3 = L_2->___next;
		return L_3;
	}

IL_0011:
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNode_get_LastChild_m65D979AFE8805E2D45EF2F2C8DD18727F1286E7E (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	{
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_0;
		L_0 = VirtualFuncInvoker0< XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* >::Invoke(15, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* XmlNode_get_LastNode_mBE8307841D326A20F838DB33C8487C53FD0394A7 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	{
		return (XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNode_get_NamespaceURI_mE894547F6A17FE4B59E2733E1C0BF2046B50A494 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNode_AppendChildText_m8C1493DF2F031942BD58F96DE8EFC365194561A1 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, StringBuilder_t* ___0_builder, const RuntimeMethod* method) 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0;
		L_0 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(13, __this);
		V_0 = L_0;
		goto IL_0054;
	}

IL_0009:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2;
		L_2 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(13, L_1);
		if (L_2)
		{
			goto IL_0046;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = V_0;
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_3);
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0037;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5 = V_0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_5);
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_0037;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = V_0;
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_7);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)13))))
		{
			goto IL_0037;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = V_0;
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_004d;
		}
	}

IL_0037:
	{
		StringBuilder_t* L_11 = ___0_builder;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_12 = V_0;
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(18, L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
		goto IL_004d;
	}

IL_0046:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_15 = V_0;
		StringBuilder_t* L_16 = ___0_builder;
		XmlNode_AppendChildText_m8C1493DF2F031942BD58F96DE8EFC365194561A1(L_15, L_16, NULL);
	}

IL_004d:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_17 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_18;
		L_18 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(10, L_17);
		V_0 = L_18;
	}

IL_0054:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_19 = V_0;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNode_get_InnerText_mC66D119E27E20F4C1E473CB76C8209CDA7262C8D (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0;
		L_0 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(13, __this);
		V_0 = L_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_2;
	}

IL_0010:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = V_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4;
		L_4 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(10, L_3);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5 = V_0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_5);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 3))) > ((uint32_t)1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)13)))) <= ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}

IL_002c:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = V_0;
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_9);
		return L_10;
	}

IL_0033:
	{
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
		V_1 = L_11;
		StringBuilder_t* L_12 = V_1;
		XmlNode_AppendChildText_m8C1493DF2F031942BD58F96DE8EFC365194561A1(__this, L_12, NULL);
		StringBuilder_t* L_13 = V_1;
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_13);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* XmlNode_get_Document_mF9753FAD0D7BFDBDAE7FEA6B196D7CA2982A373C (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(6, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0011;
		}
	}
	{
		return ((XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B*)CastclassClass((RuntimeObject*)__this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var));
	}

IL_0011:
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_1;
		L_1 = VirtualFuncInvoker0< XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* >::Invoke(12, __this);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeChangedEventArgs_get_Action_mD307B00A56DE5422A4EE4915400EC966DF80BD04 (XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___action;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNodeChangedEventArgs_get_Node_mB5FA92B160E0200CF56DFCBAE3FC40F0D5C9B138 (XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->___node;
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
void XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_Multicast(XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_sender, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* currentDelegate = reinterpret_cast<XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenInst(XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_sender, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_e, method);
}
void XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenStatic(XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_sender, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_e, method);
}
void XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenVirtual(XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_sender, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___1_e, const RuntimeMethod* method)
{
	VirtualActionInvoker1< XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenInterface(XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_sender, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___1_e, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenGenericVirtual(XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_sender, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___1_e, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* >::Invoke(method, ___0_sender, ___1_e);
}
void XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenGenericInterface(XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_sender, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___1_e, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* >::Invoke(method, ___0_sender, ___1_e);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeChangedEventHandler__ctor_mD51AE5833F8A9B1EA9DB8DC54FEF3AD64763AED9 (XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeChangedEventHandler_Invoke_m64C7CF87945A0BAEFCED39FC27B1D9F2E31C1480 (XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* __this, RuntimeObject* ___0_sender, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeList_System_IDisposable_Dispose_m755D56C61D93F597B8AFC6FB8BE9677A1973BFA0 (XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker0::Invoke(7, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeList_PrivateDisposeNodeList_m3B13AE65E266052E2824582D77B44124F6C1E520 (XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeList__ctor_m29940F85BF8D20E6FFB9732648DC6DAD10539BD3 (XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EmptyEnumerator_System_Collections_IEnumerator_MoveNext_m1D1ED329E1A11EB09BF11A969309A8C336363E06 (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyEnumerator_System_Collections_IEnumerator_Reset_m60B63D059F4ABACCFF0136AD35A7B858CDC6DAD4 (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EmptyEnumerator_System_Collections_IEnumerator_get_Current_m7F54B324E8E3410019E56521EE61CF97A7CED9B5 (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBD1A9745DCC4D80697D44756437CCB57698AE21)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmptyEnumerator_System_Collections_IEnumerator_get_Current_m7F54B324E8E3410019E56521EE61CF97A7CED9B5_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyEnumerator__ctor_m05DA73C42354A4E549CCA7E9485B294057ABA981 (EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ref_Equal_m60FD3EF02546279815B785F856568B01F60FE1AF (String_t* ___0_strA, String_t* ___1_strB, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_strA;
		String_t* L_1 = ___1_strB;
		return (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))? 1 : 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364 (String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaAnnotated__ctor_m094C7E3CD496FCF801D2A9A68E6D410B634096BC (XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04* __this, const RuntimeMethod* method) 
{
	{
		XmlSchemaObject__ctor_m72D9D6DC7E5B4FBB6ADEB97F688474AF8AC7CADE(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaInfo__ctor_mEEC95F1F490C5D62BF1CC6DB16FE4938E5C1C341 (XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XmlSchemaInfo_Clear_m6EACF6A1BB70B47CBC2865B8CCC74BEA67F96FFE(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaInfo__ctor_mEB56BD698D44A8AAA47668230E0CDFE8463ABD08 (XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B* __this, int32_t ___0_validity, const RuntimeMethod* method) 
{
	{
		XmlSchemaInfo__ctor_mEEC95F1F490C5D62BF1CC6DB16FE4938E5C1C341(__this, NULL);
		int32_t L_0 = ___0_validity;
		__this->___validity = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaInfo_Clear_m6EACF6A1BB70B47CBC2865B8CCC74BEA67F96FFE (XmlSchemaInfo_t6686870BCAA40A8EFD7987976F386DD40DD5323B* __this, const RuntimeMethod* method) 
{
	{
		__this->___isNil = (bool)0;
		__this->___isDefault = (bool)0;
		__this->___schemaType = (XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___schemaType), (void*)(XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF*)NULL);
		__this->___schemaElement = (XmlSchemaElement_t24D5940E4EB4E5FFDAD1772AFBD7A83CD992C970*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___schemaElement), (void*)(XmlSchemaElement_t24D5940E4EB4E5FFDAD1772AFBD7A83CD992C970*)NULL);
		__this->___schemaAttribute = (XmlSchemaAttribute_t04AF3100B886867E3F0495E22F44305EDEC5550F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___schemaAttribute), (void*)(XmlSchemaAttribute_t04AF3100B886867E3F0495E22F44305EDEC5550F*)NULL);
		__this->___memberType = (XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___memberType), (void*)(XmlSchemaSimpleType_tA52BBE2D61DAD61BD3FCDF40E1CD9F41388F7FA8*)NULL);
		__this->___validity = 0;
		__this->___contentType = 1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaObject__ctor_m72D9D6DC7E5B4FBB6ADEB97F688474AF8AC7CADE (XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaParticle__ctor_mDF61E3EE9B7D4102592DA20D02619EBF4D04F9A1 (XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___One;
		__this->___minOccurs = L_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___One;
		__this->___maxOccurs = L_1;
		XmlSchemaAnnotated__ctor_m094C7E3CD496FCF801D2A9A68E6D410B634096BC(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSchemaParticle__cctor_mC201652B51B111B023A14925C46E82E714A1CA0F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyParticle_tB70737785BCC28912378BA174C18956FF658454A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EmptyParticle_tB70737785BCC28912378BA174C18956FF658454A* L_0 = (EmptyParticle_tB70737785BCC28912378BA174C18956FF658454A*)il2cpp_codegen_object_new(EmptyParticle_tB70737785BCC28912378BA174C18956FF658454A_il2cpp_TypeInfo_var);
		EmptyParticle__ctor_m7FE5C70CB31BBBE2FAF38D403AC196F379DAC079(L_0, NULL);
		((XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE_StaticFields*)il2cpp_codegen_static_fields_for(XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE_il2cpp_TypeInfo_var))->___Empty = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE_StaticFields*)il2cpp_codegen_static_fields_for(XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE_il2cpp_TypeInfo_var))->___Empty), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyParticle__ctor_m7FE5C70CB31BBBE2FAF38D403AC196F379DAC079 (EmptyParticle_tB70737785BCC28912378BA174C18956FF658454A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlSchemaParticle_t9A7544A3F66C6E4B8900456CF705A6F9D95655EE_il2cpp_TypeInfo_var);
		XmlSchemaParticle__ctor_mDF61E3EE9B7D4102592DA20D02619EBF4D04F9A1(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlName_get_HashCode_m329A9FEAF3BDEAA5F1F40CB84F7E51E1BDE58B2D_inline (XmlName_t0704430D24D202146901D342E34D878246E14F33* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___hashCode;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlName_get_LocalName_mD4DE8695A21CB393834F0DDFDD6D6B610E91A64D_inline (XmlName_t0704430D24D202146901D342E34D878246E14F33* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___localName;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XmlImplementation_get_NameTable_m8951702F59619310BD4A9528D2FF471352518CDF_inline (XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D* __this, const RuntimeMethod* method) 
{
	{
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_0 = __this->___nameTable;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNodeChangedEventArgs_get_Node_mB5FA92B160E0200CF56DFCBAE3FC40F0D5C9B138_inline (XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->___node;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlNodeChangedEventArgs_get_Action_mD307B00A56DE5422A4EE4915400EC966DF80BD04_inline (XmlNodeChangedEventArgs_t965F2E02F8433933D197A0D1AF1EFEEDB524DF3A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___action;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlElementList_get_ChangeCount_m6C653A302721EA1D8C41326E169F2ED54CD9EE34_inline (XmlElementList_tFE0D5337668FDE708796D7FDB669AE4A290CAB57* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___changeCount;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
