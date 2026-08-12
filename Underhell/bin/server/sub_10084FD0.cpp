float *__thiscall sub_10084FD0(_DWORD *this, float *a2, int a3, int a4)
{
  float *result; // eax

  if ( this[2] )
  {
    if ( a4 < 0 || a4 > this[1] )
    {
      result = a2;
      *a2 = flt_106F1CA8;
      a2[1] = flt_106F1CAC;
      a2[2] = flt_106F1CB0;
    }
    else
    {
      sub_1008D160(a2, a3);
      return a2;
    }
  }
  else
  {
    result = a2;
    *a2 = flt_106F1CA8;
    a2[1] = flt_106F1CAC;
    a2[2] = flt_106F1CB0;
  }
  return result;
}
