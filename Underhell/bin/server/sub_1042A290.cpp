void __thiscall sub_1042A290(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // ecx

  if ( a2 )
  {
    v2 = this[6];
    if ( v2 == a2 )
    {
      this[6] = *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 0;
    }
    else
    {
      if ( *(_DWORD *)(v2 + 20) )
      {
        while ( 1 )
        {
          v3 = *(_DWORD *)(v2 + 20);
          if ( v3 == a2 )
            break;
          v2 = *(_DWORD *)(v2 + 20);
          if ( !*(_DWORD *)(v3 + 20) )
          {
            *(_DWORD *)(a2 + 20) = 0;
            return;
          }
        }
        *(_DWORD *)(v2 + 20) = *(_DWORD *)(a2 + 20);
      }
      *(_DWORD *)(a2 + 20) = 0;
    }
  }
}
