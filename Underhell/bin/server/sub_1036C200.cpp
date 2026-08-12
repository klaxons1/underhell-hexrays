bool __thiscall sub_1036C200(int this)
{
  int v3; // ebx
  int v4; // ecx
  _BYTE v5[44]; // [esp+4h] [ebp-60h] BYREF
  float v6; // [esp+30h] [ebp-34h]
  float v7[3]; // [esp+58h] [ebp-Ch] BYREF
  int savedregs; // [esp+64h] [ebp+0h] BYREF

  if ( (*(_BYTE *)(this + 256) & 1) == 0 )
    return 0;
  v3 = *(_DWORD *)(this + 420);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(_DWORD *)(this + 252);
  v7[0] = *(float *)(this + 580);
  v7[1] = *(float *)(this + 584);
  v7[2] = *(float *)(this + 588) - 12.0;
  if ( (v4 & 0x800) != 0 )
    sub_100DAE60(this);
  sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v7, 33701899, this, v3, (int)v5);
  return 1.0 != v6;
}
