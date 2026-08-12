// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1011D620@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int *a4)
{
  float *v4; // edi
  double v5; // st7
  int v6; // esi
  void (__thiscall *v7)(int, float *, int, int *); // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // edx
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  float v21; // ecx
  int v22; // edi
  int v23; // edx
  int v24; // eax
  float v25; // eax
  float v26; // ecx
  int v27; // edi
  int v28; // eax
  unsigned int *v29; // edi
  int *v30; // eax
  int v31; // ecx
  int v32; // esi
  int v33; // edi
  unsigned int v34; // kr00_4
  int v35; // esi
  const char *v36; // edi
  const char *v37; // eax
  _BYTE *v38; // edi
  char v39; // cl
  char v40[264]; // [esp+24h] [ebp-214h] BYREF
  float v41[20]; // [esp+12Ch] [ebp-10Ch] BYREF
  _DWORD v42[3]; // [esp+17Ch] [ebp-BCh] BYREF
  float v43[10]; // [esp+188h] [ebp-B0h] BYREF
  char v44; // [esp+1B2h] [ebp-86h]
  char v45; // [esp+1B3h] [ebp-85h]
  int v46; // [esp+1C8h] [ebp-70h]
  int v47; // [esp+1CCh] [ebp-6Ch]
  float v48[3]; // [esp+1D4h] [ebp-64h] BYREF
  float v49[3]; // [esp+1E0h] [ebp-58h] BYREF
  int v50; // [esp+1ECh] [ebp-4Ch] BYREF
  int v51; // [esp+1F0h] [ebp-48h] BYREF
  float v52; // [esp+1F4h] [ebp-44h] BYREF
  float v53; // [esp+1F8h] [ebp-40h]
  float v54; // [esp+1FCh] [ebp-3Ch]
  int v55; // [esp+200h] [ebp-38h]
  unsigned int v56; // [esp+204h] [ebp-34h]
  int v57; // [esp+208h] [ebp-30h] BYREF
  int v58; // [esp+20Ch] [ebp-2Ch]
  int v59; // [esp+210h] [ebp-28h] BYREF
  float v60; // [esp+214h] [ebp-24h]
  int v61; // [esp+218h] [ebp-20h]
  float v62; // [esp+21Ch] [ebp-1Ch]
  int *v63; // [esp+220h] [ebp-18h]
  int i; // [esp+224h] [ebp-14h]
  int v65; // [esp+228h] [ebp-10h]
  int v66; // [esp+22Ch] [ebp-Ch]
  void *v67; // [esp+230h] [ebp-8h]
  void *retaddr; // [esp+238h] [ebp+0h]

  v66 = a1;
  v67 = retaddr;
  (*(void (__thiscall **)(int, int *, int *, int, int))(*(_DWORD *)dword_1047CA68 + 84))(
    dword_1047CA68,
    &v51,
    &v50,
    a2,
    a3);
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 48))(dword_10439968);
  *(float *)&v65 = 1.0
                 / ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 352))(dword_1041315C)
                 * 1.3333334;
  v5 = v4[9];
  sub_10135880(v4[9], *(float *)&v65);
  v62 = v5;
  sub_10070AD0(v51, v50, v62, (int)(v4 + 11), (int)(v4 + 14), v48);
  v52 = v4[11];
  v53 = v4[12];
  v54 = v4[13];
  v49[0] = v48[0] * 56755.84 + v52;
  v49[1] = v48[1] * 56755.84 + v53;
  v49[2] = 56755.84 * v48[2] + v54;
  if ( (*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
    v6 = 0;
  else
    v6 = sub_100422D0();
  sub_1000E430(v41, &v52, v49);
  sub_1012D400(v6, 0);
  v7 = *(void (__thiscall **)(int, float *, int, int *))(*(_DWORD *)dword_104131A0 + 16);
  *(float *)&v65 = COERCE_FLOAT(v42);
  v7(dword_104131A0, v41, 33570827, &v59);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v42, (int)v43, 255, 0, 0, 1, 5.0);
  if ( v43[8] >= 1.0 && !v44 && !v45 )
    return 0;
  *(float *)&v65 = 0.0;
  v63 = 0;
  if ( sub_100AF2F0(v42) )
  {
    if ( !v47 )
    {
      v9 = (*(int (__thiscall **)(int, float *, float *, int *, int *))(*(_DWORD *)dword_1041315C + 8))(
             dword_1041315C,
             &v52,
             v49,
             &v59,
             &v59);
      if ( v9 )
      {
        v65 = 1;
        v63 = (int *)sub_100DDA40(4);
        *v63 = v9;
      }
      goto LABEL_44;
    }
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413190 + 16))(dword_10413190, v47 - 1);
    if ( v10 )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 52))(v10);
      v12 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 20))(v11);
      if ( v12 )
      {
        v13 = *v12;
        v14 = v12;
LABEL_19:
        v15 = (*(int (__thiscall **)(_DWORD *))(v13 + 36))(v14);
        if ( v15 )
        {
          v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 112))(dword_10413178, v15);
          v17 = (_DWORD *)v16;
          if ( v16 )
          {
            v18 = *(int *)(v16 + 204);
            v19 = v17[53];
            v65 = v18;
            i = v19;
            if ( *(float *)&v18 != 0.0 )
            {
              *(float *)&v20 = 0.0;
              v57 = 0;
              v58 = 0;
              v59 = 0;
              v60 = 0.0;
              v61 = 0;
              if ( v18 > 0 )
              {
                *(float *)&v65 = 0.0;
                v55 = v18;
                do
                {
                  LODWORD(v21) = (char *)v17 + v65 + v17[52] + *(_DWORD *)((char *)v17 + v65 + v17[52]);
                  v22 = 0;
                  v62 = v21;
                  if ( i > 0 )
                  {
                    while ( 1 )
                    {
                      v23 = v17[54];
                      i = LODWORD(v21);
                      sub_10228370(v40, 0x104u, "%s%s", (_BYTE)v17 + *(_DWORD *)((char *)&v17[v22] + v23));
                      sub_10228240(v40, 92);
                      v24 = (*(int (__thiscall **)(int, char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C
                                                                                          + 280))(
                              dword_1047C96C,
                              v40,
                              "Model textures",
                              1,
                              0);
                      v56 = v24;
                      if ( v24 )
                      {
                        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 168))(v24) )
                          break;
                      }
                      if ( ++v22 >= i )
                        goto LABEL_35;
                      v21 = v62;
                    }
                    v25 = v60;
                    v62 = v60;
                    if ( LODWORD(v60) + 1 > v58 )
                    {
                      sub_1010AFF0(&v57, LODWORD(v60) - v58 + 1);
                      v25 = v60;
                    }
                    v26 = v62;
                    v27 = v57;
                    LODWORD(v60) = LODWORD(v25) + 1;
                    v28 = LODWORD(v25) - LODWORD(v62);
                    v61 = v57;
                    if ( v28 > 0 )
                    {
                      memcpy((void *)(v57 + 4 * LODWORD(v62) + 4), (const void *)(v57 + 4 * LODWORD(v62)), 4 * v28);
                      v26 = v62;
                    }
                    v29 = (unsigned int *)(v27 + 4 * LODWORD(v26));
                    if ( v29 )
                      *v29 = v56;
                  }
LABEL_35:
                  v65 += 64;
                  --v55;
                }
                while ( v55 );
                *(float *)&v20 = v60;
              }
              v65 = v20;
              if ( *(float *)&v20 != 0.0 )
              {
                v30 = (int *)sub_100DDA40((unsigned __int64)(unsigned int)v20 >> 30 != 0 ? -1 : 4 * v20);
                v63 = v30;
                if ( v20 > 0 )
                {
                  v31 = v57 - (_DWORD)v30;
                  do
                  {
                    *v30 = *(int *)((char *)v30 + v31);
                    ++v30;
                    --v20;
                  }
                  while ( *(float *)&v20 != 0.0 );
                }
              }
              if ( v59 >= 0 && v57 )
              {
                (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v57);
                v57 = 0;
              }
            }
          }
        }
      }
    }
  }
  else if ( v46 )
  {
    v13 = *(_DWORD *)(v46 + 4);
    v14 = (_DWORD *)(v46 + 4);
    goto LABEL_19;
  }
LABEL_44:
  v32 = 0;
  v33 = 0;
  for ( *a4 = sub_100DDA40((unsigned __int64)(unsigned int)v65 >> 30 != 0 ? -1 : 4 * v65); v32 < v65; v33 += v34 + 1 )
  {
    v34 = strlen((const char *)(**(int (__thiscall ***)(int))v63[v32])(v63[v32]));
    ++v32;
  }
  v35 = 0;
  *(_DWORD *)*a4 = sub_100DDA40(v33);
  for ( i = 0; v35 < v65; ++v35 )
  {
    v36 = (const char *)(**(int (__thiscall ***)(int))v63[v35])(v63[v35]);
    v56 = strlen(v36) + 1;
    *(_DWORD *)(*a4 + 4 * v35) = i + *(_DWORD *)*a4;
    v37 = v36;
    v38 = *(_BYTE **)(*a4 + 4 * v35);
    do
    {
      v39 = *v37;
      *v38++ = *v37++;
    }
    while ( v39 );
    i += v56;
  }
  if ( v63 )
    sub_10034930((int)v63);
  return v65;
}
