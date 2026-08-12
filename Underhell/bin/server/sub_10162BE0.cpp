_DWORD *__cdecl sub_10162BE0(_DWORD *a1, _BYTE *a2)
{
  _BYTE *v2; // eax
  _DWORD *result; // eax

  if ( a2 && *a2 )
  {
    v2 = (_BYTE *)sub_10430E10(a2);
    if ( !v2 || !*v2 )
      v2 = 0;
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
