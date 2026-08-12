int __thiscall sub_101B72A0(int this)
{
  int result; // eax
  double v3; // st7
  __int16 *v4; // edx
  unsigned __int8 *v5; // ecx
  int v6; // ebx
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // ebx
  int v12; // kr0C_4
  int v13; // ebx
  bool v14; // cc
  double v15; // st7
  int v16; // eax
  int v17; // edx
  double v18; // st7
  int v19; // ecx
  int (__thiscall *v20)(int, _DWORD, _DWORD); // edx
  __int16 *v21; // ebx
  int v22; // ebx
  double v23; // st7
  int v24; // eax
  int v25; // eax
  double v26; // st7
  int j; // ebx
  int v28; // ebx
  double v29; // st7
  int v30; // eax
  double v31; // st7
  int v32; // eax
  double v33; // st7
  __int16 *v34; // eax
  int v35; // ecx
  double v36; // st7
  int v37; // ebx
  int v38; // eax
  int (__thiscall *v39)(_DWORD); // edx
  int v40; // ebx
  __int16 *v41; // eax
  int v42; // eax
  int v43; // edx
  int v44; // ecx
  double v45; // st7
  int v46; // eax
  double v47; // st7
  float v48; // [esp+18h] [ebp-64h]
  float v49; // [esp+18h] [ebp-64h]
  float v50; // [esp+18h] [ebp-64h]
  float v51; // [esp+18h] [ebp-64h]
  float v52; // [esp+18h] [ebp-64h]
  float v53; // [esp+18h] [ebp-64h]
  _DWORD v54[4]; // [esp+2Ch] [ebp-50h]
  _DWORD v55[4]; // [esp+3Ch] [ebp-40h]
  int v56; // [esp+4Ch] [ebp-30h]
  int v57; // [esp+50h] [ebp-2Ch]
  float v58; // [esp+54h] [ebp-28h]
  float v59; // [esp+58h] [ebp-24h]
  int v60; // [esp+5Ch] [ebp-20h]
  float v61; // [esp+60h] [ebp-1Ch]
  int v62; // [esp+64h] [ebp-18h]
  __int16 v63[2]; // [esp+68h] [ebp-14h] BYREF
  int v64; // [esp+6Ch] [ebp-10h]
  int i; // [esp+70h] [ebp-Ch]
  int v66; // [esp+74h] [ebp-8h]
  int v67; // [esp+78h] [ebp-4h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)(this - 56) + 36))(this - 56);
  if ( !(_BYTE)result )
    return result;
  result = sub_100422D0();
  if ( !result )
    return result;
  result = *(_DWORD *)(dword_1043CA1C + 48) == 1 || *(_DWORD *)(dword_1043CA1C + 48) == 3
         ? (*(int (__thiscall **)(int))(*(_DWORD *)result + 788))(result)
         : (*(int (__thiscall **)(int))(*(_DWORD *)(this - 56) + 108))(this - 56);
  v61 = *(float *)&result;
  if ( !result )
    return result;
  v3 = *(float *)(this + 248) - *(float *)(this + 232);
  v66 = (int)(*(float *)(this + 240) - *(float *)(this + 232) + *(float *)(this + 232));
  v64 = (int)(v3 + *(float *)(this + 232));
  *(_DWORD *)v63 = 0;
  v4 = v63;
  v5 = (unsigned __int8 *)(this + 332);
  v60 = 4;
  do
  {
    v6 = v5[5] - *v5;
    i = *v5++;
    v4 = (__int16 *)((char *)v4 + 1);
    v7 = v60-- == 1;
    v62 = (int)((double)v6 + (double)i);
    *((_BYTE *)v4 - 1) = v62;
  }
  while ( !v7 );
  v8 = *(_DWORD *)(dword_1043CA1C + 48);
  if ( !v8 )
  {
    v37 = (int)((*(float *)(this + 232) + *(float *)(this + 272)) * 5.0 + (double)v66);
    v38 = sub_102374C0(this);
    v39 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v61) + 1160);
    v40 = (v38 - v37) / 2;
    v67 = v40;
    v62 = 0;
    v56 = v39(LODWORD(v61));
    i = 0;
    while ( 1 )
    {
      if ( i == v56 )
      {
        HIBYTE(v67) = 1;
        v58 = COERCE_FLOAT(sub_101B6F20(i));
        *(float *)&v60 = 0.0;
        if ( v58 >= 0.0 )
        {
          while ( 1 )
          {
            v41 = (__int16 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)(this - 56) + 84))(this - 56, i, v60);
            if ( v41 )
              break;
            if ( *(_DWORD *)(dword_1044F004 + 48) )
            {
              if ( HIBYTE(v67) )
                v42 = i + 1;
              else
                v42 = -1;
              sub_101B6270(this - 56, v40, v62, v66, v64, *(_DWORD *)(this + 327), *(float *)(this + 304), v42);
LABEL_73:
              v62 = (int)((double)v64 + *(float *)(this + 272) + (double)v62);
              HIBYTE(v67) = 0;
            }
            if ( ++v60 > SLODWORD(v58) )
              goto LABEL_75;
          }
          LOBYTE(v57) = v41 == (__int16 *)LODWORD(v61);
          if ( HIBYTE(v67) )
            v43 = i + 1;
          else
            v43 = -1;
          if ( v41 == (__int16 *)LODWORD(v61) )
          {
            LOWORD(v44) = v63[0];
            v45 = *(float *)(this + 312);
          }
          else
          {
            v44 = *(_DWORD *)(this + 332);
            v45 = *(float *)(this + 304) * 0.0039215689 * *(float *)(this + 312);
          }
          v52 = v45;
          sub_101B6540((_DWORD *)(this - 56), v41, v57, v40, v62, v66, v64, v44, v52, v43);
          goto LABEL_73;
        }
