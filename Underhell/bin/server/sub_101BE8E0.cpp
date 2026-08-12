void __userpurge sub_101BE8E0(int a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  __int64 v4; // rdi
  int v5; // eax
  char *v6; // eax
  int v7; // eax
  double v8; // st7
  float *v9; // ecx
  int v10; // ecx
  float *v11; // ecx
  float *v12; // ecx
  int v13; // ecx
  int *v14; // ecx
  const char *v15; // eax
  int v16; // esi
  int v17; // eax
  float v18; // [esp+1Ch] [ebp-98h]
  _DWORD v19[8]; // [esp+2Ch] [ebp-88h] BYREF
  int v20; // [esp+4Ch] [ebp-68h] BYREF
  const char *v21; // [esp+50h] [ebp-64h]
  float v22; // [esp+54h] [ebp-60h]
  int v23; // [esp+58h] [ebp-5Ch]
  _BYTE v24[24]; // [esp+78h] [ebp-3Ch] BYREF
  float v25[3]; // [esp+90h] [ebp-24h] BYREF
  float v26[3]; // [esp+9Ch] [ebp-18h] BYREF
  float v27; // [esp+A8h] [ebp-Ch] BYREF
  double v28; // [esp+ACh] [ebp-8h] BYREF

  HIDWORD(v4) = a1;
  if ( !*(_BYTE *)(a1 + 2160) && 0.0 != *(float *)(a1 + 2164) )
  {
    LODWORD(v4) = a3;
    if ( *(float *)&a3 == 0.0 )
      *(_DWORD *)(a1 + 2244) = -1;
    else
      *(_DWORD *)(a1 + 2244) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
    sub_101BDDC0((int *)HIDWORD(v4), v26, (float *)a4);
    sub_1010DD80((_DWORD *)(HIDWORD(v4) + 2188), v4, 0.0);
    sub_101BDD20((float *)(HIDWORD(v4) + 2120), HIDWORD(v4) + 2108, v26, *(_DWORD *)(HIDWORD(v4) + 424));
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106BAFF4 + 116))(
           dword_106BAFF4,
           HIDWORD(v4) + 2120,
           a2);
    LODWORD(v4) = *(_DWORD *)(HIDWORD(v4) + 424);
    *(_DWORD *)(HIDWORD(v4) + 2152) = v5;
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 8))(v5, v4, 1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 96))(v4);
    *(_BYTE *)(HIDWORD(v4) + 2160) = 1;
    *(float *)(HIDWORD(v4) + 2176) = *(float *)(dword_106B31C8 + 12);
    v18 = *(float *)(dword_106B31C8 + 12) + *(float *)(HIDWORD(v4) + 2164);
    sub_100EC4A0((int *)HIDWORD(v4), v18, 0);
    sub_100EC3F0((_DWORD *)HIDWORD(v4), (int)sub_101BE7D0, 0.0, 0);
    v27 = -v26[0];
    *(float *)&v28 = -v26[1];
    *((float *)&v28 + 1) = -v26[2];
    sub_10422540(&v27, v25);
    v6 = sub_100E3960((int)"env_steam", (float *)(HIDWORD(v4) + 2108), v25, SHIDWORD(v4));
    v7 = __RTDynamicCast(
           (int)v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CSteamJet `RTTI Type Descriptor',
           0);
    *(_DWORD *)(HIDWORD(v4) + 2156) = v7;
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 140))(v7, HIDWORD(v4), -1);
    v8 = *(float *)(HIDWORD(v4) + 2148) * 0.00019999999;
    *(float *)&a3 = v8;
    if ( v8 <= 1.0 )
    {
      if ( v8 < 0.0 )
        *(float *)&a3 = 0.0;
    }
    else
    {
      *(float *)&a3 = 1.0;
    }
    v9 = (float *)(*(_DWORD *)(HIDWORD(v4) + 2156) + 800);
    v28 = *(float *)(HIDWORD(v4) + 2148) * 15.0 * 0.001;
    sub_101BE090(v9, &v28);
    *(float *)&a4 = *(float *)&a3 * 100.0 + 128.0;
    sub_10284530(&a4);
    v10 = *(_DWORD *)(HIDWORD(v4) + 2156);
    a4 = 10;
    sub_101BE0F0((float *)(v10 + 808), &a4);
    v11 = (float *)(*(_DWORD *)(HIDWORD(v4) + 2156) + 812);
    a4 = 25;
    sub_101BE150(v11, &a4);
    v12 = (float *)(*(_DWORD *)(HIDWORD(v4) + 2156) + 816);
    a3 = 20 * (int)*(float *)&a3 + 52;
    sub_100C1CA0(v12, &a3);
    v13 = *(_DWORD *)(HIDWORD(v4) + 2156);
    a3 = 64;
    sub_101BE1B0((float *)(v13 + 820), &a3);
    LODWORD(v4) = *(_DWORD *)(HIDWORD(v4) + 2156);
    if ( *(_DWORD *)(v4 + 116) != *(_DWORD *)(HIDWORD(v4) + 116) )
    {
      if ( *(_BYTE *)(v4 + 84) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
      }
      else
      {
        v14 = *(int **)(v4 + 24);
        if ( v14 )
          sub_100194B0(v14, 116);
      }
      *(_DWORD *)(v4 + 116) = *(_DWORD *)(HIDWORD(v4) + 116);
    }
    (*(void (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(HIDWORD(v4) + 2156) + 372))(HIDWORD(v4), HIDWORD(v4), 1);
    if ( *(_DWORD *)(HIDWORD(v4) + 2180) )
    {
      sub_100D78A0(v19, SHIDWORD(v4), 0.80000001);
      sub_100F8510((float *)&v20);
      v15 = *(const char **)(HIDWORD(v4) + 2180);
      v20 = 3;
      v21 = v15;
      if ( !v15 )
        v21 = String;
      v16 = *(_DWORD *)(HIDWORD(v4) + 24);
      v22 = 1.0;
      v23 = 75;
      v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v16);
      sub_1023BE40(v19, v17, &v20);
      sub_102375F0(v24);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v19);
    }
  }
}
