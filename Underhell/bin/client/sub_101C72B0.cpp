void __stdcall sub_101C72B0(int a1, float a2, unsigned int a3)
{
  int v3; // ebp
  float v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // esi

  v3 = a1;
  if ( a1 )
  {
    v4 = a2;
    if ( a2 != 0.0 )
    {
      v5 = a3;
      if ( a3 )
      {
        v6 = 0;
        do
        {
          a2 = *(double *)(LODWORD(v4) + 8 * v6);
          *(_WORD *)(v3 + 2 * v6++) = *sub_101C6940(&a1, a2);
        }
        while ( v6 < v5 );
      }
    }
  }
}
