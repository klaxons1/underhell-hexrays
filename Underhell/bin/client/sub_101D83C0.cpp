int __stdcall sub_101D83C0(unsigned int *a1, _DWORD *a2, char a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // edi
  unsigned int *v9; // edx
  unsigned int v10; // ebx
  int i; // ecx
  int result; // eax
  unsigned int v13; // ebx
  unsigned int *v14; // edx
  int j; // ecx
  unsigned int v16; // [esp+10h] [ebp-14h]
  unsigned int v17; // [esp+14h] [ebp-10h]
  unsigned int v18; // [esp+18h] [ebp-Ch]
  unsigned int v19; // [esp+1Ch] [ebp-8h]
  unsigned int v20; // [esp+30h] [ebp+Ch]

  v3 = ((BYTE1(*a2) & 0xF8u) >> 5) + (BYTE1(*a2) & 0xF8);
  v4 = ((HIBYTE(*a2) & 0xF8u) >> 5) + (HIBYTE(*a2) & 0xF8);
  v5 = ((unsigned __int16)*a2 >> 3) & 0xFC;
  v6 = (v5 >> 6) + v5;
  v19 = HIWORD(*a2);
  v7 = (((*a2 >> 19) & 0xFCu) >> 6) + ((*a2 >> 19) & 0xFC);
  v8 = ((8 * (*a2 & 0x1Fu)) >> 5) + 8 * (*a2 & 0x1F);
  v17 = v8 | ((v6 | ((v3 | 0xFFFFFF00) << 8)) << 8);
  v16 = ((8 * (v19 & 0x1F)) >> 5) + 8 * (v19 & 0x1F);
  v18 = v16 | ((v7 | ((v4 | 0xFFFFFF00) << 8)) << 8);
  if ( a3 && (unsigned __int16)*a2 <= v19 )
  {
    v9 = a1;
    v10 = ((v8 + v16) >> 1) | ((v6 + v7) << 7) & 0xFFFFFF00 | ((v3 + v4) << 15) & 0xFFFF0000 | 0xFF000000;
    for ( i = 0; i < 32; i += 2 )
    {
      result = (a2[1] >> i) & 3;
      switch ( result )
      {
        case 0:
          result = v17;
          *v9 = v17;
          break;
        case 1:
          result = v18;
          *v9 = v18;
          break;
        case 2:
          *v9 = v10;
          break;
        case 3:
          *v9 = 0;
          break;
        default:
          break;
      }
      ++v9;
    }
  }
  else
  {
    v20 = ((v16 + 2 * v8 + 1) / 3) | ((((v7 + 2 * v6 + 1) / 3) | ((((v4 + 2 * v3 + 1) / 3) | 0xFFFFFF00) << 8)) << 8);
    v13 = ((v8 + 2 * v16 + 1) / 3) | ((((v6 + 2 * v7 + 1) / 3) | ((((v3 + 2 * v4 + 1) / 3) | 0xFFFFFF00) << 8)) << 8);
    v14 = a1;
    for ( j = 0; j < 32; j += 2 )
    {
      result = (a2[1] >> j) & 3;
      switch ( result )
      {
        case 0:
          result = v17;
          *v14 = v17;
          break;
        case 1:
          result = v18;
          *v14 = v18;
          break;
        case 2:
          result = v20;
          *v14 = v20;
          break;
        case 3:
          *v14 = v13;
          break;
        default:
          break;
      }
      ++v14;
    }
  }
  return result;
}
