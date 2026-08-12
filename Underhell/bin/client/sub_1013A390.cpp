int __thiscall sub_1013A390(int this)
{
  double v1; // st7
  int v3; // ebx
  bool v4; // zf
  int v5; // ebx
  int v6; // esi
  float *v7; // ecx
  float *v8; // ebx
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st6
  long double v13; // st5
  int v14; // eax
  long double v15; // st6
  long double v16; // st4
  long double v17; // st5
  int v18; // ecx
  float v20; // [esp+10h] [ebp-3Ch]
  float v21; // [esp+10h] [ebp-3Ch]
  float v22; // [esp+14h] [ebp-38h]
  _DWORD v23[5]; // [esp+24h] [ebp-28h] BYREF
  char v24; // [esp+38h] [ebp-14h]
  int i; // [esp+3Ch] [ebp-10h]
  int v26; // [esp+40h] [ebp-Ch]
  float v27; // [esp+44h] [ebp-8h]
  bool v28; // [esp+4Bh] [ebp-1h]

  v1 = 0.0;
  *(float *)(this + 44) = 0.0;
  *(float *)(this + 48) = 0.0;
  *(float *)(this + 52) = 0.0;
  v3 = *(_DWORD *)(this + 36);
  *(float *)(this + 56) = 0.0;
  v4 = *(_DWORD *)(dword_1043A134 + 48) == 0;
  v27 = 0.0;
  v28 = !v4;
  v5 = v3 - 1;
  for ( i = v5; v5 >= 0; i = v5 )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v5);
    if ( v1 != *(float *)v6 )
    {
      v7 = (float *)off_103DC81C;
      if ( *(float *)v6 < (double)*((float *)off_103DC81C + 3)
        || v1 >= *(float *)(v6 + 4)
        || v1 >= *(float *)(v6 + 8)
        || v1 >= *(float *)(v6 + 12) )
      {
        sub_10034930(v6);
        v1 = 0.0;
        v18 = *(_DWORD *)(this + 36);
        if ( v18 > 0 )
        {
          *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v5) = *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v18 - 4);
          --*(_DWORD *)(this + 36);
        }
      }
      else
      {
        if ( v28 )
        {
          *(float *)&v23[1] = 2.0;
          v23[0] = v5 + 2;
          *(float *)&v23[2] = 1.0;
          v24 = 1;
          *(float *)&v23[3] = 0.80000001;
          *(float *)&v23[4] = 0.1;
          (*(void (**)(int, _DWORD *, const char *, ...))(*(_DWORD *)dword_1041315C + 120))(
            dword_1041315C,
            v23,
            "%02d: dur(%8.2f) amp(%8.2f) freq(%8.2f)",
            v5 + 1,
            *(float *)(v6 + 4),
            *(float *)(v6 + 8),
            *(float *)(v6 + 12));
          v1 = 0.0;
          v7 = (float *)off_103DC81C;
        }
        if ( *(float *)(v6 + 16) < (double)v7[3] )
        {
          v8 = (float *)(v6 + 20);
          v26 = 3;
          *(float *)(v6 + 16) = 1.0 / *(float *)(v6 + 12) + v7[3];
          do
          {
            v20 = -*(float *)(v6 + 8);
            *v8++ = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      LODWORD(v20),
                      *(float *)(v6 + 8));
            --v26;
          }
          while ( v26 );
          v22 = *(float *)(v6 + 8) * 0.25;
          v21 = *(float *)(v6 + 8) * -0.25;
          v9 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 LODWORD(v21),
                 LODWORD(v22));
          v5 = i;
          *(float *)(v6 + 32) = v9;
          v7 = (float *)off_103DC81C;
          v1 = 0.0;
        }
        v10 = (*(float *)v6 - v7[3]) / *(float *)(v6 + 4);
        if ( v1 == v10 )
          v11 = v1;
        else
          v11 = *(float *)(v6 + 12) / v10;
        v12 = v10 * v10;
        v13 = v11 * v7[3];
        if ( v13 > 100000000.0 )
          v13 = 100000000.0;
        v14 = *(_DWORD *)(v6 + 36);
        v15 = v12 * sin(v13);
        if ( v14 != 5 )
          v27 = *(float *)(v6 + 32) * v15 + v27;
        if ( v14 != 4 )
        {
          v16 = *(float *)(v6 + 24) * v15;
          v17 = *(float *)(v6 + 28) * v15;
          *(float *)(this + 44) = *(float *)(v6 + 20) * v15 + *(float *)(this + 44);
          *(float *)(this + 48) = v16 + *(float *)(this + 48);
          *(float *)(this + 52) = v17 + *(float *)(this + 52);
          *(float *)(this + 56) = v15 * *(float *)(v6 + 32) + *(float *)(this + 56);
          v7 = (float *)off_103DC81C;
        }
        *(float *)(v6 + 8) = *(float *)(v6 + 8)
                           - v7[4] / (*(float *)(v6 + 12) * *(float *)(v6 + 4)) * *(float *)(v6 + 8);
      }
    }
    --v5;
  }
  return sub_10064E50(v27);
}
