float *__cdecl sub_101692F0(
        float *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float a10,
        char a11,
        float *a12,
        float *a13)
{
  _BYTE v14[12]; // [esp+18h] [ebp-Ch] BYREF
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  sub_10265570(a2, 0);
  sub_10168EB0(
    (int)&savedregs,
    a1,
    a2,
    (int)v14,
    *(float *)&a3,
    *(float *)&a4,
    *(float *)&a5,
    *(float *)&a6,
    *(float *)&a7,
    *(float *)&a8,
    a9,
    a10,
    a11,
    a12,
    a13);
  return a1;
}
