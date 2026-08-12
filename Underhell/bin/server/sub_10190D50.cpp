int __thiscall sub_10190D50(char *this, int a2)
{
  char *v2; // edx
  int v3; // ebx
  _DWORD *v4; // edi
  int i; // esi
  int v6; // esi
  char *v7; // eax
  int *v8; // esi
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // esi
  int *v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  int v24; // eax
  int v25; // edi
  int v26; // ecx
  int v27; // edx
  int v28; // edx
  int v29; // eax
  int v30; // edi
  int v31; // ecx
  int v32; // edx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // edx
  int v38; // ecx
  int v39; // edx
  int v40; // edi
  int v41; // eax
  char **v42; // eax
  int j; // eax
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // edi
  int v48; // ecx
  int v49; // edx
  int v50; // edx
  int v51; // ecx
  int v52; // edx
  int v53; // edi
  int v54; // esi
  int v55; // eax
  int v56; // edi
  int v57; // ecx
  int v58; // edx
  int v59; // edx
  int v60; // ecx
  int v61; // edi
  int *v62; // esi
  int v63; // edi
  int result; // eax
  int v65; // ecx
  _DWORD *v66; // eax
  int v67; // [esp+Ch] [ebp-18h]
  float v68; // [esp+10h] [ebp-14h]
  int v69; // [esp+14h] [ebp-10h]
  int v70; // [esp+14h] [ebp-10h]
  int v71; // [esp+18h] [ebp-Ch]
  int v72; // [esp+18h] [ebp-Ch]
  _DWORD *v73; // [esp+1Ch] [ebp-8h]
  char *v74; // [esp+20h] [ebp-4h]

  v2 = (char *)a2;
  v74 = this;
  v3 = 0;
  v4 = (_DWORD *)(a2 + 524);
  do
  {
    for ( i = v4[3]; i != -1; i = *(_DWORD *)(v6 + *v4 + 8) )
    {
      v6 = 12 * i;
      v7 = *(char **)(v6 + *v4);
      if ( v7 != v2 && v7 != this )
      {
        sub_1018F770(v74, v7, v3);
        v2 = (char *)a2;
        this = v74;
      }
    }
    ++v3;
    v4 += 9;
  }
  while ( v3 < 4 );
  v8 = (int *)(this + 552);
  v71 = 4;
  do
  {
    v9 = *(v8 - 4);
    if ( v9 != -1 )
    {
      v10 = *(v8 - 7);
      while ( *(char **)(v10 + 12 * v9) != v2 )
      {
        v9 = *(_DWORD *)(v10 + 12 * v9 + 8);
        if ( v9 == -1 )
          goto LABEL_26;
      }
      if ( v9 >= 0 && v9 < *(v8 - 6) && v9 <= *v8 )
      {
        v11 = v10 + 12 * v9;
        if ( *(_DWORD *)(v11 + 4) != v9 )
        {
          v12 = *(_DWORD *)(v11 + 4);
          if ( v12 == -1 )
            *(v8 - 4) = *(_DWORD *)(v11 + 8);
          else
            *(_DWORD *)(v10 + 12 * v12 + 8) = *(_DWORD *)(v11 + 8);
          v13 = *(_DWORD *)(v11 + 8);
          if ( v13 == -1 )
            *(v8 - 3) = *(_DWORD *)(v11 + 4);
          else
            *(_DWORD *)(*(v8 - 7) + 12 * v13 + 4) = *(_DWORD *)(v11 + 4);
          *(_DWORD *)(v11 + 8) = v9;
          *(_DWORD *)(v11 + 4) = v9;
          --*(v8 - 1);
        }
      }
      *(_DWORD *)(*(v8 - 7) + 12 * v9 + 8) = *(v8 - 2);
      v2 = (char *)a2;
      *(v8 - 2) = v9;
    }
LABEL_26:
    v8 += 9;
    --v71;
  }
  while ( v71 );
  v14 = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v15 = dword_10632624;
    do
    {
      v16 = 12 * v14;
      v17 = *(_DWORD *)(v16 + v15);
      v69 = v16;
      if ( (char *)v17 != v74 && v17 != a2 )
      {
        v18 = (int *)(v17 + 524);
        v72 = 4;
        do
        {
          v19 = v18[3];
          if ( v19 != -1 )
          {
            v20 = *v18;
            while ( 1 )
            {
              v21 = 3 * v19;
              v22 = *(_DWORD *)(v20 + 4 * v21) == a2;
              v23 = v20 + 4 * v21;
              if ( v22 )
                break;
              v19 = *(_DWORD *)(v23 + 8);
              if ( v19 == -1 )
                goto LABEL_87;
            }
            v24 = v18[3];
            if ( v24 != -1 )
            {
              v25 = *v18;
              while ( *(_DWORD *)(v20 + 12 * v24) != a2 )
              {
                v24 = *(_DWORD *)(v20 + 12 * v24 + 8);
                if ( v24 == -1 )
                  goto LABEL_54;
              }
              if ( v24 >= 0 && v24 < v18[1] && v24 <= v18[7] )
              {
                v26 = v20 + 12 * v24;
                if ( *(_DWORD *)(v25 + 12 * v24 + 4) != v24 )
                {
                  v27 = *(_DWORD *)(v26 + 4);
                  if ( v27 == -1 )
                    v18[3] = *(_DWORD *)(v26 + 8);
                  else
                    *(_DWORD *)(v25 + 12 * v27 + 8) = *(_DWORD *)(v26 + 8);
                  v28 = *(_DWORD *)(v26 + 8);
                  if ( v28 == -1 )
                    v18[4] = *(_DWORD *)(v26 + 4);
                  else
                    *(_DWORD *)(*v18 + 12 * v28 + 4) = *(_DWORD *)(v26 + 4);
                  *(_DWORD *)(v26 + 8) = v24;
                  *(_DWORD *)(v26 + 4) = v24;
                  --v18[6];
                }
              }
              *(_DWORD *)(*v18 + 12 * v24 + 8) = v18[5];
              v18[5] = v24;
            }
LABEL_54:
            v29 = v18[3];
            if ( v29 != -1 )
            {
              v30 = *v18;
              while ( *(char **)(v30 + 12 * v29) != v74 )
              {
                v29 = *(_DWORD *)(v30 + 12 * v29 + 8);
                if ( v29 == -1 )
                  goto LABEL_71;
              }
              if ( v29 >= 0 && v29 < v18[1] && v29 <= v18[7] )
              {
                v31 = v30 + 12 * v29;
                if ( *(_DWORD *)(v31 + 4) != v29 )
                {
                  v32 = *(_DWORD *)(v31 + 4);
                  if ( v32 == -1 )
                    v18[3] = *(_DWORD *)(v31 + 8);
                  else
                    *(_DWORD *)(v30 + 12 * v32 + 8) = *(_DWORD *)(v31 + 8);
                  v33 = *(_DWORD *)(v31 + 8);
                  if ( v33 == -1 )
                    v18[4] = *(_DWORD *)(v31 + 4);
                  else
                    *(_DWORD *)(*v18 + 12 * v33 + 4) = *(_DWORD *)(v31 + 4);
                  *(_DWORD *)(v31 + 8) = v29;
                  *(_DWORD *)(v31 + 4) = v29;
                  --v18[6];
                }
              }
              *(_DWORD *)(*v18 + 12 * v29 + 8) = v18[5];
              v18[5] = v29;
            }
LABEL_71:
            v34 = sub_1018CED0(v18, 0);
            if ( v34 >= 0 && v34 < v18[1] && v34 <= v18[7] )
            {
              v35 = *v18 + 12 * v34;
              if ( *(_DWORD *)(v35 + 4) != v34 )
              {
                v36 = *(_DWORD *)(v35 + 4);
                if ( v36 == -1 )
                  v18[3] = *(_DWORD *)(v35 + 8);
                else
                  *(_DWORD *)(*v18 + 12 * v36 + 8) = *(_DWORD *)(v35 + 8);
                v37 = *(_DWORD *)(v35 + 8);
                if ( v37 == -1 )
                  v18[4] = *(_DWORD *)(v35 + 4);
                else
                  *(_DWORD *)(*v18 + 12 * v37 + 4) = *(_DWORD *)(v35 + 4);
                *(_DWORD *)(v35 + 8) = v34;
                *(_DWORD *)(v35 + 4) = v34;
                --v18[6];
              }
            }
            v38 = *v18;
            v39 = 12 * v34;
            *(_DWORD *)(v38 + v39 + 8) = -1;
            v40 = v18[4];
            *(_DWORD *)(v38 + v39 + 4) = v40;
            v18[4] = v34;
            if ( v40 == -1 )
              v18[3] = v34;
            else
              *(_DWORD *)(*v18 + 12 * v40 + 8) = v34;
            v41 = *v18;
            ++v18[6];
            v42 = (char **)(v39 + v41);
            if ( v42 )
              *v42 = v74;
          }
LABEL_87:
          v18 += 9;
          --v72;
        }
        while ( v72 );
        v15 = dword_10632624;
        v16 = v69;
      }
      v14 = *(_DWORD *)(v16 + v15 + 8);
    }
    while ( v14 != -1 );
  }
  v73 = (_DWORD *)(a2 + 668);
  v70 = 2;
  do
  {
    for ( j = v73[3]; j != -1; j = *(_DWORD *)(*v73 + v67 + 8) )
    {
      v44 = 12 * j;
      v45 = *(_DWORD *)(v44 + *v73);
      v67 = v44;
      v68 = (*(float *)(v45 + 20) + *(float *)(v45 + 8)) * 0.5;
      sub_1018F880((int *)v74, v45);
      if ( v68 >= (double)*((float *)v74 + 9) )
      {
        sub_1018F880((int *)v74, v45);
        v55 = sub_1018CED0((int *)v74 + 167, 0);
        if ( v55 >= 0 && v55 < *((_DWORD *)v74 + 168) && v55 <= *((_DWORD *)v74 + 174) )
        {
          v56 = *((_DWORD *)v74 + 167);
          v57 = v56 + 12 * v55;
          if ( *(_DWORD *)(v57 + 4) != v55 )
          {
            v58 = *(_DWORD *)(v57 + 4);
            if ( v58 == -1 )
              *((_DWORD *)v74 + 170) = *(_DWORD *)(v57 + 8);
            else
              *(_DWORD *)(v56 + 12 * v58 + 8) = *(_DWORD *)(v57 + 8);
            v59 = *(_DWORD *)(v57 + 8);
            if ( v59 == -1 )
              *((_DWORD *)v74 + 171) = *(_DWORD *)(v57 + 4);
            else
              *(_DWORD *)(*((_DWORD *)v74 + 167) + 12 * v59 + 4) = *(_DWORD *)(v57 + 4);
            *(_DWORD *)(v57 + 8) = v55;
            *(_DWORD *)(v57 + 4) = v55;
            --*((_DWORD *)v74 + 173);
          }
        }
        v60 = *((_DWORD *)v74 + 167);
        v52 = 12 * v55;
        *(_DWORD *)(v60 + v52 + 8) = -1;
        v61 = *((_DWORD *)v74 + 171);
        *(_DWORD *)(v60 + v52 + 4) = v61;
        *((_DWORD *)v74 + 171) = v55;
        if ( v61 == -1 )
          *((_DWORD *)v74 + 170) = v55;
        else
          *(_DWORD *)(*((_DWORD *)v74 + 167) + 12 * v61 + 8) = v55;
        ++*((_DWORD *)v74 + 173);
        v54 = *((_DWORD *)v74 + 167);
      }
      else
      {
        sub_1018F880((int *)v74, v45);
        v46 = sub_1018CED0((int *)v74 + 176, 0);
        if ( v46 >= 0 && v46 < *((_DWORD *)v74 + 177) && v46 <= *((_DWORD *)v74 + 183) )
        {
          v47 = *((_DWORD *)v74 + 176);
          v48 = v47 + 12 * v46;
          if ( *(_DWORD *)(v48 + 4) != v46 )
          {
            v49 = *(_DWORD *)(v48 + 4);
            if ( v49 == -1 )
              *((_DWORD *)v74 + 179) = *(_DWORD *)(v48 + 8);
            else
              *(_DWORD *)(v47 + 12 * v49 + 8) = *(_DWORD *)(v48 + 8);
            v50 = *(_DWORD *)(v48 + 8);
            if ( v50 == -1 )
              *((_DWORD *)v74 + 180) = *(_DWORD *)(v48 + 4);
            else
              *(_DWORD *)(*((_DWORD *)v74 + 176) + 12 * v50 + 4) = *(_DWORD *)(v48 + 4);
            *(_DWORD *)(v48 + 8) = v46;
            *(_DWORD *)(v48 + 4) = v46;
            --*((_DWORD *)v74 + 182);
          }
        }
        v51 = *((_DWORD *)v74 + 176);
        v52 = 12 * v46;
        *(_DWORD *)(v51 + v52 + 8) = -1;
        v53 = *((_DWORD *)v74 + 180);
        *(_DWORD *)(v51 + v52 + 4) = v53;
        *((_DWORD *)v74 + 180) = v46;
        if ( v53 == -1 )
        {
          ++*((_DWORD *)v74 + 182);
          *((_DWORD *)v74 + 179) = v46;
        }
        else
        {
          *(_DWORD *)(*((_DWORD *)v74 + 176) + 12 * v53 + 8) = v46;
          ++*((_DWORD *)v74 + 182);
        }
        v54 = *((_DWORD *)v74 + 176);
      }
      v62 = (int *)(v52 + v54);
      if ( v62 )
        *v62 = v45;
    }
    v73 += 9;
    --v70;
  }
  while ( v70 );
  v63 = dword_106B8370;
  for ( result = *(_DWORD *)(dword_106B8370 + 1212);
        result != -1;
        result = *(_DWORD *)(*(_DWORD *)(dword_106B8370 + 1200) + v65 + 8) )
  {
    v65 = 12 * result;
    v66 = *(_DWORD **)(12 * result + *(_DWORD *)(v63 + 1200));
    if ( v66[8] == a2 )
      v66[8] = v74;
    if ( v66[10] == a2 )
      v66[10] = v74;
    if ( v66[9] == a2 )
      v66[9] = v74;
    if ( v66[11] == a2 )
      v66[11] = v74;
    if ( v66[12] == a2 )
      v66[12] = v74;
    v63 = dword_106B8370;
  }
  return result;
}
