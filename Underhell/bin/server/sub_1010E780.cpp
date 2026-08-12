const char *__stdcall sub_1010E780(int a1)
{
  const char *result; // eax
  const char *v2; // eax
  int v3; // esi
  int v4; // eax

  if ( *(_DWORD *)(a1 + 24) == 2 )
  {
    result = *(const char **)(a1 + 8);
    if ( !result )
      return result;
  }
  else
  {
    result = sub_1010D460(a1 + 8);
  }
  if ( *result )
  {
    if ( *(_DWORD *)(a1 + 24) == 2 )
    {
      if ( *(_DWORD *)(a1 + 8) )
        LOBYTE(v2) = *(_DWORD *)(a1 + 8);
      else
        v2 = String;
    }
    else
    {
      LOBYTE(v2) = (unsigned __int8)sub_1010D460(a1 + 8);
    }
    v3 = *(_DWORD *)dword_106B31D0;
    v4 = sub_1025F440("%s\n", (char)v2);
    return (const char *)(*(int (__thiscall **)(int, int))(v3 + 144))(dword_106B31D0, v4);
  }
  return result;
}
