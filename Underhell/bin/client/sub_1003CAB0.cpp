char __thiscall sub_1003CAB0(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx

  if ( a2 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    v3 = -1;
  v4 = this[81];
  if ( v3 != v4 )
  {
    if ( v4 != -1 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (this[81] & 0xFFF) + 2) == v4 >> 12 )
        v5 = *((_DWORD *)off_103DCD74 + 4 * (this[81] & 0xFFF) + 1);
      else
        v5 = 0;
      sub_1003B620(this, v5, this);
    }
    if ( a2 )
      sub_1003CA00(this, a2, this);
    LOBYTE(v4) = sub_1000F6C0((int)this, 7);
  }
  return v4;
}
