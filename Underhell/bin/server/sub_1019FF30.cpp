int __thiscall sub_1019FF30(float *this, float *a2)
{
  float *v2; // edi
  float *v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int *v14; // esi
  int v15; // ecx
  int v16; // edi
  float **v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  float v22; // eax
  int v23; // eax
  int result; // eax
  int v25; // [esp+8h] [ebp-18h]
  int v27; // [esp+10h] [ebp-10h]
  int v28; // [esp+14h] [ebp-Ch]
  int v29; // [esp+18h] [ebp-8h]
  int v30; // [esp+1Ch] [ebp-4h]

  v2 = a2;
  v3 = this;
  v4 = (int)((a2[1] - this[5]) / this[2]);
  v29 = v4;
  if ( v4 >= 0 )
  {
    v5 = *((_DWORD *)v3 + 3);
    if ( v4 >= v5 )
      v29 = v5 - 1;
  }
  else
  {
    v29 = 0;
  }
  v6 = (int)((a2[2] - v3[6]) / v3[2]);
  if ( v6 >= 0 )
  {
    v7 = *((_DWORD *)v3 + 4);
    if ( v6 >= v7 )
      v6 = v7 - 1;
  }
  else
  {
    v6 = 0;
  }
  v8 = (int)((a2[4] - v3[5]) / v3[2]);
  v30 = v8;
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)v3 + 3);
    if ( v8 >= v9 )
      v30 = v9 - 1;
  }
  else
  {
    v30 = 0;
  }
  v10 = (int)((a2[5] - v3[6]) / v3[2]);
  v28 = v10;
  if ( v10 >= 0 )
  {
    v11 = *((_DWORD *)v3 + 4);
    if ( v10 >= v11 )
      v28 = v11 - 1;
  }
  else
  {
    v28 = 0;
  }
  v27 = v6;
  if ( v6 <= v28 )
  {
    v12 = v30;
    v13 = v29;
    do
    {
      v25 = v13;
      if ( v13 <= v12 )
      {
        do
        {
          v14 = (int *)(*((_DWORD *)v3 + 1) + 36 * (v13 + v27 * *((_DWORD *)v3 + 3)));
          v15 = v14[3];
          if ( v15 != -1 )
          {
            v16 = *v14;
            while ( 1 )
            {
              v17 = (float **)(v16 + 12 * v15);
              if ( *v17 == a2 )
                break;
              v15 = (int)v17[2];
              if ( v15 == -1 )
                goto LABEL_37;
            }
            if ( v15 >= 0 && v15 < v14[1] && v15 <= v14[7] )
            {
              v18 = v16 + 12 * v15;
              if ( *(_DWORD *)(v18 + 4) != v15 )
              {
                v19 = *(_DWORD *)(v18 + 4);
                if ( v19 == -1 )
                {
                  v14[3] = *(_DWORD *)(v18 + 8);
                }
                else
                {
                  *(_DWORD *)(v16 + 12 * v19 + 8) = *(_DWORD *)(v18 + 8);
                  v3 = this;
                }
                v20 = *(_DWORD *)(v18 + 8);
                if ( v20 == -1 )
                {
                  v14[4] = *(_DWORD *)(v18 + 4);
                }
                else
                {
                  *(_DWORD *)(*v14 + 12 * v20 + 4) = *(_DWORD *)(v18 + 4);
                  v3 = this;
                }
                *(_DWORD *)(v18 + 8) = v15;
                *(_DWORD *)(v18 + 4) = v15;
                --v14[6];
              }
            }
            *(_DWORD *)(*v14 + 12 * v15 + 8) = v14[5];
            v14[5] = v15;
          }
LABEL_37:
          v12 = v30;
          v13 = v25 + 1;
          v25 = v13;
        }
        while ( v13 <= v30 );
        v13 = v29;
        v2 = a2;
      }
      ++v27;
    }
    while ( v27 <= v28 );
  }
  v21 = *((_DWORD *)v2 + 198);
  if ( v21 )
  {
    *(float *)(v21 + 796) = v2[199];
  }
  else
  {
    v22 = v2[199];
    v3[(unsigned __int8)*(_DWORD *)v2 + 9] = v22;
    if ( v22 != 0.0 )
      *(_DWORD *)(LODWORD(v22) + 792) = 0;
  }
  v23 = *((_DWORD *)v2 + 199);
  if ( v23 )
    *(float *)(v23 + 792) = v2[198];
  result = 256;
  if ( ((_WORD)v2[10] & 0x100) != 0 )
    result = sub_1019F330((int *)v3);
  --*((_DWORD *)v3 + 7);
  return result;
}
