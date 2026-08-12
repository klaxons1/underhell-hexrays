void __thiscall sub_100C6260(_DWORD *this, int a2, float a3)
{
  int v4; // edi
  double v5; // st7
  int v6; // eax
  _DWORD *v7; // eax

  if ( a2 >= 0 && a2 < this[283] )
  {
    v4 = 76 * a2 + this[280];
    if ( (*(_BYTE *)v4 & 1) != 0 )
    {
      if ( !*(_BYTE *)(v4 + 5) )
      {
        v5 = a3;
        if ( a3 <= 1.0 )
        {
          if ( v5 < 0.0 )
            v5 = 0.0;
        }
        else
        {
          v5 = 1.0;
        }
        a3 = v5;
      }
      if ( *(_DWORD *)(v4 + 12) != LODWORD(a3) )
      {
        v6 = *(_DWORD *)(v4 + 72);
        if ( v6 )
        {
          if ( *(_BYTE *)(v6 + 84) )
          {
            *(_BYTE *)(v6 + 88) |= 1u;
          }
          else
          {
            v7 = *(_DWORD **)(v6 + 24);
            if ( v7 )
            {
              *v7 |= 0x101u;
              *(_WORD *)(sub_10153460(v7) + 2) = 0;
            }
          }
        }
        *(float *)(v4 + 12) = a3;
      }
      *(float *)(this[280] + 76 * a2 + 68) = *(float *)(dword_106B31C8 + 12);
    }
  }
}
