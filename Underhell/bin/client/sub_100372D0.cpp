int __thiscall sub_100372D0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // ecx

  v1 = this[80];
  if ( v1 != -1
    && (v2 = (int *)((char *)off_103DCD74 + 16 * (this[80] & 0xFFF) + 4), v2[1] == v1 >> 12)
    && (v3 = *v2) != 0 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  }
  else
  {
    return 0;
  }
}
