float *__thiscall sub_1018D440(int this)
{
  float *v2; // eax
  int v3; // ecx
  float *result; // eax
  double v5; // st7
  int v6; // edx
  int v7; // eax
  double v8; // st5
  double v9; // st4
  double v10; // st3
  double v11; // st5
  float v12; // [esp+0h] [ebp-10h]

  v12 = *(float *)(this + 3432) * 0.16666667;
  sub_10116850((void *)(this + 3520), v12, this + 3904);
  sub_101165D0();
  v2 = *(float **)(this + 3528);
  *v2 = *(float *)(this + 3396);
  v3 = 1;
  v2[1] = *(float *)(this + 3400);
  v2[2] = *(float *)(this + 3404);
  result = *(float **)(this + 3528);
  result[3] = *result;
  result[4] = result[1];
  result[5] = result[2];
  v5 = *(float *)(this + 3432);
  if ( *(int *)(this + 3532) > 1 )
  {
    v6 = 36;
    do
    {
      v7 = *(_DWORD *)(this + 3528);
      v5 = v5 * 0.5;
      v8 = *(float *)(v7 + v6 - 36);
      result = (float *)(v6 + v7);
      v9 = *(result - 8);
      ++v3;
      v6 += 36;
      v10 = v8;
      v11 = *(result - 7) - v5;
      *result = v10;
      result[1] = v9;
      result[2] = v11;
      result[3] = v10;
      result[4] = result[1];
      result[5] = result[2];
    }
    while ( v3 < *(_DWORD *)(this + 3532) );
  }
  *(float *)(this + 3384) = *(float *)(this + 3408);
  *(float *)(this + 3388) = *(float *)(this + 3412);
  *(float *)(this + 3392) = *(float *)(this + 3416);
  return result;
}
