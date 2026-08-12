int __thiscall sub_10163630(int *this)
{
  int v1; // ebx
  int *v2; // esi
  _DWORD *i; // edi
  int v4; // esi
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // esi
  int *v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // esi
  int v17; // edi
  int result; // eax
  float v19; // [esp+0h] [ebp-38h]
  int v20; // [esp+14h] [ebp-24h]
  int v21; // [esp+20h] [ebp-18h]
  int v22; // [esp+28h] [ebp-10h]
  char *v23; // [esp+2Ch] [ebp-Ch]
  int v25; // [esp+30h] [ebp-8h]
  int j; // [esp+34h] [ebp-4h]
  int v27; // [esp+34h] [ebp-4h]

  v1 = 0;
  v2 = this;
  v19 = *(float *)(dword_106B31C8 + 12) + 2.0;
  sub_100EC4A0(this, v19, 0);
  v23 = (char *)v2[200];
  if ( !v23 )
    v23 = (char *)String;
  v20 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 256);
  v21 = 0;
  if ( *((_BYTE *)v2 + 812) )
  {
    for ( i = sub_1012BC90(&dword_1069E3E0, 0, v23); i; i = sub_1012BC90(&dword_1069E3E0, (int)i, v23) )
    {
      if ( (i[48] & 0x20) == 0 && *((_BYTE *)i + 1172) )
      {
        v4 = v1;
        if ( v1 + 1 > 64 )
        {
          sub_102ABFC0(v1 - 64 + 1);
          v1 = v21;
        }
        v5 = v20;
        v21 = ++v1;
        if ( v1 - v4 - 1 > 0 )
        {
          memcpy((void *)(v20 + 4 * v4 + 4), (const void *)(v20 + 4 * v4), 4 * (v1 - v4 - 1));
          v5 = v20;
        }
        v6 = (_DWORD *)(v5 + 4 * v4);
        if ( v6 )
          *v6 = i;
        v2 = this;
      }
    }
  }
  else
  {
    v7 = 0;
    for ( j = 0; v7 < v2[207]; j = v7 )
    {
      v8 = 4 * v7;
      v9 = *(_DWORD *)(v2[204] + 4 * v7);
      if ( v9 != -1
        && off_1061BE18[4 * (v9 & 0xFFF) + 2] == v9 >> 12
        && (v10 = off_1061BE18[4 * (v9 & 0xFFF) + 1], (v22 = v10) != 0) )
      {
        if ( (*(_DWORD *)(v10 + 192) & 0x20) == 0 )
        {
          v11 = v1;
          if ( v1 + 1 > 64 )
          {
            sub_102ABFC0(v1 - 64 + 1);
            v1 = v21;
          }
          v21 = ++v1;
          if ( v1 - v11 - 1 > 0 )
            memcpy((void *)(v20 + 4 * v11 + 4), (const void *)(v20 + 4 * v11), 4 * (v1 - v11 - 1));
          v12 = (int *)(v20 + 4 * v11);
          v2 = this;
          if ( v12 )
            *v12 = v22;
        }
      }
      else
      {
        v13 = v2[207];
        if ( v13 > 0 )
        {
          *(_DWORD *)(v2[204] + v8) = *(_DWORD *)(v2[204] + 4 * v13 - 4);
          --v2[207];
        }
        --j;
      }
      v7 = j + 1;
    }
  }
  v14 = v1 - v2[201];
  v15 = 0;
  v25 = v14;
  v27 = 0;
  if ( v1 > 0 )
  {
    while ( v14 > 0 )
    {
      v16 = *(_DWORD *)(v20 + 4 * v15);
      if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
        goto LABEL_43;
      v17 = sub_10261B20();
      if ( !sub_10262560(*(_DWORD *)(v16 + 24))
        || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v17 + 876))(v17, v16) )
      {
        goto LABEL_43;
      }
      if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
        sub_100DAE60(v16);
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(v17);
      if ( fabs(*(float *)(v17 + 584) - *(float *)(v16 + 584))
         + fabs(*(float *)(v17 + 580) - *(float *)(v16 + 580))
         + fabs(*(float *)(v17 + 588) - *(float *)(v16 + 588)) > 360.0 )
      {
LABEL_43:
        sub_100EAB80((_DWORD *)v16, 32);
        sub_1025FAC0(v16);
        DevMsg(2, "Surplus %s removed\n", v23);
        --v25;
      }
      v15 = v27 + 1;
      v27 = v15;
      if ( v15 >= v1 )
        break;
      v14 = v25;
    }
  }
  result = v20;
  if ( v20 )
    return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v20);
  return result;
}
