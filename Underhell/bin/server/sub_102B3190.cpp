void __thiscall sub_102B3190(int this, float *a2)
{
  float v3; // ecx
  long double v4; // st7
  float v5; // [esp+4h] [ebp-Ch] BYREF
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v3 = *(float *)(this + 476);
  v7 = *(float *)(this + 484);
  v4 = fabs(*a2);
  v6 = *(float *)(this + 480);
  v5 = (1.0 - v4 * 0.05) * v3;
  v6 = (1.0 - fabs(a2[1]) * 0.05) * v6;
  v7 = (1.0 - 0.05 * fabs(a2[2])) * v7;
  sub_100DD660(this, &v5);
}
