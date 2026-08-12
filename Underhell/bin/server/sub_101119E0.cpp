BOOL __thiscall sub_101119E0(int this, float *a2)
{
  float v4; // [esp+4h] [ebp-Ch] BYREF
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  sub_10111110((_BYTE *)this, a2, &v4);
  return v4 >= (double)*(float *)(this + 8)
      && v4 <= (double)*(float *)(this + 20)
      && v5 >= (double)*(float *)(this + 12)
      && v5 <= (double)*(float *)(this + 24)
      && v6 >= (double)*(float *)(this + 16)
      && v6 <= (double)*(float *)(this + 28);
}
