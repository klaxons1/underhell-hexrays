float *__thiscall sub_100F1810(_DWORD *this, int a2, float *a3)
{
  int v3; // esi
  float *result; // eax

  v3 = this[1502];
  result = (float *)&this[17 * a2 + 28];
  *result = *a3;
  result[1] = a3[1];
  for ( result[2] = a3[2]; v3; v3 = *(_DWORD *)(v3 + 5980) )
    result = (float *)sub_100F1810(a2, a3);
  return result;
}
