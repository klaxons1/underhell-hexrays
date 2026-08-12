int __cdecl sub_100FE600(int a1, float a2, int a3, _DWORD *a4, unsigned __int8 *a5, int a6)
{
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  _DWORD *v9; // ecx
  int v10; // edi
  int v11; // ecx
  float v12; // edi
  int v13; // ecx
  float v14; // edi
  int v15; // ecx
  int v16; // edi
  _DWORD *v17; // ecx
  int v18; // edi
  int v20; // [esp+10h] [ebp-50h]
  _DWORD v21[4]; // [esp+28h] [ebp-38h] BYREF
  _DWORD v22[4]; // [esp+38h] [ebp-28h] BYREF
  float v23[3]; // [esp+48h] [ebp-18h] BYREF
  float v24[3]; // [esp+54h] [ebp-Ch] BYREF
  int savedregs; // [esp+60h] [ebp+0h] BYREF

  if ( !a4 )
    return sub_100FE320(
             (int)&savedregs,
             a1,
             a2,
             (_DWORD *)(a3 + 44),
             (float *)(a3 + 60),
             (float *)(a3 + 84),
             *(_DWORD *)(a3 + 160),
             a3 + 144,
             (int)a5,
             a6);
  v6 = *a5;
  v7 = a4[9] + 16 * v6;
  v8 = *(_DWORD *)((char *)a4 + v7);
  v9 = (_DWORD *)((char *)a4 + v7);
  v22[0] = v8;
  v22[1] = v9[1];
  v22[2] = v9[2];
  v10 = a4[8];
  v22[3] = v9[3];
  v11 = v10 + 12 * v6;
  v24[0] = *(float *)((char *)a4 + v11);
  v12 = *(float *)((char *)a4 + v11 + 4);
  v24[2] = *(float *)((char *)a4 + v11 + 8);
  v24[1] = v12;
  v13 = a4[5] + 12 * v6;
  v23[0] = *(float *)((char *)a4 + v13);
  v14 = *(float *)((char *)a4 + v13 + 4);
  v23[2] = *(float *)((char *)a4 + v13 + 8);
  v15 = a4[4] + 16 * v6;
  v23[1] = v14;
  v16 = *(_DWORD *)((char *)a4 + v15);
  v17 = (_DWORD *)((char *)a4 + v15);
  v21[0] = v16;
  v21[1] = v17[1];
  v18 = v17[2];
  v21[3] = v17[3];
  v20 = *(_DWORD *)((char *)&a4[v6] + a4[1]);
  v21[2] = v18;
  return sub_100FE320((int)&savedregs, a1, a2, v21, v23, v24, v20, (int)v22, (int)a5, a6);
}
