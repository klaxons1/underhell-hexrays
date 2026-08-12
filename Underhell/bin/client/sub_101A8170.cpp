void __userpurge sub_101A8170(int a1@<ecx>, int a2@<esi>, int a3, int a4, int a5, int a6)
{
  int v7; // esi
  int v8; // ecx
  char v9; // al
  bool v10; // zf
  int v11; // ecx
  int (__thiscall *v12)(int); // edx
  int v13; // eax
  int v14; // ecx
  int (__thiscall *v15)(int); // edx
  int v16; // eax
  int v17; // ecx
  int (__thiscall *v18)(int); // edx
  int v19; // eax
  int v20; // ecx
  int (__thiscall *v21)(int); // edx
  int v22; // eax
  int v23; // ecx
  int (__cdecl *v24)(_DWORD, int, int); // edx
  double v25; // st7
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // [esp+3Ch] [ebp-5Ch]
  _DWORD v31[4]; // [esp+48h] [ebp-50h] BYREF
  _DWORD v32[4]; // [esp+58h] [ebp-40h] BYREF
  int v33; // [esp+68h] [ebp-30h]
  int v34; // [esp+6Ch] [ebp-2Ch]
  float v35; // [esp+70h] [ebp-28h]
  float v36; // [esp+74h] [ebp-24h]
  float v37; // [esp+78h] [ebp-20h]
  float v38; // [esp+7Ch] [ebp-1Ch]
  float v39; // [esp+80h] [ebp-18h]
  float v40; // [esp+84h] [ebp-14h]
  int v41; // [esp+88h] [ebp-10h]
  float v42; // [esp+8Ch] [ebp-Ch]
  float v43; // [esp+90h] [ebp-8h]
  int v44; // [esp+94h] [ebp-4h] BYREF

  if ( 0.0 != *(float *)(a1 + 16) && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1) )
  {
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
    if ( v7 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 80))(v7, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 124))(v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 80))(v7, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 124))(v7);
    if ( *(_BYTE *)(a1 + 20) )
    {
      v32[0] = a3;
      v32[3] = a6;
      v32[1] = a4;
      v8 = *(_DWORD *)(a1 + 4);
      v32[2] = a5;
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)v7 + 444))(v7, v8, 0, v32, 0);
      *(_BYTE *)(a1 + 20) = 0;
    }
    v44 = 0xFFFFFF;
    v9 = sub_101A7A40(a1);
    v10 = *(_BYTE *)(a1 + 22) == 0;
    HIBYTE(v44) = v9;
    if ( !v10 && !v9 )
    {
      ((void (__thiscall *)(int (***)(), const char *))(*off_103E4FC0)[8])(off_103E4FC0, "ep2_groggy");
      *(_BYTE *)(a1 + 20) = 1;
    }
    v11 = *(_DWORD *)(a1 + 4);
    v35 = cos(*((float *)off_103DC81C + 3));
    v36 = *((float *)off_103DC81C + 3) * 6.0;
    v37 = v35;
    v38 = *((float *)off_103DC81C + 3) * 5.0;
    v12 = *(int (__thiscall **)(int))(*(_DWORD *)v11 + 12);
    v43 = cos(*((float *)off_103DC81C + 3) + *((float *)off_103DC81C + 3))
        * 0.0099999998
        * cos(*((float *)off_103DC81C + 3) * 0.5)
        + sin(*((float *)off_103DC81C + 3) * 4.0) * 0.0049999999
        + 0.2;
    v13 = v12(v11);
    v14 = *(_DWORD *)(a1 + 4);
    LODWORD(v42) = v13 - 1;
    v15 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 16);
    v42 = (double)(v13 - 1) * v43 * 0.5;
    v16 = v15(v14);
    v17 = *(_DWORD *)(a1 + 4);
    v41 = v16 - 1;
    v18 = *(int (__thiscall **)(int))(*(_DWORD *)v17 + 12);
    v43 = (double)(v16 - 1) * v43 * 0.5;
    v19 = v18(v17);
    v20 = *(_DWORD *)(a1 + 4);
    v41 = v19 - 1;
    v21 = *(int (__thiscall **)(int))(*(_DWORD *)v20 + 16);
    v39 = (double)(v19 - 1) - v42;
    v22 = v21(v20);
    v23 = *(_DWORD *)(a1 + 4);
    v24 = *(int (__cdecl **)(_DWORD, int, int))(*(_DWORD *)v23 + 16);
    v41 = v22 - 1;
    v25 = (double)(v22 - 1);
    v26 = *(_DWORD *)(a1 + 8);
    v31[0] = 1;
    v34 = v26;
    v27 = *(_DWORD *)v7;
    v40 = v25 - v43;
    v41 = v23;
    v33 = v27;
    v28 = v24(0, 1, 1);
    v30 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v41 + 12))(v41, v28);
    (*(void (__thiscall **)(int, int, int, int, int, int, float, float, float, float, int))(v33 + 412))(
      v7,
      v34,
      (int)(cos(v36) * (v35 * 4.0)),
      (int)(cos(v38) * (v37 + v37)),
      a5,
      a6,
      COERCE_FLOAT(LODWORD(v42)),
      COERCE_FLOAT(LODWORD(v43)),
      COERCE_FLOAT(LODWORD(v39)),
      COERCE_FLOAT(LODWORD(v40)),
      v30);
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)dword_10413168 + 96))(
      dword_10413168,
      &v44,
      *(_DWORD *)(a1 + 8));
    v31[0] = a3;
    v31[3] = a6;
    v31[1] = a4;
    v29 = *(_DWORD *)(a1 + 4);
    v31[2] = a5;
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)v7 + 444))(v7, v29, 0, v31, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 80))(v7, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 88))(v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 80))(v7, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 88))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
  }
}
