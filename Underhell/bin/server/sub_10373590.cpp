int __thiscall sub_10373590(int this, int a2)
{
  int v4; // eax
  float *v5; // eax
  int v6; // ecx
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  if ( a2 == 6 || a2 == 11 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      v5 = (float *)sub_100217F0((void *)this);
      v7 = *v5;
      v8 = v5[1];
      v9 = v5[2];
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( fabs(v8 - *(float *)(this + 584)) + fabs(v7 - *(float *)(this + 580)) + fabs(v9 - *(float *)(this + 588)) < 512.0 )
        return dword_106E84DC;
    }
  }
  else if ( a2 == 1 )
  {
    if ( *(_BYTE *)(this + 4288) )
      return dword_106E84B8;
  }
  else if ( a2 == 18 && !*(_BYTE *)(this + 4288) )
  {
    if ( *(_BYTE *)(this + 4291) )
      return dword_106E84BC;
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( sub_10370900(v4) )
      return dword_106E84BC;
  }
  v6 = *(_DWORD *)(this + 3624);
  if ( v6 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 136))(v6, a2);
  else
    return sub_1002CC40((_DWORD *)this, a2);
}
