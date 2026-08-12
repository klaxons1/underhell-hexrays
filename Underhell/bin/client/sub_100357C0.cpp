void __cdecl sub_100357C0(float *a1, float *a2)
{
  float v2[3]; // [esp+0h] [ebp-10h] BYREF
  float *v3; // [esp+Ch] [ebp-4h]

  v3 = a2;
  sub_10008F60(v2);
  v2[0] = a1[1];
  v2[1] = a1[2];
  v2[2] = a1[3];
  sub_10034BD0(v3, v2);
}
