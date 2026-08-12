int __thiscall sub_1024A0B0(int this)
{
  _DWORD *v2; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CTeam::`vftable';
  *(_DWORD *)(this + 800) = 0;
  *(_DWORD *)(this + 804) = 0;
  *(_DWORD *)(this + 808) = 0;
  *(_DWORD *)(this + 812) = 0;
  *(_DWORD *)(this + 816) = 0;
  *(_DWORD *)(this + 820) = 0;
  *(_DWORD *)(this + 824) = 0;
  *(_DWORD *)(this + 828) = 0;
  *(_DWORD *)(this + 832) = 0;
  *(_DWORD *)(this + 836) = 0;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v2 = *(_DWORD **)(this + 24);
    if ( v2 )
    {
      *v2 |= 0x101u;
      *(_WORD *)(sub_10153460(v2) + 2) = 0;
    }
  }
  *(_DWORD *)(this + 840) = 0;
  *(_DWORD *)(this + 844) = 0;
  *(_DWORD *)(this + 848) = 0;
  *(_DWORD *)(this + 852) = 0;
  *(_DWORD *)(this + 856) = 0;
  *(_DWORD *)(this + 860) = 0;
  *(_DWORD *)(this + 864) = 0;
  *(_DWORD *)(this + 868) = 0;
  return this;
}
