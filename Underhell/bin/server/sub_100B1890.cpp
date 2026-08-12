int __thiscall sub_100B1890(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // esi
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // eax

  result = this[18];
  if ( result )
  {
    v5 = 0;
    if ( result > 0 )
    {
      v6 = this + 2;
      do
      {
        if ( *v6 == -1 || off_1061BE18[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*v6 & 0xFFF) + 1];
        v8 = sub_100D7680(v7);
        if ( v8 && v8 != a4 && a2 > 0 )
          (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v8 + 896))(v8, a2, a3, a4);
        ++v5;
        ++v6;
      }
      while ( v5 < this[18] );
    }
    return 1;
  }
  return result;
}
