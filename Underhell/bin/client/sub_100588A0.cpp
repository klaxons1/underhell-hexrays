int __thiscall sub_100588A0(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // edi

  v2 = a2;
  result = *(_DWORD *)(a2 + 1960);
  if ( result )
  {
    if ( result == this[5] )
    {
      result = (*(int (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)result + 44))(
                 result,
                 a2 + 1447,
                 (char *)&a2 + 3,
                 0);
      if ( HIBYTE(a2) )
      {
        v4 = v2 + 1702;
        if ( strcmp((const char *)(v2 + 1702), Locale) )
          return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 92))(result, v4);
      }
    }
  }
  return result;
}
