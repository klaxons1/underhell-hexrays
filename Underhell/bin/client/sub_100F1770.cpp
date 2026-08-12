float *__thiscall sub_100F1770(_DWORD *this, int a2, float *a3, float *a4, float *a5)
{
  float *v5; // edx
  float *v6; // eax
  float *result; // eax
  int v8; // esi

  v5 = a5;
  *(float *)&this[17 * a2 + 28] = *a3;
  v6 = (float *)&this[17 * a2];
  v6[29] = a3[1];
  v6[30] = a3[2];
  v6[31] = *a5;
  v6[32] = a5[1];
  v6[33] = a5[2];
  result = (float *)&this[17 * a2 + 34];
  *result = *a4;
  result[1] = a4[1];
  v8 = this[1502];
  result[2] = a4[2];
  if ( v8 )
  {
    while ( 1 )
    {
      result = (float *)sub_100F1770(a2, a3, a4, v5);
      v8 = *(_DWORD *)(v8 + 5980);
      if ( !v8 )
        break;
      v5 = a5;
    }
  }
  return result;
}
