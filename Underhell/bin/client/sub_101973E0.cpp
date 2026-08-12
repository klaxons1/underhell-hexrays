void __thiscall sub_101973E0(int this, float *a2, float *a3)
{
  sub_10029130((_DWORD *)this, a2, a3);
  sub_10197200((float *)(this - 4));
  *a2 = *a2 * *(float *)(this + 1992);
  a2[1] = *(float *)(this + 1996) * a2[1];
  a2[2] = a2[2] * *(float *)(this + 2000);
  *a3 = *(float *)(this + 1992) * *a3;
  a3[1] = *(float *)(this + 1996) * a3[1];
  a3[2] = *(float *)(this + 2000) * a3[2];
}
