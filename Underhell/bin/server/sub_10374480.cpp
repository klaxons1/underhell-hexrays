bool __thiscall sub_10374480(int *this, float *a2, int a3, float *a4)
{
  float *v5; // eax
  float *v7; // [esp-8h] [ebp-70h]
  _BYTE v8[84]; // [esp+14h] [ebp-54h] BYREF
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  v7 = (float *)sub_10073730(this[419]);
  v5 = (float *)sub_10073710(this[419]);
  sub_100231A0((int)&savedregs, (int)this, a2, a2, v5, v7, 33701899, (int)this, 0, (int)v8);
  return !v8[55] && sub_10042560(a2, a3, a4, 220.0, 384.0, 512.0);
}
