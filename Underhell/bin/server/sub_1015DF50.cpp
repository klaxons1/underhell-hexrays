char __stdcall sub_1015DF50(_DWORD *a1, int a2)
{
  int v3; // esi
  _DWORD v4[514]; // [esp+14h] [ebp-808h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a1 + 280))(a1, a2) )
    return 0;
  if ( (a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  sub_10261520((int)(a1 + 145), 128.0, 0);
  v3 = sub_1025EEE0(v4);
  if ( v3 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) || v3 == a2 )
    {
      ++v4[0];
      v3 = sub_1025EEE0(v4);
      if ( !v3 )
        return 1;
    }
    return 0;
  }
  return 1;
}
