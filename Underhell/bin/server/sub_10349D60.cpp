double __thiscall sub_10349D60(int this)
{
  float v2; // edx
  float v3; // eax
  _BYTE v5[44]; // [esp+4h] [ebp-6Ch] BYREF
  float v6; // [esp+30h] [ebp-40h]
  float v7[3]; // [esp+58h] [ebp-18h] BYREF
  float v8[3]; // [esp+64h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 584);
  v3 = *(float *)(this + 588);
  v8[0] = *(float *)(this + 580);
  v7[0] = v8[0];
  v8[1] = v2;
  v7[1] = v2;
  v8[2] = v3;
  v7[2] = v3 - 4096.0;
  sub_102659D0((_DWORD *)this, (int)v8, (int)v7, 16395, (int)v5);
  return v6 * 4096.0;
}
