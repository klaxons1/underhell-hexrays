int __thiscall sub_103DED10(int this)
{
  int *v2; // ecx
  int v3; // edi
  int *v4; // ecx
  int *v5; // ecx

  if ( *(_DWORD *)(this + 848) != *(_DWORD *)(this + 852) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 848);
    }
    *(_DWORD *)(this + 848) = *(_DWORD *)(this + 852);
  }
  v3 = dword_106B31C8;
  if ( *(_DWORD *)(this + 856) != *(_DWORD *)(dword_106B31C8 + 12) )
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
    *(float *)(this + 856) = *(float *)(v3 + 12);
  }
  if ( *(_DWORD *)(this + 860) != *(_DWORD *)(this + 856) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 860);
    }
    *(float *)(this + 860) = *(float *)(this + 856);
  }
  *(_DWORD *)(this + 916) = -1;
  return sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), (int)"BlendComplete");
}
