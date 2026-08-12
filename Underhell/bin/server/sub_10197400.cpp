int __thiscall sub_10197400(int *this)
{
  void (__fastcall *v2)(int *); // edx
  const char *v3; // eax
  char v4; // bl
  int v5; // edi
  char *v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  double v11; // st6
  unsigned int v12; // ebx
  double v13; // st7
  double v14; // st4
  double v15; // st5
  int v16; // eax
  float *v17; // esi
  int v18; // esi
  int v19; // eax
  int v20; // esi
  _DWORD *v21; // ebx
  int *v22; // esi
  _DWORD *v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // esi
  int j; // ecx
  int v32; // esi
  int v33; // esi
  int v34; // eax
  int v35; // esi
  int k; // eax
  int v37; // eax
  int v38; // ecx
  float v39; // [esp+58h] [ebp-14Ch]
  float v40; // [esp+5Ch] [ebp-148h]
  float v41; // [esp+60h] [ebp-144h]
  float v42; // [esp+64h] [ebp-140h]
  char Buffer[256]; // [esp+74h] [ebp-130h] BYREF
  int v44; // [esp+174h] [ebp-30h] BYREF
  float v45; // [esp+178h] [ebp-2Ch]
  float v46; // [esp+17Ch] [ebp-28h]
  float v47; // [esp+184h] [ebp-20h]
  float i; // [esp+188h] [ebp-1Ch]
  int v49; // [esp+190h] [ebp-14h]
  int *v50; // [esp+194h] [ebp-10h]
  unsigned int v51; // [esp+198h] [ebp-Ch] BYREF
  unsigned int v52; // [esp+19Ch] [ebp-8h] BYREF
  float *v53; // [esp+1A0h] [ebp-4h] BYREF

  v2 = *(void (__fastcall **)(int *))(*this + 8);
  v50 = this;
  v2(this);
  dword_106B7E84 = 0;
  dword_1063261C = 1;
  v3 = *(const char **)(dword_106B31C8 + 60);
  if ( !v3 )
    v3 = String;
  sub_10429A00(Buffer, 0x100u, "maps\\%s.nav", (char)v3);
  v4 = 0;
  v5 = (*(int (__thiscall **)(int, char *, const char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
         dword_106B31D8 + 4,
         Buffer,
         "rb",
         "MOD");
  v49 = v5;
  if ( !v5 )
  {
    v4 = 1;
    v49 = (*(int (__thiscall **)(int, char *, const char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
            dword_106B31D8 + 4,
            Buffer,
            "rb",
            "GAME");
    if ( !v49 )
      return 1;
    v5 = v49;
  }
  if ( !(**(int (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v44, 4, v5)
    || v44 != -17958194 )
  {
    Msg("Invalid navigation file '%s'.\n", Buffer);
    v8 = *(_DWORD *)(dword_106B31D8 + 4);
    v9 = dword_106B31D8 + 4;
    goto LABEL_65;
  }
  if ( !(**(int (__thiscall ***)(int, unsigned int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v52, 4, v5)
    || v52 > 9 )
  {
    Msg("Unknown navigation file version.\n");
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, v5);
    return 3;
  }
  if ( v52 < 4 )
    goto LABEL_19;
  (**(void (__thiscall ***)(int, float **, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v53, 4, v5);
  v7 = sub_10195950();
  v8 = *(_DWORD *)(dword_106B31D8 + 4);
  v9 = dword_106B31D8 + 4;
  if ( !v7 )
  {
LABEL_65:
    (*(void (__thiscall **)(int, int))(v8 + 12))(v9, v5);
    return 2;
  }
  v10 = (*(int (__thiscall **)(int, char *, _DWORD))(v8 + 24))(v9, v7, 0);
  if ( (float *)v10 != v53 && !v4 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0) )
      Msg("The Navigation Mesh was built using a different version of this map.\n");
    else
      Warning("The Navigation Mesh was built using a different version of this map.\n");
    *((_BYTE *)this + 33) = 0;
  }
LABEL_19:
  if ( v52 >= 5 )
    sub_10196110(dword_106B7E78, v5);
  (**(void (__thiscall ***)(int, unsigned int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v51, 4, v5);
  v11 = 1.0e10;
  v12 = 0;
  v45 = 1.0e10;
  v13 = 1.0e10;
  v46 = 1.0e10;
  v14 = -1.0e10;
  v47 = -1.0e10;
  v15 = -1.0e10;
  for ( i = -1.0e10; v12 < v51; ++v12 )
  {
    v16 = sub_10184390(800);
    if ( v16 )
      v17 = (float *)sub_1018EF80(v16);
    else
      v17 = 0;
    v53 = v17;
    sub_101964D0(v17, v5, v52);
    sub_1018F640(&dword_10632624, &v53);
    if ( v17[4] <= (double)v17[1] || v17[5] <= (double)v17[2] )
      Warning("WARNING: Degenerate Navigation Area #%d at ( %g, %g, %g )\n", *(_DWORD *)v17, v17[7], v17[8], v17[9]);
    v13 = v45;
    if ( v45 > (double)v17[1] )
    {
      v13 = v17[1];
      v45 = v17[1];
    }
    v11 = v46;
    if ( v46 > (double)v17[2] )
    {
      v11 = v17[2];
      v46 = v17[2];
    }
    v15 = v47;
    if ( v47 < (double)v17[4] )
    {
      v15 = v17[4];
      v47 = v17[4];
    }
    v14 = i;
    if ( i < (double)v17[5] )
    {
      v14 = v17[5];
      i = v17[5];
    }
  }
  v42 = v14;
  v41 = v11;
  v40 = v15;
  v39 = v13;
  sub_1019F260(v39, v40, v41, v42);
  v18 = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v19 = dword_10632624;
    do
    {
      v20 = 12 * v18;
      sub_1019FC80(*(_DWORD *)(v20 + v19));
      v19 = dword_10632624;
      v18 = *(_DWORD *)(v20 + dword_10632624 + 8);
    }
    while ( v18 != -1 );
  }
  if ( v52 < 6 )
  {
    sub_1019BE60(v50);
  }
  else
  {
    (**(void (__thiscall ***)(int, unsigned int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v51, 4, v5);
    v21 = 0;
    v53 = 0;
    if ( v51 )
    {
      v22 = v50;
      do
      {
        v23 = (_DWORD *)sub_10184390(72);
        if ( v23 )
        {
          v23[8] = 0;
          v23[10] = 0;
          v23[9] = 0;
          v23[11] = 0;
          v23[12] = 0;
          v23[17] = dword_10632748++;
          v21 = v23;
        }
        sub_1019CEF0(v5, v52);
        v24 = sub_1018CED0(v22 + 300, 0);
        sub_1018ED30(v22 + 300, v24);
        v25 = v22[300];
        v26 = 12 * v24;
        *(_DWORD *)(v25 + v26 + 8) = -1;
        v27 = v22[304];
        *(_DWORD *)(v25 + v26 + 4) = v27;
        v22[304] = v24;
        if ( v27 == -1 )
          v22[303] = v24;
        else
          *(_DWORD *)(v22[300] + 12 * v27 + 8) = v24;
        v28 = v22[300];
        ++v22[306];
        v29 = (_DWORD *)(v26 + v28);
        if ( v29 )
          *v29 = v21;
        v5 = v49;
        v21 = 0;
        v53 = (float *)((char *)v53 + 1);
      }
      while ( (unsigned int)v53 < v51 );
    }
  }
  v30 = dword_10632630;
  for ( j = dword_10632624; v30 != -1; v30 = *(_DWORD *)(v32 + dword_10632624 + 8) )
  {
    v32 = 12 * v30;
    sub_10196FF0(*(float **)(v32 + j));
    j = dword_10632624;
  }
  v33 = dword_1063282C;
  if ( dword_1063282C != -1 )
  {
    v34 = dword_10632820;
    do
    {
      v35 = 12 * v33;
      sub_1019EAE0(*(_DWORD *)(v35 + v34));
      v34 = dword_10632820;
      v33 = *(_DWORD *)(v35 + dword_10632820 + 8);
    }
    while ( v33 != -1 );
    j = dword_10632624;
  }
  if ( v52 < 8 )
  {
    for ( k = dword_10632630; k != -1; k = *(_DWORD *)(v37 + dword_10632624 + 8) )
    {
      v37 = 12 * k;
      v38 = *(_DWORD *)(v37 + j);
      *(_DWORD *)(v38 + 480) = 0;
      *(_DWORD *)(v38 + 484) = 0;
      j = dword_10632624;
    }
  }
  *((_BYTE *)v50 + 32) = 1;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, v5);
  sub_10196020();
  return 0;
}
