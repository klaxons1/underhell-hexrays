int __thiscall sub_10319100(_DWORD *this, unsigned int *a2)
{
  int v2; // edi
  _DWORD *v3; // esi
  int *v4; // ebx
  int v5; // eax
  int v6; // edx
  int v8; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v8 = this[3];
  if ( v8 <= 0 )
    return -1;
  v3 = (_DWORD *)*this;
  v4 = off_1061BE18;
  while ( 1 )
  {
    v5 = sub_1026A890(a2);
    if ( *v3 == -1 || v4[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
      v6 = 0;
    else
      v6 = v4[4 * (*v3 & 0xFFF) + 1];
    if ( v6 == v5 )
      break;
    ++v2;
    ++v3;
    if ( v2 >= v8 )
      return -1;
  }
  return v2;
}
