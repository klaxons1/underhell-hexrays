int __userpurge sub_101A66E0@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4)
{
  double v5; // st7
  int v6; // eax
  void (__thiscall *v7)(int, int, float *, _BYTE *); // eax
  float *v8; // edi
  int v9; // esi
  float v11; // [esp+3Ch] [ebp-5Ch]
  float v12; // [esp+4Ch] [ebp-4Ch]
  _BYTE v13[12]; // [esp+5Ch] [ebp-3Ch] BYREF
  float v14; // [esp+68h] [ebp-30h]
  float v15; // [esp+6Ch] [ebp-2Ch]
  float v16; // [esp+70h] [ebp-28h]
  float v17[3]; // [esp+74h] [ebp-24h] BYREF
  int v18[3]; // [esp+80h] [ebp-18h] BYREF
  float v19; // [esp+8Ch] [ebp-Ch] BYREF
  float v20; // [esp+90h] [ebp-8h]
  float v21; // [esp+94h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 2148) )
  {
    v5 = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           0.1,
           0.2,
           a2,
           a3);
    v6 = *(_DWORD *)a1;
    v21 = v5;
    v7 = *(void (__thiscall **)(int, int, float *, _BYTE *))(v6 + 148);
    v20 = v5;
    v19 = v5;
    v7(a1, 1, v17, v13);
    sub_101EDFB0(v13);
    *(float *)v18 = v17[0] - v14;
    *(float *)&v18[1] = v17[1] - v15;
    *(float *)&v18[2] = v17[2] - v16;
    v8 = (float *)(*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
                    dword_1047C96C,
                    "effects/stunstick",
                    0,
                    0,
                    0);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    if ( v9 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9);
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD, float *, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            4.0,
            6.0,
            &v19,
            1.0);
    sub_10017340(a1, (int)v8, (float *)v18, v12, v8, 0.0);
    v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            0.89999998,
            1.0);
    v20 = v21;
    v19 = v21;
    v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
    sub_10017340(a1, (int)v8, (float *)v18, v11, COERCE_FLOAT_(2.0), 3.0);
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v19, 1.0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
  }
  return sub_10033BD0(a1, a4);
}
