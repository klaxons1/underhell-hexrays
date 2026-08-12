int __stdcall sub_100726F0(int *a1, float *a2, float a3)
{
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int result; // eax

  v3 = a1[1];
  v4 = a1[3];
  if ( v4 + 1 > v3 )
    sub_100C86E0(v4 - v3 + 1);
  ++a1[3];
  v5 = *a1;
  v6 = a1[3] - v4 - 1;
  a1[4] = *a1;
  if ( v6 > 0 )
    memcpy((void *)(16 * v4 + v5 + 16), (const void *)(16 * v4 + v5), 16 * v6);
  v7 = *a1;
  v8 = 2 * v4;
  *(float *)(v7 + 8 * v8) = *a2;
  *(float *)(v7 + 8 * v8 + 4) = a2[1];
  *(float *)(v7 + 8 * v8 + 8) = a2[2];
  result = *a1;
  *(float *)(*a1 + 8 * v8 + 12) = a3 * a3;
  return result;
}
