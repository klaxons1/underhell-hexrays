void sub_100757C0()
{
  int v0; // edi
  unsigned int v1; // eax
  int v2; // esi
  unsigned int v3; // eax
  int v4; // ecx

  v0 = 0;
  if ( dword_1041337C <= 0 )
  {
    dword_1041337C = 0;
  }
  else
  {
    do
    {
      v1 = *(_DWORD *)(dword_10413370 + 4 * v0);
      if ( v1 != -1
        && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(dword_10413370 + 4 * v0) & 0xFFF) + 2) == v1 >> 12
        && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(dword_10413370 + 4 * v0) & 0xFFF) + 1) )
      {
        v2 = dword_1047CA8C;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
        v3 = *(_DWORD *)(dword_10413370 + 4 * v0);
        if ( v3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(dword_10413370 + 4 * v0) & 0xFFF) + 2) != v3 >> 12 )
          v4 = 0;
        else
          v4 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(dword_10413370 + 4 * v0) & 0xFFF) + 1);
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 212))(v4);
        (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
      }
      ++v0;
    }
    while ( v0 < dword_1041337C );
    dword_1041337C = 0;
  }
}
