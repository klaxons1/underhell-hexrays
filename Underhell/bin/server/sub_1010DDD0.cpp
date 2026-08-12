_DWORD *__thiscall sub_1010DDD0(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // eax

  result = (_DWORD *)*this;
  if ( *this )
  {
    while ( result[5] != a7 )
    {
      result = (_DWORD *)result[6];
      if ( !result )
        goto LABEL_4;
    }
    *result = a2;
    result[1] = a3;
    result[2] = a4;
    result[3] = a5;
    result[4] = a6;
  }
  else
  {
LABEL_4:
    result = (_DWORD *)sub_1042FCC0(28);
    if ( result )
    {
      *result = 0;
      result[3] = -1;
      result[4] = 0;
    }
    else
    {
      result = 0;
    }
    *result = a2;
    result[1] = a3;
    result[2] = a4;
    result[3] = a5;
    result[4] = a6;
    result[5] = a7;
    if ( *this )
    {
      result[6] = *this;
      *this = result;
    }
    else
    {
      *this = result;
      result[6] = 0;
    }
  }
  return result;
}
