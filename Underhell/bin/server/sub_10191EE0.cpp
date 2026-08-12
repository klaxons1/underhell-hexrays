char __cdecl sub_10191EE0(int a1)
{
  float *v1; // esi
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st7
  float v7; // [esp+0h] [ebp-14h]
  float v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+10h] [ebp-4h] BYREF

  v1 = (float *)a1;
  if ( !a1 )
    return 0;
  v2 = *(float *)(a1 + 16) - *(float *)(a1 + 4);
  v3 = *(float *)(a1 + 20) - *(float *)(a1 + 8);
  v4 = 25.0;
  if ( v2 > 25.0 )
  {
    if ( v2 > v3 )
    {
      v5 = sub_10191E30(*(float *)(a1 + 4), 25.0);
      if ( v1[1] + 2.0 > v5 )
        v5 = v5 + 25.0;
      LOBYTE(a1) = 0;
      goto LABEL_13;
    }
    v4 = 25.0;
  }
  if ( v4 >= v3 || v3 <= v2 )
    return 0;
  v8 = v4;
  v5 = sub_10191E30(*(float *)(a1 + 8), v8);
  if ( v1[2] + 2.0 > v5 )
    v5 = v5 + 25.0;
  LOBYTE(a1) = 1;
LABEL_13:
  v7 = v5;
  if ( sub_101913A0(v1, a1, v7, &a1, &v9) )
  {
    sub_1018F810((int *)a1, v9);
    sub_1018F810((int *)v9, a1);
    sub_10191EE0(a1);
    sub_10191EE0(v9);
    return 1;
  }
  return 0;
}
