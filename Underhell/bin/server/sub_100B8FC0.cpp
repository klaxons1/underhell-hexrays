void __thiscall sub_100B8FC0(int this, char a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax

  *(float *)(this + 12) = 0.0;
  if ( a2 )
  {
    v3 = *(_DWORD *)(this + 8);
    if ( v3 != -1 )
    {
      v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 1];
      v5 = v3 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          v6 = *(_DWORD *)(this + 4);
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 2] == v5 )
            v7 = *v4;
          else
            v7 = 0;
          if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
            sub_100DAE60(v7);
          v8 = *(_DWORD *)(this + 8);
          if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 2] != v8 >> 12 )
            v9 = 0;
          else
            v9 = off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 1];
          (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v6 + 1876))(v6, v9, v7 + 580, 0);
        }
      }
    }
  }
}
