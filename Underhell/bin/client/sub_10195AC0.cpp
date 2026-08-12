int __thiscall sub_10195AC0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int result; // eax
  _DWORD *v6; // ebx
  double v7; // st7
  unsigned int v8; // eax
  int *v9; // ecx
  int v10; // ecx
  _BYTE v11[84]; // [esp+14h] [ebp-58h] BYREF
  _DWORD *v12; // [esp+68h] [ebp-4h]
  float v13; // [esp+74h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v3 + 8);
  v13 = *(float *)(a2 + 8);
  result = v3 + 4;
  v12 = this;
  if ( v4 != result )
  {
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4);
    v6 = this + 66;
    while ( 1 )
    {
      v7 = *(float *)(v4 + 44) + v13;
      *(float *)(v4 + 44) = v7;
      v8 = this[65];
      if ( v8 == -1 || (v9 = (int *)((char *)off_103DCD74 + 16 * (this[65] & 0xFFF) + 4), v9[1] != v8 >> 12) )
        v10 = 0;
      else
        v10 = *v9;
      if ( v7 >= *(float *)(v4 + 40) || !v10 || !*(_BYTE *)(v10 + 1192) )
        sub_100EB9C0(*(_DWORD *)a2, (_DWORD *)v4);
      result = (*(int (__thiscall **)(_DWORD *, int, int, _DWORD, float, _BYTE *))(*v6 + 20))(
                 v6,
                 v4 + 12,
                 v4 + 24,
                 0,
                 COERCE_FLOAT(LODWORD(v13)),
                 v11);
      v4 = *(_DWORD *)(a2 + 16);
      if ( v4 == *(_DWORD *)(a2 + 4) + 4 )
        break;
      this = v12;
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4);
    }
  }
  return result;
}
