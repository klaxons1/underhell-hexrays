void __thiscall sub_100F2260(_DWORD *this, int a2)
{
  unsigned int v2; // edx
  int *v3; // eax
  unsigned int v4; // edx
  int v5; // eax

  v2 = this[1685];
  if ( v2 != -1 )
  {
    v3 = (int *)((char *)off_103DCD74 + 16 * (this[1685] & 0xFFF) + 4);
    v4 = v2 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[1685] & 0xFFF) + 2) == v4 )
    {
      if ( *v3 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (this[1685] & 0xFFF) + 2) == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_100E9FD0((_DWORD *)(v5 + 444), (int)this, a2);
      }
    }
  }
}
