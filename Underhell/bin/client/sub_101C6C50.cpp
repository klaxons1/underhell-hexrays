unsigned int __thiscall sub_101C6C50(_DWORD *this, _DWORD *a2)
{
  unsigned int result; // eax
  int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // esi
  unsigned int v9; // [esp+28h] [ebp-110h]
  unsigned int i; // [esp+2Ch] [ebp-10Ch]
  unsigned int v11; // [esp+30h] [ebp-108h]
  unsigned int v12; // [esp+34h] [ebp-104h]
  _BYTE v13[256]; // [esp+38h] [ebp-100h] BYREF

  result = this[1];
  if ( result == a2[1] )
  {
    v4 = this[2];
    if ( v4 == a2[2] )
    {
      result = (result + 3) >> 2;
      v5 = (unsigned int)(v4 + 3) >> 2;
      v6 = 0;
      v11 = result;
      v12 = v5;
      for ( i = 0; v6 < v5; i = v6 )
      {
        if ( result )
        {
          v7 = 4 * v6;
          v8 = 0;
          v9 = result;
          do
          {
            (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*a2 + 176))(a2, v8, v7, 4, 4, v13);
            (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*this + 196))(this, v8, v7, 4, 4, v13);
            v8 += 4;
            --v9;
          }
          while ( v9 );
          result = v11;
          v5 = v12;
          v6 = i;
        }
        ++v6;
      }
    }
  }
  return result;
}
