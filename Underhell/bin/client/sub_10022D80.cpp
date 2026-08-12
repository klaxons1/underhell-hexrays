int __thiscall sub_10022D80(int *this, int a2, int a3)
{
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  void *v8; // edi
  int v9; // eax
  int v10; // ecx
  int *v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // edx
  int v19; // esi
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // esi
  int *v25; // [esp-30h] [ebp-58h]
  _DWORD v26[4]; // [esp+4h] [ebp-24h] BYREF
  int v27; // [esp+14h] [ebp-14h]
  int *v28; // [esp+18h] [ebp-10h]
  int v29; // [esp+1Ch] [ebp-Ch]
  int v30; // [esp+20h] [ebp-8h]
  int *v31; // [esp+24h] [ebp-4h]

  result = sub_10126DD0(this[1022]);
  if ( result )
  {
    v31 = sub_1001ACB0(&dword_10403328);
    if ( !v31 )
    {
      v31 = (int *)sub_100DDA40(6144);
      if ( ((unsigned __int8)v31 & 7) != 0 )
        __debugbreak();
    }
    v5 = this[1022];
    memset(v26, 0, sizeof(v26));
    v6 = sub_10126DD0(v5);
    v7 = 132 * sub_10020810(this + 1028, this[1031], v6, 0);
    v8 = (void *)(v7 + this[1028]);
    v9 = sub_10126DD0(this[1022]);
    memset(v8, 0, 132 * v9);
    v10 = this[1022];
    v30 = 0;
    if ( sub_10126DD0(v10) > 0 )
    {
      v29 = v7;
      do
      {
        v11 = (int *)sub_10127EC0(v30);
        v12 = (_DWORD *)this[1022];
        v13 = *v12;
        v14 = *(_DWORD *)(*v12 + 288);
        v15 = v12[11];
        v28 = v11;
        v16 = v13 + 16 * *v11 + v14;
        v17 = *(_DWORD *)(*(_DWORD *)(v16 + 12) + v16 + 56);
        v18 = *(_DWORD *)(v15 + 4 * v17);
        v27 = v17;
        if ( (v18 & this[1047]) != 0 )
        {
          sub_10020130(this[1022], (int)(this + 1033), a2, a3, v17, (int)v31, (int)v26);
          v19 = v29 + this[1028];
          v20 = *v28;
          *(_DWORD *)(v19 + 16) = v30;
          v21 = 3 * v27;
          *(_DWORD *)(v19 + 8) = v20;
          v25 = &v31[4 * v21];
          *(_DWORD *)(v19 + 4) = 2;
          sub_101F0930(v25, v19 + 44, v19 + 32);
          v22 = *(_DWORD *)(v16 + 12);
          if ( *(float *)(v22 + v16 + 8) * *(float *)(v22 + v16 + 8)
             + *(float *)(v22 + v16 + 4) * *(float *)(v22 + v16 + 4)
             + *(float *)(v22 + v16 + 12) * *(float *)(v22 + v16 + 12) <= 0.0 )
          {
            *(float *)(v19 + 108) = 0.0;
            *(float *)(v19 + 112) = 0.0;
            *(float *)(v19 + 116) = 0.0;
          }
          else
          {
            sub_101ED920(
              v16 + *(_DWORD *)(v16 + 12) + 4,
              &v31[12 * *(_DWORD *)(*(_DWORD *)(v16 + 12) + v16)],
              v19 + 108);
            sub_101EDA00(&v31[12 * *(_DWORD *)(*(_DWORD *)(v16 + 12) + v16 + 28)], 3, v19 + 120);
          }
        }
        v23 = this[1022];
        v29 += 132;
        v24 = ++v30;
      }
      while ( v24 < sub_10126DD0(v23) );
    }
    return sub_1001AC40(&dword_10403328, v31);
  }
  return result;
}
