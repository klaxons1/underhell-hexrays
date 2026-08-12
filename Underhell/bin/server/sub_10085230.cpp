float *__thiscall sub_10085230(_DWORD *this, float *a2, int a3, int a4)
{
  float *result; // eax

  if ( a3 )
  {
    sub_10084FD0(this, a2, *(_DWORD *)(a3 + 1676), a4);
    return a2;
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
