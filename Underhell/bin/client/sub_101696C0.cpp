int __usercall sub_101696C0@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  bool v3; // cc
  float *v4; // edi
  int v5; // ecx
  int (__thiscall *v6)(int); // eax
  float *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // rt1
  double v16; // st5
  bool v17; // sf
  int result; // eax
  float v19[22]; // [esp+24h] [ebp-ECh] BYREF
  float v20[3]; // [esp+7Ch] [ebp-94h] BYREF
  float v21[19]; // [esp+88h] [ebp-88h] BYREF
  _DWORD v22[3]; // [esp+D4h] [ebp-3Ch] BYREF
  float v23; // [esp+E0h] [ebp-30h]
  float v24[3]; // [esp+E4h] [ebp-2Ch] BYREF
  int v25; // [esp+F0h] [ebp-20h]
  float v26; // [esp+F4h] [ebp-1Ch]
  float v27; // [esp+F8h] [ebp-18h]
  float v28; // [esp+FCh] [ebp-14h]
  int v29; // [esp+100h] [ebp-10h]
  int v30; // [esp+104h] [ebp-Ch]
  void *v31; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v30 = a2;
  v31 = retaddr;
  v3 = *(_DWORD *)(a1 + 16) <= 0;
  *(_DWORD *)a1 = &CRagdollExplosionEnumerator::`vftable';
  v29 = 0;
  if ( !v3 )
  {
    v4 = (float *)(a1 + 24);
    do
    {
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v29);
      v6 = *(int (__thiscall **)(int))(*(_DWORD *)(v5 + 352) + 32);
      v25 = v5;
      v7 = (float *)v6(v5 + 352);
      v8 = *v7;
      v9 = v7[1];
      v10 = v7[2];
      v24[0] = v8;
      v11 = v8 - *v4;
      v24[1] = v9;
      v24[2] = v10;
      v26 = v11;
      v27 = v9 - *(float *)(a1 + 28);
      v28 = v10 - *(float *)(a1 + 32);
      v12 = *(float *)(a1 + 36) - off_103EDFEC() * (*(float *)(a1 + 36) / *(float *)(a1 + 40));
      v23 = v12;
      if ( v12 > 1.0 )
      {
        sub_1000E430(v19, (float *)(a1 + 24), v24);
        sub_1012D400(v22, 0, 0);
        (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_104131A0 + 16))(
          dword_104131A0,
          v19,
          100679691,
          v22,
          v20);
        if ( *(_DWORD *)(dword_10439134 + 48) )
          sub_10130AC0(v20, v21, 255, 0, 0, 1, 5.0);
        if ( v21[8] >= 1.0 || LODWORD(v21[16]) == v25 )
        {
          v13 = v26 * v23;
          v26 = v13;
          v14 = v27 * v23;
          v27 = v14;
          v15 = v14;
          v16 = v23 * v28;
          v28 = v16;
          v20[0] = v21[0] - v13;
          v20[1] = v21[1] - v15;
          v20[2] = v21[2] - v16 - 32.0;
          (*(void (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v25 + 456))(v25, v20, 64, 0);
        }
      }
      ++v29;
    }
    while ( v29 < *(_DWORD *)(a1 + 16) );
  }
  v17 = *(int *)(a1 + 12) < 0;
  *(_DWORD *)(a1 + 16) = 0;
  if ( !v17 )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(a1 + 4));
      *(_DWORD *)(a1 + 4) = 0;
    }
    *(_DWORD *)(a1 + 8) = 0;
  }
  v17 = *(int *)(a1 + 12) < 0;
  result = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 20) = result;
  if ( !v17 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      *(_DWORD *)(a1 + 4) = 0;
    }
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
