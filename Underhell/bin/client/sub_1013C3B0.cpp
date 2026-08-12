int __thiscall sub_1013C3B0(int this, float *a2)
{
  int *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int result; // eax
  float **v7; // edi

  v2 = (int *)(this + 1200);
  *a2 = *a2 - *(float *)(this + 1220);
  a2[1] = a2[1] - *(float *)(this + 1224);
  a2[2] = a2[2] - *(float *)(this + 1228);
  v3 = *(_DWORD *)(this + 1212);
  v4 = *(_DWORD *)(this + 1204);
  if ( v3 + 1 > v4 )
    sub_1010AFF0(v2, v3 - v4 + 1);
  ++v2[3];
  v5 = *v2;
  result = v2[3] - v3 - 1;
  v2[4] = *v2;
  if ( result > 0 )
    result = (int)memcpy((void *)(v5 + 4 * v3 + 4), (const void *)(v5 + 4 * v3), 4 * result);
  v7 = (float **)(*v2 + 4 * v3);
  if ( v7 )
    *v7 = a2;
  return result;
}
