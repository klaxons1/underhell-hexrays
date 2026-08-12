void __thiscall sub_10095320(int this)
{
  char v1; // dl
  char v2; // al
  int v3; // edx

  v1 = *(_BYTE *)(this + 19);
  if ( v1 != -1 )
  {
    v2 = (*(_DWORD *)(this + 8) > 0) - 1;
    if ( *(int *)(this + 8) > 0 )
    {
      do
      {
        if ( v2 >= 0 && v2 < *(_DWORD *)(this + 8) && v2 <= v1 )
        {
          if ( (dword_10693990 & 1) == 0 )
          {
            dword_10693990 |= 1u;
            dword_1069398C = 0x1FFFFFF;
          }
          if ( *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v2) != v2 )
          {
            v3 = 12 * v2;
            *(_BYTE *)(v3 + *(_DWORD *)(this + 4) + 1) = *(_BYTE *)(this + 18);
            *(_BYTE *)(v3 + *(_DWORD *)(this + 4)) = v2;
            *(_BYTE *)(this + 18) = v2;
          }
        }
        v1 = *(_BYTE *)(this + 19);
        if ( v2 == v1 )
          break;
        if ( (char)(v2 + 1) < 0 || (char)(v2 + 1) >= *(_DWORD *)(this + 8) )
          v2 = -1;
        else
          ++v2;
      }
      while ( v2 != -1 );
    }
    *(_WORD *)(this + 16) = 255;
  }
}
