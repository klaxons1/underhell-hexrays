int __thiscall sub_10174EE0(int this, int a2, float *a3, float *a4, float *a5, float *a6, unsigned __int8 *a7, char a8)
{
  _DWORD *v9; // ebx
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  int v18; // edi
  int v19; // eax

  if ( a8 )
  {
    sub_10017110(this, a2, 5, 4);
    v14 = *(float **)(this + 428);
    *v14 = *a3;
    v9 = (_DWORD *)(this + 244);
    v14[1] = a3[1];
    v14[2] = a3[2];
    **(_DWORD **)(this + 468) = a7[2] | ((a7[1] | ((*a7 | (a7[3] << 8)) << 8)) << 8);
    sub_10016A80((_DWORD *)(this + 244));
    v15 = *(float **)(this + 428);
    *v15 = *a4;
    v15[1] = a4[1];
    v15[2] = a4[2];
    **(_DWORD **)(this + 468) = a7[2] | ((a7[1] | ((*a7 | (a7[3] << 8)) << 8)) << 8);
    sub_10016A80((_DWORD *)(this + 244));
    v16 = *(float **)(this + 428);
    *v16 = *a5;
    v16[1] = a5[1];
    v16[2] = a5[2];
    **(_DWORD **)(this + 468) = a7[2] | ((a7[1] | ((*a7 | (a7[3] << 8)) << 8)) << 8);
    sub_10016A80((_DWORD *)(this + 244));
    v17 = *(float **)(this + 428);
    *v17 = *a6;
    v17[1] = a6[1];
    v17[2] = a6[2];
  }
  else
  {
    *(_DWORD *)(this + 180) = a2;
    *(_BYTE *)(this + 188) = 1;
    *(_DWORD *)(this + 184) = 3;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 40))(a2, 3);
    (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(this + 180) + 68))(
      *(_DWORD *)(this + 180),
      4,
      4,
      this);
    *(_DWORD *)(this + 208) = a2 + 4;
    *(_DWORD *)(this + 216) = 0;
    *(_DWORD *)(this + 212) = 4;
    *(_BYTE *)(this + 240) = 0;
    *(_DWORD *)(this + 220) = *(_DWORD *)(this + 156);
    *(_DWORD *)(this + 192) = *(_DWORD *)(this + 164);
    *(_BYTE *)(this + 204) = *(_BYTE *)(this + 176);
    v9 = (_DWORD *)(this + 244);
    *(_DWORD *)(this + 224) = 0;
    sub_10016990(this + 244, a2, 4, (_DWORD *)this);
    *(_DWORD *)(this + 224) = 0;
    sub_10016A00((_DWORD *)(this + 244));
    v10 = *(float **)(this + 428);
    *v10 = *a3;
    v10[1] = a3[1];
    v10[2] = a3[2];
    **(_DWORD **)(this + 468) = a7[2] | ((a7[1] | ((*a7 | (a7[3] << 8)) << 8)) << 8);
    sub_10016A80((_DWORD *)(this + 244));
    v11 = *(float **)(this + 428);
    *v11 = *a4;
    v11[1] = a4[1];
    v11[2] = a4[2];
    **(_DWORD **)(this + 468) = a7[2] | ((a7[1] | ((*a7 | (a7[3] << 8)) << 8)) << 8);
    sub_10016A80((_DWORD *)(this + 244));
    v12 = *(float **)(this + 428);
    *v12 = *a6;
    v12[1] = a6[1];
    v12[2] = a6[2];
    **(_DWORD **)(this + 468) = a7[2] | ((a7[1] | ((*a7 | (a7[3] << 8)) << 8)) << 8);
    sub_10016A80((_DWORD *)(this + 244));
    v13 = *(float **)(this + 428);
    *v13 = *a5;
    v13[1] = a5[1];
    v13[2] = a5[2];
  }
  **(_DWORD **)(this + 468) = a7[2] | ((a7[1] | ((*a7 | (a7[3] << 8)) << 8)) << 8);
  sub_10016A80(v9);
  if ( *(_BYTE *)(this + 188) )
  {
    v18 = *(_DWORD *)(this + 184);
    v19 = sub_10016D90(v18, *(_DWORD *)(this + 420));
    sub_10016B00((_DWORD *)(this + 192), v18, v19);
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(this + 180) + 80))(
    *(_DWORD *)(this + 180),
    *(_DWORD *)(this + 420),
    *(_DWORD *)(this + 216),
    this);
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  v9[43] = 0;
  v9[41] = 0;
  v9[19] = -1;
  *(_DWORD *)(this + 180) = 0;
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 48))(a2, -1, 0);
}
