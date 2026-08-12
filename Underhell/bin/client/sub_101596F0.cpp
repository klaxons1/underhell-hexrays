int __thiscall sub_101596F0(_DWORD *this, int a2, int a3)
{
  _BYTE *v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  int result; // eax
  double v11; // st7
  int v12; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  _BYTE *v18; // [esp+Ch] [ebp-2Ch]
  int v19; // [esp+10h] [ebp-28h]
  int v20; // [esp+14h] [ebp-24h]
  int v21; // [esp+18h] [ebp-20h]
  int v22; // [esp+1Ch] [ebp-1Ch]
  int v23; // [esp+20h] [ebp-18h]
  int v24; // [esp+24h] [ebp-14h]
  int v25; // [esp+28h] [ebp-10h]
  int i; // [esp+2Ch] [ebp-Ch]
  int v27; // [esp+30h] [ebp-8h]
  char v28; // [esp+37h] [ebp-1h]

  v4 = &this[6 * a2 + 592];
  *(float *)(*(_DWORD *)v4 + 32) = *(float *)&this[6 * a2 + 596];
  *(_BYTE *)(*(_DWORD *)v4 + 37) = v4[20];
  *(_BYTE *)(*(_DWORD *)v4 + 38) = v4[21];
  v18 = v4;
  *(_BYTE *)(*(_DWORD *)v4 + 39) = v4[22];
  v5 = this[1889];
  v6 = v5 * this[1888];
  v7 = a2 / v6;
  v8 = a2 / v6 * v6;
  v19 = v7;
  v9 = a2 - (a2 - v8) / v5 * v5 - v8;
  v23 = (a2 - v8) / v5;
  v25 = v9;
  v22 = sub_10115FB0();
  v21 = sub_10115FB0();
  result = sub_10115FB0();
  v11 = 0.0;
  v20 = result;
  v28 = 0;
  v24 = 0;
  do
  {
    if ( v28 )
      break;
    for ( i = 0; i < 3; ++i )
    {
      if ( v28 )
        break;
      v27 = 0;
      v12 = v9 + dword_103E8FD8[(v24 + v22) % 3];
      v13 = v23 + dword_103E8FD8[(v21 + i) % 3];
      while ( 1 )
      {
        v14 = v19 + dword_103E8FD8[(v27 + v20) % 3];
        if ( (v12 != v25 || v13 != v23 || v14 != v19) && v12 >= 0 && v13 >= 0 && v14 >= 0 )
        {
          v15 = this[1888];
          if ( v12 < v15 && v13 < this[1889] && v14 < this[1890] )
          {
            v16 = this[6 * v12 + 592 + 6 * this[1889] * (v13 + v14 * v15)] == 0;
            v17 = (int)&this[6 * v12 + 592 + 6 * this[1889] * (v13 + v14 * v15)];
            if ( !v16 && *(_DWORD *)(v17 + 4) == -1 )
              break;
          }
        }
        if ( ++v27 >= 3 )
          goto LABEL_20;
      }
      *((_DWORD *)v18 + 1) = v12 + this[1889] * (v13 + v14 * this[1888]);
      *(_DWORD *)(v17 + 4) = a2;
      *(float *)(v17 + 8) = v11;
      *((float *)v18 + 2) = v11;
      v28 = 1;
      *((float *)v18 + 3) = ((double)sub_10115FB0() * 0.000030518509 + 1.0) * 5.0;
      v11 = 0.0;
LABEL_20:
      v9 = v25;
    }
    result = v24 + 1;
    v24 = result;
  }
  while ( result < 3 );
  return result;
}
