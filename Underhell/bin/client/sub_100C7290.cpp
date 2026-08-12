_DWORD *__thiscall sub_100C7290(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // edx

  result = this;
  if ( dword_10430BEC && a3 < *(_DWORD *)(dword_10430BEC + 8) )
  {
    v4 = (_DWORD *)dword_10430BEC;
    v5 = *(_DWORD **)dword_10430BEC;
    if ( *(_DWORD *)dword_10430BEC )
    {
      do
      {
        if ( a3 >= v5[2] )
          break;
        v4 = v5;
        v5 = (_DWORD *)*v5;
      }
      while ( v5 );
    }
    *v4 = result;
    result[2] = a3;
    *result = v5;
    result[1] = a2;
  }
  else
  {
    *this = dword_10430BEC;
    dword_10430BEC = (int)this;
    this[2] = a3;
    this[1] = a2;
  }
  return result;
}
