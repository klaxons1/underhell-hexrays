int __cdecl sub_1023A7E0(const char *a1)
{
  if ( !byte_106C4E94 )
    Warning("Direct precache of %s\n", a1);
  if ( !sub_100E8650()
    && !(*(unsigned __int8 (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31E8 + 4))(dword_106B31E8, a1) )
  {
    Warning("Late precache of %s\n", a1);
  }
  return (**(int (__thiscall ***)(int, const char *, int, _DWORD))dword_106B31E8)(dword_106B31E8, a1, 1, 0);
}
