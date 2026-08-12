int __stdcall sub_101BB610(int a1, int a2, int a3)
{
  _DWORD *v3; // eax
  int result; // eax
  _DWORD v5[12]; // [esp+0h] [ebp-30h] BYREF

  v3 = sub_100F0920();
  sub_100ED8D0(v3);
  sub_1022EE70(a2, a3, 8);
  result = sub_101FDCE0(v5, 1, 1, 0);
  if ( v5[2] >= 0 )
  {
    result = v5[0];
    if ( v5[0] )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v5[0]);
  }
  return result;
}
