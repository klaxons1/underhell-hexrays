bool __usercall sub_102592A0@<al>(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, _DWORD *a5)
{
  void *v5; // esp
  int v7; // eax
  int v8; // eax
  int v10; // edx
  float *v11; // eax
  int v12; // edx
  float *v13; // edi
  int v14; // edi
  int v15; // eax
  _DWORD *v16; // ecx
  int (__thiscall *v17)(float *, _DWORD *, int); // edx
  int v18; // eax
  int v19; // edi
  int v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  float *v26; // eax
  float *v27; // eax
  int v28; // edi
  int v29; // esi
  int v30; // ecx
  _DWORD v32[1024]; // [esp-10E0h] [ebp-10ECh] BYREF
  float v33[20]; // [esp-E0h] [ebp-ECh] BYREF
  _BYTE v34[55]; // [esp-90h] [ebp-9Ch] BYREF
  char v35; // [esp-59h] [ebp-65h]
  int v36; // [esp-38h] [ebp-44h] BYREF
  float v37[3]; // [esp-34h] [ebp-40h] BYREF
  float v38[3]; // [esp-28h] [ebp-34h] BYREF
  float *v39; // [esp-1Ch] [ebp-28h]
  int v40[2]; // [esp-18h] [ebp-24h] BYREF
  int v41; // [esp-10h] [ebp-1Ch]
  int v42; // [esp-Ch] [ebp-18h]
  int v43; // [esp-8h] [ebp-14h]
  _DWORD *v44; // [esp-4h] [ebp-10h]
  int v45; // [esp+0h] [ebp-Ch]
  void *v46; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v45 = a2;
  v46 = retaddr;
  v5 = alloca(4328);
  if ( !sub_100D82D0(a5, (int)a1) )
    return 0;
  v7 = (*(int (__thiscall **)(_DWORD *, int, int))(*((_DWORD *)a1 + 80) + 44))((_DWORD *)a1 + 80, a3, a4) - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = *((_DWORD *)a1 + 80);
      v44 = a5 + 80;
      v11 = (float *)(*(int (__thiscall **)(_DWORD *))(v10 + 8))((_DWORD *)a1 + 80);
      v12 = *((_DWORD *)a1 + 80);
      v39 = v11;
      v13 = (float *)(*(int (__thiscall **)(_DWORD *))(v12 + 4))((_DWORD *)a1 + 80);
      if ( ((_DWORD)a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      if ( ((_DWORD)a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      sub_1001F200(v33, a1 + 145, a1 + 145, v13, v39);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 12))(
        dword_106B31F4,
        v33,
        -1,
        v44,
        v34);
      return v35 != 0;
    }
    if ( v8 != 4 )
      return 1;
  }
  v14 = *(_DWORD *)dword_106B31F0;
  v15 = (*(int (__thiscall **)(_DWORD *))(*a5 + 24))(a5);
  v16 = **(_DWORD ***)((*(int (__thiscall **)(int, int))(v14 + 16))(dword_106B31F0, v15) + 4);
  v17 = *(int (__thiscall **)(float *, _DWORD *, int))(*(_DWORD *)a1 + 624);
  v40[0] = 0;
  v40[1] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = v16;
  v18 = v17(a1, v32, 1024);
  v19 = v18;
  if ( v18 )
  {
    v20 = 0;
    if ( v18 > 0 )
    {
      do
      {
        v21 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v32[v20] + 292))(v32[v20]);
        if ( v21 )
        {
          v22 = v32[v20];
          v36 = v21;
          (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v22 + 188))(v22, v37, v38);
          sub_100DE100(v40, v42, &v36);
        }
        ++v20;
      }
      while ( v20 < v19 );
    }
  }
  else
  {
    v23 = *(_DWORD *)dword_106B31F0;
    v24 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 24))(a1);
    v25 = (*(int (__thiscall **)(int, int))(v23 + 16))(dword_106B31F0, v24);
    if ( v25 && (*(_WORD *)v25 & 0x7FFF) != 0 )
    {
      v36 = **(_DWORD **)(v25 + 4);
      v26 = (float *)sub_10019640(a1);
      v37[0] = *v26;
      v37[1] = v26[1];
      v37[2] = v26[2];
      v27 = (float *)sub_1001F410(a1);
      v38[0] = *v27;
      v38[1] = v27[1];
      v38[2] = v27[2];
      sub_100DE100(v40, 0, &v36);
    }
  }
  v28 = v42 - 1;
  if ( v42 - 1 < 0 )
  {
LABEL_29:
    if ( v41 >= 0 )
    {
      if ( v40[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
    }
    return 0;
  }
  v29 = v40[0] + 28 * v28 + 4;
  while ( 1 )
  {
    v30 = (int)a5;
    if ( (a5[63] & 0x800) != 0 )
    {
      sub_100DAE60((int)a5);
      v30 = (int)a5;
    }
    if ( (*(_DWORD *)(v30 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v30);
      v30 = (int)a5;
    }
    (*(void (__thiscall **)(int, int, int, _DWORD, int, _DWORD *, int, int, _BYTE *))(*(_DWORD *)dword_106BAFF0 + 136))(
      dword_106BAFF0,
      v29,
      v29,
      *(_DWORD *)(v29 - 4),
      v29 + 12,
      v44,
      v30 + 580,
      v30 + 704,
      v34);
    if ( v35 )
      break;
    v29 -= 28;
    if ( --v28 < 0 )
      goto LABEL_29;
  }
  if ( v41 >= 0 && v40[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
  return 1;
}
