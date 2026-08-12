int __usercall sub_10234A50@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<esi>,
        int a4,
        int a5,
        float *a6,
        int a7,
        float *a8,
        float *a9,
        int a10)
{
  int v10; // esi
  int v11; // eax
  int v12; // ebx
  int v13; // edi
  _DWORD *v14; // ebp
  int i; // esi
  float *v16; // ecx
  float *v17; // eax
  int v18; // eax
  float *v19; // ecx
  int v20; // eax
  float *v21; // eax
  int v22; // esi
  int v23; // eax
  int v25; // [esp+3Ch] [ebp-24Ch]
  _DWORD v26[44]; // [esp+48h] [ebp-240h] BYREF
  int v27; // [esp+F8h] [ebp-190h]
  int v28; // [esp+FCh] [ebp-18Ch]
  int v29; // [esp+100h] [ebp-188h]
  char v30; // [esp+104h] [ebp-184h]
  int v31; // [esp+108h] [ebp-180h] BYREF
  int v32; // [esp+110h] [ebp-178h]
  int v33; // [esp+114h] [ebp-174h]
  int v34; // [esp+118h] [ebp-170h]
  int v35; // [esp+11Ch] [ebp-16Ch]
  int v36; // [esp+120h] [ebp-168h]
  int v37; // [esp+124h] [ebp-164h]
  int v38; // [esp+128h] [ebp-160h]
  char v39; // [esp+138h] [ebp-150h]
  _DWORD v40[39]; // [esp+13Ch] [ebp-14Ch] BYREF
  int v41; // [esp+1D8h] [ebp-B0h]
  int v42; // [esp+1E0h] [ebp-A8h]
  int v43; // [esp+1ECh] [ebp-9Ch]
  float *v44; // [esp+1F4h] [ebp-94h]
  int *v45; // [esp+21Ch] [ebp-6Ch]
  float v46[22]; // [esp+230h] [ebp-58h] BYREF

  sub_102343B0(a3);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v25 = v10;
  if ( v10 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
  v11 = dword_1047CA38;
  if ( !(_BYTE)a9 )
    v11 = dword_1047CA34;
  (*(void (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)v10 + 36))(v10, v11, 0, a2, a1);
  sub_10234560(a6, a8, a9, (int)v46);
  v12 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v10 + 224))(v10, 1, 0, 0, 0);
  sub_10016C20((int)v26);
  v28 = v12;
  v30 = 1;
  v29 = 1;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 40))(v12, 1);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v28 + 68))(v28, 48, 48, v26);
  v37 = v26[39];
  v34 = v12 + 4;
  v36 = 0;
  v35 = 48;
  v39 = 0;
  v31 = v26[41];
  LOBYTE(v33) = v27;
  v38 = 0;
  sub_10016990((int)v40, v12, 48, v26);
  v38 = 0;
  sub_10016A00(v40);
  v13 = BYTE2(a10) | ((BYTE1(a10) | (((unsigned __int8)a10 | (HIBYTE(a10) << 8)) << 8)) << 8);
  v14 = &unk_103FC8F0;
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      v16 = v44;
      v17 = &v46[3 * v14[i]];
      *v44 = *v17++;
      *++v16 = *v17;
      v16[1] = v17[1];
      *v45 = v13;
      sub_10016A80(v40);
      if ( i == 3 )
        v18 = 0;
      else
        v18 = i + 1;
      v19 = v44;
      v20 = 3 * v14[v18];
      *v44 = v46[v20];
      v21 = &v46[v20 + 1];
      *++v19 = *v21;
      v19[1] = v21[1];
      *v45 = v13;
      sub_10016A80(v40);
    }
    v14 += 4;
  }
  while ( (int)v14 < (int)dword_103FC950 );
  if ( v30 )
  {
    v22 = v29;
    v23 = sub_10016D90(v29, v43);
    sub_10016B00(&v31, v22, v23);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v28 + 80))(v28, v43);
  v32 = 0;
  v33 = 0;
  v42 = 0;
  v41 = 0;
  v40[17] = -1;
  v26[43] = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 48))(v12, -1, 0);
  if ( v41 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v41 + 8))(v41) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v41 + 16))(v41);
  if ( v32 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v32 + 8))(v32) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v32 + 16))(v32);
  (*(void (__thiscall **)(int))(*(_DWORD *)v25 + 12))(v25);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 4))(v25);
}
