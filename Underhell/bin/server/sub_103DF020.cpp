int __thiscall sub_103DF020(int this, int a2)
{
  double v3; // st7
  int *v4; // ecx
  int v5; // ebx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int v9; // ecx
  float v11; // [esp+2Ch] [ebp+8h]

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  v11 = v3 + *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(this + 856) != LODWORD(v11) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 856);
    }
    *(float *)(this + 856) = v11;
  }
  v5 = dword_106B31C8;
  if ( *(_DWORD *)(this + 860) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 860);
    }
    *(float *)(this + 860) = *(float *)(v5 + 12);
  }
  if ( *(int *)(this + 916) >= 0 && *(_DWORD *)(this + 848) != *(_DWORD *)(this + 916) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 848);
    }
    *(_DWORD *)(this + 848) = *(_DWORD *)(this + 916);
  }
  if ( *(int *)(this + 920) < 0 )
  {
    Warning("script_intro: Warning!! Set blend time without setting next blend mode!\n");
    *(_DWORD *)(this + 920) = *(_DWORD *)(this + 848);
  }
  if ( *(_DWORD *)(this + 852) != *(_DWORD *)(this + 920) )
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
    *(_DWORD *)(this + 852) = *(_DWORD *)(this + 920);
  }
  v9 = *(_DWORD *)(this + 852);
  *(_DWORD *)(this + 920) = -1;
  *(_DWORD *)(this + 916) = v9;
  if ( *(_DWORD *)(dword_106EDBC4 + 48) )
    DevMsg(
      1,
      "%.2f BLEND STARTED: %d to %d, end at %.2f\n",
      *(float *)(dword_106B31C8 + 12),
      *(_DWORD *)(this + 848),
      v9,
      *(float *)(this + 856));
  return sub_100EC3F0((_DWORD *)this, (int)sub_103DED10, *(float *)(this + 856), (int)"BlendComplete");
}
