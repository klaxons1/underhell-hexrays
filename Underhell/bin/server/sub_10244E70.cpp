char *__thiscall sub_10244E70(float *this, int *a2, float *a3)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // edx
  int *v9; // eax
  int v10; // eax
  char *result; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // edx
  int v18; // eax
  double v19; // st7
  int v20; // eax
  float *v21; // edx
  int v22; // eax
  char *v23; // eax
  int v24; // eax
  double v25; // st7
  double v26; // st7
  double v27; // st6
  double v28; // st7
  double v29; // st6
  float *v30; // edx
  double v31; // st7
  double v32; // [esp+8h] [ebp-2Ch]
  const char *v33; // [esp+10h] [ebp-24h]
  const char *v34; // [esp+10h] [ebp-24h]
  const char *v35; // [esp+10h] [ebp-24h]
  const char *v36; // [esp+14h] [ebp-20h]
  const char *v37; // [esp+14h] [ebp-20h]
  const char *v38; // [esp+14h] [ebp-20h]
  int v39; // [esp+2Ch] [ebp-8h]
  int v40; // [esp+30h] [ebp-4h]
  char *v41; // [esp+30h] [ebp-4h]
  int v42; // [esp+30h] [ebp-4h]

  v4 = *((_DWORD *)this + 21);
  v5 = 0;
  v6 = *((_DWORD *)this + 13);
  v40 = *((_DWORD *)this + 14);
  if ( !v4 )
    goto LABEL_8;
  v7 = *((_DWORD *)this + 4);
  if ( v7 <= v4 )
  {
    v9 = a2;
    goto LABEL_6;
  }
  v8 = v7 - 1;
  v9 = a2;
  if ( *a2 != v8 )
  {
LABEL_6:
    v5 = *v9 / v4;
    *a2 = *v9 % v4;
    goto LABEL_7;
  }
  *a2 = 0;
  v5 = *((_DWORD *)this + 4) / *((_DWORD *)this + 21) + 1;
LABEL_7:
  v10 = *((_DWORD *)this + 20) + 8 * v5;
  v6 = *(_DWORD *)((char *)this + v10);
  v40 = *(_DWORD *)((char *)this + v10 + 4);
LABEL_8:
  if ( v6 == -1 )
    return 0;
  if ( v6 )
  {
    v12 = sub_102466E0(v6);
    if ( v12 )
      v41 = (char *)(v40 + v12);
    else
      v41 = 0;
  }
  else
  {
    v41 = (char *)this + v40;
  }
  v13 = *((_DWORD *)this + 21);
  if ( v13 )
  {
    v14 = *((_DWORD *)this + 4) / v13;
    v15 = v5 + 1;
    v39 = v14 + 2;
    if ( v5 + 1 < v14 + 2 )
    {
      v16 = *((_DWORD *)this + 20);
      v17 = (_DWORD *)((char *)&this[2 * v15] + v16);
      while ( *v17 == v6 )
      {
        ++v15;
        v17 += 2;
        if ( v15 >= v39 )
          goto LABEL_24;
      }
      v18 = *(_DWORD *)((char *)&this[2 * v15] + v16);
      if ( v18 != -1 && v18 )
        sub_102466E0(v18);
    }
  }
LABEL_24:
  if ( !v41 )
  {
    if ( v5 > 0 && *(int *)(dword_106C5CA4 + 48) > 0 )
    {
      v36 = (char *)this + *((_DWORD *)this + 1);
      v33 = (char *)this + *(_DWORD *)this + 12;
      v19 = Plat_FloatTime();
      Msg("[%8.3f] hitch on %s:%s:%d:%d\n", v19, v33, v36, v5, v6);
    }
    if ( --v5 >= 0 )
    {
      while ( 1 )
      {
        v20 = *((_DWORD *)this + 20);
        v21 = &this[2 * v5];
        v6 = *(_DWORD *)((char *)v21 + v20);
        v22 = *(_DWORD *)((char *)v21 + v20 + 4);
        v42 = v22;
        if ( v6 == -1 )
          break;
        if ( v6 )
        {
          v24 = sub_102466E0(v6);
          if ( !v24 )
            break;
          v23 = (char *)(v42 + v24);
        }
        else
        {
          v23 = (char *)this + v22;
        }
        v41 = v23;
        if ( v23 )
        {
          *a2 = *((_DWORD *)this + 21) - 1;
          goto LABEL_39;
        }
LABEL_36:
        if ( --v5 < 0 )
          goto LABEL_39;
      }
      v41 = 0;
      goto LABEL_36;
    }
  }
LABEL_39:
  *a3 = 0.0;
  if ( !v41 )
  {
    if ( v5 <= 0 )
    {
      this[24] = Plat_FloatTime();
      *a3 = 1.0;
    }
    if ( *(int *)(dword_106C5CA4 + 48) > 1 )
    {
      v37 = (char *)this + *((_DWORD *)this + 1);
      v34 = (char *)this + *(_DWORD *)this + 12;
      v25 = Plat_FloatTime();
      Msg("[%8.3f] stall on %s:%s:%d:%d\n", v25, v34, v37, v5, v6);
    }
    return v41;
  }
  if ( this[24] == 0.0 )
    return v41;
  v26 = Plat_FloatTime() - this[24];
  if ( v26 < 0.0 )
  {
    v30 = a3;
    v28 = 0.0;
  }
  else
  {
    v27 = 0.2 - v26;
    v28 = 0.0;
    v29 = v27 * 5.0;
    if ( v29 <= 1.0 )
    {
      if ( v29 < 0.0 )
        v29 = 0.0;
    }
    else
    {
      v29 = 1.0;
    }
    v30 = a3;
    *a3 = 3.0 * (v29 * v29) - v29 * (v29 * v29 + v29 * v29);
  }
  if ( v28 == *v30 )
  {
    result = v41;
    this[24] = v28;
    return result;
  }
  if ( *(int *)(dword_106C5CA4 + 48) <= 1 )
    return v41;
  v38 = (char *)this + *((_DWORD *)this + 1);
  v35 = (char *)this + *(_DWORD *)this + 12;
  v32 = *v30;
  v31 = Plat_FloatTime();
  Msg("[%8.3f] stall blend %.2f on %s:%s:%d:%d\n", v31, v32, v35, v38, v5, v6);
  return v41;
}
