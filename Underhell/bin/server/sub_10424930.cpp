double __cdecl sub_10424930(float *a1, float *a2, float *a3, float *a4)
{
  float v5; // [esp+4h] [ebp-8h] BYREF
  float v6; // [esp+8h] [ebp-4h]

  sub_104248C0(a1, a2, a3, &v5, a4);
  return (*a1 - v5) * (*a1 - v5) + (a1[1] - v6) * (a1[1] - v6);
}
