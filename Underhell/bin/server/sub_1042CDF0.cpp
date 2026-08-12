unsigned int __cdecl sub_1042CDF0(unsigned int *a1, _BYTE *a2, int a3)
{
  unsigned int result; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ecx
  int v9; // ecx
  int i; // esi
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax

  result = *a1;
  while ( 1 )
  {
    switch ( a3 )
    {
      case 0:
        goto LABEL_19;
      case 1:
        goto LABEL_18;
      case 2:
        goto LABEL_17;
      case 3:
        result = dword_105C8A60[(unsigned __int8)result ^ (unsigned __int8)*a2++] ^ (result >> 8);
LABEL_17:
        result = dword_105C8A60[(unsigned __int8)result ^ (unsigned __int8)*a2++] ^ (result >> 8);
LABEL_18:
        result = dword_105C8A60[(unsigned __int8)result ^ (unsigned __int8)*a2] ^ (result >> 8);
LABEL_19:
        *a1 = result;
        return result;
      case 4:
        goto LABEL_15;
      case 5:
        goto LABEL_14;
      case 6:
        goto LABEL_13;
      case 7:
        result = dword_105C8A60[(unsigned __int8)result ^ (unsigned __int8)*a2++] ^ (result >> 8);
LABEL_13:
        result = dword_105C8A60[(unsigned __int8)result ^ (unsigned __int8)*a2++] ^ (result >> 8);
LABEL_14:
        result = dword_105C8A60[(unsigned __int8)result ^ (unsigned __int8)*a2++] ^ (result >> 8);
LABEL_15:
        v19 = dword_105C8A60[(unsigned __int8)(*a2 ^ result)] ^ ((*(_DWORD *)a2 ^ result) >> 8);
        v20 = dword_105C8A60[(unsigned __int8)v19] ^ (v19 >> 8);
        v21 = dword_105C8A60[(unsigned __int8)v20] ^ (v20 >> 8);
        result = dword_105C8A60[(unsigned __int8)v21] ^ (v21 >> 8);
        *a1 = result;
        return result;
      default:
        v6 = (unsigned __int8)a2 & 3;
        v7 = a3 - v6;
        v8 = v6 - 1;
        if ( !v8 )
          goto LABEL_8;
        v9 = v8 - 1;
        if ( !v9 )
          goto LABEL_7;
        if ( v9 == 1 )
        {
          result = dword_105C8A60[(unsigned __int8)result ^ (unsigned __int8)*a2++] ^ (result >> 8);
LABEL_7:
          result = dword_105C8A60[(unsigned __int8)result ^ (unsigned __int8)*a2++] ^ (result >> 8);
LABEL_8:
          result = dword_105C8A60[(unsigned __int8)result ^ (unsigned __int8)*a2++] ^ (result >> 8);
        }
        for ( i = v7 >> 3; i; --i )
        {
          v11 = *(_DWORD *)a2 ^ result;
          a2 += 8;
          v12 = dword_105C8A60[(unsigned __int8)v11] ^ (v11 >> 8);
          v13 = dword_105C8A60[(unsigned __int8)v12] ^ (v12 >> 8);
          v14 = dword_105C8A60[(unsigned __int8)v13] ^ (v13 >> 8);
          v15 = (v14 >> 8) ^ *((_DWORD *)a2 - 1) ^ dword_105C8A60[(unsigned __int8)v14];
          v16 = dword_105C8A60[(unsigned __int8)v15] ^ (v15 >> 8);
          v17 = dword_105C8A60[(unsigned __int8)v16] ^ (v16 >> 8);
          v18 = dword_105C8A60[(unsigned __int8)v17] ^ (v17 >> 8);
          result = dword_105C8A60[(unsigned __int8)v18] ^ (v18 >> 8);
        }
        a3 = v7 & 7;
        break;
    }
  }
}
