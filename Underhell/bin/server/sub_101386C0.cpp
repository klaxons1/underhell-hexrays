void __thiscall sub_101386C0(int this, int a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // edx
  int v9; // ecx

  if ( !*(_BYTE *)(this + 892) )
  {
    v4 = sub_10261B20();
    if ( *(_BYTE *)(this + 893) )
    {
      if ( v4 )
      {
        v5 = *(_DWORD *)(this + 804);
        *(_BYTE *)(this + 893) = 0;
        v6 = *(_DWORD *)(v4 + 4 * v5 + 3188);
        if ( v6 != -1 && v5 < 8 )
        {
          *(_DWORD *)(this + 876) = v6;
          v7 = 0;
          v8 = (_DWORD *)(this + 816);
          do
          {
            *(v8 - 1) = *(_DWORD *)(v4 + 4 * (v7 + 16 * *(_DWORD *)(this + 804)) + 2676);
            *v8 = *(_DWORD *)(v4 + 4 * (v7 + 16 * *(_DWORD *)(this + 804)) + 2680);
            v8[1] = *(_DWORD *)(v4 + 4 * (v7 + 16 * *(_DWORD *)(this + 804)) + 2684);
            v8[2] = *(_DWORD *)(v4 + 4 * (v7 + 16 * (*(_DWORD *)(this + 804) + 42)));
            v7 += 4;
            v8 += 4;
          }
          while ( v7 < 16 );
        }
      }
    }
    *(_DWORD *)(this + 4 * a3 + 808) = a2;
    if ( a3 > *(_DWORD *)(this + 876) )
      *(_DWORD *)(this + 876) = a3;
    v9 = *(_DWORD *)(this + 804);
    if ( v9 >= 0 )
    {
      if ( v9 < 8 )
      {
        *(_DWORD *)(v4 + 4 * v9 + 3188) = *(_DWORD *)(this + 876);
        *(_DWORD *)(v4 + 4 * (a3 + 16 * *(_DWORD *)(this + 804)) + 2672) = a2;
      }
      else
      {
        Msg("Error: Global Message Index exceeds allowed number: %i\n", 7);
      }
    }
  }
}
