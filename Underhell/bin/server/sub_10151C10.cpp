int __cdecl sub_10151C10(int a1, char *String1)
{
  const char *v2; // eax
  int result; // eax

  if ( (dword_106B2CEC & 0x1000) != 0 )
  {
    v2 = "FCVAR_NEVER_AS_STRING";
  }
  else
  {
    v2 = *(const char **)(dword_106B2CF4 + 36);
    if ( !v2 )
      v2 = String;
  }
  result = _stricmp(String1, v2);
  if ( result )
  {
    if ( dword_106B3CDC )
      return (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 496))(dword_106B3CDC);
  }
  return result;
}
