int __thiscall sub_102AE1E0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int *v7; // eax
  int v9; // [esp+4h] [ebp-4h]

  if ( a2 )
    v9 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v9 = -1;
  v3 = this[252];
  v4 = this[254];
  if ( v4 + 1 > v3 )
    sub_102ABFC0(this + 251, v4 - v3 + 1);
  ++this[254];
  v5 = this[251];
  v6 = this[254] - v4 - 1;
  this[255] = v5;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 4 * v4 + 4), (const void *)(v5 + 4 * v4), 4 * v6);
  v7 = (int *)(this[251] + 4 * v4);
  if ( v7 )
    *v7 = v9;
  this[227] = this[254];
  return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 76))(a2, this);
}
