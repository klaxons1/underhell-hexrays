void __usercall sub_101D9D20(float *a1@<edx>, char a2@<cl>, float *a3@<esi>, int a4, char a5, char a6, char a7)
{
  int i; // edi
  float v8; // [esp+3Ch] [ebp-Ch]
  float v9; // [esp+3Ch] [ebp-Ch]
  float v10[2]; // [esp+40h] [ebp-8h] BYREF

  if ( a1[1] == *a1 )
    return;
  if ( !a5 )
  {
    if ( a1[1] < (double)*a1 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( a1[1] < (double)*a1 )
  {
LABEL_6:
    v8 = *a1;
    *a1 = a1[1];
    a1[1] = v8;
  }
LABEL_7:
  *a3 = *a1;
  a3[1] = a1[1];
  v9 = (float)(1 << a2);
  v10[0] = *a1 * v9;
  v10[1] = v9 * a1[1];
  sub_101D9BD0(v10, a3, a4);
  if ( a5 )
  {
    a3[a4] = 0.0;
    LODWORD(v10[0]) = 1 << a6;
    a3[a4 + 1] = (double)(1 << a6) * v9 - 1.0;
  }
  if ( a7 )
  {
    for ( i = 0; i < a4; a3[i - 1] = v10[0] / v9 )
    {
      v10[0] = a3[i] + 0.5;
      v10[0] = floor(v10[0]);
      ++i;
    }
  }
}
