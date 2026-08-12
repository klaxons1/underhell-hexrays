int __thiscall sub_102B4560(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  int *v8; // ecx
  int v9; // edx
  float v11; // [esp+0h] [ebp-14h]

  v2 = *(_DWORD *)(this + 3872);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3872) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
        *(_DWORD *)(this + 3872) = -1;
      }
    }
  }
  if ( (*(_BYTE *)(this + 248) & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = sub_103DDD70(this + 580, this + 704, this, 1024.0);
    if ( v6 )
      *(_DWORD *)(this + 3872) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
    else
      *(_DWORD *)(this + 3872) = -1;
  }
  v7 = dword_106B31C8;
  if ( *(_DWORD *)(this + 3920) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 3920);
    }
    *(float *)(this + 3920) = *(float *)(v7 + 12);
  }
  *(float *)(this + 3840) = *(float *)(this + 3844);
  sub_100EC3F0((_DWORD *)this, (int)sub_102B2840, 0.0, 0);
  *(_DWORD *)(this + 196) = sub_102B2850;
  v11 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v11, 0);
  v9 = off_10660BBC;
  *(float *)(this + 3864) = *(float *)(dword_106B31C8 + 12);
  return sub_100EC3F0((_DWORD *)this, (int)sub_102B2940, *(float *)(dword_106B31C8 + 12), v9);
}
