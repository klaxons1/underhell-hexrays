int __userpurge sub_1007B830@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  int result; // eax
  int v6; // esi
  float *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  int *v11; // ecx
  int v12; // edx
  int v13; // eax
  float v14; // ecx
  float v15; // edx
  double v16; // st7
  double v17; // st7
  _DWORD *v18; // eax
  int *v19; // esi
  int *v20; // edi
  int v21; // edx
  int v22; // edx
  int v23; // esi
  int v24; // edx
  int v25; // edx
  int v26; // esi
  float v28[20]; // [esp-80h] [ebp-8Ch] BYREF
  float v29[3]; // [esp-30h] [ebp-3Ch] BYREF
  float v30; // [esp-24h] [ebp-30h] BYREF
  float v31; // [esp-20h] [ebp-2Ch]
  float v32; // [esp-1Ch] [ebp-28h]
  float v33; // [esp-18h] [ebp-24h] BYREF
  float v34; // [esp-14h] [ebp-20h]
  float v35; // [esp-10h] [ebp-1Ch]
  int v36; // [esp-Ch] [ebp-18h]
  _DWORD *v37; // [esp-4h] [ebp-10h]
  int v38; // [esp+0h] [ebp-Ch]
  void *v39; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v38 = a2;
  v39 = retaddr;
  result = dword_10693354;
  v6 = a1;
  v36 = a1;
  if ( *(_DWORD *)(dword_10693354 + 48) )
  {
    v7 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 320) + 4))(
                    *(_DWORD *)(a1 + 4) + 320,
                    a3,
                    a4);
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v33 = v8;
    v11 = (int *)(*(_DWORD *)(v6 + 4) + 320);
    v34 = v9;
    v12 = *v11;
    v35 = v10;
    v13 = (*(int (__thiscall **)(int *))(v12 + 8))(v11);
    v14 = *(float *)v13;
    v15 = *(float *)(v13 + 4);
    v32 = *(float *)(v13 + 8);
    v30 = v14;
    v31 = v15;
    v32 = v32 + flt_1060857C + *(float *)(a5 + 28);
    v16 = v35 - flt_1060857C - *(float *)(a5 + 28);
    v35 = v16;
    if ( *(_DWORD *)(a5 + 44) )
      v35 = v16 - *(float *)(a5 + 28);
    v30 = v30 + *(float *)(a5 + 36);
    v33 = v33 - *(float *)(a5 + 36);
    v31 = v31 + *(float *)(a5 + 36);
    v34 = v34 - *(float *)(a5 + 36);
    v17 = *(float *)(a5 + 24);
    v29[0] = *(float *)(a5 + 12) * v17 + *(float *)a5;
    v29[1] = v17 * *(float *)(a5 + 16) + *(float *)(a5 + 4);
    v29[2] = *(float *)(a5 + 8);
    sub_1001F200(v28, (float *)a5, v29, &v33, &v30);
    if ( !*(_DWORD *)(v6 + 12) )
    {
      v18 = (_DWORD *)sub_10184390(52);
      v37 = v18;
      if ( v18 )
      {
        *v18 = &CTraceListData::`vftable';
        v18[2] = 0;
        v18[3] = 0;
        v18[4] = 0;
        v18[6] = 0;
        v19 = v18 + 2;
        v20 = v18 + 8;
        v18[8] = 0;
        v18[9] = 0;
        v18[10] = 0;
        v18[11] = 0;
        v18[12] = 0;
        v18[1] = 0;
        v21 = v18[3];
        v18[5] = 0;
        if ( v21 < 256 )
        {
          sub_102ABFC0(256 - v21);
          v18 = v37;
        }
        v22 = *v19;
        v19[3] += 256;
        v19[4] = v22;
        v23 = v19[3] - 256;
        if ( v23 > 0 )
        {
          memcpy((void *)(v22 + 1024), (const void *)v22, 4 * v23);
          v18 = v37;
        }
        v18[7] = 0;
        v24 = v20[1];
        v20[3] = 0;
        if ( v24 < 1024 )
        {
          sub_102ABFC0(1024 - v24);
          v18 = v37;
        }
        v20[3] += 1024;
        v25 = *v20;
        v26 = v20[3] - 1024;
        v20[4] = *v20;
        if ( v26 > 0 )
        {
          memcpy((void *)(v25 + 4096), (const void *)v25, 4 * v26);
          v18 = v37;
        }
        v6 = v36;
      }
      else
      {
        v18 = 0;
      }
      *(_DWORD *)(v6 + 12) = v18;
    }
    return (*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)dword_106B31F4 + 20))(
             dword_106B31F4,
             v28,
             *(_DWORD *)(v6 + 12));
  }
  return result;
}
