int __thiscall sub_1034C740(int this)
{
  int v2; // eax
  int v3; // edx
  int v4; // esi
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  double v9; // st7
  int v10; // eax
  float *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // ecx
  int *v16; // ecx
  int v17; // eax
  int *v18; // ecx
  int v19; // eax
  int *v20; // ecx
  int v21; // eax
  int *v22; // ecx
  int v23; // eax
  int *v24; // ecx
  int v25; // eax
  int *v26; // ecx
  int v27; // eax
  int *v28; // ecx
  int v29; // eax
  int *v30; // ecx
  int v31; // edx
  const char *v33; // [esp+44h] [ebp-A8h]
  float v34[3]; // [esp+50h] [ebp-9Ch] BYREF
  _DWORD v35[8]; // [esp+5Ch] [ebp-90h] BYREF
  float v36[3]; // [esp+7Ch] [ebp-70h] BYREF
  float v37[3]; // [esp+88h] [ebp-64h] BYREF
  float v38[3]; // [esp+94h] [ebp-58h] BYREF
  float v39[3]; // [esp+A0h] [ebp-4Ch] BYREF
  float v40[3]; // [esp+ACh] [ebp-40h] BYREF
  float v41[3]; // [esp+B8h] [ebp-34h] BYREF
  float v42[3]; // [esp+C4h] [ebp-28h] BYREF
  float v43[3]; // [esp+D0h] [ebp-1Ch] BYREF
  float v44; // [esp+DCh] [ebp-10h] BYREF
  float v45; // [esp+E0h] [ebp-Ch]
  float v46; // [esp+E4h] [ebp-8h]
  float v47; // [esp+E8h] [ebp-4h]

  sub_10111910((_BYTE *)(this + 320), (float *)(this + 328), (float *)(this + 340), v40, v36);
  sub_10111820((float *)(this + 320), v40, v39);
  sub_10111820((float *)(this + 320), v36, v37);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10219BB0(v35);
  v35[0] = &CPASFilter::`vftable';
  sub_1021A370(v35, this + 580);
  sub_10111860(this + 320, v39, v37, v38);
  v2 = sub_101811E0("gib", -1);
  v4 = __RTDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CGib `RTTI Type Descriptor',
         0);
  if ( !v4 )
    Warning("classname %s used to create wrong class type\n", v33);
  sub_10166E20(v4, v3, (int)"models/gibs/hgibs.mdl");
  sub_101660B0((_DWORD *)v4, -1);
  v47 = COERCE_FLOAT(sub_10219A30());
  v43[0] = (double)SLODWORD(v47) * 0.000030518509 * 180.0 - 90.0;
  v47 = COERCE_FLOAT(sub_10219A30());
  v43[1] = (double)SLODWORD(v47) * 0.000030518509 * 180.0 - 90.0;
  v47 = COERCE_FLOAT(sub_10219A30());
  v43[2] = (double)SLODWORD(v47) * 0.000030518509 * 180.0 - 90.0;
  sub_100E0D20(v4, v38);
  sub_100E0EA0(v4, v43);
  v5 = ((__int64 (__thiscall *)(int, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2);
  sub_10166E20(v4, SHIDWORD(v5), (int)off_10670864[(_DWORD)v5]);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 76))(v4, this);
  *(float *)(v4 + 1132) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                            dword_106B31E4,
                            6.0,
                            8.0);
  sub_100EBE30(v4, 1);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 320) + 48))(v4 + 320);
  v7 = sub_100E9550((_DWORD *)v4, 6, v6, 0, 0);
  v8 = v7;
  if ( v7 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 60))(v7, 1);
    v42[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               -20.0,
               20.0);
    v42[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               0.0,
               360.0);
    v42[2] = 0.0;
    sub_10422220(v42, &v44);
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           300.0,
           900.0);
    v10 = *(_DWORD *)(this + 252) >> 12;
    v44 = v44 * v9;
    v45 = v45 * v9;
    v46 = v9 * v46;
    if ( (v10 & 1) != 0 )
      sub_100DAFD0(this);
    v44 = v44 + *(float *)(this + 476);
    v45 = *(float *)(this + 480) + v45;
    v46 = *(float *)(this + 484) + v46;
    v11 = sub_1001F010(v34, -180.0, 180.0);
    v41[0] = *v11;
    v41[1] = v11[1];
    v41[2] = v11[2];
    sub_100DD660(v4, &v44);
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v8 + 196))(v8, &v44, v41);
  }
  v12 = sub_1012B790(v4, 0);
  if ( v12 )
    sub_1012B210(v12, *(float *)(v4 + 1132));
  v13 = sub_10283150();
  v14 = v13;
  if ( v13 )
  {
    v15 = *(_DWORD *)(v13 + 828);
    v47 = 80.0;
    if ( v15 != COERCE_INT(80.0) )
    {
      if ( *(_BYTE *)(v13 + 84) )
      {
        *(_BYTE *)(v13 + 88) |= 1u;
      }
      else
      {
        v16 = *(int **)(v13 + 24);
        if ( v16 )
          sub_100194B0(v16, 828);
      }
      *(float *)(v14 + 828) = 80.0;
    }
    v17 = *(_DWORD *)(v14 + 832);
    v47 = 0.80000001;
    if ( v17 != COERCE_INT(0.80000001) )
    {
      if ( *(_BYTE *)(v14 + 84) )
      {
        *(_BYTE *)(v14 + 88) |= 1u;
      }
      else
      {
        v18 = *(int **)(v14 + 24);
        if ( v18 )
          sub_100194B0(v18, 832);
      }
      *(float *)(v14 + 832) = 0.80000001;
    }
    sub_100C34C0((float *)(v14 + 800), 0.30000001, 0.30000001, 0.30000001);
    sub_102BC090((float *)(v14 + 812), 0.5, 0.5, 0.5);
    v19 = *(_DWORD *)(v14 + 848);
    v47 = 10.0;
    if ( v19 != COERCE_INT(10.0) )
    {
      if ( *(_BYTE *)(v14 + 84) )
      {
        *(_BYTE *)(v14 + 88) |= 1u;
      }
      else
      {
        v20 = *(int **)(v14 + 24);
        if ( v20 )
          sub_100194B0(v20, 848);
      }
      *(float *)(v14 + 848) = 10.0;
    }
    v21 = *(_DWORD *)(v14 + 852);
    v47 = 40.0;
    if ( v21 != COERCE_INT(40.0) )
    {
      if ( *(_BYTE *)(v14 + 84) )
      {
        *(_BYTE *)(v14 + 88) |= 1u;
      }
      else
      {
        v22 = *(int **)(v14 + 24);
        if ( v22 )
          sub_100194B0(v22, 852);
      }
      *(float *)(v14 + 852) = 40.0;
    }
    v23 = *(_DWORD *)(v14 + 856);
    v47 = 5.0;
    if ( v23 != COERCE_INT(5.0) )
    {
      if ( *(_BYTE *)(v14 + 84) )
      {
        *(_BYTE *)(v14 + 88) |= 1u;
      }
      else
      {
        v24 = *(int **)(v14 + 24);
        if ( v24 )
          sub_100194B0(v24, 856);
      }
      *(float *)(v14 + 856) = 5.0;
    }
    v25 = *(_DWORD *)(v14 + 824);
    v47 = 0.40000001;
    if ( v25 != COERCE_INT(0.40000001) )
    {
      if ( *(_BYTE *)(v14 + 84) )
      {
        *(_BYTE *)(v14 + 88) |= 1u;
      }
      else
      {
        v26 = *(int **)(v14 + 24);
        if ( v26 )
          sub_100194B0(v26, 824);
      }
      *(float *)(v14 + 824) = 0.40000001;
    }
    v27 = *(_DWORD *)(v14 + 840);
    v47 = 15.0;
    if ( v27 != COERCE_INT(15.0) )
    {
      if ( *(_BYTE *)(v14 + 84) )
      {
        *(_BYTE *)(v14 + 88) |= 1u;
      }
      else
      {
        v28 = *(int **)(v14 + 24);
        if ( v28 )
          sub_100194B0(v28, 840);
      }
      *(float *)(v14 + 840) = 15.0;
    }
    v29 = *(_DWORD *)(v14 + 844);
    v47 = 25.0;
    if ( v29 != COERCE_INT(25.0) )
    {
      if ( *(_BYTE *)(v14 + 84) )
      {
        *(_BYTE *)(v14 + 88) |= 1u;
      }
      else
      {
        v30 = *(int **)(v14 + 24);
        if ( v30 )
          sub_100194B0(v30, 844);
      }
      *(float *)(v14 + 844) = 25.0;
    }
    sub_100F5880((int *)v14, *(float *)(v4 + 1132));
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 140))(v14, v4, 0);
    sub_100E10C0(v14, &flt_106F1CA8);
    sub_100E0970(v14, v31, 0, 0);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v35);
}
