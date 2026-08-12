void __thiscall sub_10109CD0(_BYTE *this, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // edx
  _DWORD *v6; // eax

  if ( this[44] )
  {
    if ( a2 != 1 )
    {
      v5 = a5;
      if ( a5 > 0 )
      {
        v6 = a3;
        do
        {
          *v6 = *(_DWORD *)((char *)v6 + a4 - (_DWORD)a3);
          ++v6;
          --v5;
        }
        while ( v5 );
      }
    }
  }
}
