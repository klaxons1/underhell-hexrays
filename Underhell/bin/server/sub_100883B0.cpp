__int16 *__cdecl sub_100883B0(float *a1, float *a2, float a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st7
  long double v18; // st7
  double v19; // st7
  double v20; // st5
  double v21; // rt2
  double v22; // st5
  double v23; // rtt
  double v24; // st5
  double v25; // st7
  double v26; // st7
  double v27; // st7
  float v28; // [esp+0h] [ebp-C4h]
  float v29; // [esp+0h] [ebp-C4h]
  _BYTE v30[44]; // [esp+10h] [ebp-B4h] BYREF
  float v31; // [esp+3Ch] [ebp-88h]
  __int16 *v32; // [esp+64h] [ebp-60h]
  int v33; // [esp+68h] [ebp-5Ch]
  float v34; // [esp+6Ch] [ebp-58h]
  float v35; // [esp+70h] [ebp-54h]
  float v36; // [esp+74h] [ebp-50h]
  float v37; // [esp+78h] [ebp-4Ch] BYREF
  float v38; // [esp+7Ch] [ebp-48h]
  float v39; // [esp+80h] [ebp-44h]
  float v40; // [esp+84h] [ebp-40h]
  float v41; // [esp+88h] [ebp-3Ch]
  float v42; // [esp+8Ch] [ebp-38h]
  float v43; // [esp+90h] [ebp-34h] BYREF
  float v44; // [esp+94h] [ebp-30h]
  float v45; // [esp+98h] [ebp-2Ch]
  float v46; // [esp+9Ch] [ebp-28h] BYREF
  float v47; // [esp+A0h] [ebp-24h]
  float v48; // [esp+A4h] [ebp-20h]
  __int16 *v49; // [esp+A8h] [ebp-1Ch]
  float v50; // [esp+ACh] [ebp-18h]
  float v51; // [esp+B0h] [ebp-14h] BYREF
  float v52; // [esp+B4h] [ebp-10h]
  float v53; // [esp+B8h] [ebp-Ch]
  float v54; // [esp+BCh] [ebp-8h]
  float v55; // [esp+C0h] [ebp-4h]
  int savedregs; // [esp+C4h] [ebp+0h] BYREF
  int i; // [esp+D4h] [ebp+10h]

  v3 = dword_106935D8;
  v50 = a3;
  v4 = *(_DWORD *)(dword_106935D8 + 4);
  v5 = 0;
  v49 = 0;
  v33 = dword_106935D8;
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      if ( v5 < 0 || v5 >= v4 )
      {
        ++dword_10691DE0;
        v6 = 0;
      }
      else
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * v5);
      }
      if ( *(_DWORD *)(v6 + 60) != 1 )
      {
        if ( byte_1069362E )
        {
          if ( v5 < 0 || v5 >= *(_DWORD *)(v3 + 4) )
          {
            ++dword_10691DE0;
            v7 = 0;
          }
          else
          {
            v7 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * v5);
          }
          if ( *(_DWORD *)(v7 + 60) == 3 )
            goto LABEL_20;
        }
        else
        {
          if ( v5 < 0 || v5 >= *(_DWORD *)(v3 + 4) )
          {
            ++dword_10691DE0;
            v9 = 0;
          }
          else
          {
            v9 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * v5);
          }
          if ( *(_DWORD *)(v9 + 60) == 2 )
          {
LABEL_20:
            v10 = 0;
            for ( i = 0; ; v10 = i )
            {
              if ( v5 < 0 || v5 >= *(_DWORD *)(v3 + 4) )
              {
                ++dword_10691DE0;
                v11 = 0;
              }
              else
              {
                v11 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * v5);
              }
              if ( v10 >= *(_DWORD *)(v11 + 84) )
                break;
              if ( v5 < 0 || v5 >= *(_DWORD *)(v3 + 4) )
              {
                ++dword_10691DE0;
                v12 = 0;
              }
              else
              {
                v12 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * v5);
              }
              v32 = *(__int16 **)(*(_DWORD *)(v12 + 72) + 4 * v10);
              v13 = sub_10074630(v32, v5);
              if ( v5 < 0 || v5 >= *(_DWORD *)(v3 + 4) )
                ++dword_10691DE0;
              sub_1008D160(&v46, dword_10693634);
              if ( v13 < 0 || v13 >= *(_DWORD *)(v3 + 4) )
                ++dword_10691DE0;
              sub_1008D160(&v43, dword_10693634);
              sub_10086040(&v37, &v46, &v43, a1);
              v14 = v37 - *a1;
              v15 = v38 - a1[1];
              v16 = v39 - a1[2];
              v55 = a2[1] * v15 + *a2 * v14 + a2[2] * v16;
              v54 = v16 * v16 + v15 * v15 + v14 * v14;
              v17 = off_10689708(v54);
              v18 = acos(v55 / v17);
              v55 = v18;
              if ( v18 <= 1.57 )
              {
                v19 = off_10689708(v54);
                v54 = v19 * tan(v55);
                v40 = v43 - v46;
                v41 = v44 - v47;
                v42 = v45 - v48;
                v55 = off_10689714();
                v20 = v40 * v54 + v37;
                v51 = v20;
                v21 = v20;
                v22 = v41 * v54 + v38;
                v52 = v22;
                v23 = v22;
                v24 = v54 * v42 + v39;
                v53 = v24;
                v28 = (v24 - v48) * (v24 - v48) + (v21 - v46) * (v21 - v46) + (v23 - v47) * (v23 - v47);
                v25 = off_10689708(v28);
                if ( v25 <= v55 )
                {
                  v29 = (v51 - v43) * (v51 - v43) + (v52 - v44) * (v52 - v44) + (v53 - v45) * (v53 - v45);
                  v26 = off_10689708(v29);
                  if ( v26 <= v55 )
                  {
                    v34 = v51 - *a1;
                    v35 = v52 - a1[1];
                    v36 = v53 - a1[2];
                    off_10689714();
                    v27 = a2[1] * v35 + *a2 * v34 + a2[2] * v36;
                    v54 = v27;
                    if ( v27 > v50 )
                    {
                      sub_1002A5F0((int)&savedregs, v5, a1, &v51, 16449, 0, 0, (int)v30);
                      if ( 1.0 == v31 )
                      {
                        v50 = v54;
                        v49 = v32;
                      }
                    }
                  }
                }
              }
              ++i;
              v3 = v33;
            }
          }
        }
      }
      v4 = *(_DWORD *)(v3 + 4);
      if ( ++v5 >= v4 )
        return v49;
    }
  }
  return 0;
}
