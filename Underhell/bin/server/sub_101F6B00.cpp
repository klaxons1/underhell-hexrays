int __usercall sub_101F6B00@<eax>(int *a1@<ecx>, int a2@<ebx>)
{
  int (__thiscall *v3)(int); // edx
  _DWORD *v4; // eax
  int *v5; // ecx
  int *v6; // ecx
  int v7; // ebx
  int v8; // ebx
  int *v9; // ecx
  int *v10; // eax
  int v11; // eax
  float *v12; // eax
  void (__thiscall *v13)(int, _DWORD); // eax
  int v14; // ebx
  int *v15; // ecx
  _DWORD *v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // edx
  void (__thiscall *v22)(int); // edx
  bool v23; // zf
  int v24; // eax
  int v25; // ecx
  int *v26; // ecx
  int v27; // edi
  int v28; // eax
  int v30; // [esp+50h] [ebp-34h]
  _DWORD v31[9]; // [esp+5Ch] [ebp-28h] BYREF
  int v32; // [esp+80h] [ebp-4h] BYREF

  sub_100EC390(a1, (int)"KickContext");
  sub_100EC3F0(a1, (int)sub_101F2990, -1.0, (int)"KickContext");
  sub_100EC390(a1, (int)"FlareHitContext");
  sub_100EC3F0(a1, (int)sub_101F2A20, -1.0, (int)"FlareHitContext");
  sub_100EC390(a1, (int)"FlashLightContext");
  sub_100EC3F0(a1, (int)sub_101EB870, -1.0, (int)"FlashLightContext");
  sub_100EC390(a1, (int)"BulletTimeEndContext");
  sub_100EC3F0(a1, (int)sub_101E2590, -1.0, (int)"BulletTimeEndContext");
  v3 = *(int (__thiscall **)(int))(*a1 + 1568);
  a1[850] = 0;
  if ( v3((int)a1) )
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 1568))(a1);
    sub_1016BDC0(v4);
  }
  sub_101EB580((int)a1);
  sub_100D5D20(a1, (int)"player");
  (*(void (__thiscall **)(int *))(*a1 + 1160))(a1);
  if ( *((_BYTE *)a1 + 605) != 1 )
  {
    if ( *((_BYTE *)a1 + 84) )
    {
      *((_BYTE *)a1 + 88) |= 1u;
    }
    else
    {
      v5 = (int *)a1[6];
      if ( v5 )
        sub_100194B0(v5, 605);
    }
    *((_BYTE *)a1 + 605) = 1;
  }
  if ( *((_BYTE *)a1 + 606) != 1 )
  {
    if ( *((_BYTE *)a1 + 84) )
    {
      *((_BYTE *)a1 + 88) |= 1u;
    }
    else
    {
      v6 = (int *)a1[6];
      if ( v6 )
        sub_100194B0(v6, 606);
    }
    *((_BYTE *)a1 + 606) = 1;
  }
  v7 = (*(int (__thiscall **)(int *, int))(*a1 + 1624))(a1, a2);
  if ( a1[1002] != v7 )
  {
    (*(void (__thiscall **)(int *, int *))(*a1 + 1628))(a1, a1 + 1002);
    a1[1002] = v7;
  }
  sub_100E88A0(a1, 0);
  if ( a1[54] != a1[55] )
  {
    (*(void (__thiscall **)(int *, int *))(*a1 + 456))(a1, a1 + 54);
    a1[54] = a1[55];
  }
  v8 = *(_DWORD *)(dword_106BB64C + 48);
  if ( a1[546] != v8 )
  {
    if ( *((_BYTE *)a1 + 84) )
    {
      *((_BYTE *)a1 + 88) |= 1u;
    }
    else
    {
      v9 = (int *)a1[6];
      if ( v9 )
        sub_100194B0(v9, 2184);
    }
    a1[546] = v8;
  }
  if ( (a1[64] & 0x100) != 0 )
  {
    sub_100EAA00(a1);
    sub_100EA940(a1, 384);
  }
  else
  {
    sub_100EAA00(a1);
    sub_100EA940(a1, 128);
  }
  sub_100EA940(a1, 0x10000);
  v30 = a1[48] & 0x10 | 8;
  *((float *)a1 + 1003) = *(float *)(dword_106B31C8 + 12) + 7.0;
  a1[1044] = 10;
  sub_100EAAB0(a1, v30);
  v10 = sub_101437E0();
  sub_101E6360((unsigned int *)a1 + 609, v10[3]);
  v11 = a1[880];
  *((float *)a1 + 864) = 0.0;
  *((float *)a1 + 865) = 0.0;
  a1[867] = -1;
  a1[866] = 0;
  a1[854] = 0;
  a1[881] = v11;
  sub_100F8040((int)a1, (int)a1, 0, 0.0, 0);
  *((float *)a1 + 1000) = 0.0;
  *((float *)a1 + 988) = *(float *)(dword_106B31C8 + 12) + 2.0;
  *((float *)a1 + 421) = 0.76599997;
  *((float *)a1 + 844) = flt_106F1CA8;
  *((float *)a1 + 845) = flt_106F1CAC;
  *((float *)a1 + 846) = flt_106F1CB0;
  *((float *)a1 + 847) = flt_106F1CA8;
  *((float *)a1 + 848) = flt_106F1CAC;
  *((float *)a1 + 849) = flt_106F1CB0;
  if ( !*((_BYTE *)a1 + 3961) )
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_106B3CDC + 436))(dword_106B3CDC, a1);
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_106B3CDC + 276))(dword_106B3CDC, a1);
  if ( *((_BYTE *)a1 + 2272) )
  {
    (*(void (__thiscall **)(int *, int *))a1[548])(a1 + 548, a1 + 568);
    *((_BYTE *)a1 + 2272) = 0;
  }
  if ( *((_BYTE *)a1 + 2273) )
  {
    (*(void (__thiscall **)(int *, int))a1[548])(a1 + 548, (int)a1 + 2273);
    *((_BYTE *)a1 + 2273) = 0;
  }
  v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  sub_100DC4E0((float *)a1, v12);
  (*(void (__thiscall **)(int *))(*a1 + 100))(a1);
  v13 = *(void (__thiscall **)(int, _DWORD))(*a1 + 1448);
  a1[866] = 0;
  a1[867] = -1;
  v13((int)a1, 0);
  a1[852] = 192;
  *((float *)a1 + 422) = 0.0;
  *((float *)a1 + 423) = 32.0;
  *((float *)a1 + 424) = 0.0;
  v14 = *(_DWORD *)(dword_106BB88C + 48);
  if ( a1[859] != v14 )
  {
    if ( *((_BYTE *)a1 + 84) )
    {
      *((_BYTE *)a1 + 88) |= 1u;
    }
    else
    {
      v15 = (int *)a1[6];
      if ( v15 )
        sub_100194B0(v15, 3436);
    }
    a1[859] = v14;
  }
  sub_10110F90(&dword_106BB888);
  if ( a1[907] == -1 )
    Msg("Couldn't alloc player sound slot!\n");
  sub_100EC3F0(a1, 0, 0.0, 0);
  *((_BYTE *)a1 + 3960) = 1;
  *((_BYTE *)a1 + 3962) = 0;
  a1[992] = -1;
  a1[997] = 0;
  a1[996] = 0;
  a1[1101] = 0;
  if ( dword_106B8370 )
    sub_1019E930();
  if ( *((_BYTE *)a1 + 84) )
  {
    *((_BYTE *)a1 + 88) |= 1u;
  }
  else
  {
    v16 = (_DWORD *)a1[6];
    if ( v16 )
    {
      *v16 |= 0x101u;
      *(_WORD *)(sub_10153460(v16) + 2) = 0;
    }
  }
  sub_104299C0((char *)a1 + 4408, (char *)String, 0x12u);
  sub_10219BB0(v31);
  v31[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00(a1);
  (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E8 + 40))(dword_106B31E8, v31, 0, 0);
  (*(void (__thiscall **)(int *, _DWORD))(*a1 + 1148))(a1, 0);
  (*(void (__thiscall **)(int *, int))(*a1 + 1148))(a1, 1);
  (*(void (__thiscall **)(int *, int))(*a1 + 1148))(a1, 2);
  v17 = a1[1008];
  if ( v17 == -1 || off_1061BE18[4 * (a1[1008] & 0xFFF) + 2] != v17 >> 12 )
    v18 = 0;
  else
    v18 = off_1061BE18[4 * (a1[1008] & 0xFFF) + 1];
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v18 + 840))(v18, "models/weapons/v_kick_jake_casual.mdl");
  v19 = a1[1008];
  if ( v19 == -1 || off_1061BE18[4 * (a1[1008] & 0xFFF) + 2] != v19 >> 12 )
    v20 = 0;
  else
    v20 = off_1061BE18[4 * (a1[1008] & 0xFFF) + 1];
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v20 + 836))(v20, 1);
  sub_100EBE30((int)a1, 5);
  if ( a1[1005] )
  {
    a1[1005] = 0;
    sub_100EA940(a1, 16416);
    sub_100E0970((int)a1, v21, 0, 0);
    v22 = *(void (__thiscall **)(int))(*a1 + 1248);
    a1[1005] = 1;
    v22((int)a1);
  }
  v23 = sub_100D8840(a1) == 1;
  v24 = *a1;
  if ( v23 )
    (*(void (__thiscall **)(int *, int))(v24 + 1316))(a1, a1[875]);
  else
    (*(void (__thiscall **)(int *))(v24 + 1320))(a1);
  (*(void (__thiscall **)(int *))(*a1 + 1388))(a1);
  v32 = -16777216;
  sub_102600B0((int)a1, (int)&v32, 0.0, 0.0, 17);
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_106B3CDC + 260))(dword_106B3CDC, a1);
  v25 = a1[1082];
  *(float *)&v31[8] = 1.0;
  if ( v25 != COERCE_INT(1.0) )
  {
    if ( *((_BYTE *)a1 + 84) )
    {
      *((_BYTE *)a1 + 88) |= 1u;
    }
    else
    {
      v26 = (int *)a1[6];
      if ( v26 )
        sub_100194B0(v26, 4328);
    }
    *((float *)a1 + 1082) = 1.0;
  }
  *((float *)a1 + 903) = flt_106F1CA8;
  *((float *)a1 + 904) = flt_106F1CAC;
  *((float *)a1 + 905) = flt_106F1CB0;
  if ( (a1[63] & 0x1000) != 0 )
    sub_100DAFD0((int)a1);
  if ( (a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  (*(void (__thiscall **)(int *, int *, int *))(*a1 + 1560))(a1, a1 + 145, a1 + 119);
  v27 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
          dword_106B31F8,
          "player_spawn",
          0);
  if ( v27 )
  {
    v28 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, a1[6]);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v27 + 40))(v27, "userid", v28);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v27, 0);
  }
  sub_101E3110(a1, 0, 0, 0);
  a1[1096] = 0;
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v31);
}
