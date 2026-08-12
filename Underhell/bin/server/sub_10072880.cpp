int __cdecl sub_10072880(float *a1, float *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // esi
  int v6[3]; // [esp+4h] [ebp-14h] BYREF
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  memset(v6, 0, sizeof(v6));
  v7 = 0;
  v8 = 0;
  if ( sub_100727B0(a1, a2, a3, v6) <= 0 )
  {
    dword_10692FE0[0] = 0;
    dword_10692FE4 = 0;
    dword_10692FE8 = 0;
    dword_10692FEC = 0;
    dword_10692FF0 = 0;
    dword_10692FF4 = 0;
    dword_10692FF8 = 0;
    dword_10692FFC = 0;
    dword_10693000 = 0;
    sub_102375F0(v6);
    return 0;
  }
  else
  {
    v3 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v7 - 1);
    v4 = *(_DWORD *)(v6[0] + 4 * v3);
    if ( v4 )
    {
      dword_10693000 = ((_BYTE)dword_10693000 + 1) & 7;
      dword_10692FE0[dword_10693000] = v4;
    }
    sub_102375F0(v6);
    return v4;
  }
}
