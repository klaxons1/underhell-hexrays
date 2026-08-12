int __thiscall sub_10030370(int this, int a2, float *a3)
{
  float *v4; // edi
  double v5; // st7
  int result; // eax
  float v7; // ecx
  double v8; // st6
  int v9; // esi
  int v10; // eax
  int v11; // eax
  double v12; // st6
  double v13; // st5
  double v14; // st7
  double v15; // st7
  float v16; // [esp+8h] [ebp-1Ch] BYREF
  float v17; // [esp+Ch] [ebp-18h]
  float v18; // [esp+10h] [ebp-14h]
  float v19; // [esp+14h] [ebp-10h] BYREF
  float v20; // [esp+18h] [ebp-Ch]
  float v21; // [esp+1Ch] [ebp-8h]
  float v22; // [esp+20h] [ebp-4h]

  v22 = sub_100737B0(*(_DWORD *)(this + 1676));
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = (float *)(this + 580);
  v5 = sub_100737D0(*(_DWORD *)(this + 1676));
  result = dword_10690E04;
  v7 = 0.0;
  v21 = v5 * 0.5 + 0.1;
  v8 = v22;
  v22 = 0.0;
  v20 = (5.0 * v8 + 0.1) * (5.0 * v8 + 0.1);
  v18 = (v8 + 0.1) * (v8 + 0.1);
  v16 = flt_105FE1A8;
  v17 = flt_105FE1AC;
  if ( dword_10690E04 > 0 )
  {
    do
    {
      v9 = *(_DWORD *)((result != 0 ? dword_10690DF8 : 0) + 4 * LODWORD(v7));
      if ( v9 != this && (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 1080))(v9, this) == 3 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 2160))(v9);
        v10 = sub_1007DB30(67);
        if ( v10 == -1
          || (v11 = v10 - 1000000000, v11 == -1)
          || ((1 << (v11 & 0x1F)) & *(_DWORD *)(v9 + 4 * (v11 >> 5) + 2192)) == 0 )
        {
          if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
            sub_100DAE60(v9);
          if ( fabs(*(float *)(v9 + 588) - *(float *)(this + 588)) < v21 )
          {
            v12 = *(float *)(v9 + 584) - *(float *)(this + 584);
            v13 = *(float *)(v9 + 580) - *v4;
            if ( v13 * v13 + v12 * v12 < v20 )
            {
              if ( v16 == flt_105FE1A8 && v17 == flt_105FE1AC )
              {
                v14 = (*(float *)(this + 584) - a3[1]) * 2000.0;
                v16 = (*v4 - *a3) * 2000.0 + *v4;
                v17 = v14 + *(float *)(this + 584);
              }
              v15 = sub_10424860(v9 + 580, this + 580, &v16, &v19);
              if ( v19 > 0.0 && v15 < v18 )
                sub_10023CB0((char *)v9, 67);
            }
          }
        }
      }
      result = dword_10690E04;
      LODWORD(v7) = LODWORD(v22) + 1;
      v22 = v7;
    }
    while ( SLODWORD(v7) < dword_10690E04 );
  }
  return result;
}
