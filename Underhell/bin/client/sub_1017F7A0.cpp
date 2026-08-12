void __thiscall sub_1017F7A0(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax

  v2 = this[77];
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
        (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 592))(v5);
        v6 = this[77];
        if ( v6 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[77] & 0xFFF) + 2) != v6 >> 12 )
        {
          sub_10038340(0);
          this[77] = -1;
        }
        else
        {
          sub_10038340(*((_DWORD **)off_103DCD74 + 4 * (this[77] & 0xFFF) + 1));
          this[77] = -1;
        }
      }
    }
  }
}
