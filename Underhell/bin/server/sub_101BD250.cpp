void __thiscall sub_101BD250(int *this)
{
  int v2; // edi
  int *v3; // ebx
  _DWORD *v4; // edx
  int v5; // eax
  bool v6; // sf

  v2 = 0;
  if ( *this > 0 )
  {
    v3 = off_1061BE18;
    do
    {
      v4 = (_DWORD *)(this[1] + 8 * v2 + 4);
      if ( *v4 != -1 && v3[4 * (*v4 & 0xFFF) + 2] == *v4 >> 12 && v3[4 * (*v4 & 0xFFF) + 1] )
      {
        if ( *v4 == -1 || v3[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
          v5 = 0;
        else
          v5 = v3[4 * (*v4 & 0xFFF) + 1];
        sub_1025FAC0(v5);
        *(_DWORD *)(this[1] + 8 * v2 + 4) = -1;
        v3 = off_1061BE18;
      }
      ++v2;
    }
    while ( v2 < *this );
  }
  v6 = this[3] < 0;
  this[4] = 0;
  if ( !v6 )
  {
    if ( this[1] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
  this[5] = this[1];
  *this = 0;
}
