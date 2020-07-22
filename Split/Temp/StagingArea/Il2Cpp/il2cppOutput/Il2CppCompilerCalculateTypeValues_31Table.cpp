#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Assets.Scripts.Helpers.FPSCounter
struct FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C;
// Assets.Scripts.Water.WaterPropertyBlockSetter
struct WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E;
// CollisionManager
struct CollisionManager_tAC8C949DBFFE56FED4CC9A87394AAD2FFBD0AD7B;
// Score
struct Score_t72F7EE757BE7D4C7846803B3072753760AB6427F;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13;
// UnityEngine.Motion
struct Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef FPSCOUNTER_T25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C_H
#define FPSCOUNTER_T25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Helpers.FPSCounter
struct  FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C  : public RuntimeObject
{
public:
	// System.Single[] Assets.Scripts.Helpers.FPSCounter::fpsData
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___fpsData_2;
	// System.Single[] Assets.Scripts.Helpers.FPSCounter::deltaTimeData
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___deltaTimeData_3;
	// System.Single Assets.Scripts.Helpers.FPSCounter::timer
	float ___timer_4;
	// System.Int32 Assets.Scripts.Helpers.FPSCounter::index
	int32_t ___index_5;
	// System.Int32 Assets.Scripts.Helpers.FPSCounter::lastFrameCount
	int32_t ___lastFrameCount_6;
	// System.Single Assets.Scripts.Helpers.FPSCounter::lastTime
	float ___lastTime_7;

public:
	inline static int32_t get_offset_of_fpsData_2() { return static_cast<int32_t>(offsetof(FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C, ___fpsData_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_fpsData_2() const { return ___fpsData_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_fpsData_2() { return &___fpsData_2; }
	inline void set_fpsData_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___fpsData_2 = value;
		Il2CppCodeGenWriteBarrier((&___fpsData_2), value);
	}

	inline static int32_t get_offset_of_deltaTimeData_3() { return static_cast<int32_t>(offsetof(FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C, ___deltaTimeData_3)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_deltaTimeData_3() const { return ___deltaTimeData_3; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_deltaTimeData_3() { return &___deltaTimeData_3; }
	inline void set_deltaTimeData_3(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___deltaTimeData_3 = value;
		Il2CppCodeGenWriteBarrier((&___deltaTimeData_3), value);
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_lastFrameCount_6() { return static_cast<int32_t>(offsetof(FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C, ___lastFrameCount_6)); }
	inline int32_t get_lastFrameCount_6() const { return ___lastFrameCount_6; }
	inline int32_t* get_address_of_lastFrameCount_6() { return &___lastFrameCount_6; }
	inline void set_lastFrameCount_6(int32_t value)
	{
		___lastFrameCount_6 = value;
	}

	inline static int32_t get_offset_of_lastTime_7() { return static_cast<int32_t>(offsetof(FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C, ___lastTime_7)); }
	inline float get_lastTime_7() const { return ___lastTime_7; }
	inline float* get_address_of_lastTime_7() { return &___lastTime_7; }
	inline void set_lastTime_7(float value)
	{
		___lastTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPSCOUNTER_T25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C_H
#ifndef ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#define ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef STYLEDMONOHIDESCRIPTFIELD_TE7F643756B129DEA3BFA57B27B1188B5C058D655_H
#define STYLEDMONOHIDESCRIPTFIELD_TE7F643756B129DEA3BFA57B27B1188B5C058D655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledMonoHideScriptField
struct  StyledMonoHideScriptField_tE7F643756B129DEA3BFA57B27B1188B5C058D655  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDMONOHIDESCRIPTFIELD_TE7F643756B129DEA3BFA57B27B1188B5C058D655_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#define PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef STYLEDBANNER_TBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0_H
#define STYLEDBANNER_TBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledBanner
struct  StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Single Boxophobic.StyledGUI.StyledBanner::colorR
	float ___colorR_0;
	// System.Single Boxophobic.StyledGUI.StyledBanner::colorG
	float ___colorG_1;
	// System.Single Boxophobic.StyledGUI.StyledBanner::colorB
	float ___colorB_2;
	// System.String Boxophobic.StyledGUI.StyledBanner::title
	String_t* ___title_3;
	// System.String Boxophobic.StyledGUI.StyledBanner::subtitle
	String_t* ___subtitle_4;
	// System.Int32 Boxophobic.StyledGUI.StyledBanner::spaceTop
	int32_t ___spaceTop_5;
	// System.Int32 Boxophobic.StyledGUI.StyledBanner::spaceBottom
	int32_t ___spaceBottom_6;
	// System.String Boxophobic.StyledGUI.StyledBanner::helpURL
	String_t* ___helpURL_7;

public:
	inline static int32_t get_offset_of_colorR_0() { return static_cast<int32_t>(offsetof(StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0, ___colorR_0)); }
	inline float get_colorR_0() const { return ___colorR_0; }
	inline float* get_address_of_colorR_0() { return &___colorR_0; }
	inline void set_colorR_0(float value)
	{
		___colorR_0 = value;
	}

	inline static int32_t get_offset_of_colorG_1() { return static_cast<int32_t>(offsetof(StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0, ___colorG_1)); }
	inline float get_colorG_1() const { return ___colorG_1; }
	inline float* get_address_of_colorG_1() { return &___colorG_1; }
	inline void set_colorG_1(float value)
	{
		___colorG_1 = value;
	}

	inline static int32_t get_offset_of_colorB_2() { return static_cast<int32_t>(offsetof(StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0, ___colorB_2)); }
	inline float get_colorB_2() const { return ___colorB_2; }
	inline float* get_address_of_colorB_2() { return &___colorB_2; }
	inline void set_colorB_2(float value)
	{
		___colorB_2 = value;
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0, ___title_3)); }
	inline String_t* get_title_3() const { return ___title_3; }
	inline String_t** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(String_t* value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier((&___title_3), value);
	}

	inline static int32_t get_offset_of_subtitle_4() { return static_cast<int32_t>(offsetof(StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0, ___subtitle_4)); }
	inline String_t* get_subtitle_4() const { return ___subtitle_4; }
	inline String_t** get_address_of_subtitle_4() { return &___subtitle_4; }
	inline void set_subtitle_4(String_t* value)
	{
		___subtitle_4 = value;
		Il2CppCodeGenWriteBarrier((&___subtitle_4), value);
	}

	inline static int32_t get_offset_of_spaceTop_5() { return static_cast<int32_t>(offsetof(StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0, ___spaceTop_5)); }
	inline int32_t get_spaceTop_5() const { return ___spaceTop_5; }
	inline int32_t* get_address_of_spaceTop_5() { return &___spaceTop_5; }
	inline void set_spaceTop_5(int32_t value)
	{
		___spaceTop_5 = value;
	}

	inline static int32_t get_offset_of_spaceBottom_6() { return static_cast<int32_t>(offsetof(StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0, ___spaceBottom_6)); }
	inline int32_t get_spaceBottom_6() const { return ___spaceBottom_6; }
	inline int32_t* get_address_of_spaceBottom_6() { return &___spaceBottom_6; }
	inline void set_spaceBottom_6(int32_t value)
	{
		___spaceBottom_6 = value;
	}

	inline static int32_t get_offset_of_helpURL_7() { return static_cast<int32_t>(offsetof(StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0, ___helpURL_7)); }
	inline String_t* get_helpURL_7() const { return ___helpURL_7; }
	inline String_t** get_address_of_helpURL_7() { return &___helpURL_7; }
	inline void set_helpURL_7(String_t* value)
	{
		___helpURL_7 = value;
		Il2CppCodeGenWriteBarrier((&___helpURL_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDBANNER_TBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0_H
#ifndef STYLEDCATEGORY_T588109C382013534565CD8D9C1A9E2B1B7A34FA7_H
#define STYLEDCATEGORY_T588109C382013534565CD8D9C1A9E2B1B7A34FA7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledCategory
struct  StyledCategory_t588109C382013534565CD8D9C1A9E2B1B7A34FA7  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.String Boxophobic.StyledGUI.StyledCategory::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(StyledCategory_t588109C382013534565CD8D9C1A9E2B1B7A34FA7, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDCATEGORY_T588109C382013534565CD8D9C1A9E2B1B7A34FA7_H
#ifndef STYLEDINTERACTIVE_TBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8_H
#define STYLEDINTERACTIVE_TBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledInteractive
struct  StyledInteractive_tBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Int32 Boxophobic.StyledGUI.StyledInteractive::value
	int32_t ___value_0;
	// System.String Boxophobic.StyledGUI.StyledInteractive::keyword
	String_t* ___keyword_1;
	// System.Int32 Boxophobic.StyledGUI.StyledInteractive::type
	int32_t ___type_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(StyledInteractive_tBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_keyword_1() { return static_cast<int32_t>(offsetof(StyledInteractive_tBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8, ___keyword_1)); }
	inline String_t* get_keyword_1() const { return ___keyword_1; }
	inline String_t** get_address_of_keyword_1() { return &___keyword_1; }
	inline void set_keyword_1(String_t* value)
	{
		___keyword_1 = value;
		Il2CppCodeGenWriteBarrier((&___keyword_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(StyledInteractive_tBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDINTERACTIVE_TBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8_H
#ifndef STYLEDMESSAGE_T77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3_H
#define STYLEDMESSAGE_T77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledMessage
struct  StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.String Boxophobic.StyledGUI.StyledMessage::Type
	String_t* ___Type_0;
	// System.String Boxophobic.StyledGUI.StyledMessage::Message
	String_t* ___Message_1;
	// System.Single Boxophobic.StyledGUI.StyledMessage::Top
	float ___Top_2;
	// System.Single Boxophobic.StyledGUI.StyledMessage::Down
	float ___Down_3;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3, ___Type_0)); }
	inline String_t* get_Type_0() const { return ___Type_0; }
	inline String_t** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(String_t* value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((&___Message_1), value);
	}

	inline static int32_t get_offset_of_Top_2() { return static_cast<int32_t>(offsetof(StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3, ___Top_2)); }
	inline float get_Top_2() const { return ___Top_2; }
	inline float* get_address_of_Top_2() { return &___Top_2; }
	inline void set_Top_2(float value)
	{
		___Top_2 = value;
	}

	inline static int32_t get_offset_of_Down_3() { return static_cast<int32_t>(offsetof(StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3, ___Down_3)); }
	inline float get_Down_3() const { return ___Down_3; }
	inline float* get_address_of_Down_3() { return &___Down_3; }
	inline void set_Down_3(float value)
	{
		___Down_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDMESSAGE_T77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3_H
#ifndef STYLEDPOPUPARRAY_T3F54D6B4BF32153FD9520C4416C787964F646943_H
#define STYLEDPOPUPARRAY_T3F54D6B4BF32153FD9520C4416C787964F646943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledPopupArray
struct  StyledPopupArray_t3F54D6B4BF32153FD9520C4416C787964F646943  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.String Boxophobic.StyledGUI.StyledPopupArray::array
	String_t* ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(StyledPopupArray_t3F54D6B4BF32153FD9520C4416C787964F646943, ___array_0)); }
	inline String_t* get_array_0() const { return ___array_0; }
	inline String_t** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(String_t* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDPOPUPARRAY_T3F54D6B4BF32153FD9520C4416C787964F646943_H
#ifndef STYLEDPOPUPLAYERS_T3D8B143092102D7455E360267C11856420FB5E29_H
#define STYLEDPOPUPLAYERS_T3D8B143092102D7455E360267C11856420FB5E29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledPopupLayers
struct  StyledPopupLayers_t3D8B143092102D7455E360267C11856420FB5E29  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDPOPUPLAYERS_T3D8B143092102D7455E360267C11856420FB5E29_H
#ifndef STYLEDRANGEOPTIONS_T50C62FEA487212882D29F61D74340901F2CF12B8_H
#define STYLEDRANGEOPTIONS_T50C62FEA487212882D29F61D74340901F2CF12B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledRangeOptions
struct  StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Boolean Boxophobic.StyledGUI.StyledRangeOptions::simple
	bool ___simple_0;
	// System.Single Boxophobic.StyledGUI.StyledRangeOptions::min
	float ___min_1;
	// System.Single Boxophobic.StyledGUI.StyledRangeOptions::max
	float ___max_2;
	// System.String Boxophobic.StyledGUI.StyledRangeOptions::displayLabel
	String_t* ___displayLabel_3;
	// System.String[] Boxophobic.StyledGUI.StyledRangeOptions::options
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___options_4;

public:
	inline static int32_t get_offset_of_simple_0() { return static_cast<int32_t>(offsetof(StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8, ___simple_0)); }
	inline bool get_simple_0() const { return ___simple_0; }
	inline bool* get_address_of_simple_0() { return &___simple_0; }
	inline void set_simple_0(bool value)
	{
		___simple_0 = value;
	}

	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8, ___min_1)); }
	inline float get_min_1() const { return ___min_1; }
	inline float* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(float value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8, ___max_2)); }
	inline float get_max_2() const { return ___max_2; }
	inline float* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(float value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_displayLabel_3() { return static_cast<int32_t>(offsetof(StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8, ___displayLabel_3)); }
	inline String_t* get_displayLabel_3() const { return ___displayLabel_3; }
	inline String_t** get_address_of_displayLabel_3() { return &___displayLabel_3; }
	inline void set_displayLabel_3(String_t* value)
	{
		___displayLabel_3 = value;
		Il2CppCodeGenWriteBarrier((&___displayLabel_3), value);
	}

	inline static int32_t get_offset_of_options_4() { return static_cast<int32_t>(offsetof(StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8, ___options_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_options_4() const { return ___options_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_options_4() { return &___options_4; }
	inline void set_options_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___options_4 = value;
		Il2CppCodeGenWriteBarrier((&___options_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDRANGEOPTIONS_T50C62FEA487212882D29F61D74340901F2CF12B8_H
#ifndef STYLEDSPACE_T6A34D005EA6EFE11BC3CE384B37BB7760DB8F3BF_H
#define STYLEDSPACE_T6A34D005EA6EFE11BC3CE384B37BB7760DB8F3BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledSpace
struct  StyledSpace_t6A34D005EA6EFE11BC3CE384B37BB7760DB8F3BF  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.Int32 Boxophobic.StyledGUI.StyledSpace::space
	int32_t ___space_0;

public:
	inline static int32_t get_offset_of_space_0() { return static_cast<int32_t>(offsetof(StyledSpace_t6A34D005EA6EFE11BC3CE384B37BB7760DB8F3BF, ___space_0)); }
	inline int32_t get_space_0() const { return ___space_0; }
	inline int32_t* get_address_of_space_0() { return &___space_0; }
	inline void set_space_0(int32_t value)
	{
		___space_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDSPACE_T6A34D005EA6EFE11BC3CE384B37BB7760DB8F3BF_H
#ifndef STYLEDTEXTUREPREVIEW_TB9D3944AF64520F1C89802B526413D6A0A200AF8_H
#define STYLEDTEXTUREPREVIEW_TB9D3944AF64520F1C89802B526413D6A0A200AF8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.StyledGUI.StyledTexturePreview
struct  StyledTexturePreview_tB9D3944AF64520F1C89802B526413D6A0A200AF8  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLEDTEXTUREPREVIEW_TB9D3944AF64520F1C89802B526413D6A0A200AF8_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef SETTINGSDATA_TD5CF7DB5F05F5D71F1E4306BB9F8DEFAEF51AE27_H
#define SETTINGSDATA_TD5CF7DB5F05F5D71F1E4306BB9F8DEFAEF51AE27_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boxophobic.Utils.SettingsData
struct  SettingsData_tD5CF7DB5F05F5D71F1E4306BB9F8DEFAEF51AE27  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.String Boxophobic.Utils.SettingsData::data
	String_t* ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(SettingsData_tD5CF7DB5F05F5D71F1E4306BB9F8DEFAEF51AE27, ___data_4)); }
	inline String_t* get_data_4() const { return ___data_4; }
	inline String_t** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(String_t* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((&___data_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSDATA_TD5CF7DB5F05F5D71F1E4306BB9F8DEFAEF51AE27_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef ANIMATIONSTARTER_T970D5C5992388D67BEA5A40F47B9B52E23263BAA_H
#define ANIMATIONSTARTER_T970D5C5992388D67BEA5A40F47B9B52E23263BAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.MobileOptimizedWater.Scripts.AnimationStarter
struct  AnimationStarter_t970D5C5992388D67BEA5A40F47B9B52E23263BAA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Animator Assets.MobileOptimizedWater.Scripts.AnimationStarter::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_4;
	// UnityEngine.Motion Assets.MobileOptimizedWater.Scripts.AnimationStarter::animation
	Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * ___animation_5;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(AnimationStarter_t970D5C5992388D67BEA5A40F47B9B52E23263BAA, ___animator_4)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_4() const { return ___animator_4; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((&___animator_4), value);
	}

	inline static int32_t get_offset_of_animation_5() { return static_cast<int32_t>(offsetof(AnimationStarter_t970D5C5992388D67BEA5A40F47B9B52E23263BAA, ___animation_5)); }
	inline Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * get_animation_5() const { return ___animation_5; }
	inline Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F ** get_address_of_animation_5() { return &___animation_5; }
	inline void set_animation_5(Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * value)
	{
		___animation_5 = value;
		Il2CppCodeGenWriteBarrier((&___animation_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTARTER_T970D5C5992388D67BEA5A40F47B9B52E23263BAA_H
#ifndef CAMERADEPTHSLIDER_T94708495F775345CDB07C60D7C479F9BC405836A_H
#define CAMERADEPTHSLIDER_T94708495F775345CDB07C60D7C479F9BC405836A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.MobileOptimizedWater.Scripts.CameraDepthSlider
struct  CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Slider Assets.MobileOptimizedWater.Scripts.CameraDepthSlider::slider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___slider_4;
	// UnityEngine.Transform Assets.MobileOptimizedWater.Scripts.CameraDepthSlider::cameraTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform_5;
	// System.Single Assets.MobileOptimizedWater.Scripts.CameraDepthSlider::minDistance
	float ___minDistance_6;
	// System.Single Assets.MobileOptimizedWater.Scripts.CameraDepthSlider::maxDistance
	float ___maxDistance_7;
	// System.Single Assets.MobileOptimizedWater.Scripts.CameraDepthSlider::scrollDelta
	float ___scrollDelta_8;
	// System.Single Assets.MobileOptimizedWater.Scripts.CameraDepthSlider::scrollSpeed
	float ___scrollSpeed_9;
	// UnityEngine.Vector3 Assets.MobileOptimizedWater.Scripts.CameraDepthSlider::cameraDirectionToRoot
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cameraDirectionToRoot_10;
	// System.Single Assets.MobileOptimizedWater.Scripts.CameraDepthSlider::currentScrollSpeed
	float ___currentScrollSpeed_11;
	// System.Single Assets.MobileOptimizedWater.Scripts.CameraDepthSlider::currentValue
	float ___currentValue_12;

public:
	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A, ___slider_4)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_slider_4() const { return ___slider_4; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier((&___slider_4), value);
	}

	inline static int32_t get_offset_of_cameraTransform_5() { return static_cast<int32_t>(offsetof(CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A, ___cameraTransform_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_cameraTransform_5() const { return ___cameraTransform_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_cameraTransform_5() { return &___cameraTransform_5; }
	inline void set_cameraTransform_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___cameraTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___cameraTransform_5), value);
	}

	inline static int32_t get_offset_of_minDistance_6() { return static_cast<int32_t>(offsetof(CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A, ___minDistance_6)); }
	inline float get_minDistance_6() const { return ___minDistance_6; }
	inline float* get_address_of_minDistance_6() { return &___minDistance_6; }
	inline void set_minDistance_6(float value)
	{
		___minDistance_6 = value;
	}

	inline static int32_t get_offset_of_maxDistance_7() { return static_cast<int32_t>(offsetof(CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A, ___maxDistance_7)); }
	inline float get_maxDistance_7() const { return ___maxDistance_7; }
	inline float* get_address_of_maxDistance_7() { return &___maxDistance_7; }
	inline void set_maxDistance_7(float value)
	{
		___maxDistance_7 = value;
	}

	inline static int32_t get_offset_of_scrollDelta_8() { return static_cast<int32_t>(offsetof(CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A, ___scrollDelta_8)); }
	inline float get_scrollDelta_8() const { return ___scrollDelta_8; }
	inline float* get_address_of_scrollDelta_8() { return &___scrollDelta_8; }
	inline void set_scrollDelta_8(float value)
	{
		___scrollDelta_8 = value;
	}

	inline static int32_t get_offset_of_scrollSpeed_9() { return static_cast<int32_t>(offsetof(CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A, ___scrollSpeed_9)); }
	inline float get_scrollSpeed_9() const { return ___scrollSpeed_9; }
	inline float* get_address_of_scrollSpeed_9() { return &___scrollSpeed_9; }
	inline void set_scrollSpeed_9(float value)
	{
		___scrollSpeed_9 = value;
	}

	inline static int32_t get_offset_of_cameraDirectionToRoot_10() { return static_cast<int32_t>(offsetof(CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A, ___cameraDirectionToRoot_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_cameraDirectionToRoot_10() const { return ___cameraDirectionToRoot_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_cameraDirectionToRoot_10() { return &___cameraDirectionToRoot_10; }
	inline void set_cameraDirectionToRoot_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___cameraDirectionToRoot_10 = value;
	}

	inline static int32_t get_offset_of_currentScrollSpeed_11() { return static_cast<int32_t>(offsetof(CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A, ___currentScrollSpeed_11)); }
	inline float get_currentScrollSpeed_11() const { return ___currentScrollSpeed_11; }
	inline float* get_address_of_currentScrollSpeed_11() { return &___currentScrollSpeed_11; }
	inline void set_currentScrollSpeed_11(float value)
	{
		___currentScrollSpeed_11 = value;
	}

	inline static int32_t get_offset_of_currentValue_12() { return static_cast<int32_t>(offsetof(CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A, ___currentValue_12)); }
	inline float get_currentValue_12() const { return ___currentValue_12; }
	inline float* get_address_of_currentValue_12() { return &___currentValue_12; }
	inline void set_currentValue_12(float value)
	{
		___currentValue_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEPTHSLIDER_T94708495F775345CDB07C60D7C479F9BC405836A_H
#ifndef CAMERAROTATOR_TA3F0FFB6AC80EC91D7485B748A3DCB6513D151F6_H
#define CAMERAROTATOR_TA3F0FFB6AC80EC91D7485B748A3DCB6513D151F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.MobileOptimizedWater.Scripts.CameraRotator
struct  CameraRotator_tA3F0FFB6AC80EC91D7485B748A3DCB6513D151F6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Assets.MobileOptimizedWater.Scripts.CameraRotator::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(CameraRotator_tA3F0FFB6AC80EC91D7485B748A3DCB6513D151F6, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAROTATOR_TA3F0FFB6AC80EC91D7485B748A3DCB6513D151F6_H
#ifndef FPSUI_TE43EB6E42AE3627963AF74C07364704FC6AE2ADD_H
#define FPSUI_TE43EB6E42AE3627963AF74C07364704FC6AE2ADD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.MobileOptimizedWater.Scripts.FPSUI
struct  FPSUI_tE43EB6E42AE3627963AF74C07364704FC6AE2ADD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text Assets.MobileOptimizedWater.Scripts.FPSUI::fpsText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___fpsText_4;
	// Assets.Scripts.Helpers.FPSCounter Assets.MobileOptimizedWater.Scripts.FPSUI::fpsCounter
	FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C * ___fpsCounter_5;

public:
	inline static int32_t get_offset_of_fpsText_4() { return static_cast<int32_t>(offsetof(FPSUI_tE43EB6E42AE3627963AF74C07364704FC6AE2ADD, ___fpsText_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_fpsText_4() const { return ___fpsText_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_fpsText_4() { return &___fpsText_4; }
	inline void set_fpsText_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___fpsText_4 = value;
		Il2CppCodeGenWriteBarrier((&___fpsText_4), value);
	}

	inline static int32_t get_offset_of_fpsCounter_5() { return static_cast<int32_t>(offsetof(FPSUI_tE43EB6E42AE3627963AF74C07364704FC6AE2ADD, ___fpsCounter_5)); }
	inline FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C * get_fpsCounter_5() const { return ___fpsCounter_5; }
	inline FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C ** get_address_of_fpsCounter_5() { return &___fpsCounter_5; }
	inline void set_fpsCounter_5(FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C * value)
	{
		___fpsCounter_5 = value;
		Il2CppCodeGenWriteBarrier((&___fpsCounter_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPSUI_TE43EB6E42AE3627963AF74C07364704FC6AE2ADD_H
#ifndef TOUCHROTATOR_T4EA574891466792313B11C50100A0D8DA0C20F10_H
#define TOUCHROTATOR_T4EA574891466792313B11C50100A0D8DA0C20F10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.MobileOptimizedWater.Scripts.TouchRotator
struct  TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform Assets.MobileOptimizedWater.Scripts.TouchRotator::cameraRoot
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraRoot_4;
	// System.Single Assets.MobileOptimizedWater.Scripts.TouchRotator::speed
	float ___speed_5;
	// System.Single Assets.MobileOptimizedWater.Scripts.TouchRotator::mouseSpeed
	float ___mouseSpeed_6;
	// UnityEngine.Vector3 Assets.MobileOptimizedWater.Scripts.TouchRotator::prevMousePos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___prevMousePos_7;

public:
	inline static int32_t get_offset_of_cameraRoot_4() { return static_cast<int32_t>(offsetof(TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10, ___cameraRoot_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_cameraRoot_4() const { return ___cameraRoot_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_cameraRoot_4() { return &___cameraRoot_4; }
	inline void set_cameraRoot_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___cameraRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&___cameraRoot_4), value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_mouseSpeed_6() { return static_cast<int32_t>(offsetof(TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10, ___mouseSpeed_6)); }
	inline float get_mouseSpeed_6() const { return ___mouseSpeed_6; }
	inline float* get_address_of_mouseSpeed_6() { return &___mouseSpeed_6; }
	inline void set_mouseSpeed_6(float value)
	{
		___mouseSpeed_6 = value;
	}

	inline static int32_t get_offset_of_prevMousePos_7() { return static_cast<int32_t>(offsetof(TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10, ___prevMousePos_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_prevMousePos_7() const { return ___prevMousePos_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_prevMousePos_7() { return &___prevMousePos_7; }
	inline void set_prevMousePos_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___prevMousePos_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHROTATOR_T4EA574891466792313B11C50100A0D8DA0C20F10_H
#ifndef WATERAREA_TFC245D450E106DA7F622935734389DA0486D7A51_H
#define WATERAREA_TFC245D450E106DA7F622935734389DA0486D7A51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Water.WaterArea
struct  WaterArea_tFC245D450E106DA7F622935734389DA0486D7A51  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Assets.Scripts.Water.WaterPropertyBlockSetter Assets.Scripts.Water.WaterArea::waterProperties
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E * ___waterProperties_4;

public:
	inline static int32_t get_offset_of_waterProperties_4() { return static_cast<int32_t>(offsetof(WaterArea_tFC245D450E106DA7F622935734389DA0486D7A51, ___waterProperties_4)); }
	inline WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E * get_waterProperties_4() const { return ___waterProperties_4; }
	inline WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E ** get_address_of_waterProperties_4() { return &___waterProperties_4; }
	inline void set_waterProperties_4(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E * value)
	{
		___waterProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___waterProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATERAREA_TFC245D450E106DA7F622935734389DA0486D7A51_H
#ifndef WATERMATERIALSWITCHER_T2B2E760C0FD19277C30A7E511B646829CF4B96FF_H
#define WATERMATERIALSWITCHER_T2B2E760C0FD19277C30A7E511B646829CF4B96FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Water.WaterMaterialSwitcher
struct  WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Renderer Assets.Scripts.Water.WaterMaterialSwitcher::renderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___renderer_4;
	// UnityEngine.Material Assets.Scripts.Water.WaterMaterialSwitcher::waterMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___waterMaterial_5;
	// UnityEngine.Material Assets.Scripts.Water.WaterMaterialSwitcher::diffuseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___diffuseMaterial_6;
	// UnityEngine.MaterialPropertyBlock Assets.Scripts.Water.WaterMaterialSwitcher::defaulPropertyBlock
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___defaulPropertyBlock_7;

public:
	inline static int32_t get_offset_of_renderer_4() { return static_cast<int32_t>(offsetof(WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF, ___renderer_4)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_renderer_4() const { return ___renderer_4; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_renderer_4() { return &___renderer_4; }
	inline void set_renderer_4(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___renderer_4 = value;
		Il2CppCodeGenWriteBarrier((&___renderer_4), value);
	}

	inline static int32_t get_offset_of_waterMaterial_5() { return static_cast<int32_t>(offsetof(WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF, ___waterMaterial_5)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_waterMaterial_5() const { return ___waterMaterial_5; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_waterMaterial_5() { return &___waterMaterial_5; }
	inline void set_waterMaterial_5(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___waterMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___waterMaterial_5), value);
	}

	inline static int32_t get_offset_of_diffuseMaterial_6() { return static_cast<int32_t>(offsetof(WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF, ___diffuseMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_diffuseMaterial_6() const { return ___diffuseMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_diffuseMaterial_6() { return &___diffuseMaterial_6; }
	inline void set_diffuseMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___diffuseMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___diffuseMaterial_6), value);
	}

	inline static int32_t get_offset_of_defaulPropertyBlock_7() { return static_cast<int32_t>(offsetof(WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF, ___defaulPropertyBlock_7)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_defaulPropertyBlock_7() const { return ___defaulPropertyBlock_7; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_defaulPropertyBlock_7() { return &___defaulPropertyBlock_7; }
	inline void set_defaulPropertyBlock_7(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___defaulPropertyBlock_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaulPropertyBlock_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATERMATERIALSWITCHER_T2B2E760C0FD19277C30A7E511B646829CF4B96FF_H
#ifndef WATERPROPERTYBLOCKSETTER_T5705627E3E22EB8EF855FF1513FBED34234F453E_H
#define WATERPROPERTYBLOCKSETTER_T5705627E3E22EB8EF855FF1513FBED34234F453E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Water.WaterPropertyBlockSetter
struct  WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Renderer[] Assets.Scripts.Water.WaterPropertyBlockSetter::waterRenderers
	RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* ___waterRenderers_4;
	// UnityEngine.Color Assets.Scripts.Water.WaterPropertyBlockSetter::waterColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___waterColor_5;
	// UnityEngine.Texture Assets.Scripts.Water.WaterPropertyBlockSetter::waterTex
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___waterTex_6;
	// UnityEngine.Vector2 Assets.Scripts.Water.WaterPropertyBlockSetter::waterTile
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___waterTile_7;
	// System.Single Assets.Scripts.Water.WaterPropertyBlockSetter::textureVisibility
	float ___textureVisibility_8;
	// UnityEngine.Texture Assets.Scripts.Water.WaterPropertyBlockSetter::distortionTex
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___distortionTex_9;
	// UnityEngine.Vector2 Assets.Scripts.Water.WaterPropertyBlockSetter::distortionTile
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___distortionTile_10;
	// System.Single Assets.Scripts.Water.WaterPropertyBlockSetter::waterHeight
	float ___waterHeight_11;
	// System.Single Assets.Scripts.Water.WaterPropertyBlockSetter::waterDeep
	float ___waterDeep_12;
	// System.Single Assets.Scripts.Water.WaterPropertyBlockSetter::waterDepthParam
	float ___waterDepthParam_13;
	// System.Single Assets.Scripts.Water.WaterPropertyBlockSetter::waterMinAlpha
	float ___waterMinAlpha_14;
	// UnityEngine.Color Assets.Scripts.Water.WaterPropertyBlockSetter::borderColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___borderColor_15;
	// System.Single Assets.Scripts.Water.WaterPropertyBlockSetter::borderWidth
	float ___borderWidth_16;
	// UnityEngine.Vector2 Assets.Scripts.Water.WaterPropertyBlockSetter::moveDirection
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___moveDirection_17;
	// UnityEngine.MaterialPropertyBlock Assets.Scripts.Water.WaterPropertyBlockSetter::materialPropertyBlock
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___materialPropertyBlock_18;

public:
	inline static int32_t get_offset_of_waterRenderers_4() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___waterRenderers_4)); }
	inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* get_waterRenderers_4() const { return ___waterRenderers_4; }
	inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93** get_address_of_waterRenderers_4() { return &___waterRenderers_4; }
	inline void set_waterRenderers_4(RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* value)
	{
		___waterRenderers_4 = value;
		Il2CppCodeGenWriteBarrier((&___waterRenderers_4), value);
	}

	inline static int32_t get_offset_of_waterColor_5() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___waterColor_5)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_waterColor_5() const { return ___waterColor_5; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_waterColor_5() { return &___waterColor_5; }
	inline void set_waterColor_5(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___waterColor_5 = value;
	}

	inline static int32_t get_offset_of_waterTex_6() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___waterTex_6)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_waterTex_6() const { return ___waterTex_6; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_waterTex_6() { return &___waterTex_6; }
	inline void set_waterTex_6(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___waterTex_6 = value;
		Il2CppCodeGenWriteBarrier((&___waterTex_6), value);
	}

	inline static int32_t get_offset_of_waterTile_7() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___waterTile_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_waterTile_7() const { return ___waterTile_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_waterTile_7() { return &___waterTile_7; }
	inline void set_waterTile_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___waterTile_7 = value;
	}

	inline static int32_t get_offset_of_textureVisibility_8() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___textureVisibility_8)); }
	inline float get_textureVisibility_8() const { return ___textureVisibility_8; }
	inline float* get_address_of_textureVisibility_8() { return &___textureVisibility_8; }
	inline void set_textureVisibility_8(float value)
	{
		___textureVisibility_8 = value;
	}

	inline static int32_t get_offset_of_distortionTex_9() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___distortionTex_9)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_distortionTex_9() const { return ___distortionTex_9; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_distortionTex_9() { return &___distortionTex_9; }
	inline void set_distortionTex_9(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___distortionTex_9 = value;
		Il2CppCodeGenWriteBarrier((&___distortionTex_9), value);
	}

	inline static int32_t get_offset_of_distortionTile_10() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___distortionTile_10)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_distortionTile_10() const { return ___distortionTile_10; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_distortionTile_10() { return &___distortionTile_10; }
	inline void set_distortionTile_10(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___distortionTile_10 = value;
	}

	inline static int32_t get_offset_of_waterHeight_11() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___waterHeight_11)); }
	inline float get_waterHeight_11() const { return ___waterHeight_11; }
	inline float* get_address_of_waterHeight_11() { return &___waterHeight_11; }
	inline void set_waterHeight_11(float value)
	{
		___waterHeight_11 = value;
	}

	inline static int32_t get_offset_of_waterDeep_12() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___waterDeep_12)); }
	inline float get_waterDeep_12() const { return ___waterDeep_12; }
	inline float* get_address_of_waterDeep_12() { return &___waterDeep_12; }
	inline void set_waterDeep_12(float value)
	{
		___waterDeep_12 = value;
	}

	inline static int32_t get_offset_of_waterDepthParam_13() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___waterDepthParam_13)); }
	inline float get_waterDepthParam_13() const { return ___waterDepthParam_13; }
	inline float* get_address_of_waterDepthParam_13() { return &___waterDepthParam_13; }
	inline void set_waterDepthParam_13(float value)
	{
		___waterDepthParam_13 = value;
	}

	inline static int32_t get_offset_of_waterMinAlpha_14() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___waterMinAlpha_14)); }
	inline float get_waterMinAlpha_14() const { return ___waterMinAlpha_14; }
	inline float* get_address_of_waterMinAlpha_14() { return &___waterMinAlpha_14; }
	inline void set_waterMinAlpha_14(float value)
	{
		___waterMinAlpha_14 = value;
	}

	inline static int32_t get_offset_of_borderColor_15() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___borderColor_15)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_borderColor_15() const { return ___borderColor_15; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_borderColor_15() { return &___borderColor_15; }
	inline void set_borderColor_15(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___borderColor_15 = value;
	}

	inline static int32_t get_offset_of_borderWidth_16() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___borderWidth_16)); }
	inline float get_borderWidth_16() const { return ___borderWidth_16; }
	inline float* get_address_of_borderWidth_16() { return &___borderWidth_16; }
	inline void set_borderWidth_16(float value)
	{
		___borderWidth_16 = value;
	}

	inline static int32_t get_offset_of_moveDirection_17() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___moveDirection_17)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_moveDirection_17() const { return ___moveDirection_17; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_moveDirection_17() { return &___moveDirection_17; }
	inline void set_moveDirection_17(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___moveDirection_17 = value;
	}

	inline static int32_t get_offset_of_materialPropertyBlock_18() { return static_cast<int32_t>(offsetof(WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E, ___materialPropertyBlock_18)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_materialPropertyBlock_18() const { return ___materialPropertyBlock_18; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_materialPropertyBlock_18() { return &___materialPropertyBlock_18; }
	inline void set_materialPropertyBlock_18(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___materialPropertyBlock_18 = value;
		Il2CppCodeGenWriteBarrier((&___materialPropertyBlock_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATERPROPERTYBLOCKSETTER_T5705627E3E22EB8EF855FF1513FBED34234F453E_H
#ifndef DONTSTOPMUSIC_T1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602_H
#define DONTSTOPMUSIC_T1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DontStopMusic
struct  DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602_StaticFields
{
public:
	// DontStopMusic DontStopMusic::instance
	DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602_StaticFields, ___instance_4)); }
	inline DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602 * get_instance_4() const { return ___instance_4; }
	inline DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONTSTOPMUSIC_T1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602_H
#ifndef FOLLOWPLAYER_TC7F368119AB1F3A30B90D84D453781211033DC10_H
#define FOLLOWPLAYER_TC7F368119AB1F3A30B90D84D453781211033DC10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowPlayer
struct  FollowPlayer_tC7F368119AB1F3A30B90D84D453781211033DC10  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform FollowPlayer::player
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___player_4;
	// System.Single FollowPlayer::speed
	float ___speed_5;
	// UnityEngine.Vector3 FollowPlayer::offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset_6;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(FollowPlayer_tC7F368119AB1F3A30B90D84D453781211033DC10, ___player_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_player_4() const { return ___player_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(FollowPlayer_tC7F368119AB1F3A30B90D84D453781211033DC10, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(FollowPlayer_tC7F368119AB1F3A30B90D84D453781211033DC10, ___offset_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offset_6() const { return ___offset_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offset_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWPLAYER_TC7F368119AB1F3A30B90D84D453781211033DC10_H
#ifndef LOSE_T1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA_H
#define LOSE_T1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lose
struct  Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioSource Lose::tap
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___tap_4;
	// UnityEngine.AudioSource Lose::loss
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___loss_5;
	// System.Boolean Lose::played
	bool ___played_6;
	// UnityEngine.GameObject Lose::reset
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___reset_7;
	// UnityEngine.GameObject Lose::ttpText
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ttpText_8;

public:
	inline static int32_t get_offset_of_tap_4() { return static_cast<int32_t>(offsetof(Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA, ___tap_4)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_tap_4() const { return ___tap_4; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_tap_4() { return &___tap_4; }
	inline void set_tap_4(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___tap_4 = value;
		Il2CppCodeGenWriteBarrier((&___tap_4), value);
	}

	inline static int32_t get_offset_of_loss_5() { return static_cast<int32_t>(offsetof(Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA, ___loss_5)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_loss_5() const { return ___loss_5; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_loss_5() { return &___loss_5; }
	inline void set_loss_5(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___loss_5 = value;
		Il2CppCodeGenWriteBarrier((&___loss_5), value);
	}

	inline static int32_t get_offset_of_played_6() { return static_cast<int32_t>(offsetof(Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA, ___played_6)); }
	inline bool get_played_6() const { return ___played_6; }
	inline bool* get_address_of_played_6() { return &___played_6; }
	inline void set_played_6(bool value)
	{
		___played_6 = value;
	}

	inline static int32_t get_offset_of_reset_7() { return static_cast<int32_t>(offsetof(Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA, ___reset_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_reset_7() const { return ___reset_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_reset_7() { return &___reset_7; }
	inline void set_reset_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___reset_7 = value;
		Il2CppCodeGenWriteBarrier((&___reset_7), value);
	}

	inline static int32_t get_offset_of_ttpText_8() { return static_cast<int32_t>(offsetof(Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA, ___ttpText_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ttpText_8() const { return ___ttpText_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ttpText_8() { return &___ttpText_8; }
	inline void set_ttpText_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ttpText_8 = value;
		Il2CppCodeGenWriteBarrier((&___ttpText_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOSE_T1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA_H
#ifndef PRESSTOPLAY_TE6BCA0BABA9E55FF125E8413272793D9D5EC31B3_H
#define PRESSTOPLAY_TE6BCA0BABA9E55FF125E8413272793D9D5EC31B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PressToPlay
struct  PressToPlay_tE6BCA0BABA9E55FF125E8413272793D9D5EC31B3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject PressToPlay::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_4;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(PressToPlay_tE6BCA0BABA9E55FF125E8413272793D9D5EC31B3, ___player_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_4() const { return ___player_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESSTOPLAY_TE6BCA0BABA9E55FF125E8413272793D9D5EC31B3_H
#ifndef RANDOMSTART_T8E4B6B70400EBAC9CB85F4C36BD8A006E15EABC3_H
#define RANDOMSTART_T8E4B6B70400EBAC9CB85F4C36BD8A006E15EABC3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomStart
struct  RandomStart_t8E4B6B70400EBAC9CB85F4C36BD8A006E15EABC3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject RandomStart::startSunbed
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___startSunbed_4;
	// UnityEngine.Transform RandomStart::camera
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___camera_5;

public:
	inline static int32_t get_offset_of_startSunbed_4() { return static_cast<int32_t>(offsetof(RandomStart_t8E4B6B70400EBAC9CB85F4C36BD8A006E15EABC3, ___startSunbed_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_startSunbed_4() const { return ___startSunbed_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_startSunbed_4() { return &___startSunbed_4; }
	inline void set_startSunbed_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___startSunbed_4 = value;
		Il2CppCodeGenWriteBarrier((&___startSunbed_4), value);
	}

	inline static int32_t get_offset_of_camera_5() { return static_cast<int32_t>(offsetof(RandomStart_t8E4B6B70400EBAC9CB85F4C36BD8A006E15EABC3, ___camera_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_camera_5() const { return ___camera_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_camera_5() { return &___camera_5; }
	inline void set_camera_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___camera_5 = value;
		Il2CppCodeGenWriteBarrier((&___camera_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMSTART_T8E4B6B70400EBAC9CB85F4C36BD8A006E15EABC3_H
#ifndef RESETSCRIPT_T49A2325A023AF5412FF1F58DF552654425F13B4E_H
#define RESETSCRIPT_T49A2325A023AF5412FF1F58DF552654425F13B4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResetScript
struct  ResetScript_t49A2325A023AF5412FF1F58DF552654425F13B4E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Score ResetScript::score
	Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * ___score_4;
	// System.Boolean ResetScript::initialized
	bool ___initialized_5;
	// System.String ResetScript::id
	String_t* ___id_6;

public:
	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(ResetScript_t49A2325A023AF5412FF1F58DF552654425F13B4E, ___score_4)); }
	inline Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * get_score_4() const { return ___score_4; }
	inline Score_t72F7EE757BE7D4C7846803B3072753760AB6427F ** get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * value)
	{
		___score_4 = value;
		Il2CppCodeGenWriteBarrier((&___score_4), value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(ResetScript_t49A2325A023AF5412FF1F58DF552654425F13B4E, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(ResetScript_t49A2325A023AF5412FF1F58DF552654425F13B4E, ___id_6)); }
	inline String_t* get_id_6() const { return ___id_6; }
	inline String_t** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(String_t* value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier((&___id_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESETSCRIPT_T49A2325A023AF5412FF1F58DF552654425F13B4E_H
#ifndef SCORE_T72F7EE757BE7D4C7846803B3072753760AB6427F_H
#define SCORE_T72F7EE757BE7D4C7846803B3072753760AB6427F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t72F7EE757BE7D4C7846803B3072753760AB6427F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Score::score
	int32_t ___score_4;
	// System.Int32 Score::highScore
	int32_t ___highScore_5;
	// UnityEngine.UI.Text Score::highScoreText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___highScoreText_6;
	// UnityEngine.UI.Text Score::scoreText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___scoreText_7;

public:
	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}

	inline static int32_t get_offset_of_highScore_5() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___highScore_5)); }
	inline int32_t get_highScore_5() const { return ___highScore_5; }
	inline int32_t* get_address_of_highScore_5() { return &___highScore_5; }
	inline void set_highScore_5(int32_t value)
	{
		___highScore_5 = value;
	}

	inline static int32_t get_offset_of_highScoreText_6() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___highScoreText_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_highScoreText_6() const { return ___highScoreText_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_highScoreText_6() { return &___highScoreText_6; }
	inline void set_highScoreText_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___highScoreText_6 = value;
		Il2CppCodeGenWriteBarrier((&___highScoreText_6), value);
	}

	inline static int32_t get_offset_of_scoreText_7() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___scoreText_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_scoreText_7() const { return ___scoreText_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_scoreText_7() { return &___scoreText_7; }
	inline void set_scoreText_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___scoreText_7 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORE_T72F7EE757BE7D4C7846803B3072753760AB6427F_H
#ifndef SPAWNMANAGER_TA2B15EFBFF155DEEE0B8B5E22D767198D60346E0_H
#define SPAWNMANAGER_TA2B15EFBFF155DEEE0B8B5E22D767198D60346E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnManager
struct  SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject[] SpawnManager::bedPrefab
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___bedPrefab_4;
	// System.Boolean SpawnManager::cooldown
	bool ___cooldown_5;
	// CollisionManager SpawnManager::colManager
	CollisionManager_tAC8C949DBFFE56FED4CC9A87394AAD2FFBD0AD7B * ___colManager_6;
	// UnityEngine.AudioSource SpawnManager::click
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___click_7;

public:
	inline static int32_t get_offset_of_bedPrefab_4() { return static_cast<int32_t>(offsetof(SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0, ___bedPrefab_4)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_bedPrefab_4() const { return ___bedPrefab_4; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_bedPrefab_4() { return &___bedPrefab_4; }
	inline void set_bedPrefab_4(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___bedPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___bedPrefab_4), value);
	}

	inline static int32_t get_offset_of_cooldown_5() { return static_cast<int32_t>(offsetof(SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0, ___cooldown_5)); }
	inline bool get_cooldown_5() const { return ___cooldown_5; }
	inline bool* get_address_of_cooldown_5() { return &___cooldown_5; }
	inline void set_cooldown_5(bool value)
	{
		___cooldown_5 = value;
	}

	inline static int32_t get_offset_of_colManager_6() { return static_cast<int32_t>(offsetof(SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0, ___colManager_6)); }
	inline CollisionManager_tAC8C949DBFFE56FED4CC9A87394AAD2FFBD0AD7B * get_colManager_6() const { return ___colManager_6; }
	inline CollisionManager_tAC8C949DBFFE56FED4CC9A87394AAD2FFBD0AD7B ** get_address_of_colManager_6() { return &___colManager_6; }
	inline void set_colManager_6(CollisionManager_tAC8C949DBFFE56FED4CC9A87394AAD2FFBD0AD7B * value)
	{
		___colManager_6 = value;
		Il2CppCodeGenWriteBarrier((&___colManager_6), value);
	}

	inline static int32_t get_offset_of_click_7() { return static_cast<int32_t>(offsetof(SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0, ___click_7)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_click_7() const { return ___click_7; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_click_7() { return &___click_7; }
	inline void set_click_7(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___click_7 = value;
		Il2CppCodeGenWriteBarrier((&___click_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWNMANAGER_TA2B15EFBFF155DEEE0B8B5E22D767198D60346E0_H
#ifndef TTP_TD010D32A4F78068009EC60A945BA0E3B9BEFCC39_H
#define TTP_TD010D32A4F78068009EC60A945BA0E3B9BEFCC39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTP
struct  TTP_tD010D32A4F78068009EC60A945BA0E3B9BEFCC39  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TTP_TD010D32A4F78068009EC60A945BA0E3B9BEFCC39_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3100 = { sizeof (DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602), -1, sizeof(DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3100[1] = 
{
	DontStopMusic_t1F6AB0A96E5C2BDC709CB68BF0AEA0DA150D3602_StaticFields::get_offset_of_instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3101 = { sizeof (FollowPlayer_tC7F368119AB1F3A30B90D84D453781211033DC10), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3101[3] = 
{
	FollowPlayer_tC7F368119AB1F3A30B90D84D453781211033DC10::get_offset_of_player_4(),
	FollowPlayer_tC7F368119AB1F3A30B90D84D453781211033DC10::get_offset_of_speed_5(),
	FollowPlayer_tC7F368119AB1F3A30B90D84D453781211033DC10::get_offset_of_offset_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3102 = { sizeof (Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3102[5] = 
{
	Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA::get_offset_of_tap_4(),
	Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA::get_offset_of_loss_5(),
	Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA::get_offset_of_played_6(),
	Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA::get_offset_of_reset_7(),
	Lose_t1A8954FB3AB03671FF9CA1CDB83AD32C5CF5A5CA::get_offset_of_ttpText_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3103 = { sizeof (PressToPlay_tE6BCA0BABA9E55FF125E8413272793D9D5EC31B3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3103[1] = 
{
	PressToPlay_tE6BCA0BABA9E55FF125E8413272793D9D5EC31B3::get_offset_of_player_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3104 = { sizeof (RandomStart_t8E4B6B70400EBAC9CB85F4C36BD8A006E15EABC3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3104[2] = 
{
	RandomStart_t8E4B6B70400EBAC9CB85F4C36BD8A006E15EABC3::get_offset_of_startSunbed_4(),
	RandomStart_t8E4B6B70400EBAC9CB85F4C36BD8A006E15EABC3::get_offset_of_camera_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3105 = { sizeof (ResetScript_t49A2325A023AF5412FF1F58DF552654425F13B4E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3105[3] = 
{
	ResetScript_t49A2325A023AF5412FF1F58DF552654425F13B4E::get_offset_of_score_4(),
	ResetScript_t49A2325A023AF5412FF1F58DF552654425F13B4E::get_offset_of_initialized_5(),
	ResetScript_t49A2325A023AF5412FF1F58DF552654425F13B4E::get_offset_of_id_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3106 = { sizeof (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3106[4] = 
{
	Score_t72F7EE757BE7D4C7846803B3072753760AB6427F::get_offset_of_score_4(),
	Score_t72F7EE757BE7D4C7846803B3072753760AB6427F::get_offset_of_highScore_5(),
	Score_t72F7EE757BE7D4C7846803B3072753760AB6427F::get_offset_of_highScoreText_6(),
	Score_t72F7EE757BE7D4C7846803B3072753760AB6427F::get_offset_of_scoreText_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3107 = { sizeof (SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3107[4] = 
{
	SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0::get_offset_of_bedPrefab_4(),
	SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0::get_offset_of_cooldown_5(),
	SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0::get_offset_of_colManager_6(),
	SpawnManager_tA2B15EFBFF155DEEE0B8B5E22D767198D60346E0::get_offset_of_click_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3108 = { sizeof (TTP_tD010D32A4F78068009EC60A945BA0E3B9BEFCC39), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3109 = { sizeof (WaterArea_tFC245D450E106DA7F622935734389DA0486D7A51), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3109[1] = 
{
	WaterArea_tFC245D450E106DA7F622935734389DA0486D7A51::get_offset_of_waterProperties_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3110 = { sizeof (WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3110[4] = 
{
	WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF::get_offset_of_renderer_4(),
	WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF::get_offset_of_waterMaterial_5(),
	WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF::get_offset_of_diffuseMaterial_6(),
	WaterMaterialSwitcher_t2B2E760C0FD19277C30A7E511B646829CF4B96FF::get_offset_of_defaulPropertyBlock_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3111 = { sizeof (WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3111[15] = 
{
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_waterRenderers_4(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_waterColor_5(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_waterTex_6(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_waterTile_7(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_textureVisibility_8(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_distortionTex_9(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_distortionTile_10(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_waterHeight_11(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_waterDeep_12(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_waterDepthParam_13(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_waterMinAlpha_14(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_borderColor_15(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_borderWidth_16(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_moveDirection_17(),
	WaterPropertyBlockSetter_t5705627E3E22EB8EF855FF1513FBED34234F453E::get_offset_of_materialPropertyBlock_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3112 = { sizeof (FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3112[8] = 
{
	0,
	0,
	FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C::get_offset_of_fpsData_2(),
	FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C::get_offset_of_deltaTimeData_3(),
	FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C::get_offset_of_timer_4(),
	FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C::get_offset_of_index_5(),
	FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C::get_offset_of_lastFrameCount_6(),
	FPSCounter_t25F01395B5C0BDB81A9371ED42DEB76DB7A88C7C::get_offset_of_lastTime_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3113 = { sizeof (AnimationStarter_t970D5C5992388D67BEA5A40F47B9B52E23263BAA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3113[2] = 
{
	AnimationStarter_t970D5C5992388D67BEA5A40F47B9B52E23263BAA::get_offset_of_animator_4(),
	AnimationStarter_t970D5C5992388D67BEA5A40F47B9B52E23263BAA::get_offset_of_animation_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3114 = { sizeof (CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3114[9] = 
{
	CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A::get_offset_of_slider_4(),
	CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A::get_offset_of_cameraTransform_5(),
	CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A::get_offset_of_minDistance_6(),
	CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A::get_offset_of_maxDistance_7(),
	CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A::get_offset_of_scrollDelta_8(),
	CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A::get_offset_of_scrollSpeed_9(),
	CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A::get_offset_of_cameraDirectionToRoot_10(),
	CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A::get_offset_of_currentScrollSpeed_11(),
	CameraDepthSlider_t94708495F775345CDB07C60D7C479F9BC405836A::get_offset_of_currentValue_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3115 = { sizeof (CameraRotator_tA3F0FFB6AC80EC91D7485B748A3DCB6513D151F6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3115[1] = 
{
	CameraRotator_tA3F0FFB6AC80EC91D7485B748A3DCB6513D151F6::get_offset_of_speed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3116 = { sizeof (FPSUI_tE43EB6E42AE3627963AF74C07364704FC6AE2ADD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3116[2] = 
{
	FPSUI_tE43EB6E42AE3627963AF74C07364704FC6AE2ADD::get_offset_of_fpsText_4(),
	FPSUI_tE43EB6E42AE3627963AF74C07364704FC6AE2ADD::get_offset_of_fpsCounter_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3117 = { sizeof (TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3117[4] = 
{
	TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10::get_offset_of_cameraRoot_4(),
	TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10::get_offset_of_speed_5(),
	TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10::get_offset_of_mouseSpeed_6(),
	TouchRotator_t4EA574891466792313B11C50100A0D8DA0C20F10::get_offset_of_prevMousePos_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3118 = { sizeof (StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3118[8] = 
{
	StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0::get_offset_of_colorR_0(),
	StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0::get_offset_of_colorG_1(),
	StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0::get_offset_of_colorB_2(),
	StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0::get_offset_of_title_3(),
	StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0::get_offset_of_subtitle_4(),
	StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0::get_offset_of_spaceTop_5(),
	StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0::get_offset_of_spaceBottom_6(),
	StyledBanner_tBB67302BA75EB86C53E1D7EEEF7085FF574A0AA0::get_offset_of_helpURL_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3119 = { sizeof (StyledCategory_t588109C382013534565CD8D9C1A9E2B1B7A34FA7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3119[1] = 
{
	StyledCategory_t588109C382013534565CD8D9C1A9E2B1B7A34FA7::get_offset_of_category_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3120 = { sizeof (StyledInteractive_tBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3120[3] = 
{
	StyledInteractive_tBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8::get_offset_of_value_0(),
	StyledInteractive_tBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8::get_offset_of_keyword_1(),
	StyledInteractive_tBE59DDDEB6E68E586A2F1E35F96E0D2A133D74D8::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3121 = { sizeof (StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3121[4] = 
{
	StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3::get_offset_of_Type_0(),
	StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3::get_offset_of_Message_1(),
	StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3::get_offset_of_Top_2(),
	StyledMessage_t77F98B3B948D5ACC63C8A833CE35DEAF5B735CA3::get_offset_of_Down_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3122 = { sizeof (StyledPopupArray_t3F54D6B4BF32153FD9520C4416C787964F646943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3122[1] = 
{
	StyledPopupArray_t3F54D6B4BF32153FD9520C4416C787964F646943::get_offset_of_array_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3123 = { sizeof (StyledPopupLayers_t3D8B143092102D7455E360267C11856420FB5E29), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3124 = { sizeof (StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3124[5] = 
{
	StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8::get_offset_of_simple_0(),
	StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8::get_offset_of_min_1(),
	StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8::get_offset_of_max_2(),
	StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8::get_offset_of_displayLabel_3(),
	StyledRangeOptions_t50C62FEA487212882D29F61D74340901F2CF12B8::get_offset_of_options_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3125 = { sizeof (StyledSpace_t6A34D005EA6EFE11BC3CE384B37BB7760DB8F3BF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3125[1] = 
{
	StyledSpace_t6A34D005EA6EFE11BC3CE384B37BB7760DB8F3BF::get_offset_of_space_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3126 = { sizeof (StyledTexturePreview_tB9D3944AF64520F1C89802B526413D6A0A200AF8), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3127 = { sizeof (StyledMonoHideScriptField_tE7F643756B129DEA3BFA57B27B1188B5C058D655), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3128 = { sizeof (SettingsData_tD5CF7DB5F05F5D71F1E4306BB9F8DEFAEF51AE27), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3128[1] = 
{
	SettingsData_tD5CF7DB5F05F5D71F1E4306BB9F8DEFAEF51AE27::get_offset_of_data_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
