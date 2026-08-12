int __thiscall sub_1015B900(int this, _BYTE *a2)
{
  int result; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int *v10; // edi
  int v11; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h]
  int v13; // [esp+18h] [ebp+8h]

  *(_BYTE *)(this + 4) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 4))(a2);
  *(_BYTE *)(this + 5) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 8))(a2);
  *(_BYTE *)(this + 28) = a2[28];
  *(_BYTE *)(this + 29) = a2[29];
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 12))(a2);
  v11 = result;
  v13 = 0;
  if ( result > 0 )
  {
    do
    {
      v5 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a2 + 16))(a2, v13);
      v6 = *(_DWORD *)(this + 20);
      v12 = v5;
      v7 = *(_DWORD *)(this + 12);
      if ( v6 + 1 > v7 )
        sub_1010AFF0((_DWORD *)(this + 8), v6 - v7 + 1);
      ++*(_DWORD *)(this + 20);
      v8 = *(_DWORD *)(this + 8);
      v9 = *(_DWORD *)(this + 20) - v6 - 1;
      *(_DWORD *)(this + 24) = v8;
      if ( v9 > 0 )
        memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
      v10 = (int *)(*(_DWORD *)(this + 8) + 4 * v6);
      if ( v10 )
        *v10 = v12;
      result = v13 + 1;
      v13 = result;
    }
    while ( result < v11 );
  }
  return result;
}
