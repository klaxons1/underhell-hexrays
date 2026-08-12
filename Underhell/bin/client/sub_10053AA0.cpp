int __thiscall sub_10053AA0(_DWORD *this, char a2)
{
  int v2; // edi
  unsigned int **v3; // esi
  _DWORD *v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v9; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v9 = this[5];
  if ( v9 <= 0 )
    return -1;
  v3 = (unsigned int **)this[2];
  v4 = off_103DCD74;
  while ( 1 )
  {
    v5 = sub_1006BE10(&a2);
    v6 = **v3;
    if ( v6 == -1 || v4[4 * (**v3 & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = v4[4 * (**v3 & 0xFFF) + 1];
    if ( v7 == v5 )
      break;
    ++v2;
    ++v3;
    if ( v2 >= v9 )
      return -1;
  }
  return v2;
}
