void __thiscall sub_1008E120(_DWORD *this, __int16 a2)
{
  int i; // esi
  int v4; // ecx

  if ( *this )
  {
    if ( a2 < 0 )
    {
      for ( i = 0; i < 200; i += 4 )
      {
        v4 = *(_DWORD *)(*this + i);
        if ( *(_BYTE *)(v4 + 37) )
          sub_1011BC50(
            *(_DWORD *)(*this + i),
            *(_DWORD *)(*this + i) + 12,
            *(_DWORD *)(*(_DWORD *)(*this + i) + 24),
            *(_DWORD *)(*(_DWORD *)(*this + i) + 28),
            *(_DWORD *)(v4 + 32),
            *(unsigned __int8 *)(v4 + 36),
            0.0);
      }
    }
    else
    {
      sub_1008DD40(this);
    }
  }
}
