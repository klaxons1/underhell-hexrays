unsigned int __cdecl sub_1011CEB0(float *a1, int a2, float a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  _BYTE v10[48]; // [esp+20h] [ebp-48h] BYREF
  int v11[3]; // [esp+50h] [ebp-18h] BYREF
  int v12[3]; // [esp+5Ch] [ebp-Ch] BYREF

  sub_10425040(a2, a1, v10);
  sub_10421CE0(v10, 2, v11);
  sub_10421CE0(v10, 1, v12);
  return sub_1011CC60(a1, (int)v11, (float *)v12, a3, a4, a5, a6, a7, a8, a9);
}
