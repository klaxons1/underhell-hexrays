int __thiscall sub_1044D740(_DWORD *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // esi
  int i; // edi

  v3 = this[3];
  v4 = 0;
  if ( v3 <= 0 )
    return -1;
  for ( i = 0; !sub_10433270(a2, (_DWORD *)(i + *this + 4)); i += 20 )
  {
    if ( ++v4 >= v3 )
      return -1;
  }
  return v4;
}
