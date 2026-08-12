void __thiscall sub_103A3010(_BYTE *this, int a2)
{
  _BYTE *v3; // eax
  int *v4; // ecx
  float *v5; // eax

  if ( this[209] != 1 )
  {
    v3 = this - 3620;
    if ( *(this - 3536) )
    {
      v3[88] |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)v3 + 6);
      if ( v4 )
        sub_100194B0(v4, 3829);
    }
    this[209] = 1;
  }
  sub_1039FC20((int)(this - 3620));
  v5 = (float *)(*(int (__thiscall **)(_BYTE *))(*((_DWORD *)this - 905) + 1868))(this - 3620);
  sub_100756C0(v5, 30.0);
  sub_1023C380((_DWORD *)this - 905, (int)"NPC_RollerMine.Reprogram", 0.0, 0);
  sub_103A2F20((int)(this - 3620));
}
