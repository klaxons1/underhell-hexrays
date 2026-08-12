_DWORD *__cdecl sub_10181480(_DWORD *a1, char *Str)
{
  const char *v2; // eax
  _DWORD *result; // eax
  const char *v4; // eax
  _BYTE v5[256]; // [esp+0h] [ebp-100h] BYREF

  v2 = Str;
  if ( !Str )
    v2 = String;
  if ( strchr(v2, 44) )
  {
    v4 = Str;
    if ( !Str )
      v4 = String;
    sub_1025F620(v5, v4, 44);
    sub_10162BE0(a1, v5);
    return a1;
  }
  else
  {
    result = a1;
    *a1 = Str;
  }
  return result;
}
