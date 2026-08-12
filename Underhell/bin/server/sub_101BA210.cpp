int __thiscall sub_101BA210(int *this, int a2, float a3, float *a4, float *a5, char a6)
{
  int v6; // eax
  int v7; // ebx
  int *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // edi
  int v16; // ecx
  int v17; // eax
  int v19[1024]; // [esp+2Ch] [ebp-101Ch] BYREF
  int v20[3]; // [esp+102Ch] [ebp-1Ch] BYREF
  int v21[4]; // [esp+1038h] [ebp-10h] BYREF
  int v22; // [esp+1058h] [ebp+10h]
  int v23; // [esp+1060h] [ebp+18h]

  v6 = this[68];
  v7 = this[70];
  v8 = this + 67;
  v21[3] = (int)this;
  if ( v7 + 1 > v6 )
    sub_101B6450(v8, v7 - v6 + 1);
  ++v8[3];
  v9 = *v8;
  v10 = v8[3] - v7 - 1;
  v8[4] = *v8;
  if ( v10 > 0 )
    memcpy((void *)(v9 + 36 * v7 + 36), (const void *)(v9 + 36 * v7), 36 * v10);
  v11 = *v8 + 36 * v7;
  *(_DWORD *)(v11 + 24) = a2;
  *(float *)v11 = *a4;
  *(float *)(v11 + 4) = a4[1];
  *(float *)(v11 + 8) = a4[2];
  *(float *)(v11 + 12) = *a5;
  *(float *)(v11 + 16) = a5[1];
  *(float *)(v11 + 20) = a5[2];
  *(_WORD *)(v11 + 34) = 0;
  *(float *)(v11 + 28) = a3;
  *(_WORD *)(v11 + 32) = -1;
  if ( !a6 )
    return v7;
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2);
  if ( !v12 )
    return v7;
  v13 = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v12 + 624))(v12, v19, 1024);
  v22 = v13;
  if ( v13 <= 1 )
    return v7;
  v14 = 0;
  v15 = v7;
  v23 = 0;
  do
  {
    v16 = v19[v14];
    if ( v16 != a2 )
    {
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v16 + 204))(v16, v20, v21);
      v17 = sub_101BA210(v19[v23], a3, (int)v20, (int)v21, 0);
      *(_WORD *)(*v8 + 36 * v15 + 32) = v17;
      v14 = v23;
      v15 = v17;
      v13 = v22;
    }
    v23 = ++v14;
  }
  while ( v14 < v13 );
  return v7;
}
