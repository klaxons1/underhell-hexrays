void __stdcall sub_101C7700(int a1, int a2, unsigned int a3)
{
  unsigned int i; // ecx
  int v4; // eax

  if ( a1 && a2 && a3 )
  {
    for ( i = 0; i < a3; ++i )
    {
      if ( HIBYTE(*(unsigned __int16 *)(a2 + 2 * i)) + ((unsigned __int8)*(_WORD *)(a2 + 2 * i) >= 0x80u) >= 255 )
        LOBYTE(v4) = -1;
      else
        v4 = HIBYTE(*(unsigned __int16 *)(a2 + 2 * i)) + ((unsigned __int8)*(_WORD *)(a2 + 2 * i) >= 0x80u);
      *(_BYTE *)(i + a1) = v4;
    }
  }
}
