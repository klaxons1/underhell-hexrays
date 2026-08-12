int __thiscall sub_1005F320(int this, int a2)
{
  _DWORD *v3; // ecx
  unsigned int v4; // eax
  int *v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned __int16 v10; // ax
  int result; // eax
  int v12; // [esp+8h] [ebp-8h] BYREF

  v3 = *(_DWORD **)(this + 4);
  v4 = v3[722];
  if ( v4 != -1
    && (v5 = &off_1061BE18[4 * (v3[722] & 0xFFF) + 1], off_1061BE18[4 * (v3[722] & 0xFFF) + 2] == v4 >> 12)
    && (v6 = *v5) != 0
    && *(_WORD *)(v6 + 816) == 101
    && (v7 = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 2068))(v3, v6), v7 != -1) )
  {
    v8 = a2;
    if ( a2 == 1 )
      v8 = v7;
    if ( *(_DWORD *)(this + 60) == 1 && v7 == 5 )
      *(_DWORD *)(this + 60) = 2;
  }
  else
  {
    v8 = a2;
  }
  v9 = *(_DWORD *)(this + 60);
  if ( v9 == 1 )
    return sub_1004B560((_DWORD **)this);
  v12 = v8 | (v9 << 16);
  v10 = sub_1005E740((_WORD *)(this + 16), (int)&v12);
  if ( v10 == 0xFFFF )
    return sub_1004B560((_DWORD **)this);
  result = *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v10 + 12);
  if ( result == -1 )
    return sub_1004B560((_DWORD **)this);
  return result;
}
