int __thiscall sub_10093460(float *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  double v6; // st4
  double v7; // st7
  double v8; // st4
  double v9; // st5
  double v10; // st7
  int v11; // esi
  double v12; // st4
  double v13; // st7
  double v14; // st4
  double v15; // st5
  double v16; // st7
  int v18; // [esp+Ch] [ebp-10h]
  float v19; // [esp+10h] [ebp-Ch]
  float v20; // [esp+10h] [ebp-Ch]
  float v21; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]
  int j; // [esp+18h] [ebp-4h]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  v21 = 3.4028235e38;
  v18 = 0;
  if ( (a2 & 1) != 0 )
  {
    v3 = 1;
    for ( i = 1; v3 <= *(_DWORD *)(dword_106B31C8 + 20); i = v3 )
    {
      v4 = sub_1025FB50(v3);
      v5 = v4;
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
          sub_100DAE60(v4);
        v6 = this[145] - *(float *)(v5 + 580);
        v7 = v6 * v6;
        v8 = this[146] - *(float *)(v5 + 584);
        v9 = this[147] - *(float *)(v5 + 588);
        v10 = v9 * v9 + v8 * v8 + v7;
        if ( v10 <= 250000.0 && ((a2 & 8) != 0 || v10 <= v21) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(float *, int, int))(*(_DWORD *)this + 2320))(this, a2, v5) )
          {
            if ( (a2 & 8) != 0 )
              return v5;
            v18 = v5;
            v19 = v10;
            v21 = v19;
          }
        }
      }
      v3 = i + 1;
    }
  }
  if ( (a2 & 2) != 0 )
  {
    v11 = 0;
    for ( j = 0; j < sub_1016BFB0(&dword_10690DF8); v11 = j )
    {
      v5 = *(_DWORD *)(sub_1002A680(&dword_10690DF8) + 4 * v11);
      if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
        sub_100DAE60(v5);
      v12 = this[145] - *(float *)(v5 + 580);
      v13 = v12 * v12;
      v14 = this[146] - *(float *)(v5 + 584);
      v15 = this[147] - *(float *)(v5 + 588);
      v16 = v15 * v15 + v14 * v14 + v13;
      if ( v16 <= 250000.0
        && ((a2 & 8) != 0 || v16 <= v21)
        && (*(unsigned __int8 (__thiscall **)(float *, int, int))(*(_DWORD *)this + 2320))(this, a2, v5) )
      {
        if ( (a2 & 8) != 0 )
          return v5;
        v18 = v5;
        v20 = v16;
        v21 = v20;
      }
      ++j;
    }
  }
  return v18;
}
