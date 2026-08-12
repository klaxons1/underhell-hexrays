int __cdecl sub_101811E0(const char *a1, int a2)
{
  int v2; // eax
  int result; // eax

  if ( a2 != -1 )
  {
    dword_1069727C = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 84))(dword_106B31D0, a2);
    if ( !dword_1069727C )
      Error("CreateEntityByName( %s, %d ) - CreateEdict failed.", a1, a2);
  }
  v2 = sub_10264CF0();
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, a1);
  dword_1069727C = 0;
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 28))(result);
  return result;
}
