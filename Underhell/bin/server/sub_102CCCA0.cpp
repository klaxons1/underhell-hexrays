int __thiscall sub_102CCCA0(_DWORD *this, int a2)
{
  unsigned int v2; // edx
  void **v3; // eax
  unsigned int v4; // edx
  int v5; // esi
  void *v6; // eax
  int result; // eax
  int v8; // ecx
  int v9; // edx
  _DWORD v10[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = this[353];
  if ( v2 != -1
    && (v3 = (void **)&off_1061BE18[4 * (this[353] & 0xFFF) + 1],
        v4 = v2 >> 12,
        off_1061BE18[4 * (this[353] & 0xFFF) + 2] == v4)
    && *v3
    && (v5 = this[354]) != 0 )
  {
    if ( off_1061BE18[4 * (this[353] & 0xFFF) + 2] == v4 )
      v6 = *v3;
    else
      v6 = 0;
    sub_100BD6D0(v6, v5, (int)v10, 0, 0, 0);
    result = a2;
    v8 = v10[1];
    *(_DWORD *)a2 = v10[0];
    v9 = v10[2];
    *(_DWORD *)(a2 + 4) = v8;
    *(_DWORD *)(a2 + 8) = v9;
  }
  else
  {
    sub_102CC160((int)this, (float *)a2);
    return a2;
  }
  return result;
}
