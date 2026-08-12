int __cdecl sub_10112E10(int a1, int a2, float *a3)
{
  int result; // eax
  _BYTE v4[12]; // [esp+8h] [ebp-18h] BYREF
  float v5[3]; // [esp+14h] [ebp-Ch] BYREF

  sub_10421CE0(a1, 3, v4);
  sub_10421C60(v4, a1, v5);
  result = sub_10421C60(a2, a1, a3);
  a3[3] = (a3[1] * a3[1] + *a3 * *a3 + a3[2] * a3[2]) * *(float *)(a2 + 12)
        - (*a3 * v5[0]
         + v5[1] * a3[1]
         + v5[2] * a3[2]);
  return result;
}
