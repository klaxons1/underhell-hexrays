int __cdecl sub_10154380(const char *a1)
{
  int result; // eax

  if ( a1 )
  {
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B3234 + 48))(dword_106B3234, a1);
    if ( result != 0xFFFF )
      return result;
    DevMsg("Warning! GetMaterialIndex: couldn't find material %s\n ", a1);
  }
  return 0;
}
