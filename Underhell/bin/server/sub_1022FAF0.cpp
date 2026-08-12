BOOL __thiscall sub_1022FAF0(_DWORD *this)
{
  int v2; // eax
  int v3; // edi

  v2 = sub_1022F800((int)this);
  v3 = v2;
  if ( (this[62] & 0x400) != 0 )
  {
    if ( v2 )
      this[223] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    else
      this[223] = -1;
  }
  if ( v3 )
  {
    this[220] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    return v3 != 0;
  }
  else
  {
    this[220] = -1;
    return 0;
  }
}
