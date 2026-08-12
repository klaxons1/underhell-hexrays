void __thiscall sub_1008DD40(_DWORD *this)
{
  int i; // eax
  int v2; // esi

  if ( *this )
  {
    for ( i = 12; i < 212; i += 20 )
    {
      *(_BYTE *)(*(_DWORD *)(i + *this - 12) + 37) = 0;
      *(_BYTE *)(*(_DWORD *)(i + *this - 8) + 37) = 0;
      *(_BYTE *)(*(_DWORD *)(i + *this - 4) + 37) = 0;
      *(_BYTE *)(*(_DWORD *)(i + *this) + 37) = 0;
      v2 = *(_DWORD *)(i + *this + 4);
      *(_BYTE *)(v2 + 37) = 0;
    }
  }
}
