int __usercall sub_101F63D0@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // esi
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  int v12; // esi
  int v13; // eax
  int v15; // [esp+30h] [ebp-1E8h]
  float v16; // [esp+30h] [ebp-1E8h]
  _DWORD v17[44]; // [esp+34h] [ebp-1E4h] BYREF
  int v18; // [esp+E4h] [ebp-134h]
  int v19; // [esp+E8h] [ebp-130h]
  int v20; // [esp+ECh] [ebp-12Ch]
  char v21; // [esp+F0h] [ebp-128h]
  _DWORD v22[3]; // [esp+F4h] [ebp-124h] BYREF
  int v23; // [esp+100h] [ebp-118h]
  int v24; // [esp+104h] [ebp-114h]
  int v25; // [esp+108h] [ebp-110h]
  int v26; // [esp+10Ch] [ebp-10Ch]
  int v27; // [esp+110h] [ebp-108h]
  int v28; // [esp+114h] [ebp-104h]
  char v29; // [esp+124h] [ebp-F4h]
  _DWORD v30[40]; // [esp+128h] [ebp-F0h] BYREF
  int v31; // [esp+1C8h] [ebp-50h]
  int v32; // [esp+1D0h] [ebp-48h]
  int v33; // [esp+1D8h] [ebp-40h]
  float *v34; // [esp+1E0h] [ebp-38h]
  _DWORD *v35; // [esp+208h] [ebp-10h]

  v3 = sub_101F4260();
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 380))(v3);
  v5 = v4;
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 80))(v5, 10, a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 124))(v5);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 36))(v5, *(_DWORD *)(a1 + 268), 0);
  v6 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 224))(v5, 1, 0, 0, 0);
  sub_10016C20((int)v17);
  v19 = v6;
  v21 = 1;
  v20 = 1;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 40))(v6, 1);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v19 + 68))(v19, 44, 44, v17);
  v27 = v17[39];
  v24 = v6 + 4;
  LOBYTE(v23) = v18;
  v26 = 0;
  v25 = 44;
  v29 = 0;
  v22[0] = v17[41];
  v28 = 0;
  sub_10016990((int)v30, v6, 44, v17);
  v28 = 0;
  sub_10016A00(v30);
  v7 = 0;
  v15 = 0;
  do
  {
    v8 = v34 + 1;
    v16 = (double)v15 * 20.0 - 100.0;
    *v34 = v16;
    *v8 = -100.0;
    v8[1] = 0.0;
    *v35 = -1;
    sub_10016A80(v30);
    v9 = v34;
    *v34 = v16;
    *++v9 = 100.0;
    v9[1] = 0.0;
    *v35 = -1;
    sub_10016A80(v30);
    v10 = v34;
    *v34 = -100.0;
    *++v10 = v16;
    v10[1] = 0.0;
    *v35 = -1;
    sub_10016A80(v30);
    v11 = v34;
    *v34 = 100.0;
    *++v11 = v16;
    v11[1] = 0.0;
    *v35 = -1;
    sub_10016A80(v30);
    v15 = ++v7;
  }
  while ( v7 < 11 );
  if ( v21 )
  {
    v12 = v20;
    v13 = sub_10016D90(v20, v33);
    sub_10016B00(v22, v12, v13);
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v19 + 80))(v19, v33, v26);
  v23 = 0;
  v24 = 0;
  v32 = 0;
  v31 = 0;
  v30[18] = -1;
  v18 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 48))(v6, -1, 0);
  if ( v31 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v31 + 8))(v31) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v31 + 16))(v31);
  if ( v23 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 16))(v23);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
}
