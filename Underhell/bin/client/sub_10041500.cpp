void __thiscall sub_10041500(int this, int a2, float a3, int a4, float a5, float a6, int a7)
{
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // esi
  double v11; // st7
  bool v12; // c0
  bool v13; // c3
  double v14; // st7
  int v15; // eax
  bool v16; // zf
  bool v17; // sf
  bool v18; // of
  int v19; // eax
  double v20; // st7
  double v21; // st5
  double v22; // st4
  double v23; // st6
  double v24; // st6
  double v25; // st7
  double v26; // st5
  double v27; // st4
  double v28; // st7
  double v29; // rtt
  double v30; // st5
  double v31; // st6
  float v32; // [esp+8h] [ebp-1Ch]
  _DWORD *v33; // [esp+1Ch] [ebp-8h]
  int v34; // [esp+20h] [ebp-4h]

  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v8 = *(_DWORD **)(this + 1940);
  v33 = v8;
  if ( v8 )
  {
    if ( *v8 )
    {
      v9 = 0;
      v34 = sub_1007A630(a4);
      if ( v34 > 0 )
      {
        do
        {
          v10 = sub_1011C480(v9);
          v11 = *(float *)v10;
          v12 = a5 < v11;
          v13 = a5 == v11;
          v14 = a5;
          if ( v12 || v13 || v14 >= *(float *)(v10 + 4) )
            goto LABEL_30;
          if ( (*(_DWORD *)(*v33 + 152) & 0x1000) != 0 )
            goto LABEL_19;
          v15 = *(_DWORD *)(this + 1276);
          if ( (v15 & 0x400) != 0 )
          {
            v18 = 0;
            v16 = *(_DWORD *)(dword_10407034 + 48) == 0;
            v17 = *(int *)(dword_10407034 + 48) < 0;
          }
          else if ( (v15 & 0x800) != 0 )
          {
            v18 = __OFSUB__(*(_DWORD *)(dword_10407034 + 48), 1);
            v16 = *(_DWORD *)(dword_10407034 + 48) == 1;
            v17 = *(_DWORD *)(dword_10407034 + 48) - 1 < 0;
          }
          else if ( (v15 & 0x1000) != 0 )
          {
            v18 = __OFSUB__(*(_DWORD *)(dword_10407034 + 48), 2);
            v16 = *(_DWORD *)(dword_10407034 + 48) == 2;
            v17 = *(_DWORD *)(dword_10407034 + 48) - 2 < 0;
          }
          else
          {
            if ( (v15 & 0x2000) == 0 )
              goto LABEL_30;
            v18 = __OFSUB__(*(_DWORD *)(dword_10407034 + 48), 3);
            v16 = *(_DWORD *)(dword_10407034 + 48) == 3;
            v17 = *(_DWORD *)(dword_10407034 + 48) - 3 < 0;
          }
          if ( !(v17 ^ v18 | v16) )
          {
LABEL_19:
            if ( v9 < v34 - 1 )
            {
              v19 = sub_1011C480(v9 + 1);
              if ( v19 )
              {
                v20 = *(float *)(v19 + 4) - a5;
                v21 = *(float *)(v10 + 4) - *(float *)v10;
                if ( v21 <= v20 )
                  v22 = v21;
                else
                  v22 = v20;
                if ( v22 < a6 )
                {
                  v14 = a5;
                }
                else if ( v21 <= v20 )
                {
                  v14 = a5;
                  a6 = v21;
                }
                else
                {
                  v23 = v20;
                  v14 = a5;
                  a6 = v23;
                }
              }
              else
              {
                v14 = a5;
              }
            }
          }
LABEL_30:
          v24 = (*(float *)v10 - v14) / a6;
          v25 = (*(float *)(v10 + 4) - v14) / a6;
          v26 = 1.0;
          if ( v24 < 1.0 && v25 > 0.0 )
          {
            v27 = v25;
            v28 = 0.0;
            if ( v27 <= 1.0 )
              v26 = v27;
            v29 = v26;
            v30 = v24;
            v31 = v29;
            if ( v30 >= 0.0 )
              v28 = v30;
            v32 = v31 - v28;
            sub_10041420((_WORD *)this, a2, a3, *(unsigned __int16 *)(v10 + 8), v32, a7);
          }
          ++v9;
        }
        while ( v9 < v34 );
      }
    }
  }
}
