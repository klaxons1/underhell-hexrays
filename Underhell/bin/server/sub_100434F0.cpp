float *__stdcall sub_100434F0(int a1, float *a2)
{
  float *result; // eax
  float *v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // rt0

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 532))(a1);
    v4 = *v3 + *(float *)(a1 + 580);
    v5 = v3[1] + *(float *)(a1 + 584);
    v6 = v3[2];
    result = a2;
    v7 = v6 + *(float *)(a1 + 588);
    *a2 = v4;
    a2[1] = v5;
    a2[2] = v7;
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
