int __thiscall sub_103DE670(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  float v8[3]; // [esp+8h] [ebp-18h] BYREF
  float v9[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this + 852) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 852);
    }
    *(_DWORD *)(this + 852) = -1;
  }
  *(_DWORD *)(this + 916) = -1;
  *(_DWORD *)(this + 920) = -1;
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  v9[0] = 5.0;
  v9[1] = 5.0;
  v9[2] = 5.0;
  v8[0] = -5.0;
  v8[1] = -5.0;
  v8[2] = -5.0;
  result = sub_100D69D0((void *)this, (int)v8, (int)v9);
  if ( *(_BYTE *)(this + 868) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 868);
    }
    *(_BYTE *)(this + 868) = 0;
  }
  if ( *(_DWORD *)(this + 872) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 872);
    }
    *(_DWORD *)(this + 872) = 0;
  }
  if ( *(_DWORD *)(this + 884) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        result = sub_100194B0(v6, 884);
    }
    *(_DWORD *)(this + 884) = 0;
  }
  if ( *(_DWORD *)(this + 864) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 864) = 0;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        result = sub_100194B0(v7, 864);
      *(_DWORD *)(this + 864) = 0;
    }
  }
  return result;
}
