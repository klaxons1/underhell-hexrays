void __thiscall sub_100C6460(_DWORD *this, int a2, float a3)
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
      v5 = 1.0;
      if ( a3 <= 1.0 )
      {
        v5 = a3;
        if ( a3 < 0.0 )
        {
          v5 = 0.0;
          a3 = 0.0;
        }
      }
      else
      {
        a3 = 1.0;
      }
      if ( *(_DWORD *)(v4 + 20) == LODWORD(a3) )
        goto LABEL_15;
      v6 = *(_DWORD *)(v4 + 72);
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
          *(float *)(v4 + 20) = v5;
LABEL_15:
          *(float *)(this[280] + 76 * a2 + 68) = *(float *)(dword_106B31C8 + 12);
          return;
        }
        v7 = *(_DWORD **)(v6 + 24);
        if ( v7 )
        {
          *v7 |= 0x101u;
          v5 = a3;
          *(_WORD *)(sub_10153460(v7) + 2) = 0;
        }
      }
      *(float *)(v4 + 20) = v5;
      goto LABEL_15;
    }
  }
}
