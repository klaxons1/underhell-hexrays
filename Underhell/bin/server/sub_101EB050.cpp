void __thiscall sub_101EB050(unsigned __int16 *this, int a2, int a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  int v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // ebx
  int v14; // ebx
  float *v15; // esi
  double v16; // st2
  double v17; // st7
  double v18; // st4
  double v19; // [esp+0h] [ebp-1C8h]
  double ArgList; // [esp+20h] [ebp-1A8h]
  float v21; // [esp+2Ch] [ebp-19Ch]
  char Source[128]; // [esp+3Ch] [ebp-18Ch] BYREF
  char Destination[256]; // [esp+BCh] [ebp-10Ch] BYREF
  float v24; // [esp+1BCh] [ebp-Ch]
  unsigned __int16 *v25; // [esp+1C0h] [ebp-8h]
  double var4; // [esp+1C4h] [ebp-4h]

  v3 = 0;
  v25 = this;
  if ( a2 )
  {
    memset(Destination, 0, sizeof(Destination));
    v4 = 0.0;
    v5 = this[2439];
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    LODWORD(var4) = 0;
    v9 = 0.0;
    if ( v5 != 0xFFFF )
    {
      while ( 1 )
      {
        v14 = 40 * (unsigned __int16)v5;
        v15 = (float *)(v14 + *((_DWORD *)v25 + 1216));
        v16 = v9 - v15[3];
        v24 = v16;
        if ( SLODWORD(var4) > 0 && v16 > v4 )
        {
          v17 = v15[8] - v8;
          v18 = v15[6] - v6;
          v21 = v17 * v17 + v18 * v18 + (v15[7] - v7) * (v15[7] - v7);
          off_10689708(v21);
        }
        v19 = *v15;
        v24 = COERCE_FLOAT(sub_10429A00(Source, 0x80u, "%.3f %d %d %.3f %.3f %.3f [vel %.2f]\n", SLOBYTE(v19)));
        if ( v3 + LODWORD(v24) > 200 )
        {
          sub_102601C0(a2, 2, Destination, 0, 0, 0, 0);
          Destination[0] = 0;
          v3 = 0;
        }
        sub_104299C0(&Destination[v3], Source, 256 - v3);
        v3 += LODWORD(v24);
        ++LODWORD(var4);
        if ( a3 != -1 && SLODWORD(var4) >= a3 )
          break;
        v5 = *(unsigned __int16 *)(v14 + *((_DWORD *)v25 + 1216) + 36);
        if ( v5 == 0xFFFF )
          break;
        v4 = 0.0;
        v6 = v15[6];
        v7 = v15[7];
        v9 = v15[3];
        v8 = v15[8];
      }
      if ( v3 > 0 )
        sub_102601C0(a2, 2, Destination, 0, 0, 0, 0);
    }
    v10 = v25[2453];
    v11 = 0;
    LODWORD(var4) = 0;
    if ( v10 != 0xFFFF )
    {
      do
      {
        v12 = 2 * (unsigned __int16)v10;
        ArgList = *(float *)(*((_DWORD *)v25 + 1223) + 16 * (unsigned __int16)v10);
        v13 = sub_10429A00(Source, 0x80u, "%.3f %d %d\n", SLOBYTE(ArgList));
        if ( v13 + v11 > 200 )
        {
          sub_102601C0(a2, 2, Destination, 0, 0, 0, 0);
          Destination[0] = 0;
          v11 = 0;
        }
        sub_104299C0(&Destination[v11], Source, 256 - v11);
        ++LODWORD(var4);
        v11 += v13;
        if ( a3 != -1 && SLODWORD(var4) >= a3 )
          break;
        v10 = *(unsigned __int16 *)(*((_DWORD *)v25 + 1223) + 8 * v12 + 12);
      }
      while ( v10 != 0xFFFF );
      if ( v11 > 0 )
        sub_102601C0(a2, 2, Destination, 0, 0, 0, 0);
    }
  }
}
