int __thiscall sub_1005DD80(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // edx
  int v8; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v8 = this[3];
  if ( v8 <= 0 )
    return -1;
  v3 = (_DWORD *)*this;
  v4 = off_103DCD74;
  while ( 1 )
  {
    v5 = sub_1006BE10(a2);
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
