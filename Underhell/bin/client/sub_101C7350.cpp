void __stdcall sub_101C7350(_WORD *a1, float a2, int a3)
{
  _WORD *v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a1;
  if ( a1 )
  {
    if ( a2 != 0.0 )
    {
      v4 = a3;
      if ( a3 )
      {
        v5 = LODWORD(a2) - (_DWORD)a1;
        do
        {
          LODWORD(a2) = *(unsigned __int16 *)((char *)v3 + v5);
          a2 = (double)SLODWORD(a2) / 65535.0;
          *v3++ = *sub_101C6940(&a1, a2);
          --v4;
        }
        while ( v4 );
      }
    }
  }
}
