void __thiscall sub_10350B30(int this)
{
  bool v2; // zf
  float v3; // edx
  float v4; // eax
  double v5; // st6
  float v6; // [esp+4h] [ebp-Ch] BYREF
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v2 = *(_BYTE *)(this + 4080) == 0;
  v3 = *(float *)(this + 480);
  v4 = *(float *)(this + 484);
  v6 = *(float *)(this + 476);
  v7 = v3;
  v8 = v4;
  if ( v2 )
    v5 = 0.995;
  else
    v5 = 0.94999999;
  v6 = v6 * v5;
  v7 = v7 * v5;
  v8 = v5 * v8;
  sub_100DD660(this, &v6);
}
