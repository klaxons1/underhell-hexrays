void __usercall sub_101E4DF0(int a1@<ebp>, int a2)
{
  float v2; // edx
  float v3; // eax
  float *v4; // esi
  int v5; // eax
  float v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  float v11; // ecx
  int v12; // edx
  float v13[22]; // [esp+34h] [ebp-ECh] BYREF
  _BYTE v14[12]; // [esp+8Ch] [ebp-94h] BYREF
  _BYTE v15[43]; // [esp+98h] [ebp-88h] BYREF
  char v16; // [esp+C3h] [ebp-5Dh]
  _BYTE v17[12]; // [esp+E8h] [ebp-38h] BYREF
  float v18[3]; // [esp+F4h] [ebp-2Ch] BYREF
  float v19; // [esp+100h] [ebp-20h] BYREF
  int v20; // [esp+104h] [ebp-1Ch]
  float v21; // [esp+108h] [ebp-18h]
  float *v22; // [esp+10Ch] [ebp-14h]
  int i; // [esp+110h] [ebp-10h]
  int v24; // [esp+114h] [ebp-Ch]
  void *v25; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v24 = a1;
  v25 = retaddr;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v2 = *(float *)(a2 + 584);
  v3 = *(float *)(a2 + 588);
  v4 = (float *)(a2 + 580);
  v18[0] = *(float *)(a2 + 580);
  v18[1] = v2;
  v18[2] = v3;
  i = 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v22 = (float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 48);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    sub_1001F200(v13, (float *)(a2 + 580), (float *)(a2 + 580), (float *)(v5 + 36), v22);
    sub_10265570(a2, 8);
    (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v13,
      33636363,
      v17,
      v14);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v14, (int)v15, 255, 255, 0, 1, -1.0);
    if ( !v16 )
      break;
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v6 = *v4;
    v7 = *(_DWORD *)(a2 + 584);
    v21 = *(float *)(a2 + 588);
    v19 = v6;
    v21 = v21 + 1.0;
    v20 = v7;
    sub_100E10C0(a2, &v19);
    if ( ++i >= 18 )
    {
      sub_100E0D20(a2, v18);
      for ( i = 0; i < 18; ++i )
      {
        if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
          sub_100DAE60(a2);
        if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
          sub_100DAE60(a2);
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
        v9 = *(_DWORD *)dword_106B3CDC;
        v22 = (float *)(v8 + 48);
        v10 = (*(int (__thiscall **)(int))(v9 + 120))(dword_106B3CDC);
        sub_1001F200(v13, (float *)(a2 + 580), (float *)(a2 + 580), (float *)(v10 + 36), v22);
        sub_10265570(a2, 8);
        (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v13,
          33636363,
          v17,
          v14);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v14, (int)v15, 255, 255, 0, 1, -1.0);
        if ( !v16 )
          break;
        if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
          sub_100DAE60(a2);
        v11 = *v4;
        v12 = *(_DWORD *)(a2 + 584);
        v21 = *(float *)(a2 + 588);
        v19 = v11;
        v21 = v21 - 1.0;
        v20 = v12;
        sub_100E10C0(a2, &v19);
      }
      return;
    }
  }
}
