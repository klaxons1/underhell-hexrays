int __thiscall sub_101AE450(int this, int a2, int a3, int a4)
{
  double v5; // st7
  bool v6; // zf
  double v7; // st7
  float *v8; // ebx
  float *v9; // edi
  int result; // eax
  unsigned int v11; // eax
  int v12; // edi
  _BYTE v13[12]; // [esp+8h] [ebp-18h] BYREF
  float v14; // [esp+14h] [ebp-Ch] BYREF
  float v15; // [esp+18h] [ebp-8h]
  float v16; // [esp+1Ch] [ebp-4h]

  sub_10422220(this + 728, &v14);
  v5 = *(float *)(this + 808);
  v6 = (*(_BYTE *)(this + 248) & 0x10) == 0;
  v14 = v14 * v5;
  v15 = v15 * v5;
  v16 = v5 * v16;
  if ( !v6 )
  {
    v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 116))(a2);
    v14 = v14 * v7;
    v15 = v15 * v7;
    v16 = v7 * v16;
  }
  if ( (*(_BYTE *)(this + 248) & 8) != 0 )
  {
    v8 = (float *)a4;
    v9 = (float *)a3;
    result = sub_101ADAF0(a2, (int)&v14, this + 880, a3, a4);
  }
  else
  {
    v11 = *(_DWORD *)(this + 816);
    if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 816) & 0xFFF) + 2] != v11 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(this + 816) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
      sub_100DAE60(v12);
    sub_10421B40(this + 880, v12 + 500, v13);
    v8 = (float *)a4;
    v9 = (float *)a3;
    result = (*(int (__thiscall **)(int, float *, _BYTE *, int, int))(*(_DWORD *)a2 + 252))(a2, &v14, v13, a3, a4);
  }
  if ( (*(_BYTE *)(this + 248) & 2) == 0 )
  {
    *v9 = 0.0;
    v9[1] = 0.0;
    v9[2] = 0.0;
  }
  if ( (*(_BYTE *)(this + 248) & 4) == 0 )
  {
    *v8 = 0.0;
    v8[1] = 0.0;
    v8[2] = 0.0;
  }
  return result;
}
