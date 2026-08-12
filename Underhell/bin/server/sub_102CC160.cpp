float *__thiscall sub_102CC160(int this, float *a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  void *v7; // eax
  float *result; // eax
  int v9; // ecx
  int v10; // edx
  double v11; // st7
  double v12; // st6
  double v13; // st5
  float v14[16]; // [esp+4h] [ebp-58h] BYREF
  _BYTE v15[12]; // [esp+44h] [ebp-18h] BYREF
  _DWORD v16[3]; // [esp+50h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this + 1108)
    && (v3 = *(_DWORD *)(this + 300), v3 != -1)
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1],
        v5 = v3 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v5)
    && *v4 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v5 )
      v6 = *v4;
    else
      v6 = 0;
    v7 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 208))(v6);
    sub_100BCCA0(v7, *(_DWORD *)(this + 1108), (int)v16, (int)v15);
    result = a2;
    v9 = v16[1];
    *a2 = *(float *)v16;
    v10 = v16[2];
    *((_DWORD *)a2 + 1) = v9;
    *((_DWORD *)a2 + 2) = v10;
  }
  else
  {
    sub_102608F0(v14, (_DWORD *)this, 0);
    v11 = *(float *)(this + 1020);
    v12 = *(float *)(this + 1024);
    result = a2;
    v13 = *(float *)(this + 1028);
    *a2 = v12 * v14[1] + v11 * v14[0] + v13 * v14[2] + v14[3];
    a2[1] = v14[5] * v12 + v14[4] * v11 + v14[6] * v13 + v14[7];
    a2[2] = v11 * v14[8] + v12 * v14[9] + v13 * v14[10] + v14[11];
  }
  return result;
}
