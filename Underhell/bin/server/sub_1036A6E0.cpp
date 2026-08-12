void __stdcall sub_1036A6E0(float *a1, float *a2)
{
  double v2; // st6
  double v3; // st5
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v4 = *a1;
  v2 = a1[1];
  v5 = a1[1];
  v3 = a1[2];
  v6 = a1[2];
  *a2 = v4;
  a2[1] = v2;
  a2[2] = v3;
  if ( off_10689714() > 6000.0 )
  {
    *a2 = v4 * 6000.0;
    a2[1] = v5 * 6000.0;
    a2[2] = 6000.0 * v6;
  }
}
