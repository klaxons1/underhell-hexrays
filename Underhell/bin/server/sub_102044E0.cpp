void __thiscall sub_102044E0(int this)
{
  float v2; // [esp+4h] [ebp-Ch]
  float v3; // [esp+8h] [ebp-8h]
  float v4; // [esp+Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 804) - *(float *)(this + 580);
  v3 = *(float *)(this + 808) - *(float *)(this + 584);
  v4 = *(float *)(this + 812) - *(float *)(this + 588);
  off_10689714();
  *(float *)(this + 804) = v2;
  *(float *)(this + 808) = v3;
  *(float *)(this + 812) = v4;
}
