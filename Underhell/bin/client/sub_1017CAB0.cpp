void __cdecl sub_1017CAB0(float *a1)
{
  float v1[3]; // [esp+0h] [ebp-18h] BYREF
  float v2[3]; // [esp+Ch] [ebp-Ch] BYREF

  v1[0] = *a1;
  v1[1] = a1[1];
  v1[2] = a1[2];
  v2[0] = a1[6];
  v2[1] = a1[7];
  v2[2] = a1[8];
  sub_1017C830(v1, v2);
}
