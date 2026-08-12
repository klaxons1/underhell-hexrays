void __thiscall sub_10141810(int this, int a2, float a3)
{
  double v5; // st7
  unsigned int v6; // eax
  int v7; // edi
  double v8; // st7
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // st4
  double v13; // st3
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st3
  double v18; // rt0
  double v19; // st3
  double v20; // st6
  double v21; // rt1
  double v22; // st4
  float v23; // [esp+8h] [ebp-1Ch]
  float v24; // [esp+Ch] [ebp-18h]
  float v25; // [esp+10h] [ebp-14h]
  float v26; // [esp+20h] [ebp-4h]
  int v27; // [esp+2Ch] [ebp+8h]

  if ( sub_10264FF0(this + 1244) > *(float *)(this + 1248) )
  {
    if ( a2 )
    {
      *(float *)&v27 = 100.0;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      v23 = *(float *)(a2 + 580) - *(float *)(this + 580);
      v24 = *(float *)(a2 + 584) - *(float *)(this + 584);
      v5 = *(float *)(a2 + 588);
    }
    else
    {
      *(float *)&v27 = 300.0;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v6 = *(_DWORD *)(this + 1120);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      v23 = *(float *)(v7 + 580) - *(float *)(this + 580);
      v24 = *(float *)(v7 + 584) - *(float *)(this + 584);
      v5 = *(float *)(v7 + 588);
    }
    v25 = v5 - *(float *)(this + 588);
    v8 = off_10689714();
    v26 = v8;
    if ( *(float *)&v27 >= v8 )
    {
      if ( a2 && v8 < 25.0 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        {
          sub_100DAFD0(this);
          v8 = v26;
        }
        if ( (*(_DWORD *)(a2 + 252) & 0x1000) != 0 )
        {
          sub_100DAFD0(a2);
          v8 = v26;
        }
        v9 = v23;
        v10 = v25;
        if ( (*(float *)(a2 + 484) - *(float *)(this + 484)) * v25
           + (*(float *)(a2 + 476) - *(float *)(this + 476)) * v23
           + (*(float *)(a2 + 480) - *(float *)(this + 480)) * v24 < 0.0 )
        {
          v11 = (1.0 - v8 * 0.039999999) * 5.0;
          if ( v10 * *(float *)(this + 1168) + v9 * *(float *)(this + 1160) + v24 * *(float *)(this + 1164) > 0.0 )
          {
            *(float *)(this + 1144) = *(float *)(this + 1144) - v11;
            return;
          }
          goto LABEL_37;
        }
        v12 = v24;
      }
      else
      {
        v10 = v25;
        v12 = v24;
        v9 = v23;
      }
      v13 = v10;
      v14 = -*(float *)(this + 1152) * v12 + -*(float *)(this + 1148) * v9 + -*(float *)(this + 1156) * v10 + 1.0;
      v15 = v9 * -*(float *)(this + 1152) + v12 * *(float *)(this + 1148) + v13 * 0.0;
      v16 = -1.0;
      if ( v15 <= 1.0 )
        v17 = -1.0;
      else
        v17 = 1.0;
      v18 = v17;
      v19 = v14;
      v20 = v18;
      if ( v19 <= 1.0 )
      {
        v22 = v19;
      }
      else
      {
        if ( *(_BYTE *)(this + 1216) )
          v16 = 1.0;
        v21 = v16;
        v22 = v19;
        v20 = v21;
      }
      v11 = v22 * (v20 * ((1.0 - v8 / *(float *)&v27) * (a3 * 0.69999999)));
LABEL_37:
      *(float *)(this + 1144) = v11 + *(float *)(this + 1144);
    }
  }
}
