int __thiscall sub_100FA890(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CBeam::`vftable';
  *(_DWORD *)(this + 832) = -1;
  *(_DWORD *)(this + 836) = -1;
  *(_DWORD *)(this + 840) = -1;
  *(_DWORD *)(this + 844) = -1;
  *(_DWORD *)(this + 848) = -1;
  *(_DWORD *)(this + 852) = -1;
  *(_DWORD *)(this + 856) = -1;
  *(_DWORD *)(this + 860) = -1;
  *(_DWORD *)(this + 864) = -1;
  *(_DWORD *)(this + 868) = -1;
  *(_DWORD *)(this + 960) = -1;
  if ( *(_DWORD *)(this + 940) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 940);
    }
    *(_DWORD *)(this + 940) = 0;
  }
  result = this;
  if ( *(_DWORD *)(this + 804) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 804);
    }
    result = this;
    *(float *)(this + 804) = 1.0;
  }
  *(_DWORD *)(this + 964) = -1;
  return result;
}
