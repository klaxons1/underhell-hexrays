int __thiscall sub_10123500(int this)
{
  int result; // eax
  int v3; // ebx
  int *v4; // ecx
  float v5; // [esp+0h] [ebp-14h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 0);
  *(_BYTE *)(this + 803) = 1;
  sub_1025F360(this, &flt_106F1CA8, &flt_106F1CA8);
  *(_DWORD *)(this + 252) |= 0x80u;
  sub_100D8500((_DWORD *)this);
  if ( *(_DWORD *)(this + 212) )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_101230F0, 0.0, 0);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v5, 0);
  }
  result = *(_DWORD *)(this + 808);
  if ( result <= 127 )
  {
    v3 = -127;
    if ( result >= -127 )
      v3 = *(_DWORD *)(this + 808);
  }
  else
  {
    v3 = 127;
  }
  if ( result != v3 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    result = Warning(
               "light_dynamic at [%d %d %d] has invalid exponent value (%d must be between %d and %d).\n",
               (int)*(float *)(this + 580),
               (int)*(float *)(this + 580),
               (int)*(float *)(this + 580),
               *(_DWORD *)(this + 808),
               -127,
               127);
    if ( *(_DWORD *)(this + 808) != v3 )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 808) = v3;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          result = sub_100194B0(v4, 808);
        *(_DWORD *)(this + 808) = v3;
      }
    }
  }
  return result;
}
