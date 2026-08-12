int *__userpurge sub_100F4700@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  double v5; // st6
  double v6; // st7
  int v7; // eax
  int v8; // edx
  int v9; // eax
  double v10; // st7
  float v11; // eax
  float v12; // edx
  int v13; // eax
  int v14; // ebx
  double v15; // st7
  unsigned int v16; // eax
  int *v17; // ecx
  unsigned int v18; // eax
  int v19; // ebx
  float *v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ebx
  int v24; // eax
  int *result; // eax
  unsigned int v26; // esi
  int v27; // esi
  float v28; // [esp+30h] [ebp-C0h]
  float v29; // [esp+30h] [ebp-C0h]
  int v30; // [esp+3Ch] [ebp-B4h]
  float v31; // [esp+44h] [ebp-ACh]
  int v32; // [esp+48h] [ebp-A8h]
  int v33[20]; // [esp+54h] [ebp-9Ch] BYREF
  _DWORD v34[11]; // [esp+A4h] [ebp-4Ch] BYREF
  int v35; // [esp+D0h] [ebp-20h]
  _DWORD v36[3]; // [esp+D4h] [ebp-1Ch] BYREF
  int v37; // [esp+E0h] [ebp-10h] BYREF
  float v38; // [esp+E4h] [ebp-Ch]
  float v39; // [esp+E8h] [ebp-8h]
  int v40; // [esp+ECh] [ebp-4h]

  *(_DWORD *)(a1 + 460) = 0;
  sub_100D8500((_DWORD *)a1);
  sub_101129A0(*(unsigned __int16 *)(a1 + 356) | 4);
  if ( *(_BYTE *)(a1 + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 0;
  }
  if ( 1.0 != *(float *)(a3 + 44) )
  {
    v5 = 0.60000002 * *(float *)(a3 + 32);
    v6 = *(float *)(a3 + 28) * 0.60000002;
    *(float *)&v37 = *(float *)(a3 + 24) * 0.60000002 + *(float *)(a3 + 12);
    v38 = v6 + *(float *)(a3 + 16);
    v39 = v5 + *(float *)(a3 + 20);
    sub_100E0D20(a1, (float *)&v37);
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = *(_DWORD *)(a1 + 580);
  v8 = *(_DWORD *)(a1 + 588);
  v36[1] = *(_DWORD *)(a1 + 584);
  v36[0] = v7;
  v36[2] = v8;
  v9 = (**(int (__thiscall ***)(int, _DWORD *, _DWORD, int))dword_106B31F4)(dword_106B31F4, v36, 0, a2);
  v10 = *(float *)(a3 + 44);
  v40 = v9;
  if ( 1.0 == v10 )
  {
    sub_10219BB0(v34);
    v34[0] = &CPASFilter::`vftable';
    sub_1021A370(v36);
    if ( (v40 & 0x4030) != 0 )
      HIWORD(v40) = word_10696B9C;
    else
      HIWORD(v40) = word_10696BA4;
    v29 = *(float *)(a1 + 2112) * 0.03;
    ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD, _DWORD *, _DWORD, _DWORD, int, _DWORD, int, int, _DWORD, int))(*off_1065C5EC)[19])(
      off_1065C5EC,
      v34,
      -1.0,
      v36,
      SHIWORD(v40),
      LODWORD(v29),
      25,
      0,
      (int)*(float *)(a1 + 2112),
      (int)*(float *)(a1 + 2128),
      0,
      67);
  }
  else
  {
    v11 = *(float *)(a3 + 32);
    v12 = *(float *)(a3 + 28);
    v37 = *(int *)(a3 + 24);
    v39 = v11;
    v13 = *(__int16 *)(a3 + 64);
    v38 = v12;
    v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v13);
    sub_10219BB0(v34);
    v34[0] = &CPASFilter::`vftable';
    sub_1021A370(v36);
    if ( (v40 & 0x4030) != 0 )
      HIWORD(v40) = word_10696B9C;
    else
      HIWORD(v40) = word_10696BA4;
    v15 = *(float *)(a1 + 2128);
    v32 = *(unsigned __int8 *)(v14 + 72);
    v35 = (int)*off_1065C5EC;
    v28 = *(float *)(a1 + 2112) * 0.03;
    (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, _DWORD *, _DWORD, _DWORD, int, _DWORD, int, int, int *, int))(v35 + 76))(
      off_1065C5EC,
      v34,
      -1.0,
      v36,
      SHIWORD(v40),
      LODWORD(v28),
      25,
      0,
      (int)*(float *)(a1 + 2112),
      (int)v15,
      &v37,
      v32);
  }
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v34);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_1023D4B0(1, a1 + 580, 1024, 3.0, 0, 0, 0);
  v16 = *(_DWORD *)(a1 + 2136);
  if ( v16 != -1
    && (v17 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 2136) & 0xFFF) + 1],
        v18 = v16 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a1 + 2136) & 0xFFF) + 2] == v18)
    && *v17 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 2136) & 0xFFF) + 2] == v18 )
      v19 = *v17;
    else
      v19 = 0;
    if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
      sub_100DAE60(v19);
    v20 = (float *)(v19 + 580);
  }
  else
  {
    v20 = &flt_106F1CA8;
  }
  *(float *)&v34[8] = *v20;
  v21 = *(_DWORD *)(a1 + 252);
  *(float *)&v34[9] = v20[1];
  *(float *)&v34[10] = v20[2];
  if ( (v21 & 0x800) != 0 )
    sub_100DAE60(a1);
  v22 = *(_DWORD *)(a1 + 2136);
  if ( v22 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 2136) & 0xFFF) + 2] != v22 >> 12 )
    v23 = 0;
  else
    v23 = off_1061BE18[4 * (*(_DWORD *)(a1 + 2136) & 0xFFF) + 1];
  v30 = *(int *)(a1 + 2128);
  v24 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1156))(a1);
  sub_102487B0(a1, v23, v24, (int)&v37, COERCE_FLOAT(a1 + 580), v30, a4, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_100C9F20((int)v33, a1 + 580, *(float *)(a1 + 2112), 0, 0);
  sub_10264E40(a3, "Scorch");
  sub_1023C380((int)"BaseGrenade.Explode", 0.0, 0);
  sub_100EC3F0((_DWORD *)a1, (int)sub_10246D70, 0.0, 0);
  *(_DWORD *)(a1 + 196) = 0;
  sub_10112C00(0);
  sub_100EAB80((_DWORD *)a1, 32);
  sub_100DD660(a1, &flt_106F1CA8);
  v31 = *(float *)(dword_106B31C8 + 12) + 0.1;
  result = (int *)sub_100EC4A0((int *)a1, v31, 0);
  v26 = *(_DWORD *)(a1 + 2136);
  if ( v26 != -1 )
  {
    result = &off_1061BE18[4 * (v26 & 0xFFF) + 1];
    if ( off_1061BE18[4 * (v26 & 0xFFF) + 2] == v26 >> 12 )
    {
      v27 = *result;
      if ( *result )
      {
        result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v27 + 320))(v27);
        if ( (_BYTE)result )
          return (int *)(*(int (__thiscall **)(int, int, int, const char *, int *))(*(_DWORD *)off_10627F88 + 120))(
                          off_10627F88,
                          v27,
                          1,
                          "weapon_frag",
                          v33);
      }
    }
  }
  return result;
}
