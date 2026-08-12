void __thiscall sub_102B3220(int this)
{
  float v2; // edx
  float v3; // eax
  float v4[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v2 = *(float *)(this + 480);
  v3 = *(float *)(this + 484);
  v4[0] = *(float *)(this + 476) * 0.995;
  v4[1] = v2 * 0.995;
  v4[2] = 0.995 * v3;
  sub_100DD660(this, v4);
}
