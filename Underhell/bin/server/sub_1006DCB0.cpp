void __thiscall sub_1006DCB0(_DWORD *this)
{
  int v1; // edi
  int *v2; // ebx
  _DWORD *v3; // esi
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v1 = this[209] - 1;
  if ( v1 >= 0 )
  {
    v2 = off_1061BE18;
    do
    {
      v3 = (_DWORD *)(this[206] + 4 * v1);
      if ( *v3 == -1
        || v2[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12
        || !v2[4 * (*v3 & 0xFFF) + 1]
        || (*v3 == -1 || v2[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 ? (v4 = 0) : (v4 = v2[4 * (*v3 & 0xFFF) + 1]),
            (*(_BYTE *)(v4 + 252) & 1) != 0
         || (*v3 == -1 || v2[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 ? (v5 = 0) : (v5 = v2[4 * (*v3 & 0xFFF) + 1]),
             *(_DWORD *)(v5 + 2324) == 7)) )
      {
        v6 = this[209];
        if ( v6 > 0 )
        {
          *(_DWORD *)(this[206] + 4 * v1) = *(_DWORD *)(this[206] + 4 * v6 - 4);
          --this[209];
          v2 = off_1061BE18;
        }
      }
      --v1;
    }
    while ( v1 >= 0 );
  }
}
