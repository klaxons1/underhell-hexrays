// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_102BC290@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5)
{
  double v6; // st7
  int v7; // eax
  int v8; // eax
  int v9; // edi
  float v10; // eax
  float v11; // ecx
  double v12; // st7
  float v15[20]; // [esp+30h] [ebp-FCh] BYREF
  float v16[22]; // [esp+80h] [ebp-ACh] BYREF
  float v17[3]; // [esp+D8h] [ebp-54h] BYREF
  void **v18; // [esp+E4h] [ebp-48h] BYREF
  int v19[3]; // [esp+E8h] [ebp-44h] BYREF
  int v20; // [esp+F4h] [ebp-38h]
  int v21; // [esp+F8h] [ebp-34h]
  int v22; // [esp+FCh] [ebp-30h]
  int v23; // [esp+100h] [ebp-2Ch]
  float *v24; // [esp+104h] [ebp-28h]
  int v25; // [esp+108h] [ebp-24h]
  float v26; // [esp+10Ch] [ebp-20h]
  int i; // [esp+110h] [ebp-1Ch]
  float v28; // [esp+114h] [ebp-18h] BYREF
  float v29; // [esp+118h] [ebp-14h]
  float v30; // [esp+11Ch] [ebp-10h]
  int v31; // [esp+120h] [ebp-Ch]
  void *v32; // [esp+124h] [ebp-8h]
  void *retaddr; // [esp+12Ch] [ebp+0h]

  v31 = a2;
  v32 = retaddr;
  v6 = *(float *)(a1 + 352);
  v7 = *(_DWORD *)(a1 + 252) >> 11;
  v17[0] = -v6;
  v17[1] = v17[0];
  v17[2] = v17[0];
  v28 = v6;
  v29 = v6;
  v30 = v6;
  if ( (v7 & 1) != 0 )
    sub_100DAE60(a1);
  sub_1001F200(v16, (float *)(a1 + 580), a5, v17, &v28);
  v18 = &CCollideList::`vftable';
  v19[0] = 0;
  v19[1] = 32;
  v19[2] = 0;
  v19[0] = (*(int (__thiscall **)(_DWORD, int, int, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 128, a3, a4);
  v21 = v19[0];
  v24 = v16;
  v20 = 0;
  v22 = a1;
  v23 = 33570827;
  (*(void (__thiscall **)(int, float *, _DWORD, void ***))(*(_DWORD *)dword_106B31F4 + 40))(
    dword_106B31F4,
    v16,
    0,
    &v18);
  v26 = *(float *)(a1 + 1276);
  v8 = v20 - 1;
  for ( i = v20 - 1; v8 >= 0; i = v8 )
  {
    v9 = *(_DWORD *)(v19[0] + 4 * v8);
    v10 = *(float *)(a1 + 1156);
    v11 = *(float *)(a1 + 1160);
    v28 = *(float *)(a1 + 1152);
    v29 = v10;
    v30 = v11;
    v25 = *(_DWORD *)(v9 + 424);
    if ( v25 )
    {
      v12 = sub_101B4DE0(v9) * 750.0;
      v28 = v28 * v12;
      v29 = COERCE_FLOAT(&v28) * v12;
      v30 = v12 * v30;
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v25 + 236))(v25, COERCE_FLOAT(LODWORD(v29)));
    }
    if ( *(_BYTE *)(v9 + 225) && 0.0 != *(float *)(a1 + 1276) )
    {
      sub_10248110((int)v15, a1, a1, v26, 64, 0);
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      sub_102485A0(v15, &v28, (float *)(v9 + 580), 1.0);
      sub_100D9E70((int *)v9, a1, v15);
    }
    v8 = i - 1;
  }
  return sub_102375F0(v19);
}
