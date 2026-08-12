void __thiscall sub_101AD710(int this, int a2)
{
  int v2; // eax
  unsigned int *v3; // esi
  unsigned int v4; // edi
  int *v5; // ecx

  if ( *(_DWORD *)(this + 808) )
  {
    v2 = *(_DWORD *)(this + 248);
    v3 = (unsigned int *)(this + 248);
    v4 = v2 & 0xFFFF7FFF;
    if ( v2 != (v2 & 0xFFFF7FFF) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *v3 = v4;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          sub_100194B0(v5, 248);
        *v3 = v4;
      }
    }
  }
}
