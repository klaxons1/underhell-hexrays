void __thiscall sub_1011C390(_BYTE *this, int *a2, char *Src, int a4)
{
  int v4; // esi
  int *v6; // ecx
  char *v7; // eax
  _BYTE *v8; // eax
  int v9; // [esp+14h] [ebp+10h]

  v4 = a4;
  if ( a4 > 0 )
  {
    v6 = a2;
    if ( a2 )
    {
      v7 = Src;
      if ( !Src )
        v7 = (char *)a2;
      if ( (*this & 1) != 0 )
      {
        v8 = v7 + 2;
        do
        {
          LOBYTE(v9) = v8[1];
          BYTE1(v9) = *v8;
          BYTE2(v9) = *(v8 - 1);
          HIBYTE(v9) = *(v8 - 2);
          *v6++ = v9;
          v8 += 4;
          --v4;
        }
        while ( v4 );
      }
      else if ( v7 )
      {
        memcpy_0(a2, v7, 4 * a4);
      }
    }
  }
}
