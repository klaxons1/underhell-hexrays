int __stdcall sub_104180A0(int a1, int a2, int a3)
{
  int result; // eax
  _DWORD v4[12]; // [esp+0h] [ebp-30h] BYREF

  sub_1042DEC0(a2, a3, 8);
  result = sub_10428DE0(v4, 1, 1, 0);
  if ( v4[2] >= 0 )
  {
    result = v4[0];
    if ( v4[0] )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v4[0]);
  }
  return result;
}
