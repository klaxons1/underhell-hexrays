void __stdcall sub_101C78E0(int a1, unsigned int a2)
{
  unsigned int i; // eax
  __int16 v3; // dx

  if ( a1 && a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v3 = *(_WORD *)(a1 + 8 * i);
      *(_WORD *)(a1 + 8 * i) = *(_WORD *)(a1 + 8 * i + 4);
      *(_WORD *)(a1 + 8 * i + 4) = v3;
    }
  }
}
