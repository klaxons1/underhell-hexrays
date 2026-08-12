double __thiscall sub_102B7F20(int this)
{
  int v2; // eax
  int v3; // ecx
  _DWORD *v4; // edi
  int v5; // eax
  float *v6; // ebx
  float *v7; // eax
  double v8; // st4
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st6
  double v13; // st7
  int v14; // eax
  int v15; // edi
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  double v21; // st7
  int (__thiscall *v22)(int); // eax
  unsigned int v23; // ecx
  int *v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // eax
  char v28; // cl
  char v29; // al
  unsigned int v30; // eax
  int v31; // ecx
  double result; // st7
  char v33[12]; // [esp+4h] [ebp-20h] BYREF
  float v34; // [esp+10h] [ebp-14h]
  float v35; // [esp+14h] [ebp-10h]
  int v36; // [esp+18h] [ebp-Ch]
  int v37; // [esp+1Ch] [ebp-8h]
  float v38; // [esp+20h] [ebp-4h]

  v38 = 60026.0;
  *(_DWORD *)(this + 1132) = -1;
  v36 = sub_1002A680(&dword_10690DF8);
  v2 = sub_1016BFB0(&dword_10690DF8);
  v3 = 0;
  v34 = *(float *)&v2;
  v37 = 0;
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(_DWORD **)(v36 + 4 * v3);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 264))(v4) && (v4[48] & 0x20) == 0 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        if ( *(float *)(this + 588) <= (double)*(float *)((*(int (__thiscall **)(_DWORD *, char *))(*v4 + 504))(v4, v33)
                                                        + 8) )
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*v4 + 220))(v4) )
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*v4 + 220))(v4) != 6 )
            {
              v5 = v4[23];
              if ( v5 != dword_106DCD14 && v5 != dword_106DCD10 )
              {
                v6 = (float *)sub_10019640(v4);
                v7 = (float *)sub_10019640((_DWORD *)this);
                v8 = v7[1] - v6[1];
                v9 = v8 * v8;
                v10 = *v7 - *v6;
                v11 = v9;
                v12 = v7[2] - v6[2];
                v13 = v10 * v10 + v11 + v12 * v12;
                v35 = v13;
                if ( v13 < v38 )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)this + 548))(
                         this,
                         v4,
                         16395,
                         0) )
                  {
                    v38 = v35;
                    sub_102B6EF0((_DWORD *)this, (int)v4);
                  }
                }
              }
            }
          }
        }
      }
      v3 = v37 + 1;
      v37 = v3;
    }
    while ( v3 < SLODWORD(v34) );
  }
  v14 = sub_10261B20();
  v15 = v14;
  if ( v14 && (*(_DWORD *)(v14 + 256) & 0x8000) == 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
      sub_100DAE60(v15);
    v16 = *(float *)(v15 + 584) - *(float *)(this + 584);
    v17 = v16 * v16;
    v18 = *(float *)(v15 + 580) - *(float *)(this + 580);
    v19 = v17;
    v20 = *(float *)(v15 + 588) - *(float *)(this + 588);
    v21 = v18 * v18 + v19 + v20 * v20;
    v34 = v21;
    if ( v21 < v38
      && (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)this + 548))(this, v15, 16395, 0) )
    {
      v22 = *(int (__thiscall **)(int))(*(_DWORD *)v15 + 8);
      v38 = v34;
      *(_DWORD *)(this + 1132) = *(_DWORD *)v22(v15);
    }
  }
  v23 = *(_DWORD *)(this + 1132);
  if ( v23 != -1 )
  {
    v24 = &off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 1];
    v25 = v23 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 2] == v25 )
    {
      if ( *v24 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 2] == v25 )
          v26 = *v24;
        else
          v26 = 0;
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 220))(v26);
        v28 = 0;
        if ( v27 == 19 || v27 == 12 || v27 == 4 )
          goto LABEL_55;
        if ( v27 == 14 || v27 == 9 || v27 == 15 || v27 == 25 || v27 == 16 )
          v28 = 1;
        v29 = *(_BYTE *)(this + 1177) ? v28 == 0 : v28;
        if ( !v29 )
        {
LABEL_55:
          if ( !*(_BYTE *)(this + 1169) )
          {
            sub_102B7B10((float *)this, 1, 255, 0, 0, 190);
            *(_BYTE *)(this + 1169) = 1;
          }
        }
        else if ( *(_BYTE *)(this + 1169) )
        {
          v30 = *(_DWORD *)(this + 1132);
          if ( v30 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 2] != v30 >> 12 )
            v31 = 0;
          else
            v31 = off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 1];
          if ( sub_102B6E80((_BYTE *)this, v31) )
          {
            sub_102B7B10((float *)this, 1, 0, 255, 0, 190);
            result = sqrt(v38);
            *(_BYTE *)(this + 1169) = 0;
            return result;
          }
        }
      }
    }
  }
  return sqrt(v38);
}
