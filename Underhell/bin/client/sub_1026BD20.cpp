void __thiscall sub_1026BD20(_DWORD *this, int a2)
{
  int i; // esi
  int v4; // esi
  _DWORD *v5; // eax

  for ( i = this[61]; i != -1; i = *(_DWORD *)(v4 + this[58] + 8) )
  {
    v4 = 12 * i;
    v5 = (_DWORD *)(v4 + this[58]);
    if ( *v5 != a2 )
      sub_1026ED20(*v5);
  }
}
