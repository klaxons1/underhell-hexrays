float *__thiscall sub_103D38E0(int this, float a2)
{
  int v2; // eax
  int *v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  float *result; // eax
  float v8; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(this + 824);
  v3 = (int *)(this + 820);
  v4 = *(_DWORD *)(this + 832);
  v8 = *(float *)(dword_106B31C8 + 12) + a2 - *(float *)(this + 852);
  if ( v4 + 1 > v2 )
    sub_102ABFC0(v3, v4 - v2 + 1);
  ++v3[3];
  v5 = *v3;
  v6 = v3[3] - v4 - 1;
  v3[4] = *v3;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 4 * v4 + 4), (const void *)(v5 + 4 * v4), 4 * v6);
  result = (float *)(*v3 + 4 * v4);
  if ( result )
    *result = v8;
  return result;
}
