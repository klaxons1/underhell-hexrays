char __thiscall sub_10057680(int *this, int a2, int a3, int a4, int **a5)
{
  int *v5; // ebx
  int v6; // eax
  float *v7; // edi
  float *v8; // eax
  float *v9; // esi
  _DWORD *v10; // eax
  int v12; // [esp+24h] [ebp+10h]

  v5 = (int *)sub_10057150(this, a2, a4);
  v6 = sub_10051740(v5);
  v12 = v6;
  if ( v6 == -1 )
  {
    a5[1] = 0;
    *a5 = 0;
    return 0;
  }
  else
  {
    v7 = (float *)(*(_DWORD *)(*v5 + 40) + 36 * v6);
    v8 = (float *)sub_10056BD0(v5 + 2);
    v9 = v8;
    if ( a3 )
      *v8 = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
    else
      *v8 = NAN;
    *((_DWORD *)v9 + 1) = v12;
    *((_DWORD *)v9 + 16) = v5;
    v10 = (_DWORD *)(v5[14] + 4 * (v12 >> 5));
    *v10 |= 1 << (v12 & 0x1F);
    v9[3] = v7[1];
    v9[4] = v7[2];
    v9[5] = v7[3];
    v9[6] = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(v7[5], v7[6]);
    v9[7] = v7[7];
    v9[8] = v7[8];
    a5[1] = (int *)v9;
    *a5 = v5;
    return 1;
  }
}
