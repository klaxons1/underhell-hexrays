char __thiscall sub_10083B10(_DWORD *this, float *a2, char a3)
{
  int v4; // eax
  int v5; // esi
  double v7; // st7
  float v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  char v12; // bl
  int v14; // edi
  float *v15; // eax
  float v16[3]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD *v17; // [esp+18h] [ebp-4h]
  unsigned int v18; // [esp+24h] [ebp+8h]

  v4 = this[1];
  v5 = this[9];
  v17 = this;
  if ( v4 )
    *(_DWORD *)(v4 + 2716) |= 8u;
  if ( (a3 & 1) != 0 )
  {
    sub_100A6340(v5);
  }
  else if ( (a3 & 2) != 0 )
  {
    *(_DWORD *)(v5 + 16) = -1;
    *(float *)(v5 + 20) = flt_106F1CA8;
    *(float *)(v5 + 24) = flt_106F1CAC;
    *(float *)(v5 + 28) = flt_106F1CB0;
  }
  if ( *((_DWORD *)a2 + 5) == -1 )
  {
    if ( *(_DWORD *)(v5 + 8) == -1 )
      sub_100A5F90(*(_DWORD *)(this[1] + 2324) != 3 ? 6 : 11);
  }
  else
  {
    sub_100A5F90(*((_DWORD *)a2 + 5));
  }
  if ( -2.0 == a2[8] )
  {
    v7 = sub_100737B0(*(_DWORD *)(this[1] + 1676));
  }
  else if ( -1.0 == a2[8] )
  {
    if ( 0.0 != *(float *)(v5 + 4) )
      goto LABEL_18;
    v7 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)this[1] + 2044))(this[1]);
  }
  else
  {
    v7 = a2[8];
  }
  *(float *)(v5 + 4) = v7;
LABEL_18:
  if ( *(float *)(v5 + 4) < 0.1 )
    sub_10029660((_DWORD *)this[1], (int)"Suspicious navigation goal tolerance specified\n");
  *(float *)(v5 + 32) = sub_100737B0(*(_DWORD *)(this[1] + 1676)) * 0.5;
  sub_100A6150(0);
  sub_100A6150(*(_DWORD *)a2);
  *(float *)(v5 + 72) = a2[10];
  v8 = *a2;
  v18 = *((_DWORD *)a2 + 11);
  if ( *(_DWORD *)a2 == 1 )
  {
    v10 = *(_DWORD *)(this[1] + 2420);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[1] + 2420) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(this[1] + 2420) & 0xFFF) + 1];
  }
  else
  {
    if ( LODWORD(v8) != 2 )
    {
      if ( a2[1] == *(float *)&dword_1060887C
        && a2[2] == *(float *)&dword_10608880
        && a2[3] == *(float *)&dword_10608884 )
      {
        if ( *((_DWORD *)a2 + 4) != -1 )
        {
          v9 = sub_1007E7B0(this, (int)v16, *((_DWORD *)a2 + 4));
          sub_100A60D0(v9);
        }
      }
      else
      {
        sub_100A60D0(a2 + 1);
      }
      goto LABEL_37;
    }
    v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 368))(this[1]);
  }
  v18 = v11;
  if ( a2[1] != *(float *)&dword_1060887C || a2[2] != *(float *)&dword_10608880 || a2[3] != *(float *)&dword_10608884 )
  {
    *(float *)(v5 + 20) = a2[1];
    *(float *)(v5 + 24) = a2[2];
    *(float *)(v5 + 28) = a2[3];
  }
LABEL_37:
  if ( v18 > dword_10608878 )
  {
    if ( v18 )
      *(_DWORD *)(v5 + 16) = *(_DWORD *)(*(int (**)(void))(*(_DWORD *)v18 + 8))();
    else
      *(_DWORD *)(v5 + 16) = -1;
  }
  sub_100B9C50(v5);
  *(_DWORD *)(v5 + 44) = -1;
  v12 = sub_10083810((int)this, (a3 & 8) == 0, 0);
  if ( v12 )
  {
    if ( *((int *)a2 + 6) <= 0 )
    {
      if ( *((_DWORD *)a2 + 7) != -1 )
        sub_100A5FF0(*((_DWORD *)a2 + 7));
    }
    else
    {
      sub_100A5FC0(*((_DWORD *)a2 + 6));
    }
    if ( *(_DWORD *)a2 == 2 )
    {
      sub_100A6280(v18);
      sub_100A6310(v18);
      return v12;
    }
    else
    {
      v14 = v17[1];
      if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
        sub_100DAE60(v17[1]);
      v15 = (float *)sub_100A6140(v5);
      v16[0] = *v15 - *(float *)(v14 + 580);
      v16[1] = v15[1] - *(float *)(v14 + 584);
      v16[2] = v15[2] - *(float *)(v14 + 588);
      sub_100A6250(v16);
      return v12;
    }
  }
  else
  {
    if ( (a3 & 4) != 0 )
      sub_100A6340(v5);
    else
      sub_100A6150(0);
    return 0;
  }
}
