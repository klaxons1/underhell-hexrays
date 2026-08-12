void __thiscall sub_10121B60(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( *(_DWORD *)(this + 68) )
  {
    v2 = *(_DWORD *)(this + 52);
    if ( v2 != -1 )
    {
      v3 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 52) & 0xFFF) + 4);
      v4 = v2 >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 52) & 0xFFF) + 2) == v4 )
      {
        if ( *v3 )
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 52) & 0xFFF) + 2) == v4 )
            v5 = *v3;
          else
            v5 = 0;
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 8) + 36))(v5 + 8);
          if ( v6 >= 0 )
            sub_101209D0(v6, *(_DWORD *)(this + 56), *(_BYTE **)(this + 44));
        }
      }
    }
    *(_DWORD *)(this + 68) = 0;
  }
}
