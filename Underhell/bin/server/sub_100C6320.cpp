void __thiscall sub_100C6320(_DWORD *this, int a2, float a3, float a4)
{
  int v5; // edi
  int v6; // esi
  double v7; // st6
  double v8; // st3
  double v9; // st7
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  float *v13; // esi
  int v14; // eax
  _DWORD *v15; // eax

  if ( a2 >= 0 && a2 < this[283] )
  {
    v5 = 76 * a2;
    v6 = 76 * a2 + this[280];
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      if ( !*(_BYTE *)(v6 + 5) )
      {
        if ( a3 <= 1.0 )
        {
          v8 = a3;
          v7 = 0.0;
          if ( a3 < 0.0 )
            v8 = 0.0;
        }
        else
        {
          v7 = 0.0;
          v8 = 1.0;
        }
        a3 = v8;
        v9 = a4;
        if ( a4 <= 1.0 )
        {
          if ( v9 < 0.0 )
            v9 = v7;
        }
        else
        {
          v9 = 1.0;
        }
        a4 = v9;
      }
      if ( *(_DWORD *)(v6 + 12) != LODWORD(a3) )
      {
        v10 = *(_DWORD *)(v6 + 72);
        if ( v10 )
        {
          if ( *(_BYTE *)(v10 + 84) )
          {
            *(_BYTE *)(v10 + 88) |= 1u;
          }
          else
          {
            v11 = *(_DWORD **)(v10 + 24);
            if ( v11 )
            {
              *v11 |= 0x101u;
              *(_WORD *)(sub_10153460(v11) + 2) = 0;
            }
          }
        }
        *(float *)(v6 + 12) = a3;
      }
      v12 = this[280];
      v13 = (float *)(v5 + v12 + 16);
      if ( *(_DWORD *)v13 != LODWORD(a4) )
      {
        v14 = *(_DWORD *)(v5 + v12 + 72);
        if ( v14 )
        {
          if ( *(_BYTE *)(v14 + 84) )
          {
            *(_BYTE *)(v14 + 88) |= 1u;
          }
          else
          {
            v15 = *(_DWORD **)(v14 + 24);
            if ( v15 )
            {
              *v15 |= 0x101u;
              *(_WORD *)(sub_10153460(v15) + 2) = 0;
            }
          }
        }
        *v13 = a4;
      }
      *(float *)(v5 + this[280] + 64) = a4;
      *(float *)(v5 + this[280] + 68) = *(float *)(dword_106B31C8 + 12);
    }
  }
}
