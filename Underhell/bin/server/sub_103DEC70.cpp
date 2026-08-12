int __thiscall sub_103DEC70(int this, int a2)
{
  int v3; // edi
  int *v4; // ecx
  int result; // eax
  int *v6; // ecx

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  if ( *(_DWORD *)(this + 884) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 884);
    }
    *(_DWORD *)(this + 884) = v3;
  }
  result = *(_DWORD *)(this + 864);
  if ( result != *(_DWORD *)(this + 884) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      result = *(_DWORD *)(this + 884);
      *(_DWORD *)(this + 864) = result;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 864);
      result = *(_DWORD *)(this + 884);
      *(_DWORD *)(this + 864) = result;
    }
  }
  return result;
}
