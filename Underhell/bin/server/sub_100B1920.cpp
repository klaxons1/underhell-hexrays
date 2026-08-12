void __thiscall sub_100B1920(unsigned int *this, int a2, int a3, int a4)
{
  int v4; // esi
  int *v5; // edx
  unsigned int *v6; // edi
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ecx

  v4 = 0;
  if ( (int)this[18] > 0 )
  {
    v5 = off_1061BE18;
    v6 = this + 2;
    do
    {
      v7 = *v6;
      if ( *v6 == -1 || v5[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 )
        v8 = 0;
      else
        v8 = v5[4 * (*v6 & 0xFFF) + 1];
      if ( v8 != a2 )
      {
        if ( v7 == -1 || v5[4 * (*v6 & 0xFFF) + 2] != v7 >> 12 )
          v9 = 0;
        else
          v9 = v5[4 * (*v6 & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v9 + 1876))(v9, a3, a4, a2);
        v5 = off_1061BE18;
      }
      ++v4;
      ++v6;
    }
    while ( v4 < (int)this[18] );
  }
}
