unsigned int __thiscall sub_101964D0(_DWORD *this, int a2, unsigned int a3)
{
  int v3; // esi
  void (__thiscall *v5)(_DWORD, _DWORD, _DWORD, _DWORD); // edx
  void (__thiscall ***v6)(_DWORD, char *, int, int); // ecx
  int *v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  float *v17; // eax
  bool v18; // zf
  int *v19; // edi
  int v20; // ebx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // edx
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int *v29; // eax
  int *v30; // edi
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  bool v34; // bl
  int v35; // ebx
  int v36; // edx
  int v37; // ecx
  int v38; // edx
  int v39; // ebx
  int v40; // eax
  int *v41; // eax
  _BYTE *v42; // edi
  int v43; // ebx
  _DWORD *v44; // edi
  _DWORD *v45; // eax
  unsigned int result; // eax
  int v47; // edi
  int *v48; // eax
  int v49; // ecx
  int *v50; // ebx
  int *v51; // edi
  int v52; // eax
  int v53; // ebx
  int v54; // ecx
  int v55; // edx
  int v56; // edx
  int v57; // ecx
  int v58; // ebx
  int v59; // edx
  int v60; // eax
  float *v61; // eax
  _DWORD *v62; // edi
  int v63; // eax
  int v64; // ecx
  int v65; // ecx
  int v66; // edx
  int v67; // edx
  int v68; // ecx
  int v69; // edx
  int **v70; // edi
  unsigned int v71; // ebx
  int v72; // eax
  _DWORD *v73; // edi
  int *v74; // edi
  int v75; // eax
  int v76; // ecx
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // edx
  int v81; // ecx
  bool v82; // bl
  int v83; // ebx
  int v84; // edx
  int v85; // ecx
  int v86; // edx
  int v87; // ebx
  int v88; // eax
  int *v89; // eax
  _DWORD *v90; // edi
  int v91; // ebx
  char v92[8]; // [esp+Ch] [ebp-84h] BYREF
  char v93[8]; // [esp+14h] [ebp-7Ch] BYREF
  char v94[12]; // [esp+1Ch] [ebp-74h] BYREF
  char v95[12]; // [esp+28h] [ebp-68h] BYREF
  _DWORD v96[2]; // [esp+34h] [ebp-5Ch] BYREF
  int v97; // [esp+3Ch] [ebp-54h]
  int v98; // [esp+40h] [ebp-50h]
  int v99; // [esp+44h] [ebp-4Ch]
  int v100; // [esp+48h] [ebp-48h]
  int v101; // [esp+4Ch] [ebp-44h]
  int v102; // [esp+50h] [ebp-40h]
  int v103; // [esp+54h] [ebp-3Ch]
  unsigned __int16 v104; // [esp+58h] [ebp-38h] BYREF
  float v105; // [esp+5Ch] [ebp-34h] BYREF
  float v106; // [esp+60h] [ebp-30h]
  float v107; // [esp+64h] [ebp-2Ch] BYREF
  unsigned __int8 v108; // [esp+6Bh] [ebp-25h] BYREF
  unsigned int v109; // [esp+6Ch] [ebp-24h] BYREF
  int *v110; // [esp+70h] [ebp-20h]
  _DWORD *v111; // [esp+74h] [ebp-1Ch]
  unsigned __int8 v112; // [esp+7Bh] [ebp-15h] BYREF
  int i; // [esp+7Ch] [ebp-14h]
  int v114; // [esp+80h] [ebp-10h] BYREF
  unsigned __int8 v115; // [esp+87h] [ebp-9h] BYREF
  int v116; // [esp+88h] [ebp-8h]
  unsigned __int8 v117; // [esp+8Fh] [ebp-1h] BYREF

  v3 = a2;
  v5 = **(void (__thiscall ***)(_DWORD, _DWORD, _DWORD, _DWORD))(dword_106B31D8 + 4);
  v111 = this;
  v5(dword_106B31D8 + 4, this, 4, a2);
  if ( *this >= (unsigned int)dword_1063261C )
    dword_1063261C = *this + 1;
  v6 = (void (__thiscall ***)(_DWORD, char *, int, int))(dword_106B31D8 + 4);
  if ( a3 > 8 )
  {
    (**v6)(v6, (char *)this + 40, 2, v3);
  }
  else
  {
    v117 = 0;
    (**v6)(v6, (char *)&v117, 1, v3);
    *((_WORD *)this + 20) = v117;
  }
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 1), 24, v3);
  *((float *)this + 7) = (*((float *)this + 4) + *((float *)this + 1)) * 0.5;
  *((float *)this + 8) = (*((float *)this + 5) + *((float *)this + 2)) * 0.5;
  *((float *)this + 9) = 0.5 * (*((float *)this + 6) + *((float *)this + 3));
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 13), 4, v3);
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 14), 4, v3);
  sub_1018B920((int)this);
  v7 = this + 135;
  v110 = v7;
  v116 = 4;
  do
  {
    (**(void (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v114, 4, v3);
    for ( i = 0; i < (unsigned int)v114; ++i )
    {
      (**(void (__thiscall ***)(int, float *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v107, 4, v3);
      if ( LODWORD(v107) != *v111 )
      {
        v8 = sub_1018CED0(v7 - 4, 0);
        if ( v8 >= 0 && v8 < *(v7 - 3) && v8 <= v7[3] )
        {
          v9 = *(v7 - 4);
          v10 = v9 + 12 * v8;
          if ( *(_DWORD *)(v10 + 4) != v8 )
          {
            v11 = *(_DWORD *)(v10 + 4);
            if ( v11 == -1 )
            {
              *(v7 - 1) = *(_DWORD *)(v10 + 8);
            }
            else
            {
              *(_DWORD *)(v9 + 12 * v11 + 8) = *(_DWORD *)(v10 + 8);
              v7 = v110;
            }
            v12 = *(_DWORD *)(v10 + 8);
            if ( v12 == -1 )
            {
              *v7 = *(_DWORD *)(v10 + 4);
            }
            else
            {
              *(_DWORD *)(*(v7 - 4) + 12 * v12 + 4) = *(_DWORD *)(v10 + 4);
              v7 = v110;
            }
            *(_DWORD *)(v10 + 8) = v8;
            *(_DWORD *)(v10 + 4) = v8;
            --v7[2];
          }
        }
        v13 = *(v7 - 4);
        v14 = 12 * v8;
        *(_DWORD *)(v13 + v14 + 8) = -1;
        v15 = *v7;
        *(_DWORD *)(v13 + v14 + 4) = *v7;
        *v7 = v8;
        if ( v15 == -1 )
          *(v7 - 1) = v8;
        else
          *(_DWORD *)(*(v7 - 4) + 12 * v15 + 8) = v8;
        v16 = *(v7 - 4);
        ++v7[2];
        v17 = (float *)(v14 + v16);
        if ( v17 )
          *v17 = v107;
      }
    }
    v7 += 9;
    v18 = v116-- == 1;
    v110 = v7;
  }
  while ( !v18 );
  (**(void (__thiscall ***)(int, char *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (char *)&a2 + 3, 1, v3);
  if ( a3 == 1 )
  {
    i = 0;
    if ( HIBYTE(a2) )
    {
      v19 = v111;
      do
      {
        (**(void (__thiscall ***)(int, float *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v105, 12, v3);
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B8370 + 4))(dword_106B8370);
        *(float *)(v20 + 4) = v105;
        *(float *)(v20 + 8) = v106;
        v114 = v20;
        *(float *)(v20 + 12) = v107;
        *(_BYTE *)(v20 + 28) |= 1u;
        v21 = sub_1018CED0(v19 + 21, 0);
        if ( v21 >= 0 && v21 < v19[22] && v21 <= v19[28] )
        {
          v22 = v19[21];
          v18 = *(_DWORD *)(v22 + 12 * v21 + 4) == v21;
          v23 = v22 + 12 * v21;
          v116 = v23;
          if ( !v18 )
          {
            v24 = *(_DWORD *)(v23 + 4);
            if ( v24 == -1 )
            {
              v19[24] = *(_DWORD *)(v23 + 8);
            }
            else
            {
              *(_DWORD *)(v19[21] + 12 * v24 + 8) = *(_DWORD *)(v23 + 8);
              v23 = v116;
              v20 = v114;
            }
            v25 = *(_DWORD *)(v23 + 8);
            if ( v25 == -1 )
            {
              v19[25] = *(_DWORD *)(v23 + 4);
            }
            else
            {
              *(_DWORD *)(v19[21] + 12 * v25 + 4) = *(_DWORD *)(v23 + 4);
              v23 = v116;
              v20 = v114;
            }
            *(_DWORD *)(v23 + 8) = v21;
            *(_DWORD *)(v23 + 4) = v21;
            --v19[27];
          }
        }
        v26 = 12 * v21 + v19[21];
        *(_DWORD *)(v26 + 8) = -1;
        v116 = 12 * v21;
        v27 = v19[25];
        *(_DWORD *)(v26 + 4) = v27;
        v19[25] = v21;
        if ( v27 == -1 )
          v19[24] = v21;
        else
          *(_DWORD *)(v19[21] + 12 * v27 + 8) = v21;
        v28 = v19[21];
        ++v19[27];
        v29 = (int *)(v116 + v28);
        if ( v29 )
          *v29 = v20;
        ++i;
      }
      while ( i < HIBYTE(a2) );
    }
  }
  else
  {
    v114 = 0;
    if ( HIBYTE(a2) )
    {
      v30 = v111;
      do
      {
        i = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B8370 + 4))(dword_106B8370);
        sub_1019DBA0(v3, a3);
        v31 = sub_1018CED0(v30 + 21, 0);
        if ( v31 >= 0 && v31 < v30[22] && v31 <= v30[28] )
        {
          v32 = v30[21];
          v33 = v32 + 12 * v31;
          v34 = *(_DWORD *)(v33 + 4) != v31;
          v116 = v33;
          if ( v34 )
          {
            v35 = *(_DWORD *)(v33 + 4);
            if ( v35 == -1 )
            {
              v30[24] = *(_DWORD *)(v33 + 8);
            }
            else
            {
              *(_DWORD *)(v32 + 12 * v35 + 8) = *(_DWORD *)(v33 + 8);
              v33 = v116;
            }
            v36 = *(_DWORD *)(v33 + 8);
            if ( v36 == -1 )
            {
              v30[25] = *(_DWORD *)(v33 + 4);
            }
            else
            {
              *(_DWORD *)(v30[21] + 12 * v36 + 4) = *(_DWORD *)(v33 + 4);
              v33 = v116;
            }
            *(_DWORD *)(v33 + 8) = v31;
            *(_DWORD *)(v33 + 4) = v31;
            --v30[27];
          }
        }
        v37 = v30[21];
        v38 = 12 * v31;
        *(_DWORD *)(v37 + v38 + 8) = -1;
        v39 = v30[25];
        *(_DWORD *)(v37 + v38 + 4) = v39;
        v30[25] = v31;
        if ( v39 == -1 )
          v30[24] = v31;
        else
          *(_DWORD *)(v30[21] + 12 * v39 + 8) = v31;
        v40 = v30[21];
        ++v30[27];
        v41 = (int *)(v38 + v40);
        if ( v41 )
          *v41 = i;
        ++v114;
      }
      while ( v114 < HIBYTE(a2) );
    }
  }
  v42 = v111 + 119;
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(v111 + 119), 1, v3);
  v43 = 0;
  if ( *v42 )
  {
    v44 = v111 + 40;
    do
    {
      (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(v44 - 1), 4, v3);
      (**(void (__thiscall ***)(int, _DWORD *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, v44, 4, v3);
      (**(void (__thiscall ***)(int, unsigned __int8 *, int, int))(dword_106B31D8 + 4))(
        dword_106B31D8 + 4,
        &v115,
        1,
        v3);
      v44[1] = v115;
      (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(v44 + 2), 4, v3);
      (**(void (__thiscall ***)(int, unsigned __int8 *, int, int))(dword_106B31D8 + 4))(
        dword_106B31D8 + 4,
        &v115,
        1,
        v3);
      v45 = v111;
      v44[3] = v115;
      ++v43;
      v44 += 5;
    }
    while ( v43 < *((unsigned __int8 *)v45 + 476) );
  }
  result = (**(int (__thiscall ***)(int, unsigned int *, int, int))(dword_106B31D8 + 4))(
             dword_106B31D8 + 4,
             &v109,
             4,
             v3);
  if ( a3 >= 3 )
  {
    i = 0;
    if ( v109 )
    {
      do
      {
        v48 = (int *)sub_10184390(76);
        if ( v48 )
        {
          v48[10] = 0;
          v48[11] = 0;
          v48[12] = 0;
          v48[17] = -1;
          v48[13] = -1;
          v48[14] = -1;
          v48[15] = -1;
          v49 = v48[10];
          v48[16] = 0;
          v48[18] = v49;
          v50 = v48;
          v110 = v48;
        }
        else
        {
          v50 = 0;
          v110 = 0;
        }
        (**(void (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, v50, 4, v3);
        (**(void (__thiscall ***)(int, unsigned __int8 *, int, int))(dword_106B31D8 + 4))(
          dword_106B31D8 + 4,
          &v117,
          1,
          v3);
        v50[1] = v117;
        (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(v50 + 2), 4, v3);
        (**(void (__thiscall ***)(int, unsigned __int8 *, int, int))(dword_106B31D8 + 4))(
          dword_106B31D8 + 4,
          &v117,
          1,
          v3);
        v50[3] = v117;
        (**(void (__thiscall ***)(int, unsigned __int8 *, int, int))(dword_106B31D8 + 4))(
          dword_106B31D8 + 4,
          &v112,
          1,
          v3);
        v114 = 0;
        if ( v112 )
        {
          v51 = v50 + 10;
          do
          {
            (**(void (__thiscall ***)(int, float *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v107, 4, v3);
            (**(void (__thiscall ***)(int, unsigned __int8 *, int, int))(dword_106B31D8 + 4))(
              dword_106B31D8 + 4,
              &v108,
              1,
              v3);
            v116 = v108;
            v106 = (double)v108 * 0.0039215689;
            v52 = sub_1018CDE0(v51, 0);
            if ( v52 >= 0 && v52 < v51[1] && v52 <= v51[7] )
            {
              v53 = *v51;
              v54 = *v51 + 16 * v52;
              v18 = *(_DWORD *)(v54 + 8) == v52;
              v116 = v54;
              if ( !v18 )
              {
                v55 = *(_DWORD *)(v54 + 8);
                if ( v55 == -1 )
                {
                  v51[3] = *(_DWORD *)(v54 + 12);
                }
                else
                {
                  *(_DWORD *)(v53 + 16 * v55 + 12) = *(_DWORD *)(v54 + 12);
                  v54 = v116;
                }
                v56 = *(_DWORD *)(v54 + 12);
                if ( v56 == -1 )
                {
                  v51[4] = *(_DWORD *)(v54 + 8);
                }
                else
                {
                  *(_DWORD *)(*v51 + 16 * v56 + 8) = *(_DWORD *)(v54 + 8);
                  v54 = v116;
                }
                *(_DWORD *)(v54 + 12) = v52;
                *(_DWORD *)(v54 + 8) = v52;
                --v51[6];
              }
            }
            v57 = *v51;
            v58 = 16 * v52;
            *(_DWORD *)(v57 + v58 + 12) = -1;
            v59 = v51[4];
            *(_DWORD *)(v57 + v58 + 8) = v59;
            v51[4] = v52;
            if ( v59 == -1 )
              v51[3] = v52;
            else
              *(_DWORD *)(*v51 + 16 * v59 + 12) = v52;
            v60 = *v51;
            ++v51[6];
            v61 = (float *)(v58 + v60);
            if ( v61 )
            {
              *v61 = v106;
              v61[1] = v107;
            }
            ++v114;
          }
          while ( v114 < v112 );
          v50 = v110;
        }
        v62 = v111;
        v63 = sub_1018CED0(v111 + 30, 0);
        if ( v63 >= 0 && v63 < v62[31] && v63 <= v62[37] )
        {
          v64 = v62[30];
          v18 = *(_DWORD *)(v64 + 12 * v63 + 4) == v63;
          v65 = v64 + 12 * v63;
          v116 = v65;
          if ( !v18 )
          {
            v66 = *(_DWORD *)(v65 + 4);
            if ( v66 == -1 )
            {
              v62[33] = *(_DWORD *)(v65 + 8);
            }
            else
            {
              *(_DWORD *)(v62[30] + 12 * v66 + 8) = *(_DWORD *)(v65 + 8);
              v65 = v116;
              v50 = v110;
            }
            v67 = *(_DWORD *)(v65 + 8);
            if ( v67 == -1 )
            {
              v62[34] = *(_DWORD *)(v65 + 4);
            }
            else
            {
              *(_DWORD *)(v62[30] + 12 * v67 + 4) = *(_DWORD *)(v65 + 4);
              v65 = v116;
              v50 = v110;
            }
            *(_DWORD *)(v65 + 8) = v63;
            *(_DWORD *)(v65 + 4) = v63;
            --v62[36];
          }
        }
        v68 = 12 * v63 + v62[30];
        *(_DWORD *)(v68 + 8) = -1;
        v116 = 12 * v63;
        v69 = v62[34];
        *(_DWORD *)(v68 + 4) = v69;
        v62[34] = v63;
        if ( v69 == -1 )
          v62[33] = v63;
        else
          *(_DWORD *)(v62[30] + 12 * v69 + 8) = v63;
        ++v62[36];
        v70 = (int **)(v116 + v62[30]);
        if ( v70 )
          *v70 = v50;
        result = i + 1;
        i = result;
      }
      while ( result < v109 );
    }
    v71 = a3;
    if ( a3 >= 5 )
    {
      (**(void (__thiscall ***)(int, unsigned __int16 *, int, int))(dword_106B31D8 + 4))(
        dword_106B31D8 + 4,
        &v104,
        2,
        v3);
      if ( v104 )
      {
        v72 = v104 - 1;
        result = v72 < dword_106B7E84 ? *(_DWORD *)(dword_106B7E78[0] + 4 * v72) : 0;
      }
      else
      {
        result = 0;
      }
      v73 = v111;
      v111[11] = result;
      if ( v71 >= 7 )
      {
        v74 = v73 + 167;
        LODWORD(v107) = 2;
        do
        {
          result = (**(int (__thiscall ***)(int, unsigned int *, int, int))(dword_106B31D8 + 4))(
                     dword_106B31D8 + 4,
                     &v109,
                     4,
                     v3);
          i = 0;
          if ( v109 )
          {
            do
            {
              (**(void (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v114, 4, v3);
              v75 = v74[3];
              if ( v75 == -1 )
              {
LABEL_133:
                v79 = sub_1018CED0(v74, 0);
                if ( v79 >= 0 && v79 < v74[1] && v79 <= v74[7] )
                {
                  v80 = *v74;
                  v81 = *v74 + 12 * v79;
                  v82 = *(_DWORD *)(v81 + 4) != v79;
                  v116 = v81;
                  if ( v82 )
                  {
                    v83 = *(_DWORD *)(v81 + 4);
                    if ( v83 == -1 )
                    {
                      v74[3] = *(_DWORD *)(v81 + 8);
                    }
                    else
                    {
                      *(_DWORD *)(v80 + 12 * v83 + 8) = *(_DWORD *)(v81 + 8);
                      v81 = v116;
                    }
                    v84 = *(_DWORD *)(v81 + 8);
                    if ( v84 == -1 )
                    {
                      v74[4] = *(_DWORD *)(v81 + 4);
                    }
                    else
                    {
                      *(_DWORD *)(*v74 + 12 * v84 + 4) = *(_DWORD *)(v81 + 4);
                      v81 = v116;
                    }
                    *(_DWORD *)(v81 + 8) = v79;
                    *(_DWORD *)(v81 + 4) = v79;
                    --v74[6];
                  }
                }
                v85 = *v74;
                v86 = 12 * v79;
                *(_DWORD *)(v85 + v86 + 8) = -1;
                v87 = v74[4];
                *(_DWORD *)(v85 + v86 + 4) = v87;
                v74[4] = v79;
                if ( v87 == -1 )
                  v74[3] = v79;
                else
                  *(_DWORD *)(*v74 + 12 * v87 + 8) = v79;
                v88 = *v74;
                ++v74[6];
                v89 = (int *)(v86 + v88);
                if ( v89 )
                  *v89 = v114;
              }
              else
              {
                v76 = *v74;
                while ( 1 )
                {
                  v77 = 3 * v75;
                  v18 = *(_DWORD *)(v76 + 4 * v77) == v114;
                  v78 = v76 + 4 * v77;
                  if ( v18 )
                    break;
                  v75 = *(_DWORD *)(v78 + 8);
                  if ( v75 == -1 )
                    goto LABEL_133;
                }
              }
              result = i + 1;
              i = result;
            }
            while ( result < v109 );
          }
          v74 += 9;
          --LODWORD(v107);
        }
        while ( v107 != 0.0 );
        if ( a3 >= 8 )
        {
          v90 = v111 + 120;
          v91 = 2;
          do
          {
            result = (**(int (__thiscall ***)(int, _DWORD *, int, int))(dword_106B31D8 + 4))(
                       dword_106B31D8 + 4,
                       v90++,
                       4,
                       v3);
            --v91;
          }
          while ( v91 );
        }
      }
    }
  }
  else
  {
    v116 = 0;
    if ( v109 )
    {
      do
      {
        v102 = -1;
        v98 = -1;
        v99 = -1;
        v100 = -1;
        v96[0] = 0;
        v96[1] = 0;
        v97 = 0;
        v101 = 0;
        v103 = 0;
        (**(void (__thiscall ***)(int, char *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, v92, 4, v3);
        (**(void (__thiscall ***)(int, char *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, v93, 4, v3);
        (**(void (__thiscall ***)(int, char *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, v94, 12, v3);
        (**(void (__thiscall ***)(int, char *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, v95, 12, v3);
        (**(void (__thiscall ***)(int, char *, int, int))(dword_106B31D8 + 4))(
          dword_106B31D8 + 4,
          (char *)&a3 + 3,
          1,
          v3);
        v47 = 0;
        if ( HIBYTE(a3) )
        {
          do
          {
            (**(void (__thiscall ***)(int, float *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v105, 12, v3);
            (**(void (__thiscall ***)(int, float *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v105, 4, v3);
            ++v47;
          }
          while ( v47 < HIBYTE(a3) );
        }
        sub_1018ECD0(v96);
        if ( v97 >= 0 )
        {
          if ( v96[0] )
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v96[0]);
        }
        result = v116 + 1;
        v116 = result;
      }
      while ( result < v109 );
    }
  }
  return result;
}
