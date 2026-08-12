unsigned int __thiscall sub_101D5570(_DWORD *this, _DWORD *a2)
{
  unsigned int result; // eax
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // esi
  unsigned int i; // [esp+28h] [ebp-4Ch]
  unsigned int v11; // [esp+2Ch] [ebp-48h]
  unsigned int v12; // [esp+30h] [ebp-44h]
  _BYTE v13[64]; // [esp+34h] [ebp-40h] BYREF
  unsigned int v14; // [esp+78h] [ebp+4h]

  result = this[1];
  if ( result == a2[1] )
  {
    v5 = this[2];
    if ( v5 == a2[2] )
    {
      result = (result + 3) >> 2;
      v6 = (unsigned int)(v5 + 3) >> 2;
      v7 = 0;
      v11 = result;
      v12 = v6;
      for ( i = 0; v7 < v6; i = v7 )
      {
        if ( result )
        {
          v8 = 4 * v7;
          v9 = 0;
          v14 = result;
          do
          {
            (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*a2 + 188))(a2, v9, v8, 4, 4, v13);
            (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*this + 208))(this, v9, v8, 4, 4, v13);
            v9 += 4;
            --v14;
          }
          while ( v14 );
          result = v11;
          v6 = v12;
          v7 = i;
        }
        ++v7;
      }
    }
  }
  return result;
}
