int *__thiscall sub_1012E270(_DWORD *this, int *a2, int a3)
{
  int v4; // eax
  int *result; // eax
  int v6; // ecx
  int v7; // ecx
  _DWORD *v8; // edi
  int v9; // [esp+Ch] [ebp-4h]

  v4 = this[16387];
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 8);
    if ( v6 != v4 )
    {
      if ( v6 )
        *(_DWORD *)(v6 + 12) = *(_DWORD *)(v4 + 12);
      else
        this[16387] = *(_DWORD *)(v4 + 12);
      v7 = *(_DWORD *)(v4 + 12);
      if ( v7 )
        *(_DWORD *)(v7 + 8) = *(_DWORD *)(v4 + 8);
      else
        this[16388] = *(_DWORD *)(v4 + 8);
      *(_DWORD *)(v4 + 12) = v4;
      *(_DWORD *)(v4 + 8) = v4;
    }
    v9 = (v4 - (int)this - 4) >> 4;
    v8 = &this[4 * v9 + 1];
    *v8 = a3;
    sub_1012DED0(this + 16385, (int)v8);
    *a2 = v9 | (this[4 * v9 + 2] << 12);
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)a3 + 4))(a3, a2);
    (*(void (__thiscall **)(_DWORD *, int, int))*this)(this, a3, *a2);
    return a2;
  }
  else
  {
    Warning("CBaseEntityList::AddNonNetworkableEntity: no free slots!\n");
    result = a2;
    *a2 = -1;
  }
  return result;
}
