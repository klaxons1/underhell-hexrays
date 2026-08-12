int __thiscall sub_101ABB90(_DWORD *this, char a2, float a3, float *a4, int a5)
{
  int result; // eax
  int v7; // esi
  float *v8; // eax
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  double v14; // st6
  float v15; // [esp+0h] [ebp-Ch]

  result = this[1];
  if ( result )
    v7 = result + 5232;
  else
    v7 = 0;
  if ( !*(_BYTE *)v7 )
  {
    *(float *)(v7 + 12) = *a4;
    *(float *)(v7 + 16) = a4[1];
    v8 = (float *)this[2];
    *(float *)(v7 + 20) = a4[2];
    *(float *)(v7 + 24) = v8[38];
    *(float *)(v7 + 28) = v8[39];
    *(float *)(v7 + 32) = v8[40];
    v9 = *(float *)(v7 + 12) - *(float *)(v7 + 24);
    v10 = v9 * v9;
    v11 = *(float *)(v7 + 16) - *(float *)(v7 + 28);
    v12 = *(float *)(v7 + 20) - *(float *)(v7 + 32);
    v15 = v12 * v12 + v11 * v11 + v10;
    v13 = off_103EDFE0(v15) / a3;
    if ( v13 < 0.001 )
      v13 = 0.001;
    *(_BYTE *)v7 = 1;
    *(_BYTE *)(v7 + 1) = a2;
    v14 = *((float *)off_103DC81C + 3);
    *(float *)(v7 + 4) = *((float *)off_103DC81C + 3);
    *(float *)(v7 + 8) = v13 + v14;
    if ( a5 )
      *(_DWORD *)(v7 + 36) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a5 + 8))(a5);
    else
      *(_DWORD *)(v7 + 36) = -1;
    sub_10035C70((_BYTE *)this[1], 0, 0);
    sub_10034490((_BYTE *)this[1], 0);
    sub_1008FA90(this[1] + 352, 0);
    sub_101ABA00(this, a5);
    *(_DWORD *)(this[2] + 40) |= 0x20u;
    result = this[1];
    *(_DWORD *)(result + 4040) &= ~0x20u;
    *(_BYTE *)(this[1] + 5324) = 0;
  }
  return result;
}
