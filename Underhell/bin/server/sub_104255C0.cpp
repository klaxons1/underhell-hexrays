float *__cdecl sub_104255C0(float *a1, float *a2, float *a3)
{
  float *result; // eax
  float v4[3]; // [esp+0h] [ebp-CCh] BYREF
  float v5[12]; // [esp+Ch] [ebp-C0h] BYREF
  float v6[12]; // [esp+3Ch] [ebp-90h] BYREF
  float v7[12]; // [esp+6Ch] [ebp-60h] BYREF
  float v8[12]; // [esp+9Ch] [ebp-30h] BYREF

  sub_104227F0(a1, v7);
  sub_104227F0(a2, v6);
  sub_10424F80(v7, v5);
  sub_10421E30(v6, v5, v8);
  sub_10421A90(v8, v4);
  result = a3;
  if ( a3 )
  {
    *a3 = v4[0];
    a3[1] = v4[1];
    a3[2] = v4[2];
  }
  return result;
}
