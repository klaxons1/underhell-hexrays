void __stdcall sub_10138E80(int a1, float a2)
{
  long double v3; // st7
  int v4; // eax
  long double v5; // st6
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  double v11; // st6
  long double v12; // st4
  double v13; // st3
  double v14; // rt0
  long double v15; // st3
  double v16; // st7
  double v17; // st4
  long double v18; // st7
  long double v19; // st7
  _DWORD *v20; // edx
  float *v21; // edi
  _DWORD *v22; // eax
  double v23; // st6
  double v24; // st6
  float *v25; // [esp+Ch] [ebp-24h]
  float *v26; // [esp+Ch] [ebp-24h]
  float v27; // [esp+Ch] [ebp-24h]
  float v28; // [esp+1Ch] [ebp-14h]
  float v29; // [esp+20h] [ebp-10h]
  float v30; // [esp+24h] [ebp-Ch]
  int v31; // [esp+38h] [ebp+8h]
  _DWORD *v32; // [esp+3Ch] [ebp+Ch]

  if ( *(int *)(a1 + 336) < 0 )
  {
    *(float *)(a1 + 200) = *((float *)off_103DC81C + 3);
    return;
  }
  v3 = 0.0;
  if ( 0.0 == a2 )
  {
    CUniformRandomStream::SetSeed((CUniformRandomStream *)&unk_1043A030, (int)*((float *)off_103DC81C + 3));
    v3 = 0.0;
  }
  if ( (*(_DWORD *)(a1 + 52) & 0x100) != 0 )
  {
    *(float *)(a1 + 196) = CUniformRandomStream::RandomFloat((CUniformRandomStream *)&unk_1043A030, 1.0, 2.0) * a2
                         + *(float *)(a1 + 196);
    v3 = 0.0;
  }
  else
  {
    *(float *)(a1 + 196) = a2 + *(float *)(a1 + 196);
  }
  *(float *)(a1 + 352) = v3;
  *(float *)(a1 + 864) = v3;
  if ( v3 != *(float *)(a1 + 216) )
  {
    v4 = *(_DWORD *)(a1 + 52);
    if ( (v4 & 0x100) == 0 || !*(_BYTE *)(a1 + 880) )
    {
      if ( (v4 & 0x10) != 0 )
      {
        v5 = v3;
        v6 = a1 + 352;
        v7 = 128;
        do
        {
          v6 += 4;
          --v7;
          *(float *)(v6 - 4) = sin(v5);
          v5 = v5 + 0.024543693;
        }
        while ( v7 );
      }
      else
      {
        sub_10136C60((float *)(a1 + 352), 128, 1.0);
        v3 = 0.0;
      }
      *(_BYTE *)(a1 + 880) = 1;
    }
  }
  if ( (*(_BYTE *)(a1 + 52) & 3) != 0 )
  {
    if ( !sub_10138B70(a1) )
      return;
    v25 = (float *)(a1 + 180);
    *(float *)(a1 + 180) = *(float *)(a1 + 72) - *(float *)(a1 + 60);
    *(float *)(a1 + 184) = *(float *)(a1 + 76) - *(float *)(a1 + 64);
    *(float *)(a1 + 188) = *(float *)(a1 + 80) - *(float *)(a1 + 68);
    if ( *(float *)(a1 + 216) < 0.5 )
    {
      sub_10011640(v25);
      v8 = (int)(0.5 * 0.075 + 3.0);
    }
    else
    {
      sub_10011640(v25);
      v8 = (int)(0.5 * 0.25 + 3.0);
    }
    v3 = 0.0;
    *(_DWORD *)(a1 + 252) = v8;
  }
  v9 = *(_DWORD *)(a1 + 48);
  if ( v9 )
  {
    v10 = v9 - 6;
    if ( !v10 )
    {
      v31 = 1;
      if ( *(int *)(a1 + 56) > 1 )
      {
        v20 = (_DWORD *)(a1 + 260);
        v32 = (_DWORD *)(a1 + 260);
        v21 = (float *)(a1 + 76);
        while ( 1 )
        {
          v22 = *v20 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v20 & 0xFFF) + 2) != *v20 >> 12
              ? 0
              : (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*v20 & 0xFFF) + 1);
          if ( !sub_10136EE0(v22, v20[10], (*(_DWORD *)(a1 + 52) & 0x400) != 0, v21 - 1) )
          {
            *(v21 - 1) = *(v21 - 4);
            *v21 = *(v21 - 3);
            v21[1] = *(v21 - 2);
          }
          ++v32;
          v21 += 3;
          if ( ++v31 >= *(_DWORD *)(a1 + 56) )
            break;
          v20 = v32;
        }
        v3 = 0.0;
      }
      goto LABEL_50;
    }
    if ( v10 == 1 )
    {
      v11 = *(float *)(a1 + 876) - *(float *)(a1 + 872);
      if ( v3 != v11 )
      {
        v12 = 1.0;
        v13 = *(float *)(a1 + 200) - *((float *)off_103DC81C + 3);
        if ( v13 >= *(float *)(a1 + 220) )
          goto LABEL_32;
        v14 = v13;
        v15 = v3;
        v16 = v14;
        if ( v15 >= *(float *)(a1 + 220) )
          goto LABEL_32;
        v17 = v16;
        v18 = v15;
        v12 = v17 / *(float *)(a1 + 220);
        if ( v12 > 1.0 )
        {
          v18 = 1.0;
          goto LABEL_33;
        }
        if ( v12 >= v15 )
LABEL_32:
          v18 = v12;
LABEL_33:
        v30 = *(float *)(a1 + 84);
        v28 = *(float *)(a1 + 88);
        v29 = *(float *)(a1 + 92);
        v19 = ((1.0 - v18) * v11 + *(float *)(a1 + 872)) * 0.5;
        v26 = (float *)(a1 + 180);
        *(float *)(a1 + 60) = v30 - v19;
        *(float *)(a1 + 64) = v28;
        *(float *)(a1 + 68) = v29;
        *(float *)(a1 + 72) = v19 + v30;
        *(float *)(a1 + 76) = v28;
        *(float *)(a1 + 80) = v29;
        *(float *)(a1 + 180) = *(float *)(a1 + 72) - *(float *)(a1 + 60);
        *(float *)(a1 + 184) = *(float *)(a1 + 76) - *(float *)(a1 + 64);
        *(float *)(a1 + 188) = *(float *)(a1 + 80) - *(float *)(a1 + 68);
        if ( *(float *)(a1 + 216) < 0.5 )
        {
          sub_10011640(v26);
          v3 = 0.0;
          *(_DWORD *)(a1 + 252) = (int)(0.5 * 0.075 + 3.0);
        }
        else
        {
          sub_10011640(v26);
          v3 = 0.0;
          *(_DWORD *)(a1 + 252) = (int)(0.5 * 0.25 + 3.0);
        }
      }
    }
  }
  else
  {
    if ( !sub_10137670((float *)(a1 + 60), (float *)(a1 + 72), 0) )
      return;
    v3 = 0.0;
  }
LABEL_50:
  v23 = *(float *)(a1 + 200) - *((float *)off_103DC81C + 3) + *(float *)(a1 + 196);
  *(float *)(a1 + 192) = v23;
  if ( v3 == v23 )
    v24 = 1.0;
  else
    v24 = *(float *)(a1 + 196) / v23;
  *(float *)(a1 + 192) = v24;
  if ( *(float *)(a1 + 212) == v3 )
  {
    v27 = *(float *)(a1 + 184) * *(float *)(a1 + 184)
        + *(float *)(a1 + 180) * *(float *)(a1 + 180)
        + *(float *)(a1 + 188) * *(float *)(a1 + 188);
    *(float *)(a1 + 212) = off_103EDFE0(v27);
  }
}
