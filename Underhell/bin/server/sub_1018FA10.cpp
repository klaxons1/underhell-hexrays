int __thiscall sub_1018FA10(int *this, int a2, int a3)
{
  double v4; // st7
  int *v5; // edi
  int v6; // ebx
  int *v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // ecx
  int v18; // ebx
  _DWORD *v19; // ecx
  int result; // eax
  _DWORD *i; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edi
  float *v25; // ebx
  int v26; // edx
  int j; // ecx
  int k; // eax
  int v29; // edx
  int v30; // ecx
  float v31; // [esp+Ch] [ebp-1Ch] BYREF
  float v32; // [esp+10h] [ebp-18h]
  float v33; // [esp+14h] [ebp-14h]
  int v34; // [esp+18h] [ebp-10h]
  int v35; // [esp+1Ch] [ebp-Ch]
  int *v36; // [esp+20h] [ebp-8h]
  int *v37; // [esp+24h] [ebp-4h]
  int v38; // [esp+30h] [ebp+8h]

  v4 = *(float *)(a2 + 4) + *(float *)(a2 + 16);
  v5 = this;
  v36 = this;
  *(float *)(a2 + 28) = v4 * 0.5;
  *(float *)(a2 + 32) = (*(float *)(a2 + 20) + *(float *)(a2 + 8)) * 0.5;
  *(float *)(a2 + 36) = 0.5 * (*(float *)(a2 + 24) + *(float *)(a2 + 12));
  v31 = *(float *)(a2 + 16);
  v32 = *(float *)(a2 + 8);
  v33 = 0.0;
  *(float *)(a2 + 52) = sub_1018AD70((float *)this, &v31);
  v31 = *(float *)(a2 + 4);
  v32 = *(float *)(a2 + 20);
  v33 = 0.0;
  *(float *)(a2 + 56) = sub_1018AD70((float *)v5, &v31);
  v6 = 0;
  v7 = v5 + 131;
  v38 = 0;
  v37 = v5 + 131;
  do
  {
    if ( v6 != a3 )
    {
      v34 = v7[6];
      v35 = 0;
      if ( v34 > 0 )
      {
        do
        {
          v8 = v7[3];
          v9 = v35;
          if ( v8 == -1 )
          {
LABEL_7:
            v10 = 0;
          }
          else
          {
            while ( v9 )
            {
              v8 = *(_DWORD *)(*v7 + 12 * v8 + 8);
              --v9;
              if ( v8 == -1 )
                goto LABEL_7;
            }
            v10 = *(_DWORD *)(*v7 + 12 * v8);
          }
          switch ( v6 )
          {
            case 0:
            case 2:
              if ( *(float *)(a2 + 16) > (double)*(float *)(v10 + 4)
                && *(float *)(a2 + 4) < (double)*(float *)(v10 + 16) )
              {
                goto LABEL_15;
              }
              break;
            case 1:
            case 3:
              if ( *(float *)(a2 + 20) > (double)*(float *)(v10 + 8)
                && *(float *)(a2 + 8) < (double)*(float *)(v10 + 20) )
              {
LABEL_15:
                sub_1018F770((char *)a2, (char *)v10, v6);
                v11 = sub_1018AB40(v6);
                if ( sub_1018D060((int *)v10, v36, v11) )
                  sub_1018F770((char *)v10, (char *)a2, v11);
                v7 = v37;
                v6 = v38;
              }
              break;
            default:
              break;
          }
          ++v35;
        }
        while ( v35 < v34 );
        v5 = v36;
      }
    }
    ++v6;
    v7 += 9;
    v38 = v6;
    v37 = v7;
  }
  while ( v6 < 4 );
  v12 = sub_1018CED0(&dword_10632624, 0);
  if ( v12 >= 0 && v12 < dword_10632628 && v12 <= dword_10632640 )
  {
    v13 = dword_10632624 + 12 * v12;
    if ( *(_DWORD *)(v13 + 4) != v12 )
    {
      v14 = *(_DWORD *)(v13 + 4);
      if ( v14 == -1 )
      {
        dword_10632630 = *(_DWORD *)(v13 + 8);
      }
      else
      {
        *(_DWORD *)(dword_10632624 + 12 * v14 + 8) = *(_DWORD *)(v13 + 8);
        v5 = v36;
      }
      v15 = *(_DWORD *)(v13 + 8);
      if ( v15 == -1 )
      {
        dword_10632634 = *(_DWORD *)(v13 + 4);
      }
      else
      {
        *(_DWORD *)(dword_10632624 + 12 * v15 + 4) = *(_DWORD *)(v13 + 4);
        v5 = v36;
      }
      *(_DWORD *)(v13 + 8) = v12;
      *(_DWORD *)(v13 + 4) = v12;
      --dword_1063263C;
    }
  }
  v16 = dword_10632624;
  v17 = 12 * v12;
  *(_DWORD *)(dword_10632624 + v17 + 8) = -1;
  v18 = dword_10632634;
  *(_DWORD *)(v16 + v17 + 4) = dword_10632634;
  dword_10632634 = v12;
  if ( v18 == -1 )
    dword_10632630 = v12;
  else
    *(_DWORD *)(dword_10632624 + 12 * v18 + 8) = v12;
  ++dword_1063263C;
  v19 = (_DWORD *)(dword_10632624 + v17);
  if ( v19 )
    *v19 = a2;
  sub_1019FC80(a2);
  result = 0;
  for ( i = v5 + 185; !*i; ++i )
  {
    if ( ++result >= 4 )
      return result;
  }
  *(_DWORD *)(a2 + 740) = v5[185];
  *(_DWORD *)(a2 + 744) = v5[186];
  *(_DWORD *)(a2 + 748) = v5[187];
  v22 = 4;
  *(_DWORD *)(a2 + 752) = v5[188];
  v23 = 4;
  v24 = 4;
  switch ( a3 )
  {
    case 0:
      v22 = 2;
      v24 = 1;
      goto LABEL_46;
    case 1:
      v22 = 3;
      v23 = 1;
      v24 = 2;
      break;
    case 2:
      v22 = 0;
      v23 = 3;
      v24 = 2;
      break;
    case 3:
      v22 = 1;
      v24 = 3;
LABEL_46:
      v23 = 0;
      break;
    default:
      break;
  }
  while ( 1 )
  {
    v25 = *(float **)(a2 + 4 * v23 + 740);
    if ( *v25 + 12.5 >= *(float *)(a2 + 4)
      && *v25 - 12.5 <= *(float *)(a2 + 16)
      && v25[1] + 12.5 >= *(float *)(a2 + 8)
      && v25[1] - 12.5 <= *(float *)(a2 + 20) )
    {
      break;
    }
    *(float *)(a2 + 4 * v23 + 740) = v25[v22 + 6];
    *(_DWORD *)(a2 + 4 * v24 + 740) = *(_DWORD *)(*(_DWORD *)(a2 + 4 * v24 + 740) + 4 * v22 + 24);
  }
  v26 = *(_DWORD *)(a2 + 740);
  for ( j = *(_DWORD *)(a2 + 744); v26 != *(_DWORD *)(a2 + 752); j = *(_DWORD *)(j + 32) )
  {
    for ( k = v26; k != j; k = *(_DWORD *)(k + 28) )
      *(_DWORD *)(k + 64) = a2;
    v26 = *(_DWORD *)(v26 + 32);
  }
  v29 = *(_DWORD *)(a2 + 740);
  result = *(_DWORD *)(a2 + 752);
  *(float *)(a2 + 52) = *(float *)(*(_DWORD *)(a2 + 744) + 8);
  v30 = *(_DWORD *)(a2 + 748);
  *(float *)(a2 + 12) = *(float *)(v29 + 8);
  *(float *)(a2 + 56) = *(float *)(result + 8);
  *(float *)(a2 + 24) = *(float *)(v30 + 8);
  return result;
}
