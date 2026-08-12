char __thiscall sub_10092430(int this, int a2, int a3, float *a4)
{
  double v5; // st7
  char result; // al
  double v8; // st7
  float v9; // ecx
  double v10; // st7
  double v11; // st5
  double v12; // st4
  float *v13; // ebx
  int v14; // eax
  double v15; // st7
  char v16; // al
  float v17; // [esp+4h] [ebp-64h]
  int v18[14]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v19[3]; // [esp+54h] [ebp-14h] BYREF
  float v20; // [esp+60h] [ebp-8h]
  char v21; // [esp+67h] [ebp-1h]
  _DWORD *v22; // [esp+70h] [ebp+8h]
  int v23; // [esp+74h] [ebp+Ch]

  v5 = *(float *)(a2 + 36);
  v21 = 0;
  if ( 0.0 == v5 || sub_10090CC0((float *)this, (float *)a2) )
    return 0;
  v20 = (float)(*(float *)&a3 < 1.0 ? 340 : 270);
  v8 = sub_10090C40((void *)this, *(float *)(a2 + 36));
  if ( (*(_BYTE *)(a2 + 56) & 5) != 0 && v8 > *(float *)(a2 + 40) )
    v8 = *(float *)(a2 + 40);
  v17 = v8;
  if ( sub_10091FF0(this, (float *)a2, (float *)(a2 + 68), a3, v17, v20, 5) == 2
    || !sub_10090E70((_DWORD *)this, a2, (_DWORD *)(a2 + 68), v20, *(float *)&a3 >= 1.0, a4) )
  {
    goto LABEL_13;
  }
  sub_10090B60((_DWORD *)this, (float *)(a2 + 12), a4);
  memset(v18, 0, sizeof(v18));
  v9 = *(float *)this;
  v10 = *(float *)(*(_DWORD *)(*(_DWORD *)this + 2604) + 16) * *(float *)(a2 + 36);
  v11 = a4[1];
  v23 = *(_DWORD *)(a2 + 48);
  v12 = a4[2];
  v13 = (float *)(*(_DWORD *)this + 716);
  *(float *)v19 = *a4 * v10 + *v13;
  *(float *)&v19[1] = v11 * v10 + *(float *)(LODWORD(v9) + 720);
  *(float *)&v19[2] = v10 * v12 + *(float *)(LODWORD(v9) + 724);
  v22 = *(_DWORD **)(LODWORD(v9) + 2600);
  v14 = sub_100209E0((_DWORD *)LODWORD(v9));
  sub_1007C550(v22, v23, v13, (float *)v19, 33701899, v14, 100.0, v23 == 0, (float *)v18);
  if ( v18[0] < 0 )
  {
    v21 = 0;
    goto LABEL_13;
  }
  v15 = *(float *)(a2 + 36);
  v21 = 1;
  if ( 0.0 == v15 )
  {
LABEL_13:
    v16 = 0;
    goto LABEL_14;
  }
  v16 = 1;
LABEL_14:
  *(_BYTE *)(this + 16) = v16;
  result = v21;
  *(float *)(this + 4) = *(float *)a2;
  *(float *)(this + 8) = *(float *)(a2 + 4);
  *(float *)(this + 12) = *(float *)(a2 + 8);
  return result;
}
