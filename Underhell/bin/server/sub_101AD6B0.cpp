void __thiscall sub_101AD6B0(int this, int a2)
{
  int v2; // eax
  int *v3; // esi
  int v4; // edi
  int *v5; // ecx

  if ( *(_DWORD *)(this + 808) )
  {
    v2 = *(_DWORD *)(this + 248);
    v3 = (int *)(this + 248);
    v4 = v2 | 0x8000;
    if ( v2 != (v2 | 0x8000) )
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
