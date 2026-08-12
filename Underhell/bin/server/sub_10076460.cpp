void __thiscall sub_10076460(int this)
{
  unsigned __int8 v1; // dl
  int v2; // esi
  unsigned __int8 v3; // al
  int *v4; // edx
  int v5; // esi

  v1 = *(_BYTE *)(this + 19);
  if ( v1 != 0xFF )
  {
    v2 = *(_DWORD *)(this + 8);
    v3 = (v2 > 0) - 1;
    if ( v2 > 0 )
    {
      do
      {
        if ( v3 < v2 && v3 <= v1 )
        {
          if ( (dword_106931E0 & 1) == 0 )
          {
            dword_106931E0 |= 1u;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v3 == 0xFF )
            v4 = &dword_106931DC;
          else
            v4 = (int *)(*(_DWORD *)(this + 4) + 12 * v3);
          if ( *(_BYTE *)v4 != v3 )
          {
            v5 = 12 * v3;
            *(_BYTE *)(v5 + *(_DWORD *)(this + 4) + 1) = *(_BYTE *)(this + 18);
            *(_BYTE *)(v5 + *(_DWORD *)(this + 4)) = v3;
            *(_BYTE *)(this + 18) = v3;
          }
        }
        v1 = *(_BYTE *)(this + 19);
        if ( v3 == v1 )
          break;
        v2 = *(_DWORD *)(this + 8);
        if ( ++v3 >= v2 )
          v3 = -1;
      }
      while ( v3 != 0xFF );
    }
    *(_WORD *)(this + 16) = 255;
  }
}
