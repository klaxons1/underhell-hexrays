void __thiscall sub_101159B0(int this, int a2)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // esi
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // eax
  float *v17; // eax
  unsigned __int16 v18; // bx
  int v19; // edx
  unsigned int v20; // eax
  int v21; // ecx
  char *v22; // edx
  _DWORD *v23; // esi
  unsigned int v24; // eax
  int v25; // edi
  int v26; // ecx
  float *v27; // eax
  double v28; // st4
  double v29; // st6
  double v30; // st4
  double v31; // st5
  double v32; // st6
  double v33; // st7
  bool v34; // cc
  int v35; // ecx
  unsigned int v36; // eax
  _DWORD *v37; // ecx
  unsigned __int16 v38; // bx
  int v39; // eax
  int v40; // esi
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // eax
  int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // eax
  int v47; // ecx
  float v48; // [esp+Ch] [ebp-20h]
  float v49; // [esp+10h] [ebp-1Ch]
  float v50; // [esp+14h] [ebp-18h]
  unsigned __int16 v51; // [esp+18h] [ebp-14h]
  int v52; // [esp+1Ch] [ebp-10h]
  float v53; // [esp+1Ch] [ebp-10h]
  int v54; // [esp+1Ch] [ebp-10h]
  int v55; // [esp+20h] [ebp-Ch]
  unsigned __int16 v56; // [esp+24h] [ebp-8h]
  unsigned __int16 v57; // [esp+24h] [ebp-8h]

  v2 = this;
  v55 = *(_DWORD *)(this + 68);
  if ( v55 == -1 )
    v55 = *(_DWORD *)(dword_1043740C + 48);
  if ( byte_104373E8 )
    v55 = 0;
  v3 = *(unsigned __int16 *)(this + 24);
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 72) = 0;
  if ( v3 >= 0xFFFF )
  {
LABEL_23:
    v53 = 0.0;
    v51 = *(_WORD *)(v2 + 24);
    v16 = sub_100422D0();
    if ( v16 && *(unsigned __int16 *)(v2 + 30) > v55 )
    {
      v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 36))(v16);
      v18 = *(_WORD *)(v2 + 24);
      v48 = *v17;
      v49 = v17[1];
      v50 = v17[2];
      v56 = v18;
      if ( v18 == 0xFFFF )
      {
LABEL_41:
        v35 = *(_DWORD *)(v2 + 12);
        v36 = *(_DWORD *)(v35 + 8 * v51);
        if ( v36 == -1
          || (v37 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(v35 + 8 * v51) & 0xFFF) + 4), v37[1] != v36 >> 12) )
        {
          (*(void (**)(void))(MEMORY[0] + 436))();
        }
        else
        {
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v37 + 436))(*v37);
        }
        return;
      }
      while ( 1 )
      {
        v19 = *(_DWORD *)(v2 + 12);
        v20 = *(_DWORD *)(v19 + 8 * v18);
        v21 = v19 + 8 * v18;
        if ( v20 == -1
          || (v22 = (char *)off_103DCD74 + 16 * (*(_DWORD *)(v19 + 8 * v18) & 0xFFF) + 4,
              *((_DWORD *)v22 + 1) != v20 >> 12) )
        {
          v23 = 0;
        }
        else
        {
          v23 = *(_DWORD **)v22;
        }
        v24 = v23[282];
        v25 = *(unsigned __int16 *)(v21 + 6);
        v26 = v23[46];
        if ( v24 == -1 )
          goto LABEL_36;
        if ( *((_DWORD *)off_103DCD74 + 4 * (v23[282] & 0xFFF) + 2) != v24 >> 12
          || !*((_DWORD *)off_103DCD74 + 4 * (v23[282] & 0xFFF) + 1) )
        {
          break;
        }
LABEL_40:
        v18 = v25;
        v34 = v25 < 0xFFFF;
        v2 = this;
        v56 = v18;
        if ( !v34 )
          goto LABEL_41;
      }
      v18 = v56;
