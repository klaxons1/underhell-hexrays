void __usercall sub_103ED200(int a1@<ecx>, int a2@<edi>)
{
  double v3; // st7
  int v4; // eax
  unsigned int v5; // eax
  void **v6; // ecx
  unsigned int v7; // eax
  void *v8; // ecx
  int v9; // eax
  double v10; // st7
  void *v11; // edi
  int (__thiscall *v12)(int); // eax
  int v13; // eax
  int v14; // eax
  int *v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  int *v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // ecx
  void (__thiscall *v22)(int, float *, int); // edx
  double v23; // st7
  int v24; // eax
  float v25; // [esp+28h] [ebp-12Ch]
  float v26; // [esp+30h] [ebp-124h]
  int v27[20]; // [esp+40h] [ebp-114h] BYREF
  _BYTE v28[12]; // [esp+90h] [ebp-C4h] BYREF
  int v29[8]; // [esp+9Ch] [ebp-B8h] BYREF
  _DWORD v30[3]; // [esp+BCh] [ebp-98h] BYREF
  int v31[3]; // [esp+C8h] [ebp-8Ch] BYREF
  _BYTE v32[42]; // [esp+D4h] [ebp-80h] BYREF
  char v33; // [esp+FEh] [ebp-56h]
  void *v34; // [esp+108h] [ebp-4Ch]
  _DWORD v35[8]; // [esp+110h] [ebp-44h] BYREF
  float v36; // [esp+130h] [ebp-24h]
  int v37; // [esp+134h] [ebp-20h] BYREF
  float v38; // [esp+138h] [ebp-1Ch]
  float v39; // [esp+13Ch] [ebp-18h]
  float v40; // [esp+140h] [ebp-14h]
  float v41; // [esp+144h] [ebp-10h] BYREF
  float v42; // [esp+148h] [ebp-Ch]
  float v43; // [esp+14Ch] [ebp-8h]
  char v44; // [esp+153h] [ebp-1h]
  int savedregs; // [esp+154h] [ebp+0h] BYREF

  if ( !*(_BYTE *)(a1 + 1724) )
  {
    *(_BYTE *)(a1 + 1736) = 0;
    v3 = *(float *)(dword_106B31C8 + 12);
    v44 = 0;
    *(float *)(a1 + 1740) = v3 + 0.5;
    sub_103EAF40((_DWORD *)a1);
    sub_10165630(v29, a1, (int)"PropJeep.FireChargedCannon");
    v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
    sub_1023C580(a2, a1, v29, v4, (int)"PropJeep.FireChargedCannon", 0, 0.0, 0);
    v5 = *(_DWORD *)(a1 + 1640);
    if ( v5 != -1 )
    {
      v6 = (void **)&off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 1];
      v7 = v5 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 2] == v7 )
            v8 = *v6;
          else
            v8 = 0;
          sub_101E3110(v8, 2u, 0, 4u);
        }
      }
    }
    v9 = sub_100BEF30(a1, "muzzle");
    sub_100BCCA0((void *)a1, v9, (int)v28, (int)&v41);
    sub_10422220(&v41, &v37);
    v41 = *(float *)&v37 * 56755.84 + *(float *)(a1 + 1748);
    v42 = v38 * 56755.84 + *(float *)(a1 + 1752);
    v43 = 56755.84 * v39 + *(float *)(a1 + 1756);
    sub_1002A5F0((int)&savedregs, a1, (float *)(a1 + 1748), &v41, 1174421507, a1, 0, (int)v30);
    sub_10247FD0();
    v10 = (*(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 1744)) * 0.33333334;
    v36 = v10;
    if ( v10 > 1.0 )
    {
      v10 = 1.0;
      v36 = 1.0;
    }
    v11 = v34;
    v40 = v10 * 235.0 + 15.0;
    if ( !sub_10163140(v30) || (v33 & 4) != 0 )
    {
      if ( v11 )
      {
        v25 = v40;
        v14 = (**(int (***)(void))(a1 + 1484))();
        sub_10248110((int)v27, a1, v14, v25, 256, 0);
        v26 = v36 * 4.0 + 1.0;
        v15 = sub_102D9B20();
        v16 = sub_100B9D10(v15, "GaussEnergy");
        sub_10248070((float *)v27, v16, (float *)&v37, (float *)v31, v26);
        sub_100E8760(v11, (int)v27, (int)&v37, (int)v30);
      }
    }
    else
    {
      sub_10262ED0((int)v30, *(_DWORD *)(a1 + 1732), (int)"ImpactJeep");
      sub_10264E40((int)v30, (int)"RedGlowFade");
      sub_10219BB0(v35);
      v35[0] = &CPVSFilter::`vftable';
      sub_1021A300(v35, (int)v31);
      ((void (__stdcall *)(_DWORD *, _DWORD, int *, _BYTE *, _DWORD))(*off_1065C5EC)[37])(v35, 0.0, v31, v32, 0);
      v12 = **(int (__thiscall ***)(int))(a1 + 1484);
      v41 = *(float *)&v37 * 48.0 + *(float *)v31;
      v42 = v38 * 48.0 + *(float *)&v31[1];
      v43 = 48.0 * v39 + *(float *)&v31[2];
      v13 = v12(a1 + 1484);
      sub_1002A5F0((int)&savedregs, a1, &v41, (float *)v31, 1174421507, v13, 0, (int)v30);
      if ( !v32[30] )
      {
        sub_10264E40((int)v30, (int)"RedGlowFade");
        v44 = 1;
      }
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v35);
    }
    sub_10248230();
    if ( (v33 & 4) == 0 )
    {
      sub_10262ED0((int)v30, *(_DWORD *)(a1 + 1732), (int)"ImpactJeep");
      sub_10219BB0(v35);
      v35[0] = &CPVSFilter::`vftable';
      sub_1021A300(v35, (int)v31);
      ((void (__stdcall *)(_DWORD *, _DWORD, int *, _BYTE *, _DWORD))(*off_1065C5EC)[37])(v35, 0.0, v31, v32, 0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v35);
    }
    sub_103ECF10((_DWORD *)a1, (float *)(a1 + 1748), (float *)v31, 9.6000004);
    v17 = *(_DWORD *)(a1 + 1640);
    if ( v17 != -1 )
    {
      v18 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 1];
      v19 = v17 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 2] == v19 )
      {
        if ( *v18 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 2] == v19 )
            v20 = *v18;
          else
            v20 = 0;
          *(float *)(v20 + 4172) = *(float *)(dword_106B31C8 + 12) + 0.5;
        }
      }
    }
    v21 = *(_DWORD *)(a1 + 424);
    if ( v21 )
    {
      v22 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)v21 + 240);
      v23 = -(v40 * 500.0);
      v41 = *(float *)&v37 * v23;
      v42 = v38 * v23;
      v43 = v23 * v39;
      v22(v21, &v41, a1 + 1748);
    }
    if ( v44 == 1 )
    {
      v24 = sub_10248110((int)v27, a1, a1, v40, 256, 0);
      sub_100C9F20(v24, (int)v31, 200.0, 0, 0);
    }
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v29);
  }
}
