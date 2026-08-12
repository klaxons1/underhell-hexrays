int __thiscall sub_101A4980(int *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax

  v2 = this[25];
  if ( v2 != -1 )
  {
    v3 = (int *)((char *)off_103DCD74 + 16 * (v2 & 0xFFF) + 4);
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        v6 = *this;
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 4) + 4))(v5 + 4);
        (*(void (__thiscall **)(int *, int))(v6 + 40))(this, v7);
      }
    }
  }
  return sub_101791D0((int)this);
}
