char __fastcall sub_102DA8B0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v7; // esi
  int v8; // eax

  if ( a3 == dword_106E50A8 )
    return 0;
  if ( a3 == dword_106E50AC )
  {
    a1[854] &= ~0x40u;
    sub_100E0970((int)a1, a2, 2, 0);
    return 1;
  }
  if ( a3 != dword_106E50B0 )
    return 0;
  v7 = sub_102F3640();
  if ( v7 )
  {
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 1084))(v7, a5);
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 1120))(v7, a5, 1, v8 + 5);
  }
  a1[854] |= 0x40u;
  sub_101E99A0(a1);
  return 1;
}
