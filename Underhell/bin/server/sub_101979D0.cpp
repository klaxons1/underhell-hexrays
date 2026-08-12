void __cdecl sub_101979D0(float *a1)
{
  double v1; // st7
  float v2; // [esp+0h] [ebp-18h]
  float v3; // [esp+4h] [ebp-14h]
  int v4; // [esp+10h] [ebp-8h] BYREF
  int v5; // [esp+14h] [ebp-4h] BYREF

  if ( !sub_1018AC10(a1) )
  {
    v3 = (a1[5] - a1[2]) * 0.5 + a1[2];
    v1 = sub_10192230(v3, 0);
    if ( fabs(v1 - a1[2]) >= 0.1 && fabs(v1 - a1[5]) >= 0.1 )
    {
      v2 = v1;
      if ( sub_101913A0(a1, 1, v2, &v5, &v4) )
      {
        sub_101979D0(v5);
        sub_101979D0(v4);
      }
    }
  }
}
