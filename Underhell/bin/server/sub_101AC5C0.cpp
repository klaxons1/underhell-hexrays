int __stdcall sub_101AC5C0(float *a1, float *a2, float *a3)
{
  _DWORD *v3; // eax
  int result; // eax

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v3 = (_DWORD *)sub_10261B20();
    if ( v3 )
      return sub_100F5A30(v3, (int)a1, (int)a2, (int)a3);
  }
  *a1 = flt_106F1CA8;
  a1[1] = flt_106F1CAC;
  a1[2] = flt_106F1CB0;
  *a2 = flt_106F1CA8;
  a2[1] = flt_106F1CAC;
  a2[2] = flt_106F1CB0;
  result = (int)a3;
  *a3 = flt_106F1CA8;
  a3[1] = flt_106F1CAC;
  a3[2] = flt_106F1CB0;
  return result;
}
