float *__cdecl sub_10234560(float *a1, float *a2, float *a3, int a4)
{
  float *v4; // ecx
  int v5; // ebx
  int v6; // esi
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float *v10; // edi
  float *result; // eax
  float v12[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v13[12]; // [esp+1Ch] [ebp-30h] BYREF

  sub_101EE440(v4, v13);
  v5 = 0;
  v6 = a4 + 8;
  do
  {
    if ( (v5 & 1) != 0 )
      v7 = *a3;
    else
      v7 = *a2;
    v12[0] = v7;
    if ( (v5 & 2) != 0 )
      v8 = a3[1];
    else
      v8 = a2[1];
    v12[1] = v8;
    if ( (v5 & 4) != 0 )
      v9 = a3[2];
    else
      v9 = a2[2];
    v10 = (float *)(v6 - 8);
    v12[2] = v9;
    result = sub_101ED920(v12, v13, (float *)(v6 - 8));
    ++v5;
    v6 += 12;
    *v10 = *a1 + *v10;
    *(float *)(v6 - 16) = *(float *)(v6 - 16) + a1[1];
    *(float *)(v6 - 12) = *(float *)(v6 - 12) + a1[2];
  }
  while ( v5 < 8 );
  return result;
}
