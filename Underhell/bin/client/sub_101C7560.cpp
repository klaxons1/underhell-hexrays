void __stdcall sub_101C7560(int a1, int a2, unsigned int a3)
{
  unsigned int i; // eax
  __int16 v4; // cx
  __int16 v5; // dx

  if ( a1 && a2 && a3 )
  {
    for ( i = 0; i < a3; *(_WORD *)(a1 + 2 * i - 2) = v4 | v5 )
    {
      v4 = *(unsigned __int8 *)(i + a2);
      LOBYTE(v5) = 0;
      HIBYTE(v5) = *(_BYTE *)(i + a2);
      ++i;
    }
  }
}
