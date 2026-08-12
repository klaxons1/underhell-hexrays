void __thiscall sub_100FCCC0(int this, float a2)
{
  double v3; // st7
  double v4; // st6
  bool v5; // c0
  bool v6; // c3
  double v7; // st6
  double v8; // st5
  bool v9; // zf
  long double v10; // st5
  double v11; // st3
  int v12; // ecx
  long double v13; // st3
  double v14; // st7
  double v15; // st6
  double v16; // rt0
  double v17; // st6
  const char *v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // eax
  long double v22; // st4
  long double v23; // rtt
  double v24; // st5
  long double v25; // st7
  double v26; // rt2
  long double v27; // st5
  const char *v28; // ecx
  int v29; // eax
  double v30; // st7
  const char *v31; // [esp+4h] [ebp-7Ch]
  int v32; // [esp+Ch] [ebp-74h] BYREF
  const char *v33; // [esp+10h] [ebp-70h]
  float v34; // [esp+14h] [ebp-6Ch]
  int v35; // [esp+18h] [ebp-68h]
  int v36; // [esp+20h] [ebp-60h]
  char v37[24]; // [esp+38h] [ebp-48h] BYREF
  _DWORD v38[8]; // [esp+50h] [ebp-30h] BYREF
  float v39[3]; // [esp+70h] [ebp-10h] BYREF
  float v40; // [esp+7Ch] [ebp-4h]
  float v41; // [esp+88h] [ebp+8h]

  v3 = *(float *)(this + 108);
  v40 = *(float *)(this + 108);
  v4 = *(float *)(this + 828);
  v5 = a2 < v4;
  v6 = a2 == v4;
  v7 = a2;
  v8 = *(float *)(this + 828);
  if ( v5 || v6 )
  {
    v8 = -v8;
    if ( v8 <= v7 )
      v8 = a2;
  }
  v9 = *(_BYTE *)(this + 856) == 0;
  *(float *)(this + 108) = v8;
  v10 = 20.0;
  if ( v9 )
    goto LABEL_32;
  v11 = *(float *)(this + 800);
  v12 = 2;
  if ( 0.0 == v11 )
  {
    if ( 0.0 != *(float *)(this + 804) )
      v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  v13 = (double)(unsigned __int16)(int)((*(float *)(this + 4 * v12 + 728) - *(float *)(this + 4 * v12 + 844)) * 182.04445)
      * 0.0054931641;
  if ( v13 > 180.0 )
    v13 = v13 - 360.0;
  if ( v7 >= 100.0 )
  {
LABEL_32:
    v17 = 0.0;
  }
  else
  {
    if ( v7 <= 25.0 && fabs(v13) < 1.0 )
    {
      *(float *)(this + 824) = 0.0;
      *(_BYTE *)(this + 856) = 0;
      *(float *)(this + 108) = 0.0;
      sub_100E11A0(this, (float *)(this + 844));
      v14 = 0.0;
      v15 = v40;
LABEL_15:
      v16 = v15;
      v17 = v14;
      v3 = v16;
      goto LABEL_16;
    }
    v17 = 0.0;
    v22 = fabs(v13);
    if ( v22 > 90.0 )
    {
      v15 = v3;
      v14 = 0.0;
      *(float *)(this + 108) = v15;
      goto LABEL_15;
    }
    if ( v22 >= 20.0 )
      v10 = v22;
    v23 = v10;
    v24 = v3;
    v25 = v23;
    if ( v24 <= 0.0 )
      v25 = -v25;
    v26 = v24;
    v27 = v25;
    v3 = v26;
    *(float *)(this + 108) = v27;
  }
LABEL_16:
  if ( v17 == v3 )
  {
    if ( *(float *)(this + 108) != v17 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v41 = *(float *)(this + 816);
      sub_10219BB0(v38);
      v38[0] = &CPASFilter::`vftable';
      sub_1021A370(this + 580);
      v38[0] = &CPASAttenuationFilter::`vftable';
      sub_1021A0E0(this + 580, v41);
      sub_10219A50(v38);
      sub_100F8510((float *)&v32);
      v18 = *(const char **)(this + 836);
      v32 = 6;
      v33 = v18;
      if ( !v18 )
        v33 = String;
      v34 = 0.0099999998;
      v19 = 0.0;
      if ( 0.0 != *(float *)(this + 816) )
        v19 = 20.0 / *(float *)(this + 816) + 50.0;
      v35 = (int)v19;
      v20 = *(_DWORD *)(this + 24);
      v36 = 30;
      v21 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v20);
      sub_1023BE40(v38, v21, &v32);
      sub_100FCB10(this);
      sub_102375F0(v37);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v38);
      goto LABEL_38;
    }
LABEL_37:
    sub_100FCB10(this);
    goto LABEL_38;
  }
  if ( *(float *)(this + 108) != v17 )
    goto LABEL_37;
  v28 = *(const char **)(this + 836);
  if ( !v28 )
    v28 = String;
  v31 = v28;
  v29 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
  sub_1023AF30(v29, 6, v31);
LABEL_38:
  v30 = *(float *)(this + 108);
  v39[0] = *(float *)(this + 800) * v30;
  v39[1] = *(float *)(this + 804) * v30;
  v39[2] = v30 * *(float *)(this + 808);
  sub_100D7260((float *)this, v39);
}
