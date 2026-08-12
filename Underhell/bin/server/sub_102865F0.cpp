void __thiscall sub_102865F0(int this, int a2)
{
  _DWORD *v2; // esi
  int *v3; // ecx

  v2 = (_DWORD *)(this + 828);
  if ( *(_DWORD *)(this + 828) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v2 = 0;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 828);
      *v2 = 0;
    }
  }
}
