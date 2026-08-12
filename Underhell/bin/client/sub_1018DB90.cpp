void __thiscall sub_1018DB90(int this)
{
  float v2; // [esp+0h] [ebp-18h]
  float v3[3]; // [esp+Ch] [ebp-Ch] BYREF

  sub_10116650((int *)(this + 3508), *((float *)off_103DC81C + 4));
  v2 = *(float *)(this + 3420) * 0.16666667;
  sub_101165F0(this + 3508, v2);
  sub_1018D8D0((float *)(this - 12), v3);
  *(float *)(this + 3372) = v3[0];
  *(float *)(this + 3376) = v3[1];
  *(float *)(this + 3380) = v3[2];
}
