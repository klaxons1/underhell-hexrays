void __thiscall sub_100BC870(float *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // ebx
  char *v6; // eax
  void (__thiscall *v7)(float *, int); // edx
  void (__thiscall *v8)(int, int); // edx
  int v9; // ebx
  double v10; // st7
  float *v11; // eax
  int v12; // esi
  void (__thiscall *v13)(int, int); // eax
  float v14; // [esp+1Ch] [ebp-74h]
  int v15; // [esp+20h] [ebp-70h]
  _BYTE v16[12]; // [esp+38h] [ebp-58h] BYREF
  _BYTE v17[12]; // [esp+44h] [ebp-4Ch] BYREF
  _DWORD v18[3]; // [esp+50h] [ebp-40h] BYREF
  int v19[3]; // [esp+5Ch] [ebp-34h] BYREF
  int v20; // [esp+68h] [ebp-28h] BYREF
  float v21; // [esp+6Ch] [ebp-24h]
  float v22; // [esp+70h] [ebp-20h]
  float v23[2]; // [esp+74h] [ebp-1Ch] BYREF
  float *v24; // [esp+7Ch] [ebp-14h]
  float *v25; // [esp+80h] [ebp-10h]
  int v26; // [esp+84h] [ebp-Ch] BYREF
  int v27; // [esp+88h] [ebp-8h] BYREF
  int v28; // [esp+8Ch] [ebp-4h]

  v2 = sub_100422D0();
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)this + 52) = v2;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v18);
    sub_101EDFB0(v18, v17);
    sub_101EDFB0(v18, v16);
    (*(void (__thiscall **)(int *, float *))(*off_103ED0D8 + 12))(off_103ED0D8, v23);
    v4 = sub_101356F0();
    v20 = *(int *)v4;
    v21 = *(float *)(v4 + 4);
    v22 = *(float *)(v4 + 8);
    v19[0] = v18[0];
    v19[1] = v18[1];
    v19[2] = v18[2];
    sub_101356E0();
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1041315C + 20))(dword_1041315C, &v26, &v27);
    v26 = (int)((v23[0] + 1.0) * 0.5 * (double)v26);
    v27 = (int)(0.5 * (v23[1] + 1.0) * (double)v27);
    v15 = sub_101356D0();
    v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 952))(v3);
    sub_10070AD0(v26, v27, v14, v15, (int)v19, (float *)&v20);
    v5 = *(_DWORD *)dword_1041315C;
    v6 = sub_10076640("update_freeaim %f %f %f", *(float *)&v20, v21, v22);
    (*(void (__thiscall **)(int, char *, int))(v5 + 24))(dword_1041315C, v6, 1);
    v7 = *(void (__thiscall **)(float *, int))(*(_DWORD *)this + 216);
    v28 = 3947580;
    v7(this, 3947580);
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 124))(this, 1);
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 260))(this, 0);
    v8 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40);
    v9 = (int)((3.0 - (*((float *)off_103DC81C + 3) - *(float *)(v3 + 3456))) * 85.0);
    BYTE2(v28) = -1;
    LOWORD(v28) = -1;
    HIBYTE(v28) = v9;
    v8(dword_1047CA6C, v28);
    if ( *((float *)off_103DC81C + 3) - *(float *)(v3 + 3456) < 3.0 && !*(_BYTE *)(v3 + 4140) )
    {
      v10 = this[56];
      v11 = this + 56;
      v25 = this + 54;
      v12 = *(_DWORD *)dword_1047CA6C;
      v24 = v11;
      (*(void (__thiscall **)(int, int, int, int, int))(v12 + 384))(dword_1047CA6C, (int)*v25, (int)v10, 2, 8);
      v13 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40);
      LOWORD(v28) = 0;
      BYTE2(v28) = 0;
      HIBYTE(v28) = v9;
      v13(dword_1047CA6C, v28);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 384))(
        dword_1047CA6C,
        (int)*v25,
        (int)*v24,
        3,
        8);
    }
  }
}
