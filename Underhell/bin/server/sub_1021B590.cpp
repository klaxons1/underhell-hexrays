int __thiscall sub_1021B590(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  int *v12; // ecx
  int result; // eax
  int *v14; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)(this + 800) = &IPositionWatcher::`vftable';
  *(_DWORD *)this = &CRopeKeyframe::`vftable';
  *(_DWORD *)(this + 800) = &CRopeKeyframe::`vftable';
  *(_DWORD *)(this + 864) = -1;
  *(_DWORD *)(this + 868) = -1;
  *(_DWORD *)(this + 252) |= 0x80u;
  sub_100D8500((_DWORD *)this);
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  if ( *(_BYTE *)(this + 874) || *(_BYTE *)(this + 875) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 874);
    }
    *(_WORD *)(this + 874) = 0;
  }
  if ( *(_BYTE *)(this + 874) != *(_BYTE *)(this + 872) || *(_BYTE *)(this + 875) != *(_BYTE *)(this + 873) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 872);
    }
    *(_WORD *)(this + 872) = *(_WORD *)(this + 874);
  }
  if ( *(_DWORD *)(this + 812) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 812);
    }
    *(_DWORD *)(this + 812) = 0;
  }
  if ( *(_DWORD *)(this + 816) != COERCE_INT(2.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 816);
    }
    *(float *)(this + 816) = 2.0;
  }
  if ( *(_DWORD *)(this + 820) != COERCE_INT(4.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 820);
    }
    *(float *)(this + 820) = 4.0;
  }
  if ( *(_DWORD *)(this + 824) != 5 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 824);
    }
    *(_DWORD *)(this + 824) = 5;
  }
  if ( *(_DWORD *)(this + 844) != 20 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 844);
    }
    *(_DWORD *)(this + 844) = 20;
  }
  if ( *(_DWORD *)(this + 848) != 3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
        sub_100194B0(v9, 848);
    }
    *(_DWORD *)(this + 848) = 3;
  }
  if ( *(_DWORD *)(this + 856) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        sub_100194B0(v10, 856);
    }
    *(float *)(this + 856) = 0.0;
  }
  if ( *(_DWORD *)(this + 804) != 72 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 804);
    }
    *(_DWORD *)(this + 804) = 72;
  }
  if ( *(_DWORD *)(this + 836) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        sub_100194B0(v12, 836);
    }
    *(_DWORD *)(this + 836) = -1;
  }
  result = this;
  if ( *(_DWORD *)(this + 840) != 2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(this + 24);
      if ( v14 )
        sub_100194B0(v14, 840);
    }
    *(_DWORD *)(this + 840) = 2;
    result = this;
  }
  *(_BYTE *)(this + 852) = 1;
  return result;
}
