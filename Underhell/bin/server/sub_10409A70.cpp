char __usercall sub_10409A70@<al>(int a1@<ecx>, double a2@<st0>)
{
  int v3; // edi
  int v5; // ebx
  float v6; // [esp+8h] [ebp-4h] BYREF

  v3 = sub_100D1940((_DWORD *)a1);
  if ( !v3 || sub_100CF5D0((_DWORD *)v3, *(_DWORD *)(a1 + 1192)) <= 0 )
    return 0;
  v5 = *(_DWORD *)(a1 + 1200);
  if ( v5 >= (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1216))(a1) )
    return 0;
  if ( v5 <= 0 )
    *(_BYTE *)(a1 + 1392) = 1;
  if ( sub_100CF5D0((_DWORD *)v3, *(_DWORD *)(a1 + 1192)) <= 1
    && sub_100CF5D0((_DWORD *)v3, *(_DWORD *)(a1 + 1192)) <= 0 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v3 + 2137) )
    (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
      dword_106B31D0,
      *(_DWORD *)(v3 + 24),
      "ironsight_toggle");
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 252);
  sub_100C1600(a1, 1, 0);
  sub_1002ABA0((float *)(v3 + 1672), (float *)(dword_106B31C8 + 12));
  sub_100D18C0(a1);
  v6 = a2 + *(float *)(dword_106B31C8 + 12);
  sub_100D2D00((float *)(a1 + 1132), &v6);
  *(_BYTE *)(a1 + 1144) = 1;
  return 1;
}
