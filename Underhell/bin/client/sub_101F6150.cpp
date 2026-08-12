int __thiscall sub_101F6150(char *this, int a2, int a3)
{
  char *v3; // edi
  int (__thiscall *v4)(int); // edx
  int v5; // esi
  void *v6; // esp
  float *v7; // ebx
  float *v8; // edi
  int v9; // eax
  int v10; // ebx
  _BYTE v12[12]; // [esp+0h] [ebp-E8h] BYREF
  int v13; // [esp+Ch] [ebp-DCh] BYREF
  float v14; // [esp+10h] [ebp-D8h] BYREF
  float v15[18]; // [esp+1Ch] [ebp-CCh] BYREF
  _BYTE v16[64]; // [esp+64h] [ebp-84h] BYREF
  float v17[16]; // [esp+A4h] [ebp-44h] BYREF
  float v18[16]; // [esp+E4h] [ebp-4h] BYREF
  float v19[3]; // [esp+124h] [ebp+3Ch] BYREF
  float v20[3]; // [esp+130h] [ebp+48h] BYREF
  float v21[3]; // [esp+13Ch] [ebp+54h] BYREF
  float v22[3]; // [esp+148h] [ebp+60h] BYREF
  char *v23; // [esp+154h] [ebp+6Ch]
  int v24; // [esp+160h] [ebp+78h]
  int i; // [esp+160h] [ebp+78h]

  v3 = this;
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380);
  v23 = this;
  v5 = v4(dword_1047C970);
  if ( v5 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  sub_10234270(v17, v3 + 288);
  sub_102341F0(v16, (int)(v3 + 288), a2, a3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 80))(v5, 10);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 124))(v5);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 80))(v5, 0);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 96))(v5, v17);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 80))(v5, 1);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 96))(v5, v16);
  v6 = alloca(88 * *((_DWORD *)v3 + 93));
  v24 = 0;
  if ( *((int *)v3 + 93) > 0 )
  {
    v7 = (float *)v12;
    v8 = (float *)(v3 + 464);
    do
    {
      sub_101F5970(v7, v8 - 22);
      sub_101ED860(v8 - 18, v8, &v14);
      sub_101ED920(v8 - 15, v8, v15);
      off_103EDFEC(v15);
      (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)v5 + 60))(v5, v24, v7);
      v8 += 34;
      v7 += 22;
      ++v24;
    }
    while ( v24 < *((_DWORD *)v23 + 93) );
    v3 = v23;
  }
  v13 = 0;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 92))(dword_1047C97C);
  v10 = *((_DWORD *)v3 + 93);
  for ( i = v9; v10 < i; ++v10 )
    (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)v5 + 60))(v5, v10, &v13);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v5 + 64))(v5, v3 + 920);
  if ( dword_1047CA5C )
  {
    sub_101F26D0(v17, v18);
    v21[0] = v18[0];
    v21[1] = v18[4];
    v21[2] = v18[8];
    v20[0] = v18[1];
    v20[1] = v18[5];
    v20[2] = v18[9];
    v19[0] = v18[2];
    v19[1] = v18[6];
    v19[2] = v18[10];
    v22[0] = v18[3];
    v22[1] = v18[7];
    v22[2] = v18[11];
    (*(void (__thiscall **)(int, float *, float *, float *, float *))(*(_DWORD *)dword_1047CA5C + 76))(
      dword_1047CA5C,
      v22,
      v21,
      v20,
      v19);
    (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)dword_1047CA5C + 72))(
      dword_1047CA5C,
      *((_DWORD *)v3 + 93),
      v12);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_1047CA5C + 68))(dword_1047CA5C, v3 + 920);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
}
