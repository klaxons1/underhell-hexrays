char __userpurge sub_100D4170@<al>(float *a1@<ecx>, double a2@<st0>, float a3, int a4, int a5)
{
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // ecx
  int v9; // edi
  int v11; // ebx
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  float *v17; // eax
  char v18; // [esp+1Bh] [ebp-1h]

  v6 = *((_DWORD *)a1 + 280);
  if ( v6 == -1 )
    return 0;
  v7 = &off_1061BE18[4 * ((_DWORD)a1[280] & 0xFFF) + 1];
  if ( v7[1] != v6 >> 12 )
    return 0;
  v8 = *v7;
  if ( !v8 )
    return 0;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 288))(v8);
  if ( !v9 || sub_100CF5D0((_DWORD *)v9, *((_DWORD *)a1 + 298)) <= 0 )
    return 0;
  v18 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1272))(a1) )
  {
    v11 = LODWORD(a3) - *((_DWORD *)a1 + 300);
    if ( v11 >= sub_100CF5D0((_DWORD *)v9, *((_DWORD *)a1 + 298))
       ? sub_100CF5D0((_DWORD *)v9, *((_DWORD *)a1 + 298))
       : v11 )
    {
      v18 = 1;
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1276))(a1)
    || ((v13 = a4 - *((_DWORD *)a1 + 301), v13 >= sub_100CF5D0((_DWORD *)v9, *((_DWORD *)a1 + 299)))
      ? (v14 = sub_100CF5D0((_DWORD *)v9, *((_DWORD *)a1 + 299)))
      : (v14 = v13),
        !v14) )
  {
    if ( !v18 )
      return 0;
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 944))(a1, a5);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 1300))(v9, 7);
    if ( *(_BYTE *)(v9 + 2137) )
      (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
        dword_106B31D0,
        *(_DWORD *)(v9 + 24),
        "ironsight_toggle");
  }
  v15 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v16 = sub_100BDCE0((int)a1, 183);
  sub_10019B30(a1, v16);
  a3 = a2 + *(float *)(dword_106B31C8 + 12);
  sub_10031BA0(v9, a3);
  v17 = sub_100D2D50(a1 + 284, &a3);
  sub_100D2D00(a1 + 283, v17);
  *((_BYTE *)a1 + 1144) = 1;
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 104))(v15);
  return 1;
}
