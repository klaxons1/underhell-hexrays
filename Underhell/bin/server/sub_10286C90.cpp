int __thiscall sub_10286C90(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  double v4; // st7
  int *v5; // ecx
  int result; // eax
  int *v7; // ecx
  float v8; // [esp+Ch] [ebp-4h]

  sub_100F5810((char *)this);
  *(_DWORD *)this = &CSmokeStack::`vftable';
  *(_DWORD *)(this + 840) = 0;
  *(_DWORD *)(this + 844) = 0;
  *(_DWORD *)(this + 848) = 0;
  *(_DWORD *)(this + 852) = 0;
  *(_DWORD *)(this + 856) = 0;
  *(_DWORD *)(this + 860) = 0;
  *(_DWORD *)(this + 864) = 0;
  *(_DWORD *)(this + 872) = 0;
  *(_DWORD *)(this + 876) = 0;
  *(_DWORD *)(this + 880) = 0;
  *(_DWORD *)(this + 884) = 0;
  *(_DWORD *)(this + 888) = 0;
  *(_DWORD *)(this + 892) = 0;
  *(_DWORD *)(this + 896) = 0;
  *(_DWORD *)(this + 836) = this;
  *(_DWORD *)(this + 868) = this;
  if ( *(_DWORD *)(this + 900) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 900);
    }
    *(float *)(this + 900) = 0.0;
  }
  sub_1005C620((_BYTE *)(this + 116), 0, 0, 0, 255);
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v3 = *(int **)(this + 24);
    if ( v3 )
      sub_100194B0(v3, 920);
  }
  v4 = 0.0;
  *(float *)(this + 920) = 0.0;
  *(float *)(this + 924) = 0.0;
  *(float *)(this + 928) = 0.0;
  *(_DWORD *)(this + 916) = 0;
  *(_DWORD *)(this + 912) = 0;
  if ( *(_DWORD *)(this + 908) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 908);
        v4 = 0.0;
      }
    }
    *(_DWORD *)(this + 908) = -1;
  }
  v8 = v4;
  result = this;
  if ( *(_DWORD *)(this + 824) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 824) = v4;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
      {
        sub_100194B0(v7, 824);
        v4 = 0.0;
      }
      *(float *)(this + 824) = v4;
      return this;
    }
  }
  return result;
}
