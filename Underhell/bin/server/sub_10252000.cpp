void __thiscall sub_10252000(int this)
{
  unsigned int v2; // edi
  int *v3; // ecx

  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    v2 = *(_DWORD *)(this + 248) & 0xFFFFFFFE;
    if ( *(_DWORD *)(this + 248) != v2 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 248) = v2;
        sub_10251B40(this, *(float *)&this);
        return;
      }
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 248);
      *(_DWORD *)(this + 248) = v2;
    }
    sub_10251B40(this, *(float *)&this);
  }
}
