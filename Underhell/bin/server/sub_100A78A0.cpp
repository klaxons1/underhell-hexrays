_DWORD *__thiscall sub_100A78A0(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  const char *v3; // eax

  result = (_DWORD *)this[1];
  if ( result )
  {
    while ( *result != a2 )
    {
      result = (_DWORD *)result[12];
      if ( !result )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v3 = sub_1007DA40(a2);
    DevMsg("Couldn't find schedule (%s)\n", v3);
    return 0;
  }
  return result;
}
