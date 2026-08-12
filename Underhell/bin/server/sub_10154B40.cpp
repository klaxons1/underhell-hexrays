int __cdecl sub_10154B40(int a1, const char *a2)
{
  int v2; // esi
  int result; // eax

  v2 = sub_102941A0(a2);
  if ( v2 == -1 )
    Error("UserMessageBegin:  Unregistered message '%s'\n", a2);
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 172))(dword_106B31D0, a1, v2);
  dword_106B3254 = result;
  return result;
}
