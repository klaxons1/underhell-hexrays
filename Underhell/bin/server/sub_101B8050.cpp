void __thiscall sub_101B8050(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // ecx
  _DWORD *i; // eax
  int v6; // edi
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st6
  double v11; // st6
  double v12; // st7
  double v13; // st5
  double v14; // st6
  double v15; // st4
  double v16; // st3
  double v17; // st7
  double v18; // st7
  double v19; // rt1
  double v20; // st5
  double v21; // rt2
  float v22; // [esp+0h] [ebp-24h]
  float v23; // [esp+4h] [ebp-20h]
  float v24; // [esp+8h] [ebp-1Ch]
  float v25; // [esp+Ch] [ebp-18h]
  float v26; // [esp+10h] [ebp-14h]
  float v27; // [esp+10h] [ebp-14h]
  float v28; // [esp+2Ch] [ebp+8h]

  if ( a2 )
  {
    v3 = this[70] - 1;
    if ( v3 >= 0 )
    {
      v4 = this[67];
      for ( i = (_DWORD *)(v4 + 36 * v3 + 24); *i != a2; i -= 9 )
      {
        if ( --v3 < 0 )
          return;
      }
      v6 = v4 + 36 * v3;
      if ( !*(_WORD *)(v6 + 34) )
      {
        v7 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v6 + 24) + 116))(*(_DWORD *)(v6 + 24));
        if ( v7 >= 500.0
          || ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 24) + 76))(*(_DWORD *)(v6 + 24)) & 1) != 0 )
        {
          v18 = (float)1.0;
          goto LABEL_24;
        }
        if ( *(float *)(v6 + 28) <= 0.0 )
        {
          v9 = 1.0;
          v8 = 1.0;
        }
        else
        {
          v8 = *(float *)(v6 + 28);
          v9 = 1.0;
        }
        v28 = v7;
        v10 = v28 / v8;
        if ( v10 > 10.0 )
        {
          v11 = 10.0;
          v12 = v9;
          v13 = 10.0;
LABEL_22:
          v19 = v13;
          v20 = v12;
          v17 = v19;
          v26 = v20;
          v25 = 0.5;
          v21 = v20;
          v9 = v11;
          v14 = v21;
          goto LABEL_20;
        }
        if ( v10 >= 0.1 )
        {
          v16 = v10;
          v14 = 0.1;
          if ( v16 >= v9 )
          {
            v12 = v9;
            v13 = v16;
            v11 = 10.0;
            goto LABEL_22;
          }
          v15 = v16;
        }
        else
        {
          v14 = 0.1;
          v15 = 0.1;
        }
        v26 = 0.5;
        v17 = v15;
        v25 = 0.0;
LABEL_20:
        v24 = v9;
        v23 = v14;
        v22 = v17;
        v18 = sub_1001F0E0(v22, v23, v24, v25, v26);
LABEL_24:
        v27 = v18;
        sub_101B6DB0(this, v3, v27);
      }
    }
  }
}
