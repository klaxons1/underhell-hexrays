int __thiscall sub_103EBA20(int this)
{
  int *v2; // ecx
  int *v3; // ecx

  sub_10268640(this);
  *(_DWORD *)this = &CPropJeep::`vftable';
  *(_DWORD *)(this + 1120) = &CPropJeep::`vftable';
  *(_DWORD *)(this + 1484) = &CPropJeep::`vftable';
  *(_DWORD *)(this + 1488) = &CPropJeep::`vftable';
  *(_DWORD *)(this + 1936) = -1;
  *(_DWORD *)(this + 1940) = -1;
  *(_BYTE *)(this + 1724) = 0;
  if ( *(_BYTE *)(this + 1689) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 1689);
    }
    *(_BYTE *)(this + 1689) = 1;
  }
  *(_BYTE *)(this + 1725) = 0;
  *(float *)(this + 1744) = 0.0;
  *(_BYTE *)(this + 1736) = 0;
  *(float *)(this + 1740) = 0.0;
  *(_DWORD *)(this + 1732) = -1;
  *(float *)(this + 1792) = 0.0;
  *(_DWORD *)(this + 1920) = 0;
  *(float *)(this + 1820) = 0.0;
  *(float *)(this + 1824) = 0.0;
  *(float *)(this + 1828) = 0.0;
  sub_103EA410((_WORD *)this);
  if ( *(_BYTE *)(this + 1688) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1688);
    }
    *(_BYTE *)(this + 1688) = 1;
  }
  *(float *)(this + 1780) = 0.0;
  return this;
}
