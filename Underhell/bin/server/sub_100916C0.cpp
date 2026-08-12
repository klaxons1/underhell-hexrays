int __thiscall sub_100916C0(int *this, int a2, _DWORD *a3, float a4, float a5, int a6)
{
  int v7; // ecx
  int v8; // edx
  double v9; // st7
  int v10; // edi
  float *v11; // esi
  int v12; // eax
  bool v13; // al
  double v14; // st7
  _DWORD *v15; // ecx
  int v16; // edi
  float *v17; // esi
  int v18; // eax
  int v20[14]; // [esp+20h] [ebp-58h] BYREF
  int v21; // [esp+58h] [ebp-20h] BYREF
  float v22; // [esp+5Ch] [ebp-1Ch]
  float v23; // [esp+60h] [ebp-18h]
  int v24; // [esp+64h] [ebp-14h] BYREF
  float v25; // [esp+68h] [ebp-10h]
  float v26; // [esp+6Ch] [ebp-Ch]
  int v27; // [esp+70h] [ebp-8h] BYREF
  float v28; // [esp+74h] [ebp-4h]

  memset(v20, 0, sizeof(v20));
  sub_10090AA0(*(float *)&a3, a5, a6, (float *)&a3, (float *)&v27);
  sub_102650F0((int)&v24, *(float *)&a3);
  v7 = *this;
  v8 = a2;
  v9 = *(float *)(*(_DWORD *)(*this + 2604) + 16) * *(float *)(a2 + 36);
  v28 = v9;
  if ( a4 <= v9 )
  {
    v14 = a4;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 48);
    v11 = (float *)(v7 + 716);
    *(float *)&v21 = *(float *)&v24 * v9 + *(float *)(v7 + 716);
    v22 = v25 * v9 + *(float *)(v7 + 720);
    v23 = v9 * v26 + *(float *)(v7 + 724);
    a3 = *(_DWORD **)(v7 + 2600);
    v12 = sub_100209E0((_DWORD *)v7);
    v13 = sub_1007C550(a3, v10, v11, (float *)&v21, 33701899, v12, 100.0, (v10 == 0) | 4, (float *)v20);
    v14 = a4;
    if ( !v13 )
    {
      *(float *)&v20[9] = v14 - v28 + *(float *)&v20[9];
LABEL_7:
      sub_10091340(this, a2, (float *)v20, a4, *(float *)&v27, a5, a6);
      return 1;
    }
    v8 = a2;
  }
  v15 = (_DWORD *)*this;
  v16 = *(_DWORD *)(v8 + 48);
  v17 = (float *)(*this + 716);
  *(float *)&v21 = *(float *)&v24 * v14 + *v17;
  v22 = v25 * v14 + v17[1];
  v23 = v14 * v26 + v17[2];
  a3 = (_DWORD *)v15[650];
  v18 = sub_100209E0(v15);
  if ( !sub_1007C550(a3, v16, v17, (float *)&v21, 33701899, v18, 0.0, (v16 == 0) | 4, (float *)v20) )
    goto LABEL_7;
  return 0;
}
