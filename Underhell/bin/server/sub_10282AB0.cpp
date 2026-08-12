int __thiscall sub_10282AB0(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  int v5; // edi
  int result; // eax
  int *v7; // ecx

  sub_100F5810((char *)this);
  *(_DWORD *)this = &ParticleSmokeGrenade::`vftable';
  if ( *(_BYTE *)(this + 800) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 800);
    }
    *(_BYTE *)(this + 800) = 0;
  }
  if ( *(_DWORD *)(this + 808) != COERCE_INT(17.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 808);
    }
    *(float *)(this + 808) = 17.0;
  }
  if ( *(_DWORD *)(this + 812) != COERCE_INT(22.0) )
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
    *(float *)(this + 812) = 22.0;
  }
  v5 = dword_106B31C8;
  result = this;
  if ( *(_DWORD *)(this + 804) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 804) = *(float *)(v5 + 12);
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 804);
      result = this;
      *(float *)(this + 804) = *(float *)(v5 + 12);
    }
  }
  return result;
}
