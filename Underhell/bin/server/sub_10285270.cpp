int __thiscall sub_10285270(int this)
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
  int *v13; // ecx
  int result; // eax
  int *v15; // ecx

  sub_100F5810((char *)this);
  *(_DWORD *)this = &DustTrail::`vftable';
  if ( *(_DWORD *)(this + 816) != COERCE_INT(10.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 816);
    }
    *(float *)(this + 816) = 10.0;
  }
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v3 = *(int **)(this + 24);
    if ( v3 )
      sub_100194B0(v3, 800);
  }
  *(float *)(this + 800) = 0.5;
  *(float *)(this + 804) = 0.5;
  *(float *)(this + 808) = 0.5;
  if ( *(_DWORD *)(this + 820) != COERCE_INT(5.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 820);
    }
    *(float *)(this + 820) = 5.0;
  }
  if ( *(_DWORD *)(this + 824) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 824);
    }
    *(float *)(this + 824) = 0.0;
  }
  if ( *(_DWORD *)(this + 828) != COERCE_INT(2.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 828);
    }
    *(float *)(this + 828) = 2.0;
  }
  if ( *(_DWORD *)(this + 832) != COERCE_INT(4.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 832);
    }
    *(float *)(this + 832) = 4.0;
  }
  if ( *(_DWORD *)(this + 852) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 852);
    }
    *(float *)(this + 852) = 0.0;
  }
  if ( *(_DWORD *)(this + 848) != *(_DWORD *)(this + 852) )
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
    *(float *)(this + 848) = *(float *)(this + 852);
  }
  if ( *(_DWORD *)(this + 836) != COERCE_INT(35.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        sub_100194B0(v10, 836);
    }
    *(float *)(this + 836) = 35.0;
  }
  if ( *(_DWORD *)(this + 840) != COERCE_INT(55.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 840);
    }
    *(float *)(this + 840) = 55.0;
  }
  if ( *(_DWORD *)(this + 844) != COERCE_INT(2.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        sub_100194B0(v12, 844);
    }
    *(float *)(this + 844) = 2.0;
  }
  if ( *(_BYTE *)(this + 856) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v13 = *(int **)(this + 24);
      if ( v13 )
        sub_100194B0(v13, 856);
    }
    *(_BYTE *)(this + 856) = 1;
  }
  result = this;
  if ( *(_DWORD *)(this + 812) != COERCE_INT(0.5) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 812) = 0.5;
    }
    else
    {
      v15 = *(int **)(this + 24);
      if ( v15 )
        sub_100194B0(v15, 812);
      result = this;
      *(float *)(this + 812) = 0.5;
    }
  }
  return result;
}
