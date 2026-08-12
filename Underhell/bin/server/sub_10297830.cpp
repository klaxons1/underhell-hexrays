int __thiscall sub_10297830(int this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // esi
  int v5; // eax
  int v7; // edi
  int v8; // ebx
  int v10; // [esp+8h] [ebp-4h]

  v1 = *(_DWORD *)(this + 60);
  if ( v1 == -1 )
    return 0;
  v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
  v3 = v1 >> 12;
  if ( v2[1] != v3 )
    return 0;
  v4 = 0;
  if ( !*v2 )
    return 0;
  v5 = v2[1] == v3 ? *v2 : 0;
  if ( *(_DWORD *)(v5 + 860) != 1 )
    return 0;
  v7 = sub_1002A680(&dword_10690DF8);
  v8 = sub_1016BFB0(&dword_10690DF8);
  v10 = 0;
  if ( v8 > 0 )
  {
    do
    {
      if ( (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 1080))(
             *(_DWORD *)(this + 4),
             *(_DWORD *)(v7 + 4 * v4)) < 3 )
      {
        if ( sub_10296C50((_DWORD *)this, *(_DWORD *)(v7 + 4 * v4)) )
          ++v10;
      }
      ++v4;
    }
    while ( v4 < v8 );
  }
  return v10;
}
