int __thiscall sub_102845D0(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  double v5; // st7
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  int *v12; // ecx
  int *v13; // ecx
  int *v14; // ecx
  int *v15; // ecx
  int *v16; // ecx
  int result; // eax
  int *v18; // ecx
  float v19; // [esp+8h] [ebp-4h]
  float v20; // [esp+8h] [ebp-4h]

  sub_100F5810((char *)this);
  *(_DWORD *)this = &SmokeTrail::`vftable';
  if ( *(_DWORD *)(this + 828) != COERCE_INT(10.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 828);
    }
    *(float *)(this + 828) = 10.0;
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
  v5 = 0.0;
  *(float *)(this + 812) = 0.0;
  *(float *)(this + 816) = 0.0;
  *(float *)(this + 820) = 0.0;
  if ( *(_DWORD *)(this + 832) != COERCE_INT(5.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 832);
        v5 = 0.0;
      }
    }
    *(float *)(this + 832) = 5.0;
  }
  v19 = v5;
  if ( *(_DWORD *)(this + 836) != LODWORD(v19) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
      {
        sub_100194B0(v7, 836);
        v5 = 0.0;
      }
    }
    *(float *)(this + 836) = v5;
  }
  if ( *(_DWORD *)(this + 840) != COERCE_INT(2.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
      {
        sub_100194B0(v8, 840);
        v5 = 0.0;
      }
    }
    *(float *)(this + 840) = 2.0;
  }
  if ( *(_DWORD *)(this + 844) != COERCE_INT(4.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
      {
        sub_100194B0(v9, 844);
        v5 = 0.0;
      }
    }
    *(float *)(this + 844) = 4.0;
  }
  v20 = v5;
  if ( *(_DWORD *)(this + 864) != LODWORD(v20) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 864) = v5;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
      {
        sub_100194B0(v10, 864);
        v5 = 0.0;
      }
      *(float *)(this + 864) = v5;
    }
  }
  if ( *(_DWORD *)(this + 860) != *(_DWORD *)(this + 864) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 860);
    }
    *(float *)(this + 860) = *(float *)(this + 864);
  }
  if ( *(_DWORD *)(this + 848) != COERCE_INT(35.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        sub_100194B0(v12, 848);
    }
    *(float *)(this + 848) = 35.0;
  }
  if ( *(_DWORD *)(this + 852) != COERCE_INT(55.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v13 = *(int **)(this + 24);
      if ( v13 )
        sub_100194B0(v13, 852);
    }
    *(float *)(this + 852) = 55.0;
  }
  if ( *(_DWORD *)(this + 856) != COERCE_INT(2.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(this + 24);
      if ( v14 )
        sub_100194B0(v14, 856);
    }
    *(float *)(this + 856) = 2.0;
  }
  if ( *(_BYTE *)(this + 868) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v15 = *(int **)(this + 24);
      if ( v15 )
        sub_100194B0(v15, 868);
    }
    *(_BYTE *)(this + 868) = 1;
  }
  if ( *(_DWORD *)(this + 872) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v16 = *(int **)(this + 24);
      if ( v16 )
        sub_100194B0(v16, 872);
    }
    *(_DWORD *)(this + 872) = 0;
  }
  result = this;
  if ( *(_DWORD *)(this + 824) != COERCE_INT(0.5) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 824) = 0.5;
    }
    else
    {
      v18 = *(int **)(this + 24);
      if ( v18 )
        sub_100194B0(v18, 824);
      result = this;
      *(float *)(this + 824) = 0.5;
    }
  }
  return result;
}
