void __thiscall sub_101E3B50(_DWORD *this)
{
  int v2; // ebx
  int i; // esi
  char *v4; // ecx

  v2 = this[70];
  for ( i = 0; i < v2; ++i )
  {
    if ( i >= 0 && i < this[70] )
    {
      v4 = *(char **)(this[67] + 4 * i);
      if ( v4 )
        sub_101E3A00(v4, 0);
    }
  }
}
