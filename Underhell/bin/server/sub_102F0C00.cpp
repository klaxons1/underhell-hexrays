int __thiscall sub_102F0C00(int this)
{
  int *v2; // ecx
  bool v3; // zf
  int result; // eax
  float v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-4h]

  if ( *(int *)(this + 1132) > 1 )
    sub_1023B860((_DWORD *)this, (int)"WallHealth.LoopingContinueCharge");
  if ( *(_DWORD *)(this + 1140) == 1 && *(_DWORD *)(this + 904) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 904);
    }
    *(float *)(this + 904) = 1.0;
  }
  v3 = *(_DWORD *)(this + 1124) == 0;
  result = *(_DWORD *)(this + 1128);
  *(_DWORD *)(this + 1132) = 0;
  *(float *)(this + 1196) = (float)result;
  if ( v3 )
  {
    if ( result || ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 388))(dword_106B3CDC) <= 0.0 )
    {
      return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    }
    else
    {
      v6 = (int)((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 388))(dword_106B3CDC);
      *(_DWORD *)(this + 1124) = v6;
      v5 = (double)v6 + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0((int *)this, v5, 0);
      return sub_100EC3F0((_DWORD *)this, (int)sub_102F0290, 0.0, 0);
    }
  }
  return result;
}
