int __stdcall sub_100F37C0(int a1, int a2, int a3, float *a4)
{
  DWORD CurrentThreadId; // ecx
  unsigned int *v5; // eax
  unsigned int v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ebx
  float *v17; // eax
  int v18; // ecx
  double v19; // st7
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  void *v24; // edi
  bool v25; // zf
  int v26; // ebx
  int v27; // ecx
  int v28; // eax
  double v29; // st7
  int v30; // eax
  void *v31; // edi
  _DWORD v33[128]; // [esp+4h] [ebp-250h] BYREF
  _BYTE v34[48]; // [esp+204h] [ebp-50h] BYREF
  float v35[3]; // [esp+234h] [ebp-20h] BYREF
  float v36[3]; // [esp+240h] [ebp-14h] BYREF
  _DWORD *v37; // [esp+24Ch] [ebp-8h]
  int v38; // [esp+250h] [ebp-4h]
  int v39; // [esp+25Ch] [ebp+8h]
  int v40; // [esp+25Ch] [ebp+8h]
  unsigned int v41; // [esp+260h] [ebp+Ch]
  int v42; // [esp+260h] [ebp+Ch]

  v38 = 0;
  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != dword_10435DF4 && _InterlockedCompareExchange(&dword_10435DF4, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&dword_10435DF4, CurrentThreadId, 0);
  }
  else
  {
    ++dword_10435DF8;
  }
  v5 = *(unsigned int **)(a1 + 68 * a2 + 148);
  if ( v5 )
  {
    v6 = *v5;
    if ( v6 != -1 && *((_DWORD *)off_103DCD74 + 4 * (v6 & 0xFFF) + 2) == v6 >> 12 )
    {
      v7 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v6 & 0xFFF) + 1);
      v37 = v7;
      if ( v7 )
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v7 + 164))(v7);
        if ( v8 )
        {
          if ( sub_10028810((int)v8, v33) )
          {
            v9 = *(_DWORD *)dword_10413178;
            v10 = (*(int (__thiscall **)(_DWORD *))(v8[1] + 36))(v8 + 1);
            v11 = (*(int (__thiscall **)(int, int))(v9 + 112))(dword_10413178, v10);
            if ( v11 )
            {
              v12 = v11 + *(_DWORD *)(v11 + 176) + 12 * sub_10025760(v8);
              if ( v12 )
              {
                v13 = *(_DWORD *)(v12 + 4);
                v14 = a3;
                if ( a3 >= v13 )
                {
                  v38 = *(_DWORD *)(v12 + 4);
                  v14 = v13;
                }
                else
                {
                  v38 = a3;
                }
                v15 = 0;
                if ( v14 >= 4 )
                {
                  v41 = ((unsigned int)(v14 - 4) >> 2) + 1;
                  v16 = 0;
                  v17 = a4 + 2;
                  v39 = 4 * v41;
                  do
                  {
                    v18 = v16 + *(_DWORD *)(v12 + 8);
                    v19 = *(float *)(v18 + v12 + 8);
                    v20 = v12 + v18;
                    *(v17 - 2) = v19;
                    *(v17 - 1) = *(float *)(v20 + 12);
                    *v17 = *(float *)(v20 + 16);
                    v17[1] = *(float *)(v20 + 20);
                    v17[2] = *(float *)(v20 + 24);
                    v17[3] = *(float *)(v20 + 28);
                    qmemcpy(v17 + 4, (const void *)v33[*(_DWORD *)v20], 0x30u);
                    v21 = v16 + *(_DWORD *)(v12 + 8) + v12 + 68;
                    v17[16] = *(float *)(v16 + *(_DWORD *)(v12 + 8) + v12 + 76);
                    v17[17] = *(float *)(v21 + 12);
                    v17[18] = *(float *)(v21 + 16);
                    v17[19] = *(float *)(v21 + 20);
                    v17[20] = *(float *)(v21 + 24);
                    v17[21] = *(float *)(v21 + 28);
                    qmemcpy(v17 + 22, (const void *)v33[*(_DWORD *)v21], 0x30u);
                    v22 = v16 + 204 + *(_DWORD *)(v12 + 8) + v12 - 68;
                    v17[34] = *(float *)(v22 + 8);
                    v17[35] = *(float *)(v22 + 12);
                    v17[36] = *(float *)(v22 + 16);
                    v17[37] = *(float *)(v22 + 20);
                    v17[38] = *(float *)(v22 + 24);
                    v17[39] = *(float *)(v22 + 28);
                    qmemcpy(v17 + 40, (const void *)v33[*(_DWORD *)v22], 0x30u);
                    v23 = v12 + v16 + 204 + *(_DWORD *)(v12 + 8);
                    v24 = v17 + 58;
                    v17[52] = *(float *)(v23 + 8);
                    v17[53] = *(float *)(v23 + 12);
                    v17[54] = *(float *)(v23 + 16);
                    v17[55] = *(float *)(v23 + 20);
                    v17[56] = *(float *)(v23 + 24);
                    v17[57] = *(float *)(v23 + 28);
                    v16 += 272;
                    v17 += 72;
                    v25 = v41-- == 1;
                    qmemcpy(v24, (const void *)v33[*(_DWORD *)v23], 0x30u);
                  }
                  while ( !v25 );
                  v15 = v39;
                  v7 = v37;
                  v14 = v38;
                }
                if ( v15 < v14 )
                {
                  v26 = (int)&a4[18 * v15 + 2];
                  v27 = 68 * v15;
                  v42 = 68 * v15;
                  v40 = v38 - v15;
                  while ( 1 )
                  {
                    v42 += 68;
                    v28 = v27 + *(_DWORD *)(v12 + 8);
                    v29 = *(float *)(v28 + v12 + 8);
                    v30 = v12 + v28;
                    *(float *)(v26 - 8) = v29;
                    v31 = (void *)(v26 + 16);
                    *(float *)(v26 - 4) = *(float *)(v30 + 12);
                    v26 += 72;
                    v25 = v40-- == 1;
                    *(float *)(v26 - 72) = *(float *)(v30 + 16);
                    *(float *)(v26 - 68) = *(float *)(v30 + 20);
                    *(float *)(v26 - 64) = *(float *)(v30 + 24);
                    *(float *)(v26 - 60) = *(float *)(v30 + 28);
                    qmemcpy(v31, (const void *)v33[*(_DWORD *)v30], 0x30u);
                    if ( v25 )
                      break;
                    v27 = v42;
                  }
                  v7 = v37;
                }
              }
            }
          }
        }
        if ( sub_10034820(v7) )
        {
          (*(void (__thiscall **)(_DWORD *, float *, float *))(v7[1] + 80))(v7 + 1, v36, v35);
          sub_10037F50((int)v7);
          qmemcpy(v34, v7 + 165, sizeof(v34));
          *a4 = v36[0];
          a4[1] = v36[1];
          a4[2] = v36[2];
          a4[3] = v35[0];
          a4[4] = v35[1];
          a4[5] = v35[2];
          qmemcpy(a4 + 6, v34, 0x30u);
          v38 = 1;
        }
      }
    }
  }
  if ( !--dword_10435DF8 )
    _InterlockedExchange(&dword_10435DF4, 0);
  return v38;
}
