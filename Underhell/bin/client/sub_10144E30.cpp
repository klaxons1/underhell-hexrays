// bad sp value at call has been detected, the output may be wrong!
char __usercall sub_10144E30@<al>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, float a4, int a5)
{
  int v6; // esi
  float *v7; // edi
  int v8; // ebx
  char v9; // bl
  _BYTE v10[64]; // [esp+0h] [ebp-158h] BYREF
  _BYTE v11[64]; // [esp+40h] [ebp-118h] BYREF
  _BYTE v12[64]; // [esp+80h] [ebp-D8h] BYREF
  _BYTE v13[64]; // [esp+C0h] [ebp-98h] BYREF
  _BYTE v14[8]; // [esp+100h] [ebp-58h] BYREF
  float v15; // [esp+108h] [ebp-50h]
  float v16[12]; // [esp+10Ch] [ebp-4Ch] BYREF
  float v17; // [esp+13Ch] [ebp-1Ch] BYREF
  float v18; // [esp+140h] [ebp-18h]
  float v19; // [esp+144h] [ebp-14h]
  float v20; // [esp+148h] [ebp-10h] BYREF
  float v21; // [esp+14Ch] [ebp-Ch]
  float v22; // [esp+150h] [ebp-8h]
  char v23; // [esp+156h] [ebp-2h]
  char v24; // [esp+157h] [ebp-1h]

  if ( a5 == -1 )
    return 0;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a3);
  if ( v6 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  (*(void (__thiscall **)(int, _DWORD, _BYTE *, int, int))(*(_DWORD *)v6 + 120))(v6, 0, v11, a2, a1);
  (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v6 + 120))(v6, 1, v13);
  sub_101F1FF0(v13, v11, v12);
  sub_101F1AF0(v12, v10);
  sub_101EE690(&v17, &v20);
  v16[0] = -1.0;
  v16[1] = -1.0;
  v24 = 0;
  v23 = 0;
  v16[2] = 0.0;
  v7 = v16;
  v8 = 4;
  v16[3] = -1.0;
  v16[4] = 1.0;
  v16[6] = 1.0;
  v16[9] = 1.0;
  v16[10] = 1.0;
  v16[5] = 0.0;
  v16[8] = 0.0;
  v16[11] = 0.0;
  v16[7] = -1.0;
  do
  {
    sub_101F2310(v10, v7, v14);
    sub_101EE6C0(v14, &v17, &v20);
    if ( a4 < v15 + 7.0 )
      v24 = 1;
    if ( v15 - 7.0 < a4 )
      v23 = 1;
    v7 += 3;
    --v8;
  }
  while ( v8 );
  if ( v24 && v23 )
  {
    v17 = v17 - 7.0;
    v18 = v18 - 7.0;
    v19 = v19 - 7.0;
    v20 = v20 + 7.0;
    v21 = v21 + 7.0;
    v22 = v22 + 7.0;
    v9 = (*(int (__thiscall **)(int, float *, float *, int))(*(_DWORD *)dword_10413168 + 136))(
           dword_10413168,
           &v17,
           &v20,
           a5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
    return v9;
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
    return 0;
  }
}
