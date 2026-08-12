unsigned int __thiscall sub_1003B730(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  unsigned int result; // eax
  _DWORD *v6; // esi
  unsigned int v7; // eax
  _DWORD *v8; // ecx

  v2 = this[81];
  if ( v2 != -1 )
  {
    v3 = (int *)((char *)off_103DCD74 + 16 * (this[81] & 0xFFF) + 4);
    if ( v3[1] == v2 >> 12 )
      v4 = *v3;
    else
      v4 = 0;
    sub_1003B620(this, v4, this);
  }
  result = this[82];
  if ( result == -1 || (result >>= 12, *((_DWORD *)off_103DCD74 + 4 * (this[82] & 0xFFF) + 2) != result) )
    v6 = 0;
  else
    v6 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (this[82] & 0xFFF) + 1);
  if ( v6 )
  {
    do
    {
      v7 = v6[81];
      if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v6[81] & 0xFFF) + 2) != v7 >> 12 )
        v8 = 0;
      else
        v8 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v6[81] & 0xFFF) + 1);
      if ( v8 != this )
      {
        Warning("C_BaseEntity::UnlinkFromHierarchy(): Entity has a child with the wrong parent!\n");
        sub_1003B620(this, (int)this, v6);
      }
      sub_1003B730(v6);
      result = sub_1000EFC0(this);
      v6 = (_DWORD *)result;
    }
    while ( result );
  }
  return result;
}
