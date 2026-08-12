int __thiscall sub_101D4D20(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  _DWORD *v7; // esi
  int v8; // ecx
  int result; // eax

  v6 = sub_101D4750(this, this[3]);
  v7 = (_DWORD *)(*this + 56 * v6);
  v7[13] = a4;
  if ( a2 )
    v7[1] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v7[1] = -1;
  *v7 = a5;
  v7[3] = *(unsigned __int16 *)(a3 + 16);
  v8 = *sub_10162BE0(&a4, *(_BYTE **)(a3 + 4));
  result = v6;
  v7[2] = v8;
  return result;
}
