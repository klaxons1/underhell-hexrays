int __cdecl sub_10131F50(float *a1, char *Source)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  double v5; // st7
  int result; // eax
  float v7; // [esp+0h] [ebp-18h]
  float v8; // [esp+0h] [ebp-18h]
  float v9; // [esp+0h] [ebp-18h]
  int v10[3]; // [esp+8h] [ebp-10h] BYREF
  float v11; // [esp+14h] [ebp-4h]

  sub_10264E70((int)v10, 4, Source);
  v2 = v11;
  if ( v11 <= 0.0 )
    v2 = 255.0;
  v11 = v2 * 0.0039215689;
  v3 = 0.0039215689 * *(float *)v10;
  v7 = v3;
  sub_104260F0(v7);
  *a1 = v3 * v11;
  v4 = *(float *)&v10[1] * 0.0039215689;
  v8 = v4;
  sub_104260F0(v8);
  a1[1] = v4 * v11;
  v5 = *(float *)&v10[2] * 0.0039215689;
  v9 = v5;
  result = sub_104260F0(v9);
  a1[2] = v5 * v11;
  return result;
}
