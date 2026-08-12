void __thiscall sub_102AD3B0(_DWORD *this, int a2)
{
  int i; // edi
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // esi

  for ( i = 0; i < this[6]; ++i )
  {
    v4 = *(_DWORD *)(this[3] + 4 * i);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(this[3] + 4 * i) & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)(this[3] + 4 * i) & 0xFFF) + 2] == v4 >> 12 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          if ( !*(_BYTE *)(v6 + 984) )
          {
            if ( a2 )
              *(_DWORD *)(v6 + 1000) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
            else
              *(_DWORD *)(v6 + 1000) = -1;
            *(_DWORD *)(v6 + 988) = 1;
            sub_102ACCC0((_DWORD *)v6);
          }
        }
      }
    }
  }
}
