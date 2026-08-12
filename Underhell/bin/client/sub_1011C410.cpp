void __thiscall sub_1011C410(_BYTE *this, char *a2, char *Src, int a4)
{
  int v4; // esi
  char *v5; // eax
  char *v6; // ecx
  __int16 v7; // [esp+14h] [ebp+10h]

  v4 = a4;
  if ( a4 > 0 && a2 )
  {
    v5 = Src;
    if ( !Src )
      v5 = a2;
    if ( (*this & 1) != 0 )
    {
      v6 = (char *)(a2 - v5);
      do
      {
        LOBYTE(v7) = v5[1];
        HIBYTE(v7) = *v5;
        *(_WORD *)&v5[(_DWORD)v6] = v7;
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
    else if ( v5 )
    {
      memcpy_0(a2, v5, 2 * a4);
    }
  }
}
