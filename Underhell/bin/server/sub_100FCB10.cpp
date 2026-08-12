int __thiscall sub_100FCB10(int this)
{
  long double v2; // st7
  long double v3; // st6
  long double v4; // st5
  double v5; // st6
  double v6; // rt1
  long double v7; // st6
  double v8; // st7
  long double v9; // st6
  int v10; // ebx
  double v11; // st7
  const char *v12; // ecx
  int v13; // esi
  int v14; // eax
  int v16; // [esp+10h] [ebp-6Ch] BYREF
  const char *v17; // [esp+14h] [ebp-68h]
  float v18; // [esp+18h] [ebp-64h]
  int v19; // [esp+1Ch] [ebp-60h]
  int v20; // [esp+20h] [ebp-5Ch]
  int v21; // [esp+24h] [ebp-58h]
  int v22; // [esp+28h] [ebp-54h]
  float v23; // [esp+2Ch] [ebp-50h]
  int v24; // [esp+30h] [ebp-4Ch]
  __int16 v25; // [esp+34h] [ebp-48h]
  char v26; // [esp+36h] [ebp-46h]
  int v27; // [esp+38h] [ebp-44h]
  _DWORD v28[5]; // [esp+3Ch] [ebp-40h] BYREF
  __int16 v29; // [esp+50h] [ebp-2Ch]
  _DWORD v30[8]; // [esp+54h] [ebp-28h] BYREF
  float v31; // [esp+74h] [ebp-8h]
  float v32; // [esp+78h] [ebp-4h]

  v2 = fabs(*(float *)(this + 108)) / *(float *)(this + 828);
  v3 = *(float *)(this + 820) * v2;
  v4 = 1.0;
  if ( v3 <= 1.0 )
  {
    if ( v3 < 0.0 )
    {
      v5 = 0.0;
      v32 = 0.0;
      goto LABEL_7;
    }
    v4 = v3;
    v5 = 0.0;
  }
  else
  {
    v5 = 0.0;
  }
  v32 = v4;
LABEL_7:
  v6 = v5;
  v7 = v2;
  v8 = v6;
  v9 = v7 * 70.0 + 30.0;
  if ( v9 > 255.0 )
  {
    v9 = 255.0;
LABEL_9:
    v8 = v9;
    goto LABEL_10;
  }
  if ( v9 >= v8 )
    goto LABEL_9;
LABEL_10:
  v10 = (int)v8;
  if ( (int)v8 == 100 )
    v10 = 99;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v31 = *(float *)(this + 816);
  sub_10219BB0(v30);
  v30[0] = &CPASFilter::`vftable';
  sub_1021A370(this + 580);
  v30[0] = &CPASAttenuationFilter::`vftable';
  sub_1021A0E0(this + 580, v31);
  sub_10219A50(v30);
  v11 = 0.0;
  v23 = 0.0;
  v29 = -1;
  v12 = *(const char **)(this + 836);
  v22 = 0;
  v24 = 0;
  v25 = 1;
  v26 = 0;
  v27 = -1;
  memset(v28, 0, sizeof(v28));
  v16 = 6;
  v17 = v12;
  if ( !v12 )
    v17 = String;
  v18 = v32;
  if ( 0.0 != *(float *)(this + 816) )
    v11 = 20.0 / *(float *)(this + 816) + 50.0;
  v13 = *(_DWORD *)(this + 24);
  v19 = (int)v11;
  v20 = 3;
  v21 = v10;
  v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v13);
  sub_1023BE40(v30, v14, &v16);
  sub_102375F0(v28);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v30);
}
