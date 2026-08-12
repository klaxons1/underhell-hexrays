unsigned int __thiscall sub_10117E60(_DWORD *this, void *a2, int a3, int a4)
{
  unsigned int v5; // ebx
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // edx

  v5 = 16 * a3;
  if ( a4 && 16 * a3 >= a4 )
    v5 = a4;
  v6 = this[6];
  if ( v6 && *(_DWORD *)(v6 + 12) != *(_DWORD *)(v6 + 8) && !sub_10116870(v6, a2, v5) )
    Warning("Restore underflow!\n");
  if ( (int)v5 >= a4 )
    return v5 >> 4;
  v7 = (_DWORD *)this[6];
  v8 = a4 - v5;
  if ( !v7 || v7[3] == v7[2] )
    return v5 >> 4;
  v9 = v7[2];
  v10 = v7[3] - v9;
  if ( !v10 )
  {
LABEL_14:
    Warning("Restore underflow!\n");
    return v5 >> 4;
  }
  if ( v8 > v10 )
  {
    v7[2] = v7[3];
    goto LABEL_14;
  }
  v7[1] += v8;
  v7[2] = v8 + v9;
  return v5 >> 4;
}
