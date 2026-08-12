void __thiscall sub_10057AC0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax

  v2 = *(_DWORD *)(this + 20);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 && *v3 && !*(_DWORD *)(this + 216) )
    {
      if ( v3[1] == v4 )
        v5 = *v3;
      else
        v5 = 0;
      if ( !sub_10057680(dword_106921E0, v5, *(_DWORD *)(this + 4), *(_DWORD *)(this + 224), (int **)(this + 216)) )
        *(_DWORD *)(this + 20) = -1;
    }
  }
}
