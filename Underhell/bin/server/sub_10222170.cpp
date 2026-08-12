int __cdecl sub_10222170(int a1, int a2)
{
  int v3; // edi
  double v4; // st7
  _DWORD *v5; // esi
  unsigned int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  const char *v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // esi
  int v14; // eax
  const char *v15; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int v19; // eax
  int *v20; // eax
  int v21; // edx
  _DWORD *v22; // esi
  unsigned int v23; // eax
  int *v24; // ecx
  int v25; // edi
  void (*v26)(void); // eax
  const char *v27; // eax
  void **v29; // [esp+Ch] [ebp-44h] BYREF
  _DWORD v30[8]; // [esp+10h] [ebp-40h] BYREF
  char v31; // [esp+30h] [ebp-20h]
  int v32; // [esp+34h] [ebp-1Ch]
  int v33; // [esp+38h] [ebp-18h]
  int v34; // [esp+3Ch] [ebp-14h]
  int v35; // [esp+40h] [ebp-10h]
  int v36; // [esp+44h] [ebp-Ch]
  int v37; // [esp+48h] [ebp-8h]
  int i; // [esp+4Ch] [ebp-4h]
  int v39; // [esp+58h] [ebp+8h]

  sub_1021FDF0(a1, a2);
  v3 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v39 = 0;
  i = 0;
  if ( *(int *)(a1 + 1396) > 0 )
  {
    v4 = 0.0;
    v37 = 0;
    do
    {
      v5 = (_DWORD *)(v37 + *(_DWORD *)(a1 + 1400));
      v6 = v5[4];
      if ( v6 != -1 )
      {
        if ( off_1061BE18[4 * (v5[4] & 0xFFF) + 2] == v6 >> 12 )
          v3 = off_1061BE18[4 * (v5[4] & 0xFFF) + 1];
        else
          v3 = 0;
      }
      v7 = v5[5];
      if ( v7 >= 0 && v7 < *(_DWORD *)(a1 + 12) )
      {
        v8 = v7 + *(_DWORD *)a1;
        *(_DWORD *)(a1 + 8) = v7;
        *(_DWORD *)(a1 + 4) = v8;
      }
      *(float *)(a1 + 1384) = v4;
      *(float *)(a1 + 1388) = v4;
      *(float *)(a1 + 1392) = v4;
      if ( v3 )
      {
        v9 = v5[7];
        if ( (v9 & a2) != 0 )
        {
          if ( (v9 & 0x10000000) != 0 )
          {
            v10 = (const char *)v5[8];
            if ( !v10 )
              v10 = String;
            DevMsg(2, "Merging changes for global: %s\n", v10);
            if ( sub_102215E0(&off_10646708, v3, a1, (int)v5) <= 0 )
            {
              v13 = v5[4];
              if ( v13 == -1 || off_1061BE18[4 * (v13 & 0xFFF) + 2] != v13 >> 12 )
                sub_1025FAE0(0);
              else
                sub_1025FAE0(off_1061BE18[4 * (v13 & 0xFFF) + 1]);
            }
            else
            {
              ++v39;
              if ( v5[4] == -1 || off_1061BE18[4 * (v5[4] & 0xFFF) + 2] != v5[4] >> 12 )
                v11 = 0;
              else
                v11 = off_1061BE18[4 * (v5[4] & 0xFFF) + 1];
              v5[3] = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                        dword_106B31D0,
                        *(_DWORD *)(v11 + 24));
              v12 = v5[4];
              if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
                sub_10156710(0);
              else
                sub_10156710(off_1061BE18[4 * (v12 & 0xFFF) + 1]);
            }
          }
          else
          {
            if ( *(_DWORD *)(v3 + 24) )
              v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                      dword_106B31D0,
                      *(_DWORD *)(v3 + 24));
            else
              v14 = -1;
            v15 = (const char *)v5[8];
            if ( !v15 )
              v15 = String;
            DevMsg(2, "Transferring %s (%d)\n", v15, v14);
            v30[6] = a1 + 24;
            v29 = &CRestore::`vftable';
            memset(v30, 0, 20);
            v30[5] = a1;
            v30[7] = 0;
            v31 = 1;
            sub_10227650(32);
            if ( sub_102209A0(v3, (int)&v29, (int)v5) >= 0 )
            {
              v16 = v35;
              v17 = v35;
              if ( v35 + 1 > v33 )
              {
                sub_102ABFC0(v35 - v33 + 1);
                v16 = v35;
              }
              v18 = v32;
              v35 = v16 + 1;
              v19 = v16 - v17;
              v36 = v32;
              if ( v19 > 0 )
                memcpy((void *)(v32 + 4 * v17 + 4), (const void *)(v32 + 4 * v17), 4 * v19);
              v20 = (int *)(v18 + 4 * v17);
              if ( v20 )
                *v20 = i;
            }
            else
            {
              sub_1025FAE0(v3);
            }
            sub_102375F0(v30);
          }
          sub_1012CE60();
          v4 = 0.0;
        }
      }
      v37 += 56;
      v3 = 0;
      ++i;
    }
    while ( i < *(_DWORD *)(a1 + 1396) );
  }
  v21 = v35 - 1;
  for ( i = v35 - 1; v21 >= 0; i = v21 )
  {
    v22 = (_DWORD *)(*(_DWORD *)(a1 + 1400) + 56 * *(_DWORD *)(v32 + 4 * v21));
    v23 = v22[4];
    if ( v23 != -1 )
    {
      v24 = &off_1061BE18[4 * (v22[4] & 0xFFF) + 1];
      if ( off_1061BE18[4 * (v22[4] & 0xFFF) + 2] == v23 >> 12 )
      {
        v25 = *v24;
        if ( *v24 )
        {
          v26 = *(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100);
          v37 = dword_10700AC8;
          v26();
          if ( (int)v22[7] >= 0 && sub_10262120(v25) )
          {
            v27 = (const char *)v22[8];
            if ( !v27 )
              v27 = String;
            DevMsg(2, "Suppressing %s\n", v27);
            sub_1025FAE0(v25);
            sub_1012CE60();
          }
          else
          {
            ++v39;
            v22[7] = 0x40000000;
            v22[3] = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                       dword_106B31D0,
                       *(_DWORD *)(v25 + 24));
            sub_10156710(v25);
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 104))(v37);
          v21 = i;
        }
      }
    }
    --v21;
  }
  if ( v34 >= 0 && v32 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32);
  return v39;
}
