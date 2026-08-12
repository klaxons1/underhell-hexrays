_DWORD *__thiscall sub_1005D7C0(int this, int a2)
{
  int v3; // ecx
  char *v4; // esi
  bool v5; // zf
  char v6; // dl
  char v7; // cl
  _DWORD *result; // eax
  _DWORD v9[9]; // [esp+8h] [ebp-24h] BYREF

  v3 = *(_DWORD *)(this + 852);
  if ( v3 == 5 )
    v4 = (char *)(this + 864);
  else
    v4 = (char *)&unk_10605778 + 36 * v3;
  v5 = *(_BYTE *)(this + 862) == 0;
  v6 = *(_BYTE *)(this + 860);
  qmemcpy(v9, v4, sizeof(v9));
  v9[0] = *(_DWORD *)(this + 856);
  v7 = *(_BYTE *)(this + 861);
  BYTE1(v9[1]) = v6;
  LOBYTE(v9[7]) = v7;
  if ( v5 )
    *(float *)&v9[8] = 0.0;
  sub_1005D310(a2, v9, this);
  if ( *(int *)(a2 + 64) > 0 )
  {
    *(float *)(a2 + 136) = 8.0;
    *(float *)(a2 + 132) = *(float *)(dword_106B31C8 + 12) + 8.0;
  }
  if ( *(_DWORD *)(a2 + 64) == 2 )
    *(_BYTE *)(a2 + 104) = 1;
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4) + 1364))(*(_DWORD *)(a2 + 4));
  if ( result == (_DWORD *)a2 )
    return sub_10044510(*(_DWORD *)(a2 + 4), (int)"Standoff behavior parms changed");
  return result;
}
