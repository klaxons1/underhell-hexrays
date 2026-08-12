void __userpurge sub_10344D90(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, _DWORD *a4)
{
  int *v5; // eax
  float *v6; // eax
  unsigned int v7; // eax
  int **v8; // ecx
  unsigned int v9; // eax
  float *v10; // eax
  int *v11; // ecx
  float v12; // ecx
  float v13; // edx
  float v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  char v17; // al
  unsigned int v18; // eax
  int v19; // eax
  bool v20; // bl
  bool v21; // al
  bool v22; // zf
  float v23; // [esp+0h] [ebp-30h]
  float v24[3]; // [esp+8h] [ebp-28h] BYREF
  float v25[3]; // [esp+14h] [ebp-1Ch] BYREF
  float v26[3]; // [esp+20h] [ebp-10h] BYREF
  char v27; // [esp+2Fh] [ebp-1h]
  int savedregs; // [esp+30h] [ebp+0h] BYREF
  bool v29; // [esp+3Bh] [ebp+Bh]

  if ( *a4 != 74 )
  {
    if ( *a4 == 150 )
    {
      if ( sub_10022810((float *)a1) )
        sub_10027CD0((_DWORD *)a1, 0);
      v23 = *(float *)(a1 + 3640);
      v5 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v6 = sub_103435A0(a1, a2, v25, v5);
      sub_103449E0(a1, (int)&savedregs, a3, a1, v6, v23);
    }
    else if ( *a4 == 152 )
    {
      if ( sub_10344340(a1, (float *)(a1 + 3628), 1) )
        sub_10027CD0((_DWORD *)a1, 0);
    }
    else
    {
      sub_100497D0((int *)a1, a4);
    }
    return;
  }
  v7 = *(_DWORD *)(a1 + 3664);
  if ( v7 != -1
    && (v8 = (int **)&off_1061BE18[4 * (*(_DWORD *)(a1 + 3664) & 0xFFF) + 1],
        v9 = v7 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a1 + 3664) & 0xFFF) + 2] == v9)
    && *v8 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3664) & 0xFFF) + 2] == v9 )
      v11 = *v8;
    else
      v11 = 0;
    v10 = sub_103435A0(a1, a2, v24, v11);
  }
  else
  {
    v10 = (float *)(a1 + 3628);
  }
  v12 = *v10;
  v13 = v10[1];
  v14 = v10[2];
  v26[0] = v12;
  v26[1] = v13;
  v26[2] = v14;
  if ( sub_10344340(a1, v26, 1) )
  {
    v15 = *(_DWORD *)(a1 + 3664);
    if ( v15 == -1
      || off_1061BE18[4 * (*(_DWORD *)(a1 + 3664) & 0xFFF) + 2] != v15 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(a1 + 3664) & 0xFFF) + 1]
      || (v16 = sub_1026A890((unsigned int *)(a1 + 3664)),
          v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 320))(v16),
          v27 = 1,
          !v17) )
    {
      v27 = 0;
    }
    v29 = *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 3624);
    v18 = *(_DWORD *)(a1 + 3664);
    if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3664) & 0xFFF) + 2] != v18 >> 12 )
      v19 = 0;
    else
      v19 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3664) & 0xFFF) + 1];
    v20 = (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1432))(a1, v19, 0) == 0;
    v21 = sub_10023D10((_DWORD *)a1, 32);
    if ( v27 )
    {
      *(float *)(a1 + 3684) = *(float *)(dword_106B31C8 + 12);
      if ( !v20 )
        return;
      v22 = !v29;
    }
    else
    {
      if ( v29 )
      {
LABEL_34:
        sub_10027CD0((_DWORD *)a1, 0);
        return;
      }
      v22 = !v21;
    }
    if ( v22 )
      return;
    goto LABEL_34;
  }
}
