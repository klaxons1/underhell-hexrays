void __thiscall sub_1005BC90(int this, int a2)
{
  int v2; // esi
  int v3; // edi
  __int16 v4; // ax
  int *v5; // ecx

  v2 = *(_DWORD *)(this + 816);
  v3 = this + 872;
  if ( *(_DWORD *)(this + 4 * v2 + 868) != a2 )
  {
    v4 = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(v3 + 4 * v2 - 4) = a2;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, v3 + 4 * v2 - 4 - v4);
      *(_DWORD *)(v3 + 4 * v2 - 4) = a2;
    }
  }
}
