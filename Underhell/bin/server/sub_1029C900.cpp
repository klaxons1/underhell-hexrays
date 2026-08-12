int __usercall sub_1029C900@<eax>(int a1@<ecx>, _DWORD *a2@<esi>)
{
  unsigned int *v2; // ebx
  unsigned int v3; // eax
  float *v4; // ecx
  float *v5; // edi
  _DWORD *v7; // eax
  unsigned int *v8; // eax
  unsigned int v9; // eax
  int *v10; // ecx
  _DWORD *v11; // esi
  int v12; // eax
  bool v13; // al
  int v14; // eax
  float *v15; // ebx
  float *v16; // eax
  double v17; // st4
  double v18; // st6
  double v19; // st4
  double v20; // st5
  double v21; // st6
  char v22; // al
  float *v23; // ebx
  float *v24; // eax
  double v25; // st4
  double v26; // st6
  double v27; // st4
  double v28; // st5
  double v29; // st6
  int v30; // eax
  float *v31; // ebx
  float *v32; // eax
  double v33; // st4
  double v34; // st6
  double v35; // st4
  double v36; // st5
  double v37; // st6
  int v38; // ebx
  char v39; // al
  float v40; // edx
  int (__thiscall *v41)(float *, _DWORD *); // eax
  _DWORD *v42; // eax
  unsigned __int8 v44[4]; // [esp+4h] [ebp-1Ch] BYREF
  int v45; // [esp+8h] [ebp-18h]
  _DWORD *v46; // [esp+Ch] [ebp-14h]
  int v47; // [esp+10h] [ebp-10h]
  unsigned int *v48; // [esp+14h] [ebp-Ch]
  int v49; // [esp+18h] [ebp-8h]
  bool v50; // [esp+1Ch] [ebp-4h]
  bool v51; // [esp+1Dh] [ebp-3h]
  bool v52; // [esp+1Eh] [ebp-2h]
  char v53; // [esp+1Fh] [ebp-1h]

  v2 = (unsigned int *)a1;
  v3 = *(_DWORD *)(a1 + 20);
  v48 = (unsigned int *)a1;
  if ( v3 == -1
    || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12
    || !off_1061BE18[4 * (v3 & 0xFFF) + 1]
    || !*(_BYTE *)(a1 + 24) )
  {
    return sub_1004B5A0((_DWORD **)a1);
  }
  v4 = *(float **)(a1 + 4);
  v5 = v4;
  v46 = 0;
  v47 = 0x10000000;
  v49 = -1000;
  v51 = 0;
  v53 = 0;
  if ( !v4 )
    return 0;
  v7 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 1868))(v4);
  v8 = sub_10077AB0(v7, v44);
  v45 = (int)v8;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *v8;
      if ( v9 != -1 )
      {
        v10 = &off_1061BE18[4 * (v9 & 0xFFF) + 1];
        if ( off_1061BE18[4 * (v9 & 0xFFF) + 2] == v9 >> 12 )
        {
          v11 = (_DWORD *)*v10;
          if ( *v10 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*v11 + 264))(*v10)
              && (v11[64] & 0x8000) == 0
              && ((*(int (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v5 + 1080))(v5, v11) == 1
               || (*(int (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v5 + 1080))(v5, v11) == 2) )
            {
              if ( (*(unsigned __int8 (__thiscall **)(unsigned int *, _DWORD *))(*v2 + 160))(v2, v11) )
              {
                if ( v5[612] <= (double)*(float *)(v45 + 28)
                  && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(v45 + 40) )
                {
                  v12 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v2[1] + 1868))(v2[1]);
                  if ( !sub_10077840(v12, (int)v11) )
                    break;
                }
              }
            }
          }
        }
      }
LABEL_47:
      v42 = (_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)v2[1] + 1868))(v2[1]);
      v45 = sub_10077340(v42, v44);
      if ( !v45 )
        return (int)v46;
      v8 = (unsigned int *)v45;
    }
    (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v5 + 1768))(v5, v11);
    sub_1026A890(v2 + 5);
    v13 = (unsigned __int8)sub_102CB240(v11) == 0;
    v52 = v13;
    if ( !v13 )
    {
      sub_1026A890(v2 + 5);
      v52 = (unsigned __int8)sub_102CB420(v11) == 0;
      v13 = v52;
    }
    if ( v51 )
    {
      if ( !v13 )
      {
        if ( sub_100AB270(*((_DWORD ***)v5 + 601), (int)v11)
          || (v22 = (*(int (__thiscall **)(float *, _DWORD *, int, _DWORD))(*(_DWORD *)v5 + 548))(v5, v11, 16449, 0),
              v53 = 0,
              v22) )
        {
          v53 = 1;
        }
        v49 = (*(int (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v5 + 1084))(v5, v11);
        v23 = (float *)sub_1004BF30(v2);
        v24 = (float *)sub_10019640(v11);
        v25 = v24[1] - v23[1];
        v26 = v25 * v25;
        v27 = *v24 - *v23;
        v28 = v26;
        v29 = v24[2] - v23[2];
        v47 = (int)(v27 * v27 + v28 + v29 * v29);
        v51 = 0;
        goto LABEL_45;
      }
    }
    else if ( v13 )
    {
      goto LABEL_47;
    }
    v14 = (*(int (__thiscall **)(float *, _DWORD *, _DWORD *))(*(_DWORD *)v5 + 1084))(v5, v11, a2);
    a2 = v11;
    if ( v14 <= v49 )
    {
      v30 = (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 1084))(v5);
      if ( v30 != v49 )
        goto LABEL_47;
      v31 = (float *)sub_1004BF30(v2);
      v32 = (float *)sub_10019640(v11);
      v33 = v32[1] - v31[1];
      v34 = v33 * v33;
      v35 = *v32 - *v31;
      v36 = v34;
      v37 = v32[2] - v31[2];
      v38 = (int)(v35 * v35 + v36 + v37 * v37);
      v50 = v38 < v47;
      if ( v38 >= v47 && v53 )
        goto LABEL_46;
      if ( sub_100AB270(*((_DWORD ***)v5 + 601), (int)v11)
        || (v39 = (*(int (__thiscall **)(float *, _DWORD *, int, _DWORD))(*(_DWORD *)v5 + 548))(v5, v11, 16449, 0)) != 0 )
      {
        v39 = 1;
      }
      if ( v50 )
      {
        if ( !v39 && v53 )
          goto LABEL_46;
      }
      else if ( v53 || !v39 )
      {
        goto LABEL_46;
      }
      v40 = *v5;
      v53 = v39;
      v41 = *(int (__thiscall **)(float *, _DWORD *))(LODWORD(v40) + 1084);
      v47 = (int)(v35 * v35 + v36 + v37 * v37);
      v49 = v41(v5, v11);
      v51 = v52;
    }
    else
    {
      v49 = (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 1084))(v5);
      v15 = (float *)sub_1004BF30(v2);
      v16 = (float *)sub_10019640(v11);
      v17 = v16[1] - v15[1];
      v18 = v17 * v17;
      v19 = *v16 - *v15;
      v20 = v18;
      v21 = v16[2] - v15[2];
      v47 = (int)(v19 * v19 + v20 + v21 * v21);
      v51 = v52;
    }
LABEL_45:
    v46 = v11;
LABEL_46:
    v2 = v48;
    goto LABEL_47;
  }
  return (int)v46;
}
