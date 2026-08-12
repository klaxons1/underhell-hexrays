float *__usercall sub_1002D0E0@<eax>(int *a1@<ecx>, float *a2@<ebx>)
{
  int i; // ebx
  int *v4; // ecx
  float *v5; // edi
  int v6; // eax
  char v7; // al
  float *v8; // ebx
  float *v9; // eax
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  int v15; // eax
  int v16; // ebx
  float *v17; // ebx
  float *v18; // eax
  double v19; // st4
  double v20; // st6
  double v21; // st4
  double v22; // st5
  double v23; // st6
  float *v24; // ebx
  float *v25; // eax
  double v26; // st4
  double v27; // st6
  double v28; // st4
  double v29; // st5
  double v30; // st6
  int v31; // edx
  double (__thiscall *v32)(int *); // eax
  double v33; // st7
  bool v34; // zf
  double v35; // st7
  int v36; // eax
  float *v37; // ebx
  double v38; // st7
  char v39; // al
  double v40; // st7
  bool v41; // cl
  bool v42; // al
  int v43; // edx
  int (__thiscall *v44)(int *, float *); // eax
  float *v45; // edi
  char v48[4]; // [esp+8h] [ebp-28h] BYREF
  int v49; // [esp+Ch] [ebp-24h]
  int v50; // [esp+10h] [ebp-20h]
  int v51; // [esp+14h] [ebp-1Ch]
  int v52; // [esp+18h] [ebp-18h]
  int v53; // [esp+1Ch] [ebp-14h]
  int v54; // [esp+20h] [ebp-10h]
  int v55; // [esp+24h] [ebp-Ch]
  float *v56; // [esp+28h] [ebp-8h]
  char v57; // [esp+2Dh] [ebp-3h]
  bool v58; // [esp+2Eh] [ebp-2h]
  char v59; // [esp+2Fh] [ebp-1h]

  v55 = 2;
  v54 = 2;
  v34 = *(_DWORD *)(dword_10690574 + 48) == 0;
  v56 = 0;
  v51 = 0x10000000;
  v50 = -1000;
  v59 = 1;
  if ( !v34 )
    sub_10029660(a1, (int)"BestEnemy() {\n");
  (*(void (__thiscall **)(int *))(*a1 + 1868))(a1);
  for ( i = sub_10077AB0(v48); i; i = sub_10077340(v48) )
  {
    if ( *(_DWORD *)i != -1 )
    {
      v4 = &off_1061BE18[4 * (*(_DWORD *)i & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)i & 0xFFF) + 2] == *(_DWORD *)i >> 12 )
      {
        v5 = (float *)*v4;
        if ( *v4 )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 264))(*v4) )
          {
            if ( *(_DWORD *)(dword_10690574 + 48) )
            {
              sub_100D6390(v5);
              sub_10029660(a1, (int)"    %s rejected: dead\n");
            }
            goto LABEL_118;
          }
          if ( ((_DWORD)v5[64] & 0x8000) != 0 )
          {
            if ( *(_DWORD *)(dword_10690574 + 48) )
            {
              sub_100D6390(v5);
              sub_10029660(a1, (int)"    %s rejected: no target\n");
            }
          }
          else if ( *((_BYTE *)a1 + 2756) && *(float *)(dword_106B31C8 + 12) - 0.40000001 > *(float *)(i + 28) )
          {
            if ( *(_DWORD *)(dword_10690574 + 48) )
            {
              sub_100D6390(v5);
              sub_10029660(a1, (int)"    %s rejected: not seen and set to ignore unseen enemies\n");
            }
          }
          else
          {
            v6 = (*(int (__thiscall **)(int *, float *))(*a1 + 1080))(a1, v5);
            if ( v6 == 1 || v6 == 2 )
            {
              if ( *((float *)a1 + 612) <= 0.0 || *((float *)a1 + 612) <= (double)*(float *)(i + 28) )
              {
                if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(i + 40) )
                {
                  if ( *(_BYTE *)(i + 53) )
                  {
                    if ( *(_DWORD *)(dword_10690574 + 48) )
                    {
                      sub_100D6390(v5);
                      sub_10029660(a1, (int)"    %s rejected: eluded\n");
                    }
                  }
                  else if ( v6 == 2 && !*(_BYTE *)(i + 54) && -3.402823466385289e38 == *(float *)(i + 32) )
                  {
                    if ( *(_DWORD *)(dword_10690574 + 48) )
                    {
                      sub_100D6390(v5);
                      sub_10029660(a1, (int)"    %s rejected: feared, but never seen\n");
                    }
                  }
                  else if ( (*(unsigned __int8 (__thiscall **)(int *, float *))(*a1 + 1484))(a1, v5) )
                  {
                    v7 = (*(int (__thiscall **)(int *, float *))(*a1 + 1768))(a1, v5);
                    v57 = v7;
                    if ( v59 )
                    {
                      if ( !v7 )
                      {
                        if ( *(_DWORD *)(dword_10690574 + 48) )
                        {
                          sub_100D6390(v5);
                          sub_10029660(a1, (int)"    %s accepted (1)\n");
                        }
                        if ( v56 && *(_DWORD *)(dword_10690574 + 48) )
                        {
                          sub_100D6390(v56);
                          sub_10029660(a1, (int)"    (%s displaced)\n");
                        }
                        v50 = (*(int (__thiscall **)(int *, float *))(*a1 + 1084))(a1, v5);
                        v8 = (float *)sub_10019640(a1);
                        v9 = (float *)sub_10019640(v5);
                        v10 = v9[1] - v8[1];
                        v11 = v10 * v10;
                        v12 = *v9 - *v8;
                        v13 = v11;
                        v14 = v9[2] - v8[2];
                        v51 = (int)(v12 * v12 + v13 + v14 * v14);
                        v56 = v5;
                        v59 = 0;
                        v55 = 2;
                        v54 = 2;
                        goto LABEL_118;
                      }
                    }
                    else if ( v7 )
                    {
                      if ( *(_DWORD *)(dword_10690574 + 48) )
                      {
                        sub_100D6390(v5);
                        sub_10029660(a1, (int)"    %s rejected: unreachable\n");
                      }
                      goto LABEL_118;
                    }
                    v15 = (*(int (__thiscall **)(int *, float *, float *))(*a1 + 1084))(a1, v5, a2);
                    v16 = v50;
                    if ( v15 <= v50 )
                    {
                      a2 = v5;
                      if ( (*(int (__thiscall **)(int *))(*a1 + 1084))(a1) != v16 )
                      {
                        if ( *(_DWORD *)(dword_10690574 + 48) )
                        {
                          sub_100D6390(v5);
                          sub_10029660(a1, (int)"    %s rejected: lower priority\n");
                        }
                        goto LABEL_118;
                      }
                      v24 = (float *)sub_10019640(a1);
                      v25 = (float *)sub_10019640(v5);
                      v26 = v25[1] - v24[1];
                      v27 = v26 * v26;
                      v28 = *v25 - *v24;
                      v29 = v27;
                      v30 = v25[2] - v24[2];
                      v31 = *a1;
                      v52 = v51 - (int)(v28 * v28 + v29 + v30 * v30);
                      v49 = (int)(v28 * v28 + v29 + v30 * v30);
                      v32 = *(double (__thiscall **)(int *))(v31 + 1500);
                      *(float *)&v52 = (float)v52;
                      v33 = v32(a1);
                      v58 = v33 < *(float *)&v52;
                      v52 = 2;
                      v53 = 2;
                      if ( v58 )
                      {
                        if ( !v55 && *(float *)&v54 == 0.0
                          || (v52 = (unsigned __int8)sub_100AB270(v5) != 0, v52 == 1)
                          || v54 == 2
                          && ((v35 = *(float *)(a1[601] + 8),
                               v53 = *(int *)(a1[601] + 8),
                               sub_100271C0((float *)a1, v5),
                               v35 >= *(float *)&v53)
                           || !(*(unsigned __int8 (__thiscall **)(int *, float *, int, _DWORD))(*a1 + 548))(
                                 a1,
                                 v5,
                                 16449,
                                 0)
                            ? (v36 = 0)
                            : (v36 = 1),
                              v53 = v36,
                              v36 == 1) )
                        {
                          v37 = v56;
LABEL_108:
                          if ( *(_DWORD *)(dword_10690574 + 48) )
                          {
                            sub_100D6390(v5);
                            sub_10029660(a1, (int)"    %s accepted\n");
                          }
                          if ( v37 && *(_DWORD *)(dword_10690574 + 48) )
                          {
                            sub_100D6390(v37);
                            sub_10029660(a1, (int)"    (%s displaced due to distance/visibility)\n");
                          }
                          v55 = v52;
                          v43 = *a1;
                          v54 = v53;
                          v44 = *(int (__thiscall **)(int *, float *))(v43 + 1084);
                          v51 = v49;
                          v50 = v44(a1, v5);
                          v56 = v5;
                          v59 = v57;
                          goto LABEL_118;
                        }
                        v37 = v56;
                      }
                      else
                      {
                        if ( v55 == 1 || v54 == 1 )
                        {
                          v34 = *(_DWORD *)(dword_10690574 + 48) == 0;
                          goto LABEL_60;
                        }
                        v37 = v56;
                        if ( v55 == 2 )
                          v55 = (unsigned __int8)sub_100AB270(v56) != 0;
                        if ( v55 == 1 )
                        {
                          v34 = *(_DWORD *)(dword_10690574 + 48) == 0;
                          goto LABEL_60;
                        }
                      }
                      if ( v55 == 2 )
                        v55 = (unsigned __int8)sub_100AB270(v37) != 0;
                      if ( v54 == 2 )
                      {
                        v38 = *(float *)(a1[601] + 8);
                        v54 = *(int *)(a1[601] + 8);
                        sub_100271C0((float *)a1, v37);
                        if ( v38 >= *(float *)&v54
                          || (v39 = (*(int (__thiscall **)(int *, float *, int, _DWORD))(*a1 + 548))(a1, v37, 16449, 0),
                              v54 = 1,
                              !v39) )
                        {
                          *(float *)&v54 = 0.0;
                        }
                      }
                      if ( v52 == 2 )
                        v52 = (unsigned __int8)sub_100AB270(v5) != 0;
                      if ( v53 == 2 )
                      {
                        v40 = *(float *)(a1[601] + 8);
                        v53 = *(int *)(a1[601] + 8);
                        sub_100271C0((float *)a1, v5);
                        if ( v40 < *(float *)&v53
                          && (*(unsigned __int8 (__thiscall **)(int *, float *, int, _DWORD))(*a1 + 548))(
                               a1,
                               v5,
                               16449,
                               0) )
                        {
                          v53 = 1;
                        }
                        else
                        {
                          *(float *)&v53 = 0.0;
                        }
                      }
                      v41 = v55 == 1 || v54 == 1;
                      v42 = v52 == 1 || v53 == 1;
                      if ( v58 )
                      {
                        if ( !v42 && v41 )
                        {
                          if ( *(_DWORD *)(dword_10690574 + 48) )
                          {
                            sub_100D6390(v5);
                            sub_10029660(a1, (int)"    %s rejected: current is father but seen\n");
                          }
                          goto LABEL_118;
                        }
                        goto LABEL_108;
                      }
                      if ( v41 )
                      {
                        v34 = *(_DWORD *)(dword_10690574 + 48) == 0;
LABEL_60:
                        if ( !v34 )
                        {
                          sub_100D6390(v5);
                          sub_10029660(a1, (int)"    %s rejected: current is closer and seen\n");
                        }
                        goto LABEL_118;
                      }
                      if ( v42 )
                        goto LABEL_108;
                      if ( *(_DWORD *)(dword_10690574 + 48) )
                      {
                        sub_100D6390(v5);
                        sub_10029660(a1, (int)"    %s rejected: current is closer and neither is seen\n");
                      }
                    }
                    else
                    {
                      if ( *(_DWORD *)(dword_10690574 + 48) )
                      {
                        sub_100D6390(v5);
                        sub_10029660(a1, (int)"    %s accepted\n");
                      }
                      if ( v56 && *(_DWORD *)(dword_10690574 + 48) )
                      {
                        (*(void (__thiscall **)(int *, float *))(*a1 + 1084))(a1, v5);
                        sub_100D6390(v56);
                        sub_10029660(a1, (int)"    (%s displaced due to priority, %d > %d )\n");
                      }
                      a2 = v5;
                      v50 = (*(int (__thiscall **)(int *))(*a1 + 1084))(a1);
                      v17 = (float *)sub_10019640(a1);
                      v18 = (float *)sub_10019640(v5);
                      v19 = v18[1] - v17[1];
                      v20 = v19 * v19;
                      v21 = *v18 - *v17;
                      v22 = v20;
                      v23 = v18[2] - v17[2];
                      v51 = (int)(v21 * v21 + v22 + v23 * v23);
                      v59 = v57;
                      v56 = v5;
                      v55 = 2;
                      v54 = 2;
                    }
                  }
                  else if ( *(_DWORD *)(dword_10690574 + 48) )
                  {
                    sub_100D6390(v5);
                    sub_10029660(a1, (int)"    %s rejected: not valid\n");
                  }
                }
                else if ( *(_DWORD *)(dword_10690574 + 48) )
                {
                  sub_100D6390(v5);
                  sub_10029660(a1, (int)"    %s rejected: not yet valid\n");
                }
              }
              else if ( *(_DWORD *)(dword_10690574 + 48) )
              {
                sub_100D6390(v5);
                sub_10029660(a1, (int)"    %s rejected: old\n");
              }
            }
            else if ( *(_DWORD *)(dword_10690574 + 48) )
            {
              sub_100D6390(v5);
              sub_10029660(a1, (int)"    %s rejected: no hate/fear\n");
            }
          }
        }
      }
    }
LABEL_118:
    (*(void (__thiscall **)(int *))(*a1 + 1868))(a1);
  }
  if ( !*(_DWORD *)(dword_10690574 + 48) )
    return v56;
  v45 = v56;
  sub_100D6390(v56);
  sub_10029660(a1, (int)"} == %s\n");
  return v45;
}
