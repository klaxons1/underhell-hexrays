int __thiscall sub_10132920(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  _DWORD *v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  int *v12; // ecx
  int result; // eax
  int *v14; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CEnvProjectedTexture::`vftable';
  *(_DWORD *)(this + 800) = -1;
  if ( *(_BYTE *)(this + 817) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 817);
    }
    *(_BYTE *)(this + 817) = 1;
  }
  if ( *(_DWORD *)(this + 812) != COERCE_INT(45.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 812);
    }
    *(float *)(this + 812) = 45.0;
  }
  if ( *(_BYTE *)(this + 816) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 816);
    }
    *(_BYTE *)(this + 816) = 0;
  }
  if ( *(_BYTE *)(this + 818) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 818);
    }
    *(_BYTE *)(this + 818) = 0;
  }
  if ( *(_BYTE *)(this + 819) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 819);
    }
    *(_BYTE *)(this + 819) = 1;
  }
  if ( *(_BYTE *)(this + 820) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 820);
    }
    *(_BYTE *)(this + 820) = 0;
  }
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v8 = *(_DWORD **)(this + 24);
    if ( v8 )
    {
      *v8 |= 0x101u;
      *(_WORD *)(sub_10153460(v8) + 2) = 0;
    }
  }
  strcpy((char *)(this + 840), "effects/flashlight001");
  if ( *(_DWORD *)(this + 1100) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
        sub_100194B0(v9, 1100);
    }
    *(_DWORD *)(this + 1100) = 0;
  }
  sub_10132850((float *)(this + 824), 1.0, 1.0, 1.0);
  if ( *(_DWORD *)(this + 836) != COERCE_INT(0.0) )
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
    *(float *)(this + 836) = 0.0;
  }
  if ( *(_DWORD *)(this + 804) != COERCE_INT(4.0) )
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
    *(float *)(this + 804) = 4.0;
  }
  if ( *(_DWORD *)(this + 808) != COERCE_INT(750.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        sub_100194B0(v12, 808);
    }
    *(float *)(this + 808) = 750.0;
  }
  result = this;
  if ( *(_DWORD *)(this + 1104) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 1104) = 0;
    }
    else
    {
      v14 = *(int **)(this + 24);
      if ( v14 )
        sub_100194B0(v14, 1104);
      *(_DWORD *)(this + 1104) = 0;
      return this;
    }
  }
  return result;
}
