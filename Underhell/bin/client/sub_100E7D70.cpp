int __thiscall sub_100E7D70(int this, int a2, int a3, int a4, int a5, char *Str)
{
  unsigned __int16 v7; // ax
  int v9; // edx
  int v10; // esi
  int (__thiscall ***v11)(_DWORD, int, _DWORD, int, int); // edi
  int v12; // esi
  int v13[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( a2 )
  {
    v13[0] = a2;
    v7 = sub_100E4E20((_WORD *)(this + 32), (int)v13);
  }
  else
  {
    v7 = -1;
  }
  if ( v7 == 0xFFFF )
    return 0;
  v9 = *(_DWORD *)(this + 36);
  v10 = v9 + 20 * v7 + 12;
  v11 = *(int (__thiscall ****)(_DWORD, int, _DWORD, int, int))(*(_DWORD *)(this + 8)
                                                              + 16 * *(unsigned __int16 *)(v9 + 20 * v7 + 14)
                                                              + 12);
  if ( Str )
    sub_100E30C0(*(Concurrency::details::ExecutionResource **)(v9 + 20 * v7 + 16), Str);
  v12 = (**v11)(v11, a2, *(_DWORD *)(v10 + 4), a4, a5);
  if ( v12 )
    sub_102366C0(a3);
  return v12;
}
