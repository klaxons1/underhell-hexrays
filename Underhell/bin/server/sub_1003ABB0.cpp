int __thiscall sub_1003ABB0(int *this, int a2, float a3)
{
  int v4; // ebx
  double v5; // st7
  int v6; // ecx
  _DWORD *v7; // esi
  int v8; // edx
  int v9; // eax
  int *v10; // esi
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // ebx
  int v18; // esi
  int result; // eax
  float *v20; // esi
  float *v21; // edi
  float v22; // [esp+1Ch] [ebp+Ch]

  v4 = a2;
  if ( a2 == (*(int (__thiscall **)(int *))(*this + 368))(this) )
    this[611] = -1;
  v5 = a3;
  if ( a3 <= 0.0 )
    v5 = 3.0;
  v6 = this[645] - 1;
  if ( v6 < 0 )
  {
LABEL_13:
    v9 = this[643];
    v10 = this + 642;
    v11 = this[645];
    if ( v11 + 1 > v9 )
      sub_101C4BF0(v11 - v9 + 1);
    ++v10[3];
    v12 = *v10;
    v13 = v10[3] - v11 - 1;
    v10[4] = *v10;
    if ( v13 > 0 )
      memcpy((void *)(v12 + 20 * v11 + 20), (const void *)(v12 + 20 * v11), 20 * v13);
    v14 = 20 * v11;
    v15 = (_DWORD *)(v14 + *v10);
    if ( v15 )
      *v15 = -1;
    v16 = a2;
    v17 = *v10;
    if ( a2 )
    {
      *(_DWORD *)(v17 + v14) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      v16 = a2;
    }
    else
    {
      *(_DWORD *)(v17 + v14) = -1;
    }
    v22 = v5;
    *(float *)(*v10 + v14 + 4) = *(float *)(dword_106B31C8 + 12) + v22;
    if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v16);
      v16 = a2;
    }
    result = *v10;
    v21 = (float *)(*v10 + v14 + 8);
    *v21 = *(float *)(v16 + 580);
    v21[1] = *(float *)(v16 + 584);
    v21[2] = *(float *)(v16 + 588);
  }
  else
  {
    v7 = (_DWORD *)(this[642] + 20 * v6);
    while ( 1 )
    {
      if ( *v7 == -1 || (v4 = a2, off_1061BE18[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12) )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*v7 & 0xFFF) + 1];
      if ( v4 == v8 )
        break;
      v7 -= 5;
      if ( --v6 < 0 )
        goto LABEL_13;
    }
    v18 = 20 * v6;
    *(float *)(this[642] + 20 * v6 + 4) = v5 + *(float *)(dword_106B31C8 + 12);
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    result = this[642];
    v20 = (float *)(result + v18 + 8);
    *v20 = *(float *)(v4 + 580);
    v20[1] = *(float *)(v4 + 584);
    v20[2] = *(float *)(v4 + 588);
  }
  return result;
}