LABEL_36:
      if ( !v26 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 8))(v26) )
      {
        v27 = (float *)(*(int (__thiscall **)(_DWORD *))(*v23 + 36))(v23);
        v28 = v49 - v27[1];
        v29 = v28 * v28;
        v30 = v48 - *v27;
        v31 = v29;
        v32 = v50 - v27[2];
        v33 = v30 * v30 + v31 + v32 * v32;
        if ( v53 < v33 )
        {
          v53 = v33;
          v51 = v18;
        }
      }
      goto LABEL_40;
    }
    v38 = *(_WORD *)(v2 + 24);
    v57 = v38;
    if ( v38 == 0xFFFF )
      return;
    while ( 1 )
    {
      if ( *(unsigned __int16 *)(v2 + 30) <= v55 )
        return;
      v2 = this;
      v39 = *(_DWORD *)(this + 12);
      v40 = 8 * v38;
      v41 = *(unsigned __int16 *)(v39 + v40 + 6);
      v42 = *(_DWORD *)(v39 + v40);
      v54 = v41;
      if ( v42 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v42 & 0xFFF) + 2) != v42 >> 12 )
        v43 = 0;
      else
        v43 = *((_DWORD *)off_103DCD74 + 4 * (v42 & 0xFFF) + 1);
      v44 = *(_DWORD *)(v43 + 184);
      v45 = *(_DWORD *)(v43 + 1128);
      if ( v45 == -1 )
        goto LABEL_55;
      if ( *((_DWORD *)off_103DCD74 + 4 * (v45 & 0xFFF) + 2) != v45 >> 12
        || !*((_DWORD *)off_103DCD74 + 4 * (v45 & 0xFFF) + 1) )
      {
        break;
      }
LABEL_62:
      v38 = v54;
      v57 = v54;
      if ( v54 >= 0xFFFF )
        return;
    }
    v38 = v57;
LABEL_55:
    if ( !v44 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v44 + 8))(v44) )
    {
      v46 = *(_DWORD *)(*(_DWORD *)(this + 12) + v40);
      if ( v46 == -1
        || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)(this + 12) + v40) & 0xFFF) + 2) != v46 >> 12 )
      {
        v47 = 0;
      }
      else
      {
        v47 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)(this + 12) + v40) & 0xFFF) + 1);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v47 + 436))(v47);
      sub_1003A300((int *)(this + 12), v38);
      *(_WORD *)(*(_DWORD *)(this + 12) + v40 + 6) = *(_WORD *)(this + 28);
      *(_WORD *)(this + 28) = v38;
    }
    goto LABEL_62;
  }
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 12);
    v5 = 8 * (unsigned __int16)v3;
    v6 = *(unsigned __int16 *)(v4 + v5 + 6);
    v7 = *(_DWORD *)(v4 + v5);
    v52 = v6;
    if ( v7 != -1 )
    {
      v8 = (int *)((char *)off_103DCD74 + 16 * (v7 & 0xFFF) + 4);
      if ( *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 2) == v7 >> 12 )
      {
        v9 = *v8;
        if ( *v8 )
          break;
      }
    }
    sub_1003A300((int *)(v2 + 12), v3);
    *(_WORD *)(*(_DWORD *)(v2 + 12) + v5 + 6) = *(_WORD *)(v2 + 28);
    *(_WORD *)(v2 + 28) = v3;
LABEL_22:
    LOWORD(v3) = v52;
    if ( v52 >= 0xFFFF )
      goto LABEL_23;
  }
  ++*(_DWORD *)(v2 + 76);
  v10 = *(_DWORD *)(v9 + 184);
  if ( v10 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10) )
    ++*(_DWORD *)(v2 + 72);
  if ( *(unsigned __int16 *)(v2 + 30) <= v55 )
    goto LABEL_22;
  v11 = *(_DWORD *)(*(_DWORD *)(v2 + 12) + 8 * (unsigned __int16)v3);
  if ( v11 == -1
    || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)(v2 + 12) + 8 * (unsigned __int16)v3) & 0xFFF) + 2) != v11 >> 12 )
  {
    v12 = 0;
  }
  else
  {
    v12 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)(v2 + 12) + 8 * (unsigned __int16)v3) & 0xFFF) + 1);
  }
  if ( sub_10115350(v12) != 1 )
    goto LABEL_22;
  v13 = 8 * (unsigned __int16)v3;
  v14 = *(_DWORD *)(*(_DWORD *)(v2 + 12) + v13);
  if ( v14 == -1
    || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)(v2 + 12) + 8 * (unsigned __int16)v3) & 0xFFF) + 2) != v14 >> 12 )
  {
    v15 = 0;
  }
  else
  {
    v15 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)(v2 + 12) + 8 * (unsigned __int16)v3) & 0xFFF) + 1);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 436))(v15);
  sub_1003A300((int *)(v2 + 12), v3);
  *(_WORD *)(*(_DWORD *)(v2 + 12) + v13 + 6) = *(_WORD *)(v2 + 28);
  *(_WORD *)(v2 + 28) = v3;
}
