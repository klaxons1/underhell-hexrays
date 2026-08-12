int __thiscall sub_100D9A60(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( a2 )
    this[23] = *(_DWORD *)sub_10162BE0(&a2, a2);
  if ( (this[63] & 0x200) != 0 )
  {
    sub_1012E270(&a2, this);
  }
  else
  {
    if ( (this[63] & 0x400) == 0 )
    {
      sub_10235710(dword_1069727C);
      dword_1069727C = 0;
    }
    v3 = this[6];
    if ( v3 )
    {
      v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3);
      sub_1012E210(&a2, this, v4, -1);
      v5 = this[6];
      if ( v5 )
        *(_DWORD *)(v5 + 8) = this + 3;
    }
  }
  sub_100E9380(0);
  return sub_100E93E0(this);
}
