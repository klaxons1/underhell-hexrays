BOOL __thiscall sub_1036AE90(int this)
{
  int v2; // ebx
  int v3; // ecx
  _BYTE v5[44]; // [esp+Ch] [ebp-60h] BYREF
  float v6; // [esp+38h] [ebp-34h]
  float v7[3]; // [esp+60h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 420);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = *(_DWORD *)(this + 252);
  v7[0] = *(float *)(this + 580);
  v7[1] = *(float *)(this + 584);
  v7[2] = *(float *)(this + 588) + 1.0;
  if ( (v3 & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10265A60((_DWORD *)this, this + 580, (int)v7, 33701899, this, v2, (int)v5);
  return 1.0 == v6;
}
