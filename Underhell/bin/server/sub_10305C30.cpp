void __thiscall sub_10305C30(int *this, int a2, float *a3, float *a4)
{
  float v5[3]; // [esp+Ch] [ebp-18h] BYREF
  float v6[3]; // [esp+18h] [ebp-Ch] BYREF

  v6[0] = -*a3;
  v6[1] = -a3[1];
  v6[2] = -a3[2];
  sub_10422540(v6, v5);
  sub_101AB000("GrubBlood", a4[3], a4[4], a4[5], v5[0], v5[1], v5[2], 0);
  sub_100EAC20(this, a2, a3, a4);
}