LABEL_75:
        v67 = v66 + v40;
      }
      else
      {
        v46 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this - 56) + 92))(this - 56, i);
        v47 = *(float *)(this + 232);
        if ( v46 )
        {
          sub_101B6270(this - 56, v40, 0, (int)v47, (int)v47, *(_DWORD *)(this + 332), *(float *)(this + 304), i + 1);
        }
        else
        {
          v53 = *(float *)(this + 304) * 0.0039215689;
          sub_102385E0(v40, 0, (int)v47, (int)v47, *(_DWORD *)(this + 327), v53, 0);
        }
        v67 = (int)((double)v67 + *(float *)(this + 232));
      }
      v62 = 0;
      v40 = (int)((double)v67 + *(float *)(this + 272));
      v67 = v40;
      result = i + 1;
      i = result;
      if ( result >= 6 )
        return result;
    }
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    result = v9 - 1;
    if ( !result && *(_DWORD *)(this + 388) != -1 )
    {
      result = *(_DWORD *)(this + 380);
      if ( result > 1 )
      {
        if ( result >= 5 )
        {
          v18 = (double)(sub_102374C0(this) / 2) + *(float *)(this + 412);
          v60 = v66 / 2;
          v19 = *(_DWORD *)(this + 368);
          v20 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this - 56) + 84);
          v67 = (int)(v18 - (double)(v66 / 2));
          i = *(_DWORD *)(this + 388);
          v21 = (__int16 *)v20(this - 56, *(_DWORD *)(v19 + 8 * i), *(_DWORD *)(v19 + 8 * i + 4));
          if ( v21 )
          {
            *(float *)&v60 = (float)v66;
            do
            {
              if ( i == *(_DWORD *)(this + 388) && 0.0 == *(float *)(this + 412) )
              {
                sub_101B6540((_DWORD *)(this - 56), v21, 1, v67, 0, v66, v64, v63[0], *(float *)(this + 312), -1);
              }
              else
              {
                v49 = *(float *)(this + 304) * 0.0039215689 * *(float *)(this + 312);
                sub_101B6540(
                  (_DWORD *)(this - 56),
                  v21,
                  0,
                  v67,
                  0,
                  v66,
                  (int)((double)v64 * 0.66666669),
                  *(_DWORD *)(this + 332),
                  v49,
                  -1);
              }
              v22 = (int)(*(float *)&v60 + *(float *)(this + 272) + (double)v67);
              v67 = v22;
              if ( v22 >= sub_102374C0(this) )
                break;
              if ( ++i >= *(_DWORD *)(this + 380) )
                i = 0;
              v21 = (__int16 *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this - 56) + 84))(
                                 this - 56,
                                 *(_DWORD *)(*(_DWORD *)(this + 368) + 8 * i),
                                 *(_DWORD *)(*(_DWORD *)(this + 368) + 8 * i + 4));
            }
            while ( v21 );
          }
          v23 = (double)(sub_102374C0(this) / 2) + *(float *)(this + 412);
          v60 = 3 * v66 / 2;
          v67 = (int)(v23 - ((double)v60 + *(float *)(this + 272)));
          v24 = *(_DWORD *)(this + 388) - 1;
          for ( i = v24; ; v24 = i )
          {
            if ( v24 < 0 )
              i = *(_DWORD *)(this + 380) - 1;
            result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this - 56) + 84))(
                       this - 56,
                       *(_DWORD *)(*(_DWORD *)(this + 368) + 8 * i),
                       *(_DWORD *)(*(_DWORD *)(this + 368) + 8 * i + 4));
            if ( !result )
              break;
            if ( i == *(_DWORD *)(this + 388) && 0.0 == *(float *)(this + 412) )
            {
              sub_101B6540(
                (_DWORD *)(this - 56),
                (__int16 *)result,
                1,
                v67,
                0,
                v66,
                v64,
                v63[0],
                *(float *)(this + 312),
                -1);
            }
            else
            {
              v50 = *(float *)(this + 304) * 0.0039215689 * *(float *)(this + 312);
              sub_101B6540(
                (_DWORD *)(this - 56),
                (__int16 *)result,
                0,
                v67,
                0,
                v66,
                (int)((double)v64 * 0.66666669),
                *(_DWORD *)(this + 332),
                v50,
                -1);
            }
            v67 = (int)((double)v67 - ((double)v66 + *(float *)(this + 272)));
            result = v66 + v67;
            if ( v66 + v67 <= 0 )
              break;
            --i;
          }
        }
        else
        {
          v10 = *(float *)(this + 272) + *(float *)(this + 240);
          v60 = result - 1;
          v11 = (int)(v10 * (double)(result - 1) + *(float *)(this + 240));
          v12 = sub_102374C0(this) - v11;
          result = v12 - (v12 >> 31);
          v13 = v12 / 2;
          v14 = *(_DWORD *)(this + 380) <= 0;
          v67 = v12 / 2;
          v62 = 0;
          if ( !v14 )
          {
            do
            {
              result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this - 56) + 84))(
                         this - 56,
                         *(_DWORD *)(*(_DWORD *)(this + 368) + 8 * v62),
                         *(_DWORD *)(*(_DWORD *)(this + 368) + 8 * v62 + 4));
              v60 = result;
              if ( !result )
                break;
              v48 = sub_101B6070((float *)(this - 56), v62 == *(_DWORD *)(this + 388));
              v15 = *(float *)(this + 248);
              if ( v17 == v16 )
                sub_101B6540(
                  (_DWORD *)(this - 56),
                  (__int16 *)v60,
                  1,
                  v13,
                  0,
                  (int)*(float *)(this + 240),
                  (int)v15,
                  v63[0],
                  v48,
                  -1);
              else
                sub_101B6540(
                  (_DWORD *)(this - 56),
                  (__int16 *)v60,
                  0,
                  v13,
                  0,
                  (int)*(float *)(this + 240),
                  (int)(v15 * 0.66666669),
                  *(_DWORD *)(this + 332),
                  v48,
                  -1);
              v13 = (int)(*(float *)(this + 272) + *(float *)(this + 240) + (double)v67);
              v67 = v13;
              result = v62 + 1;
              v62 = result;
            }
            while ( result < *(_DWORD *)(this + 380) );
          }
        }
      }
    }
  }
  else
  {
    v60 = sub_102374C0(this) / 2;
    v25 = sub_102374F0(this);
    *(float *)&v67 = (float)v60;
    v55[0] = 0;
    v55[1] = 1;
    v61 = (float)(v25 / 2 - 15);
    v55[2] = 0;
    v55[3] = -1;
    v54[0] = -1;
    v54[1] = 0;
    v54[2] = 1;
    v54[3] = 0;
    v64 = 0;
    do
    {
      v26 = 0.5 * *(float *)(this + 264);
      i = (int)(*(float *)&v67 - *(float *)(this + 256) * 0.5);
      v62 = (int)(v61 - v26);
      v66 = -1;
      for ( j = 0; j < 20; ++j )
      {
        if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)(this - 56) + 84))(this - 56, v64, j) )
          v66 = j;
      }
      v28 = 0;
      if ( v66 >= 0 )
      {
        v59 = (float)(int)v55[v64];
        v58 = (float)(int)v54[v64];
        do
        {
          v29 = *(float *)(this + 264) + 5.0;
          i = (int)((*(float *)(this + 256) + 5.0) * v59 + (double)i);
          v30 = (int)(v29 * v58 + (double)v62);
          v31 = *(float *)(this + 256);
          v62 = v30;
          v32 = (int)v31;
          v33 = *(float *)(this + 264);
          v56 = v32;
          v57 = (int)v33;
          v34 = (__int16 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)(this - 56) + 84))(this - 56, v64, v28);
          LOBYTE(v60) = 0;
          if ( v64 == *(_DWORD *)(this + 400) && v28 == *(_DWORD *)(this + 396) )
          {
            LOWORD(v35) = v63[0];
            v36 = *(float *)(this + 312);
            LOBYTE(v60) = 1;
          }
          else
          {
            v35 = *(_DWORD *)(this + 332);
            v36 = *(float *)(this + 304) * 0.0039215689 * *(float *)(this + 312);
          }
          v51 = v36;
          sub_101B6540((_DWORD *)(this - 56), v34, v60, i, v62, v56, v57, v35, v51, -1);
          ++v28;
        }
        while ( v28 <= v66 );
      }
      result = v64 + 1;
      v64 = result;
    }
    while ( result < 6 );
  }
  return result;
}
