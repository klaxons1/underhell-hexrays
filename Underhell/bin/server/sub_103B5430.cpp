void __thiscall sub_103B5430(int *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  char *v5; // ebx
  int *v6; // edi
  int i; // esi
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  v5 = sub_101B60F0(v4, this);
  if ( v5 )
  {
    v6 = this + 955;
    for ( i = this[955] - 1; i >= 0; --i )
    {
      v8 = sub_101BCB30(v6, i);
      if ( v8 && (v9 = *(_DWORD *)(v8 + 4), v9 != -1) && off_1061BE18[4 * (v9 & 0xFFF) + 2] == v9 >> 12 )
        v10 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
      else
        v10 = 0;
      sub_101DAA50((int)v5, *(_DWORD *)(v10 + 424));
    }
  }
}
