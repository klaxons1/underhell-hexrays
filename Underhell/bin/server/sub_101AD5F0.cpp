void __thiscall sub_101AD5F0(int this)
{
  int v1; // eax
  int *v2; // esi
  int v3; // edi
  int *v4; // ecx

  if ( *(_DWORD *)(this + 808) )
  {
    v1 = *(_DWORD *)(this + 248);
    v2 = (int *)(this + 248);
    v3 = v1 | 0x8000;
    if ( v1 != (v1 | 0x8000) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *v2 = v3;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 248);
        *v2 = v3;
      }
    }
  }
}
