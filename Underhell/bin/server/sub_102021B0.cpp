void __thiscall sub_102021B0(_DWORD *this)
{
  int v2; // ebx
  int v3; // esi
  unsigned int v4; // eax
  int v5; // ecx

  v2 = this[6];
  v3 = 0;
  if ( v2 <= 0 )
  {
    this[6] = 0;
  }
  else
  {
    do
    {
      v4 = *(_DWORD *)(this[3] + 4 * v3);
      if ( v4 != -1 && off_1061BE18[4 * (*(_DWORD *)(this[3] + 4 * v3) & 0xFFF) + 2] == v4 >> 12 )
      {
        v5 = off_1061BE18[4 * (*(_DWORD *)(this[3] + 4 * v3) & 0xFFF) + 1];
        if ( v5 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 720))(v5);
      }
      ++v3;
    }
    while ( v3 < v2 );
    this[6] = 0;
  }
}
