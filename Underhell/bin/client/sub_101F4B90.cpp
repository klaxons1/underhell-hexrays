int __usercall sub_101F4B90@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  _DWORD *v3; // edi
  int v4; // ebp
  int (__thiscall **v5)(_DWORD *, int); // esi
  int v6; // eax
  int result; // eax
  int v8; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  const char *v13; // eax
  int v14; // eax
  int (__thiscall *v15)(int, _DWORD, _DWORD *); // edx
  int v16; // ebp
  int v17; // ebx
  int v18; // esi
  int v19; // edi
  float *v20; // eax
  int v21; // ecx
  float *v22; // eax
  int v23; // eax
  int v24; // [esp+3Ch] [ebp-211Ch]
  int v26; // [esp+54h] [ebp-2104h]
  _DWORD v27[2]; // [esp+58h] [ebp-2100h] BYREF
  int v28; // [esp+60h] [ebp-20F8h]
  int v29; // [esp+64h] [ebp-20F4h]
  int v30; // [esp+68h] [ebp-20F0h]
  float v31[3]; // [esp+6Ch] [ebp-20ECh] BYREF
  _DWORD v32[44]; // [esp+78h] [ebp-20E0h] BYREF
  char v33; // [esp+128h] [ebp-2030h]
  int v34; // [esp+12Ch] [ebp-202Ch]
  int v35; // [esp+130h] [ebp-2028h]
  char v36; // [esp+134h] [ebp-2024h]
  int v37[3]; // [esp+138h] [ebp-2020h] BYREF
  char v38; // [esp+144h] [ebp-2014h]
  int v39; // [esp+148h] [ebp-2010h]
  int v40; // [esp+14Ch] [ebp-200Ch]
  int v41; // [esp+150h] [ebp-2008h]
  int v42; // [esp+154h] [ebp-2004h]
  int v43; // [esp+158h] [ebp-2000h]
  int v44; // [esp+168h] [ebp-1FF0h]
  _DWORD v45[41]; // [esp+16Ch] [ebp-1FECh] BYREF
  int v46; // [esp+210h] [ebp-1F48h]
  int v47; // [esp+218h] [ebp-1F40h]
  int v48; // [esp+21Ch] [ebp-1F3Ch]
  float *v49; // [esp+224h] [ebp-1F34h]
  float *v50; // [esp+22Ch] [ebp-1F2Ch]
  int *v51; // [esp+24Ch] [ebp-1F0Ch]
  float v52[11]; // [esp+260h] [ebp-1EF8h] BYREF
  int v53; // [esp+290h] [ebp-1EC8h] BYREF
  int v54[9]; // [esp+294h] [ebp-1EC4h] BYREF
  int v55[5]; // [esp+2B8h] [ebp-1EA0h] BYREF
  int v56[5]; // [esp+2CCh] [ebp-1E8Ch] BYREF
  int v57; // [esp+2E0h] [ebp-1E78h]
  int v58[13]; // [esp+2ECh] [ebp-1E6Ch] BYREF
  int v59; // [esp+320h] [ebp-1E38h] BYREF
  char String2[1592]; // [esp+324h] [ebp-1E34h] BYREF
  _OWORD v61[383]; // [esp+95Ch] [ebp-17FCh] BYREF

  v3 = (_DWORD *)sub_101F4280();
  v4 = a1 + 1068;
  v5 = (int (__thiscall **)(_DWORD *, int))(*v3 + 48);
  v6 = sub_102356B0(v4);
  result = (*v5)(v3, v6);
  v8 = result;
  v28 = result;
  if ( result && (*(_WORD *)result & 0x7FFF) != 0 )
  {
    v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA9C + 152))(dword_1047CA9C, *(_DWORD *)(result + 8));
    v10 = *(_DWORD *)dword_1047CA88;
    v24 = dword_1047CA88;
    v27[0] = v9;
    v11 = sub_102356B0(v4);
    v12 = (*(int (__thiscall **)(int, int, int))(v10 + 40))(dword_1047CA88, v11, v24);
    sub_101288D0((int)&v53, v12, a2);
    sub_10235BE0(v26 + 2652, 128, v61);
    while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9) )
    {
      v13 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
      if ( !_stricmp(v13, "solid") )
      {
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v59, 0);
        v14 = sub_1001E140((int)&v53, String2);
        v15 = *(int (__thiscall **)(int, _DWORD, _DWORD *))(*(_DWORD *)dword_1047CA9C + 160);
        v28 = v14;
        v16 = v15(dword_1047CA9C, *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v59), v27);
        v30 = v16;
        if ( v16 )
        {
          v17 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
          if ( v17 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 160))(v17, 0);
          sub_101EE350(v52);
          if ( v28 >= 0 )
            sub_101ED9E0(&v61[3 * v28], v52);
          v18 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v17 + 224))(
                  v17,
                  1,
                  0,
                  0,
                  *(_DWORD *)(v26 + 268));
          sub_10016C20((int)v32);
          v34 = v18;
          v36 = 1;
          v35 = 2;
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 40))(v18, 2);
          (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v34 + 68))(
            v34,
            3 * (v16 / 3),
            3 * (v16 / 3),
            v32);
          v37[0] = v32[41];
          v42 = v32[39];
          v39 = v18 + 4;
          v38 = v33;
          v41 = 0;
          v40 = 3 * (v16 / 3);
          LOBYTE(v44) = 0;
          v43 = 0;
          sub_10016990((int)v45, v18, v40, v32);
          v19 = 0;
          v43 = 0;
          sub_10016A00(v45);
          if ( v16 > 0 )
          {
            do
            {
              sub_101ED860((float *)(v19 + v27[0]), v52, v31);
              v20 = v49;
              v21 = (unsigned __int8)byte_103EE4CF;
              *v49 = v31[0];
              *++v20 = v31[1];
              v20[1] = v31[2];
              *v51 = (unsigned __int8)byte_103EE4CE | ((unk_103EE4CD | ((unk_103EE4CC | (v21 << 8)) << 8)) << 8);
              v22 = v50;
              *v50 = 0.0;
              v22[1] = 0.0;
              sub_10016A80(v45);
              v19 += 12;
              --v16;
            }
            while ( v16 );
            v16 = v30;
          }
          if ( v36 )
          {
            v23 = sub_10016D90(v35, v48);
            sub_10016B00(v37, v35, v23);
          }
          (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v34 + 80))(v34, v48, v41, v32);
          v39 = 0;
          v40 = 0;
          v47 = 0;
          v46 = 0;
          v45[19] = -1;
          v34 = 0;
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 48))(v18, -1, 0);
          if ( v46 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v46 + 8))(v46) )
            (*(void (__thiscall **)(int))(*(_DWORD *)v46 + 16))(v46);
          if ( v39 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v39 + 8))(v39) )
            (*(void (__thiscall **)(int))(*(_DWORD *)v39 + 16))(v39);
          (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 12))(v17);
          (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17);
          v8 = v29;
          v9 = v27[1];
        }
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA9C + 164))(dword_1047CA9C, v16, v27[0]);
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9);
      }
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA9C + 156))(dword_1047CA9C, v9);
    nullsub_4();
    if ( v57 )
      sub_10034930(v57);
    sub_100F9890(v58);
    sub_100F9DC0(v58);
    sub_1011A810(v56);
    sub_1011A810(v55);
    return sub_1011A810(v54);
  }
  return result;
}
