int __thiscall sub_1005C060(int this)
{
  long double v2; // st7
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // edi
  int v7; // eax
  float v9; // [esp+0h] [ebp-Ch]

  sub_102467A0();
  v2 = 384.0;
  v3 = *(_DWORD *)(this + 412);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
          sub_100DAE60(v6);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v2 = fabs(*(float *)(v6 + 588) - *(float *)(this + 588));
      }
    }
  }
  v7 = sub_1021C7C0(this, -1, (int)v2, 1, "cable/cable.vmt", 5, 1);
  if ( v7 )
    *(_DWORD *)(this + 800) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  else
    *(_DWORD *)(this + 800) = -1;
  sub_100EC3F0((int)sub_1005BCF0, 0.0, 0);
  v9 = *(float *)(dword_106B31C8 + 12) + 0.2;
  return sub_100EC4A0(v9, 0);
}
