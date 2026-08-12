float *__userpurge sub_101AC490@<eax>(
        float *result@<eax>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float *a11,
        int a12)
{
  int v12; // edx
  float *v13; // ecx

  v12 = 0;
  if ( a4 > 0 )
  {
    v13 = a11;
    result = (float *)(a7 + 8);
    do
    {
      *(result - 2) = *(float *)(a2 + 68 * a3 + 88);
      *(result - 1) = *(float *)(a2 + 68 * a3 + 92);
      *result = *(float *)(a2 + 68 * a3 + 96);
      if ( a12 )
        *(_DWORD *)(a12 + 4 * v12) = 0;
      if ( a11 )
      {
        *v13 = 0.0;
        v13[1] = 0.0;
        *(float *)((char *)result + (_DWORD)a11 - a7) = 0.0;
      }
      ++v12;
      result += 3;
      v13 += 3;
    }
    while ( v12 < a4 );
  }
  return result;
}
