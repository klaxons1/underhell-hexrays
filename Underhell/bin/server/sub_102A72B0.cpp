int __thiscall sub_102A72B0(int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // esi
  int result; // eax
  int v9; // edi
  char *v10; // eax

  v2 = this[17];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 340))(v4);
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 136))(v5, this[1], 1);
  v7 = (_DWORD *)v6;
  if ( !v6 )
    return -1;
  v9 = 0;
  if ( *(int *)(v6 + 12) <= 0 )
    return -1;
  while ( 1 )
  {
    v10 = *(char **)(*v7 + 8 * v9);
    if ( !v10 )
      v10 = (char *)String;
    result = sub_100BDF40(this[1], v10);
    if ( result != -1 )
      break;
    if ( ++v9 >= v7[3] )
      return -1;
  }
  return result;
}
