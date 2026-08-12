void __thiscall sub_1019AE30(_DWORD *this)
{
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  bool v4; // zf
  int v5; // ebx
  int v6; // esi
  int *v7; // eax
  int *v8; // edi
  int v9; // edx
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  _DWORD *v13; // ecx
  int i; // eax
  int v15; // esi
  int v16; // edi
  int j; // eax
  int v18; // edi
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // edi
  int v26; // edx
  _DWORD *v27; // ecx
  int v28; // edi
  int k; // eax
  int v30; // eax
  int *v31; // esi
  int v32; // ebx
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // edx
  _DWORD *v37; // esi
  int v38; // [esp+Ch] [ebp-3Ch] BYREF
  int v39; // [esp+10h] [ebp-38h]
  int v40; // [esp+14h] [ebp-34h]
  int v41; // [esp+18h] [ebp-30h]
  int v42; // [esp+1Ch] [ebp-2Ch]
  int v43; // [esp+20h] [ebp-28h]
  int v44; // [esp+24h] [ebp-24h]
  int v45; // [esp+28h] [ebp-20h]
  int v46; // [esp+2Ch] [ebp-1Ch]
  int v47; // [esp+30h] [ebp-18h]
  _DWORD *v48; // [esp+34h] [ebp-14h]
  int v49; // [esp+38h] [ebp-10h]
  int *v50; // [esp+3Ch] [ebp-Ch]
  int v51; // [esp+40h] [ebp-8h]
  char v52; // [esp+47h] [ebp-1h]

  v1 = dword_10632630;
  v48 = this;
  v2 = -1;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v45 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = 0;
  v46 = 0;
  if ( dword_10632630 != -1 )
  {
    do
    {
      v47 = 12 * v1;
      v3 = *(_DWORD *)(12 * v1 + dword_10632624);
      v4 = (*(_BYTE *)(v3 + 40) & 2) == 0;
      v50 = (int *)v3;
      if ( !v4 )
      {
        v5 = 0;
        v6 = 0;
        v49 = 0;
        v51 = 0;
        v52 = 0;
        v7 = (int *)(v3 + 692);
        do
        {
          if ( v7 != (int *)24 && *v7 )
          {
            if ( *v7 > 1 || v51 && v51 != *(_DWORD *)(*(v7 - 6) + 12 * *(v7 - 3)) )
              goto LABEL_60;
            v51 = *(_DWORD *)(*(v7 - 6) + 12 * *(v7 - 3));
          }
          ++v6;
          v7 += 9;
        }
        while ( v6 < 2 );
        v8 = v50 + 131;
        v9 = 4;
        do
        {
          if ( v8 )
          {
            if ( v8[6] )
            {
              v10 = v8[3];
              if ( v10 != -1 )
              {
                v11 = *v8;
                do
                {
                  v12 = (_DWORD *)(v11 + 12 * v10);
                  if ( (*(_BYTE *)(*v12 + 40) & 2) == 0 )
                  {
                    v5 = v49;
                    if ( v51 || v49 && v49 != *v12 )
                    {
                      v52 = 1;
                      break;
                    }
                    v5 = *v12;
                    v49 = *v12;
                  }
                  v10 = v12[2];
                }
                while ( v10 != -1 );
              }
            }
          }
          v8 += 9;
          --v9;
        }
        while ( v9 );
        if ( !v52 )
        {
          v13 = v48;
          for ( i = v48[303]; i != -1; i = *(_DWORD *)(v15 + v48[300] + 8) )
          {
            v15 = 12 * i;
            v16 = *(_DWORD *)(12 * i + v13[300]);
            if ( v16 && (unsigned __int8)sub_1019C1D0(v50, 2) )
            {
              if ( v5 )
                goto LABEL_60;
              if ( v16 != v51 )
              {
                if ( v51 )
                  goto LABEL_60;
                v51 = v16;
              }
            }
            v13 = v48;
          }
          for ( j = dword_10632630; j != -1; j = *(_DWORD *)(v18 + dword_10632624 + 8) )
          {
            v18 = 12 * j;
            v19 = *(_DWORD *)(12 * j + dword_10632624);
            if ( v19 && (*(_BYTE *)(v19 + 40) & 2) == 0 && sub_1018D060((int *)v19, v50, 4) )
            {
              if ( v51 )
                goto LABEL_60;
              if ( v19 != v5 )
              {
                if ( v5 )
                  goto LABEL_60;
                v5 = v19;
              }
            }
          }
          v20 = sub_1018CED0(&v38, 0);
          v21 = v38;
          if ( v20 < 0 || v20 >= v39 || v20 > v45 || (v22 = v38 + 12 * v20, *(_DWORD *)(v22 + 4) == v20) )
          {
            v26 = v42;
          }
          else
          {
            v23 = *(_DWORD *)(v22 + 4);
            if ( v23 == -1 )
              v41 = *(_DWORD *)(v22 + 8);
            else
              *(_DWORD *)(v38 + 12 * v23 + 8) = *(_DWORD *)(v22 + 8);
            v24 = *(_DWORD *)(v22 + 8);
            if ( v24 == -1 )
            {
              v26 = *(_DWORD *)(v22 + 4);
              --v44;
            }
            else
            {
              v25 = *(_DWORD *)(v22 + 4);
              --v44;
              *(_DWORD *)(v21 + 12 * v24 + 4) = v25;
              v26 = v42;
            }
            *(_DWORD *)(v22 + 8) = v20;
            *(_DWORD *)(v22 + 4) = v20;
          }
          v27 = (_DWORD *)(v21 + 12 * v20);
          v27[2] = -1;
          v27[1] = v26;
          v42 = v20;
          if ( v26 == -1 )
            v41 = v20;
          else
            *(_DWORD *)(v21 + 12 * v26 + 8) = v20;
          ++v44;
          if ( v27 )
            *v27 = v50;
        }
      }
LABEL_60:
      v1 = *(_DWORD *)(v47 + dword_10632624 + 8);
    }
    while ( v1 != -1 );
    v2 = v41;
  }
  v28 = dword_10632624;
  for ( k = v2; k != -1; k = *(_DWORD *)(v32 + 8) )
  {
    v30 = 3 * k;
    v31 = *(int **)(v38 + 4 * v30);
    v32 = v38 + 4 * v30;
    v33 = dword_10632630;
    v47 = v32;
    if ( dword_10632630 != -1 )
    {
      while ( *(int **)(v28 + 12 * v33) != v31 )
      {
        v33 = *(_DWORD *)(v28 + 12 * v33 + 8);
        if ( v33 == -1 )
          goto LABEL_80;
      }
      if ( v33 != -1 )
      {
        if ( v33 >= 0 && v33 < dword_10632628 && v33 <= dword_10632640 )
        {
          v34 = v28 + 12 * v33;
          if ( *(_DWORD *)(v34 + 4) != v33 )
          {
            v35 = *(_DWORD *)(v34 + 4);
            if ( v35 == -1 )
            {
              dword_10632630 = *(_DWORD *)(v34 + 8);
            }
            else
            {
              *(_DWORD *)(v28 + 12 * v35 + 8) = *(_DWORD *)(v34 + 8);
              v28 = dword_10632624;
            }
            v36 = *(_DWORD *)(v34 + 8);
            if ( v36 == -1 )
              dword_10632634 = *(_DWORD *)(v34 + 4);
            else
              *(_DWORD *)(v28 + 12 * v36 + 4) = *(_DWORD *)(v34 + 4);
            v32 = v47;
            *(_DWORD *)(v34 + 8) = v33;
            *(_DWORD *)(v34 + 4) = v33;
            --dword_1063263C;
            v28 = dword_10632624;
          }
        }
        *(_DWORD *)(v28 + 12 * v33 + 8) = dword_10632638;
        v28 = dword_10632624;
        dword_10632638 = v33;
      }
    }
LABEL_80:
    if ( v31 )
    {
      sub_10190B20(v31);
      sub_10184660((int)v31);
      v28 = dword_10632624;
    }
  }
  v37 = v48;
  sub_1019EAB0(v48);
  sub_10191EB0(v37, 0);
  v37[275] = 4;
  sub_1018EC70(&v38);
  if ( v40 >= 0 )
  {
    if ( v38 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v38);
  }
}
