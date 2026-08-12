void __thiscall sub_101660F0(int this)
{
  float v2; // edx
  float v3; // eax
  float v4; // [esp+4h] [ebp-Ch] BYREF
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v2 = *(float *)(this + 480);
  v3 = *(float *)(this + 484);
  v4 = *(float *)(this + 476);
  v5 = v2;
  v6 = v3;
  if ( off_10689714() > 1500.0 )
  {
    v4 = v4 * 1500.0;
    v5 = v5 * 1500.0;
    v6 = 1500.0 * v6;
    sub_100DD660(this, &v4);
  }
}
