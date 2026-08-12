int __thiscall sub_101CCD80(int this)
{
  int v2; // ecx
  int v3; // edx
  int result; // eax
  float v5; // [esp+8h] [ebp-70h]
  _BYTE v6[76]; // [esp+18h] [ebp-60h] BYREF
  int v7; // [esp+64h] [ebp-14h]
  float v8[3]; // [esp+6Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+78h] [ebp+0h] BYREF

  if ( *(_BYTE *)(this + 4420) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( fabs(*(float *)(this + 580) - *(float *)(this + 4424)) > 4.0
      || fabs(*(float *)(this + 584) - *(float *)(this + 4428)) > 4.0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v2 = *(_DWORD *)(this + 252);
      v8[0] = *(float *)(this + 580);
      v8[1] = *(float *)(this + 584);
      v8[2] = *(float *)(this + 588) - 32.0;
      if ( (v2 & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v8, 1174421507, this, 0, (int)v6);
      if ( v7 )
        (*(void (__thiscall **)(int, _BYTE *, const char *))(*(_DWORD *)this + 304))(this, v6, "blood_drop");
    }
    v5 = *(float *)(dword_106B31C8 + 12) + 0.25;
    sub_100EC4A0((int *)this, v5, (int)"DraggedThink");
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = *(_DWORD *)(this + 252) >> 11;
  *(float *)(this + 4424) = *(float *)(this + 580);
  if ( (v3 & 1) != 0 )
    sub_100DAE60(this);
  result = *(_DWORD *)(this + 252) >> 11;
  *(float *)(this + 4428) = *(float *)(this + 584);
  if ( (result & 1) != 0 )
    result = sub_100DAE60(this);
  *(float *)(this + 4432) = *(float *)(this + 588);
  return result;
}
