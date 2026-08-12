void __thiscall sub_101E6B30(_DWORD *this)
{
  int i; // ebx
  int v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // eax

  for ( i = 0; i < this[9]; ++i )
  {
    v3 = this[6];
    v4 = *(_DWORD *)(v3 + 4 * i);
    if ( v4 )
    {
      v5 = 0;
      if ( sub_101EA900(*(_DWORD *)(v3 + 4 * i)) > 0 )
      {
        do
        {
          v6 = sub_101EA910(v5);
          if ( v6 )
            sub_101ED3B0(v6);
          ++v5;
        }
        while ( v5 < sub_101EA900(v4) );
      }
    }
  }
}
