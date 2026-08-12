int __cdecl sub_1025EE70(const char *a1, int a2)
{
  if ( !sub_100E8650()
    && !(*(unsigned __int8 (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 36))(dword_106B31D0, a1) )
  {
    Warning("Late precache of %s\n", a1);
  }
  return (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31D0 + 24))(dword_106B31D0, a1, a2);
}
