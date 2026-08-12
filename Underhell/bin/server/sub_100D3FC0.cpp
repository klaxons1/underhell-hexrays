char __userpurge sub_100D3FC0@<al>(int a1@<ecx>, double a2@<st0>, float a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  void (__thiscall *v10)(int, int); // eax
  int v11; // eax
  int v12; // edi
  float *v13; // eax
  float v15; // [esp+Ch] [ebp-10h]

  v4 = *(_DWORD *)(a1 + 1120);
  if ( v4 == -1 )
    return 0;
  v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 1120) & 0xFFF) + 1];
  if ( v5[1] != v4 >> 12 )
    return 0;
  v6 = *v5;
  if ( !v6 )
    return 0;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 288))(v6);
  if ( !v7 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7) )
    return 0;
  if ( *(_BYTE *)(v7 + 2121) && sub_101E7EA0(1) && *(_DWORD *)(sub_101E7EA0(1) + 908) != 2 )
  {
    v8 = sub_101E7EA0(1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 836))(v8, 3);
    v9 = sub_101E7EA0(1);
    sub_100D18C0(v9);
    a2 = a2 + *(float *)(dword_106B31C8 + 12) + 2.0;
    v15 = a2;
    sub_100EC4A0(v15, (int)"FlashLightContext");
  }
  v10 = *(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944);
  if ( LOBYTE(a3) )
  {
    v10(a1, 212);
    v11 = sub_100BF520(a1, "Silencer");
    sub_100C1600(a1, v11, 1);
  }
  else
  {
    v10(a1, 213);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 1300))(v7, 7);
  if ( *(_BYTE *)(v7 + 2137) )
    (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
      dword_106B31D0,
      *(_DWORD *)(v7 + 24),
      "ironsight_toggle");
  v12 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  sub_100D18C0(a1);
  a3 = a2 + *(float *)(dword_106B31C8 + 12);
  sub_10031BA0(v7, a3);
  v13 = sub_100D2D50((float *)(a1 + 1136), &a3);
  sub_100D2D00((float *)(a1 + 1132), v13);
  *(_BYTE *)(a1 + 1145) = 1;
  (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
  return 1;
}
