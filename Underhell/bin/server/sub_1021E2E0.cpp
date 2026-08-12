int __thiscall sub_1021E2E0(_DWORD *this, void *a2, signed int Size, int a4)
{
  int v4; // edi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // edx

  v4 = Size;
  if ( a4 && Size >= a4 )
    v4 = a4;
  v6 = this[6];
  if ( v6 && *(_DWORD *)(v6 + 12) != *(_DWORD *)(v6 + 8) && !sub_1021CEC0(v6, a2, v4) )
    Warning("Restore underflow!\n");
  if ( v4 >= a4 )
    return v4;
  v7 = (_DWORD *)this[6];
  v8 = a4 - v4;
  if ( !v7 || v7[3] == v7[2] )
    return v4;
  v9 = v7[2];
  v10 = v7[3] - v9;
  if ( !v10 )
  {
LABEL_14:
    Warning("Restore underflow!\n");
    return v4;
  }
  if ( v8 > v10 )
  {
    v7[2] = v7[3];
    goto LABEL_14;
  }
  v7[1] += v8;
  v7[2] = v8 + v9;
  return v4;
}
