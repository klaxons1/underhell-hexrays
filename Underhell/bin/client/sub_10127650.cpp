char *__thiscall sub_10127650(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  if ( this[84] )
  {
    v5 = sub_10128960();
    v6 = v5;
    if ( v5 )
    {
      v8 = sub_10128980(*(_DWORD *)(v5 + 88) + 144 * *(_DWORD *)(*(_DWORD *)(v5 + 8) + 16 * a2 + 8));
      v9 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 16 * a2 + 12);
      if ( v9 < 0 || v9 >= *(_DWORD *)(v8 + 188) )
        v9 = 0;
      return (char *)(v8 + *(_DWORD *)(v8 + 192) + 212 * v9);
    }
    else
    {
      v7 = a2;
      if ( a2 < 0 || a2 >= this[47] )
        v7 = 0;
      return (char *)&this[53 * v7] + this[48];
    }
  }
  else
  {
    v3 = a2;
    if ( a2 < 0 || a2 >= this[47] )
      v3 = 0;
    return (char *)&this[53 * v3] + this[48];
  }
}
