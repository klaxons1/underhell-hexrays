int __thiscall sub_1040B0E0(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // esi
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx

  v2 = this[427];
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, v2);
    this[427] = 0;
  }
  v3 = this[429];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[429] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (this[429] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (this[429] & 0xFFF) + 2] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        sub_10242820(v6, 0, 0.5);
        sub_100EC3F0((_DWORD *)v6, (int)sub_102429D0, 0.0, 0);
        *(float *)(v6 + 816) = *(float *)(dword_106B31C8 + 12) + 0.5;
        sub_100EC4A0((int *)v6, *(float *)(dword_106B31C8 + 12), 0);
        this[429] = -1;
      }
    }
  }
  v7 = this[431];
  if ( v7 != -1 )
  {
    v8 = &off_1061BE18[4 * (this[431] & 0xFFF) + 1];
    v9 = v7 >> 12;
    if ( off_1061BE18[4 * (this[431] & 0xFFF) + 2] == v9 )
    {
      if ( *v8 )
      {
        if ( off_1061BE18[4 * (this[431] & 0xFFF) + 2] == v9 )
        {
          sub_1025FAC0(*v8);
          return sub_100E20F0(this);
        }
        sub_1025FAC0(0);
      }
    }
  }
  return sub_100E20F0(this);
}
