int __userpurge sub_10414180@<eax>(unsigned int a1@<ecx>, int a2@<ebx>, int a3)
{
  unsigned int v3; // eax
  int v5; // eax
  int v6; // ebx
  int i; // edi
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // esi
  __int64 v14; // rax
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // edi
  double v19; // st7
  int v20; // eax
  int v21; // eax
  unsigned int v22; // edi
  float v24; // [esp+98h] [ebp-B0h]
  float v25; // [esp+98h] [ebp-B0h]
  const char *v27; // [esp+A0h] [ebp-A8h]
  _DWORD v28[8]; // [esp+A8h] [ebp-A0h] BYREF
  float v29[3]; // [esp+C8h] [ebp-80h] BYREF
  float v30[3]; // [esp+D4h] [ebp-74h] BYREF
  float v31[3]; // [esp+E0h] [ebp-68h] BYREF
  float v32[3]; // [esp+ECh] [ebp-5Ch] BYREF
  int v33[3]; // [esp+F8h] [ebp-50h] BYREF
  float v34[3]; // [esp+104h] [ebp-44h] BYREF
  float v35[3]; // [esp+110h] [ebp-38h] BYREF
  float v36; // [esp+11Ch] [ebp-2Ch]
  float v37; // [esp+120h] [ebp-28h]
  float v38[3]; // [esp+128h] [ebp-20h] BYREF
  float v39; // [esp+134h] [ebp-14h] BYREF
  float v40; // [esp+138h] [ebp-10h]
  float v41; // [esp+13Ch] [ebp-Ch]
  unsigned int v42; // [esp+140h] [ebp-8h]
  int v43; // [esp+144h] [ebp-4h]
  int v44; // [esp+150h] [ebp+8h]

  v3 = *(_DWORD *)(a3 + 44);
  v42 = a1;
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (v3 & 0xFFF) + 1];
  sub_1010DD80((_DWORD *)(a1 + 1804), __SPAIR64__(a1, v5), 0.0);
  v6 = a1 + 320;
  sub_10111910((_BYTE *)(a1 + 320), (float *)(a1 + 328), (float *)(a1 + 340), v32, v29);
  sub_10111820((float *)(a1 + 320), v32, v30);
  sub_10111820((float *)(a1 + 320), v29, v31);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10219BB0(v28);
  v28[0] = &CPASFilter::`vftable';
  sub_1021A370(v28, a1 + 580);
  for ( i = 0; i < 5; ++i )
  {
    sub_10111860(v6, v30, v31, (float *)v33);
    v8 = (int)*off_1065C5EC;
    v9 = (*(int (__thiscall **)(int, int, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
           dword_106B31E4,
           8,
           15,
           i >= 2 ? 138 : 2,
           100,
           0,
           0,
           67);
    v24 = (float)(*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 4, 10, v9);
    v25 = ((double (__thiscall *)(int, _DWORD, _DWORD, int *, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            1.0,
            v33,
            word_10696BA4,
            LODWORD(v24));
    (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD))(v8 + 76))(off_1065C5EC, v28, LODWORD(v25));
  }
  v10 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 4, a2);
  if ( v10 > 0 )
  {
    v44 = v10;
    do
    {
      v11 = sub_101811E0("gib", -1);
      v13 = __RTDynamicCast(
              v11,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CGib `RTTI Type Descriptor',
              0);
      if ( !v13 )
        Warning("classname %s used to create wrong class type\n", v27);
      sub_10166E20(v13, v12, (int)"models/gibs/hgibs.mdl");
      sub_101660B0((_DWORD *)v13, -1);
      v43 = sub_10219A30();
      v35[0] = (double)v43 * 0.000030518509 * 180.0 - 90.0;
      v43 = sub_10219A30();
      v35[1] = (double)v43 * 0.000030518509 * 180.0 - 90.0;
      v43 = sub_10219A30();
      v35[2] = (double)v43 * 0.000030518509 * 180.0 - 90.0;
      sub_100E0D20(v13, (float *)v33);
      sub_100E0EA0(v13, v35);
      v14 = ((__int64 (__thiscall *)(int, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2);
      sub_10166E20(v13, SHIDWORD(v14), (int)off_10688A80[(_DWORD)v14]);
      v15 = v42;
      (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v13 + 76))(v13, v42);
      *(float *)(v13 + 1132) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                 dword_106B31E4,
                                 6.0,
                                 8.0);
      sub_100EBE30(v13, 1);
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 320) + 48))(v13 + 320);
      v17 = sub_100E9550((_DWORD *)v13, 6, v16, 0, 0);
      v18 = v17;
      if ( v17 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 60))(v17, 1);
        v34[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                   dword_106B31E4,
                   -20.0,
                   20.0);
        v34[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                   dword_106B31E4,
                   0.0,
                   360.0);
        v34[2] = 0.0;
        sub_10422220(v34, &v39);
        v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                300.0,
                900.0);
        v20 = *(_DWORD *)(v15 + 252) >> 12;
        v39 = v39 * v19;
        v40 = v40 * v19;
        v41 = v19 * v41;
        if ( (v20 & 1) != 0 )
          sub_100DAFD0(v15);
        v39 = *(float *)(v15 + 476) + v39;
        v40 = *(float *)(v15 + 480) + v40;
        v41 = *(float *)(v15 + 484) + v41;
        v43 = sub_10219A30();
        v36 = (double)v43 * 0.000030518509 * 360.0 - 180.0;
        v43 = sub_10219A30();
        v37 = (double)v43 * 0.000030518509 * 360.0 - 180.0;
        v43 = sub_10219A30();
        v38[0] = v36;
        v38[1] = v37;
        v38[2] = (double)v43 * 0.000030518509 * 360.0 - 180.0;
        sub_100DD660(v13, &v39);
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v18 + 196))(v18, &v39, v38);
      }
      v21 = sub_1012B790(v13, 0);
      if ( v21 )
        sub_1012B210(v21, *(float *)(v13 + 1132));
      --v44;
    }
    while ( v44 );
  }
  sub_10261B70((float *)v33, 25.0, 150.0, 1.0, 750.0, 0, 0);
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    v22 = v42;
    (*(void (__thiscall **)(unsigned int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v42 + 808))(v42, 6.0, 0, 0.0);
  }
  else
  {
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v42 + 808))(60.0, 0, 0.0);
    v22 = v42;
  }
  if ( *(_BYTE *)(v22 + 224) != 1 )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)v22 + 472))(v22, v22 + 224);
    *(_BYTE *)(v22 + 224) = 1;
  }
  *(_DWORD *)(v22 + 1780) = 4;
  *(float *)(v22 + 1784) = *(float *)(dword_106B31C8 + 12);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v28);
}
