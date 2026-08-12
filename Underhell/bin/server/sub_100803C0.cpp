char __usercall sub_100803C0@<al>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  double v7; // st5
  int v8; // ecx
  int v9; // ebx
  _DWORD *v10; // ecx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  _DWORD *v17; // ebx
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [esp+18h] [ebp-40h]
  float v23; // [esp+1Ch] [ebp-3Ch]
  float v25; // [esp+2Ch] [ebp-2Ch] BYREF
  float v26; // [esp+30h] [ebp-28h]
  float v27; // [esp+34h] [ebp-24h]
  float v28; // [esp+38h] [ebp-20h]
  float v29; // [esp+3Ch] [ebp-1Ch]
  float v30; // [esp+40h] [ebp-18h]
  int v31; // [esp+44h] [ebp-14h]
  int v32; // [esp+48h] [ebp-10h]
  float v33; // [esp+4Ch] [ebp-Ch]
  _DWORD *v34; // [esp+50h] [ebp-8h]
  int v35; // [esp+54h] [ebp-4h]

  v3 = **(_DWORD **)(a1 + 36);
  v4 = *(_DWORD *)(v3 + 40);
  v32 = v4;
  if ( !v4 )
    return 0;
  if ( (*(_BYTE *)(v4 + 32) & 4) == 0 )
    return 0;
  if ( *(_DWORD *)(v4 + 36) )
    return 0;
  if ( *(_DWORD *)(v3 + 36) )
    return 0;
  if ( (*(_BYTE *)(v3 + 32) & 4) == 0 )
    return 0;
  v5 = *(_DWORD *)(a1 + 4);
  v25 = *(float *)(v5 + 716) - *(float *)v3;
  v26 = *(float *)(v5 + 720) - *(float *)(v3 + 4);
  v28 = *(float *)v4 - *(float *)v3;
  v29 = *(float *)(v4 + 4) - *(float *)(v3 + 4);
  v30 = *(float *)(v4 + 8) - *(float *)(v3 + 8);
  off_10689714();
  v27 = 0.0;
  v30 = 0.0;
  v6 = sub_100D7A40(&v25);
  v7 = v26 * v29 + v25 * v28 + 0.0 * v30;
  v33 = *(float *)(*(_DWORD *)(a1 + 36) + 4);
  if ( v6 * 0.5 >= v7 )
    return 0;
  v8 = *(_DWORD *)(a1 + 4);
  v9 = 0;
  v35 = 0;
  v25 = v28 * v7 + *(float *)v3;
  v26 = v29 * v7 + *(float *)(v3 + 4);
  v27 = v30 * v7 + *(float *)(v3 + 8);
  if ( ((*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 1672))(v8, a2) & 1) != 0 )
  {
    v9 = 1;
    v35 = 1;
  }
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 1672))(*(_DWORD *)(a1 + 4)) & 2) != 0 )
  {
    v9 |= 2u;
    v35 = v9;
  }
  v10 = *(_DWORD **)(a1 + 36);
  v34 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 2596);
  v31 = *v34;
  v11 = sub_1007E430(v10);
  v34 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int, float *, int, int, int, int))(v31 + 20))(
                    v34,
                    *(_DWORD *)(a1 + 4) + 716,
                    &v25,
                    v11,
                    1,
                    -1,
                    v9);
  if ( !v34 )
    return 0;
  v12 = *(_DWORD **)(a1 + 36);
  v13 = **(_DWORD **)(*(_DWORD *)(a1 + 4) + 2596);
  v23 = v33;
  v22 = v35;
  v31 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 2596);
  v14 = sub_1007E430(v12);
  v15 = (*(int (__thiscall **)(int, float *, int, int, int, int, int, _DWORD))(v13 + 20))(
          v31,
          &v25,
          v32,
          v14,
          1,
          -1,
          v22,
          LODWORD(v23));
  if ( !v15 )
  {
    sub_100B9C00(v34);
    return 0;
  }
  v17 = v34;
  sub_100B9A80(v34, v15);
  sub_100B9A80(v17, *(_DWORD *)(v32 + 40));
  v18 = *(_DWORD *)(v3 + 40);
  if ( v18 )
    *(_DWORD *)(v18 + 44) = *(_DWORD *)(v3 + 44);
  v19 = *(_DWORD *)(v3 + 44);
  if ( v19 )
    *(_DWORD *)(v19 + 40) = *(_DWORD *)(v3 + 40);
  sub_1042FBE0(v3);
  if ( v18 )
  {
    v20 = *(_DWORD *)(v18 + 40);
    if ( v20 )
      *(_DWORD *)(v20 + 44) = *(_DWORD *)(v18 + 44);
    v21 = *(_DWORD *)(v18 + 44);
    if ( v21 )
      *(_DWORD *)(v21 + 40) = *(_DWORD *)(v18 + 40);
    sub_1042FBE0(v18);
  }
  sub_100A61F0(v34, 0);
  return 1;
}
