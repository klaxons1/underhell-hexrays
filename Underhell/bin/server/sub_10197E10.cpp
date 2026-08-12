char __stdcall sub_10197E10(int a1, int a2, int a3)
{
  double v3; // st6
  double v4; // st7
  int v5; // edx
  double v6; // st5
  int v7; // ecx
  double v8; // st4
  long double v9; // st3
  float *v10; // esi
  int v11; // edi
  bool v12; // bl
  bool v13; // dl
  char v14; // al
  float *v15; // eax
  float *v16; // ecx
  int v17; // edx
  float v19; // [esp+Ch] [ebp-1Ch]
  float v20; // [esp+10h] [ebp-18h]
  float v21; // [esp+14h] [ebp-14h]
  int v22; // [esp+18h] [ebp-10h]
  float v23; // [esp+1Ch] [ebp-Ch]
  float *v24; // [esp+20h] [ebp-8h]
  char v25; // [esp+26h] [ebp-2h]
  char v26; // [esp+27h] [ebp-1h]
  bool i; // [esp+33h] [ebp+Bh]

  v20 = *(float *)(a1 + 16);
  v3 = v20;
  v19 = *(float *)(a1 + 12);
  v21 = *(float *)(a1 + 20);
  v4 = v19;
  v26 = *(_BYTE *)(a1 + 70);
  v5 = a3;
  v25 = *(_BYTE *)(a1 + 44) & 0xFE;
  v6 = v21;
  v7 = 0;
  v24 = (float *)a1;
  v22 = 0;
  v8 = -(*(float *)(a1 + 8) * v21 + *(float *)a1 * v19 + *(float *)(a1 + 4) * v20);
  v23 = v8;
  v9 = 5.0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v10 = v24;
      v11 = 0;
      if ( a2 > 0 )
        break;
LABEL_39:
      v15 = (float *)*((_DWORD *)v24 + 8);
      v24 = v15;
      if ( !v15 || (a2 > 1 || v5 > 1) && fabs(v15[1] * v3 + *v15 * v4 + v15[2] * v6 + v8) > v9 )
        return 0;
      v22 = ++v7;
      if ( v7 >= v5 )
        goto LABEL_44;
    }
    v12 = v7 == 0;
    v13 = v7 == v5 - 1;
    for ( i = v13; ; v13 = i )
    {
      v14 = v11 == a2 - 1;
      if ( v12 )
      {
        if ( !v11 )
        {
          v14 = *((_BYTE *)v10 + 70);
          goto LABEL_29;
        }
        if ( v11 == a2 - 1 )
          break;
      }
      if ( !v13 )
        goto LABEL_24;
      if ( !v11 )
      {
        if ( !*((_BYTE *)v10 + 70) && !*((_BYTE *)v10 + 69) )
        {
          v14 = 0;
          goto LABEL_29;
        }
        goto LABEL_27;
      }
      if ( v11 != a2 - 1 )
      {
LABEL_24:
        if ( v12 )
        {
          if ( !*((_BYTE *)v10 + 70) && !*((_BYTE *)v10 + 71) )
          {
            v14 = 0;
            goto LABEL_29;
          }
          goto LABEL_27;
        }
        if ( !v13 && v11 != a2 - 1 && !v11 )
        {
          if ( !*((_BYTE *)v10 + 70) && !*((_BYTE *)v10 + 69) )
            goto LABEL_29;
LABEL_27:
          v14 = 1;
          goto LABEL_29;
        }
      }
      v14 = (_BYTE)v10[11] & 1;
LABEL_29:
      if ( v26 != v14 )
        return 0;
      if ( ((_BYTE)v10[11] & 0xFE) != v25 )
        return 0;
      if ( *((_BYTE *)v10 + 60) )
        return 0;
      if ( !sub_101A02D0(v10) )
        return 0;
      v10 = (float *)*((_DWORD *)v10 + 7);
      if ( !v10 )
        return 0;
      if ( (a2 > 1 || a3 > 1) && fabs(v10[1] * v20 + *v10 * v19 + v10[2] * v21 + v23) > 5.0 )
        return 0;
      if ( ++v11 >= a2 )
      {
        v5 = a3;
        v7 = v22;
        v6 = v21;
        v8 = v23;
        v4 = v19;
        v9 = 5.0;
        v3 = v20;
        goto LABEL_39;
      }
    }
    if ( !*((_BYTE *)v10 + 70) && !*((_BYTE *)v10 + 71) )
    {
      v14 = 0;
      goto LABEL_29;
    }
    goto LABEL_27;
  }
LABEL_44:
  if ( a2 <= 1 && v5 <= 1 )
    return 1;
  v16 = v24;
  v17 = 0;
  if ( a2 <= 0 )
    return 1;
  while ( 1 )
  {
    v16 = (float *)*((_DWORD *)v16 + 7);
    if ( !v16 || fabs(v16[1] * v3 + *v16 * v4 + v16[2] * v6 + v8) > v9 )
      break;
    if ( ++v17 >= a2 )
      return 1;
  }
  return 0;
}
