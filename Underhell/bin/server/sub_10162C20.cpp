_DWORD *__cdecl sub_10162C20(_DWORD *a1, char a2)
{
  _BYTE *v2; // eax
  _DWORD *result; // eax

  v2 = (_BYTE *)sub_10430BB0(a2);
  if ( v2 && *v2 )
  {
    *a1 = v2;
    return a1;
  }
  else
  {
    result = a1;
    *a1 = 0;
  }
  return result;
}
