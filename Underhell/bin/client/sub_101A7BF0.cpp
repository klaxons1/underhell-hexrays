void __userpurge sub_101A7BF0(int a1@<ecx>, int a2@<esi>, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  double v10; // st7
  int (*v11)(void); // edx
  long double v12; // st7
  double v13; // st7
  double v14; // st6
  int *v15; // edi
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  float v22; // [esp+4Ch] [ebp-40h]
  float v23; // [esp+50h] [ebp-3Ch]
  float v24; // [esp+50h] [ebp-3Ch]
  float v25; // [esp+50h] [ebp-3Ch]
  float v26; // [esp+50h] [ebp-3Ch]
  float v27; // [esp+54h] [ebp-38h]
  _DWORD v28[4]; // [esp+5Ch] [ebp-30h] BYREF
  int v29; // [esp+6Ch] [ebp-20h] BYREF
  _DWORD v30[3]; // [esp+70h] [ebp-1Ch] BYREF
  void (__thiscall **v31)(int, int, _DWORD, _DWORD, int, int, float, _DWORD, _DWORD); // [esp+7Ch] [ebp-10h]
  int v32; // [esp+80h] [ebp-Ch]
  float v33; // [esp+84h] [ebp-8h]
  int v34; // [esp+88h] [ebp-4h]

  if ( *((float *)off_103DC81C + 3) <= (double)*(float *)(a1 + 16) )
  {
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
    v8 = v7;
    if ( v7 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 80))(v8, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 84))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 124))(v8);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 80))(v8, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 84))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 124))(v8);
    if ( *(_BYTE *)(a1 + 20) )
    {
      v29 = a3;
      v30[1] = a5;
      v30[2] = a6;
      v9 = *(_DWORD *)(a1 + 4);
      v30[0] = a4;
      (*(void (__thiscall **)(int, int, _DWORD, int *, _DWORD))(*(_DWORD *)v8 + 444))(v8, v9, 0, &v29, 0);
      *(_BYTE *)(a1 + 20) = 0;
    }
    v10 = (*(float *)(a1 + 16) - *((float *)off_103DC81C + 3)) / *(float *)(a1 + 12);
    *(float *)&v34 = v10;
    v11 = *(int (**)(void))(*(_DWORD *)dword_1047C97C + 124);
    v33 = cos(*((float *)off_103DC81C + 3) * 40.0) * sin(*((float *)off_103DC81C + 3) * 17.0) * (v10 * 32.0)
        + (double)a3;
    if ( v11() >= 80 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C) )
        v12 = pow(
                1.0 / *(float *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 612))(v8, v30),
                0.4545454382896423);
      else
        v12 = 1.0;
      v27 = v12;
      v23 = v12;
      v22 = v12;
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 8) + 112))(
        *(_DWORD *)(a1 + 8),
        LODWORD(v22),
        LODWORD(v23),
        LODWORD(v27));
      v13 = *(float *)&v34 * 0.58823532;
      v14 = 1.0;
      if ( v13 > 1.0 || (v14 = 0.0, v13 < 0.0) )
        v13 = v14;
      v24 = v13;
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 108))(LODWORD(v24));
      v15 = *(int **)(a1 + 4);
      v16 = *v15;
      v32 = *(_DWORD *)(a1 + 8);
      v31 = (void (__thiscall **)(int, int, _DWORD, _DWORD, int, int, float, _DWORD, _DWORD))(*(_DWORD *)v8 + 412);
      v17 = (*(int (__thiscall **)(int *, _DWORD, int, int))(v16 + 16))(v15, 0, 1, 1);
      v18 = (*(int (__thiscall **)(int *, int))(*v15 + 12))(v15, v17);
      v19 = (*(int (__thiscall **)(int *, int))(*v15 + 16))(v15, v18);
      v20 = *v15;
      v34 = v19 - 1;
      v25 = (float)(v19 - 1);
      v34 = (*(int (__thiscall **)(int *, _DWORD))(v20 + 12))(v15, LODWORD(v25)) - 1;
      v26 = (double)v34 + v33;
      (*v31)(v8, v32, 0, 0, a5, a6, COERCE_FLOAT(LODWORD(v33)), 0.0, LODWORD(v26));
    }
    v28[0] = a3;
    v28[2] = a5;
    v28[3] = a6;
    v21 = *(_DWORD *)(a1 + 4);
    v28[1] = a4;
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD *))(*(_DWORD *)v8 + 444))(v8, v21, 0, v28);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 80))(v8, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 88))(v8);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 80))(v8, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 88))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
  }
}
