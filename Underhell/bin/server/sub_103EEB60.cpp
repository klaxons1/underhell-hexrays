float *__stdcall sub_103EEB60(float *a1, float *a2, float a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  float *result; // eax
  float v6; // edx
  float v7; // ecx
  int v8; // [esp+8h] [ebp-Ch] BYREF
  float v9; // [esp+Ch] [ebp-8h]

  v3 = (_DWORD *)sub_102F3640();
  v4 = v3;
  if ( v3 && (sub_102F4280(v3) == 1 || sub_102F4280(v4) == 3) )
  {
    result = a1;
    v6 = flt_106F1CAC;
    *a1 = flt_106F1CA8;
    v7 = flt_106F1CB0;
    a1[1] = v6;
    a1[2] = v7;
  }
  else
  {
    sub_101FB4C0((float *)&v8, a2, a3);
    result = a1;
    *(float *)&v8 = *(float *)&v8 * 600.0;
    *a1 = *(float *)&v8;
    v9 = 600.0 * v9;
    a1[1] = v9;
    a1[2] = 90000.0;
  }
  return result;
}
