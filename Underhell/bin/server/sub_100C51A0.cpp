void __thiscall sub_100C51A0(float *this, int a2)
{
  float *v2; // edi
  int v3; // esi
  int v4; // esi
  void (*v5)(void); // eax
  _DWORD *v6; // ebx
  int v7; // eax
  double v8; // st7
  bool v9; // zf
  double v10; // st7
  int v11; // eax
  int v12; // edx
  int i; // edi
  double v14; // st7
  float v15; // [esp+8h] [ebp-48h]
  int v16[2]; // [esp+1Ch] [ebp-34h] BYREF
  float v17; // [esp+24h] [ebp-2Ch]
  float v18; // [esp+28h] [ebp-28h]
  float *v19; // [esp+30h] [ebp-20h]
  int v20; // [esp+34h] [ebp-1Ch]
  int v21; // [esp+38h] [ebp-18h]
  float v22; // [esp+3Ch] [ebp-14h]
  float v23; // [esp+40h] [ebp-10h]
  float v24; // [esp+44h] [ebp-Ch]
  float v25; // [esp+48h] [ebp-8h]
  float *v26; // [esp+4Ch] [ebp-4h]

  v2 = this;
  v26 = this;
  sub_100C1240((int)this, a2);
  v3 = 0;
  v21 = 0;
  if ( *((int *)v2 + 283) > 0 )
  {
    v20 = 0;
    do
    {
      v4 = *((_DWORD *)v2 + 280) + v3;
      if ( (*(_BYTE *)v4 & 1) != 0 )
      {
        v5 = *(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100);
        v22 = *(float *)&dword_10700AC8;
        v5();
        if ( !*((_DWORD *)v2 + 275) && sub_100D7240(v2) )
          sub_100BD750((volatile signed __int32 *)v2);
        v6 = (_DWORD *)*((_DWORD *)v2 + 275);
        if ( !v6 || !*v6 )
          v6 = 0;
        (*(void (__thiscall **)(float))(*(_DWORD *)LODWORD(v22) + 104))(COERCE_FLOAT(LODWORD(v22)));
        if ( v6 )
        {
          if ( (unsigned __int8)sub_10245FE0(v6) )
          {
            v22 = *(float *)(v4 + 8);
            v7 = sub_10245270(v6);
            if ( SLODWORD(v22) < v7 )
            {
              if ( *(_DWORD *)(sub_10245550(LODWORD(v22)) + 24) )
              {
                v8 = sub_100C0F70((int)v2, *(_DWORD *)(v4 + 8));
                v9 = *(_BYTE *)(v4 + 5) == 0;
                v25 = v8 * *(float *)(v4 + 24);
                v22 = *(float *)(v4 + 64);
                v10 = *(float *)(v4 + 12);
                v24 = *(float *)(v4 + 12);
                if ( v9 )
                {
                  v11 = sub_10245550(*(_DWORD *)(v4 + 8));
                  v10 = v24;
                  if ( v24 >= 1.0 - *(float *)(v11 + 108) * v25 || v10 < 0.0 )
                  {
                    v10 = 1.0;
                    *(_BYTE *)(v4 + 4) = 1;
                    v24 = 1.0;
                  }
                }
                v12 = *(_DWORD *)(v4 + 8);
                *(float *)(v4 + 64) = v10;
                v15 = v10;
                for ( i = sub_100BA9F0((int)v6, v12, (int)v16, v22, v15, 0);
                      i;
                      i = sub_100BA9F0((int)v6, *(_DWORD *)(v4 + 8), (int)v16, v22, v24, i) )
                {
                  v19 = v26;
                  if ( v25 > 0.0 )
                  {
                    v23 = v17;
                    if ( v17 > (double)*(float *)(v4 + 12) )
                      v23 = v17 - 1.0;
                    v14 = sub_100BD360(v26);
                    v18 = v14 + (v23 - *(float *)(v4 + 12)) / v25 + v26[31];
                  }
                  (*(void (__thiscall **)(int, int *))(*(_DWORD *)a2 + 788))(a2, v16);
                }
                v2 = v26;
              }
            }
          }
        }
      }
      v3 = v20 + 76;
      ++v21;
      v20 += 76;
    }
    while ( v21 < *((_DWORD *)v2 + 283) );
  }
}
