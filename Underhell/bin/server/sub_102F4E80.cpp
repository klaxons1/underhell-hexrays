void __thiscall sub_102F4E80(int this)
{
  _DWORD *v2; // eax
  unsigned int *v3; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // esi
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  int *v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // eax
  float *v16; // esi
  _DWORD *v17; // eax
  float *v18; // eax
  double v19; // st4
  double v20; // st6
  double v21; // st4
  double v22; // st5
  double v23; // st6
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  unsigned int *i; // ebx
  int v27; // ecx
  int v28; // ecx
  int v29; // esi
  double v30; // st4
  double v31; // st6
  double v32; // st4
  double v33; // st5
  double v34; // st6
  int *v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  int v38; // eax
  float *v39; // esi
  _DWORD *v40; // eax
  float *v41; // eax
  double v42; // st4
  double v43; // st6
  double v44; // st4
  double v45; // st5
  double v46; // st6
  _DWORD *v47; // eax
  float v48; // [esp+8h] [ebp-Ch]
  unsigned __int8 v49[4]; // [esp+Ch] [ebp-8h] BYREF
  float v50; // [esp+10h] [ebp-4h]

  v48 = 0.0;
  v50 = 0.0;
  v2 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
  v3 = sub_10077AB0(v2, v49);
  if ( !v3 )
    goto LABEL_69;
  do
  {
    if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, v4) != 4 )
    {
      v5 = *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 ? 0 : off_1061BE18[4 * (*v3 & 0xFFF) + 1];
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, v5) != 3 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
          v6 = 0;
        else
          v6 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
        if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
          sub_100DAE60(v6);
        v7 = *(float *)(v6 + 584) - *(float *)(this + 584);
        v8 = v7 * v7;
        v9 = *(float *)(v6 + 580) - *(float *)(this + 580);
        v10 = v8;
        v11 = *(float *)(v6 + 588) - *(float *)(this + 588);
        if ( v9 * v9 + v10 + v11 * v11 <= 1440000.0 && *v3 != -1 )
        {
          v12 = &off_1061BE18[4 * (*v3 & 0xFFF) + 1];
          v13 = *v3 >> 12;
          if ( off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v13 )
          {
            if ( *v12 )
            {
              v14 = off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v13 ? *v12 : 0;
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 264))(v14) )
              {
                if ( *(float *)(dword_106B31C8 + 12) - *((float *)v3 + 7) <= 0.5 )
                {
                  v15 = sub_1026A890(v3);
                  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 220))(v15) != 6 )
                  {
                    v16 = (float *)sub_10019640((_DWORD *)this);
                    v17 = (_DWORD *)sub_1026A890(v3);
                    v18 = (float *)sub_10019640(v17);
                    v19 = v18[1] - v16[1];
                    v20 = v19 * v19;
                    v21 = *v18 - *v16;
                    v22 = v20;
                    v23 = v18[2] - v16[2];
                    if ( v21 * v21 + v22 + v23 * v23 > 14400.0 )
                      v48 = v48 + 1.0;
                    else
                      v50 = v50 + 1.0;
                  }
                }
              }
            }
          }
        }
      }
    }
    v24 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
    v3 = (unsigned int *)sub_10077340(v24, v49);
  }
  while ( v3 );
  if ( v50 > 2.0 )
  {
    sub_10023CB0((char *)this, 63);
    v25 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
    for ( i = sub_10077AB0(v25, v49); i; i = (unsigned int *)sub_10077340(v47, v49) )
    {
      if ( !*((_BYTE *)i + 55) )
      {
        v27 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
        if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, v27) != 4 )
        {
          v28 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
          if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, v28) != 3 )
          {
            if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
              sub_100DAE60(this);
            if ( *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 )
              v29 = 0;
            else
              v29 = off_1061BE18[4 * (*i & 0xFFF) + 1];
            if ( (*(_DWORD *)(v29 + 252) & 0x800) != 0 )
              sub_100DAE60(v29);
            v30 = *(float *)(v29 + 584) - *(float *)(this + 584);
            v31 = v30 * v30;
            v32 = *(float *)(v29 + 580) - *(float *)(this + 580);
            v33 = v31;
            v34 = *(float *)(v29 + 588) - *(float *)(this + 588);
            if ( v32 * v32 + v33 + v34 * v34 <= 1440000.0 && *i != -1 )
            {
              v35 = &off_1061BE18[4 * (*i & 0xFFF) + 1];
              v36 = *i >> 12;
              if ( off_1061BE18[4 * (*i & 0xFFF) + 2] == v36 )
              {
                if ( *v35 )
                {
                  v37 = off_1061BE18[4 * (*i & 0xFFF) + 2] == v36 ? *v35 : 0;
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v37 + 264))(v37) )
                  {
                    if ( *(float *)(dword_106B31C8 + 12) - *((float *)i + 7) <= 0.5 )
                    {
                      v38 = sub_1026A890(i);
                      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 220))(v38) != 6 )
                      {
                        v39 = (float *)sub_10019640((_DWORD *)this);
                        v40 = (_DWORD *)sub_1026A890(i);
                        v41 = (float *)sub_10019640(v40);
                        v42 = v41[1] - v39[1];
                        v43 = v42 * v42;
                        v44 = *v41 - *v39;
                        v45 = v43;
                        v46 = v41[2] - v39[2];
                        if ( v44 * v44 + v45 + v46 * v46 <= 14400.0 )
                          *((_BYTE *)i + 55) = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v47 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
    }
  }
  else
  {
LABEL_69:
    sub_10023E00((char *)this, 63);
  }
  if ( sub_10023D10((_DWORD *)this, 63) )
    sub_10023E00((char *)this, 3);
  if ( sub_10023D10((_DWORD *)this, 63) )
  {
    (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
      this,
      "TLK_MOBBED",
      0,
      0,
      0,
      0);
  }
  else if ( v48 > 4.0 )
  {
    (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
      this,
      "TLK_MANY_ENEMIES",
      0,
      0,
      0,
      0);
  }
}
