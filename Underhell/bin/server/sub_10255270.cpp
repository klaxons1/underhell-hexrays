_DWORD *__thiscall sub_10255270(_DWORD *this, int *a2)
{
  int v3; // esi
  char *v4; // eax
  _DWORD *result; // eax
  int v6; // eax

  v3 = 0;
  while ( 1 )
  {
    v4 = (char *)this[53];
    if ( !v4 )
      v4 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, v3, v4, 0, *a2, a2[1], 0);
    v3 = (int)result;
    if ( !result )
      break;
    result[53] = this[200];
    v6 = sub_100D7680((int)result);
    if ( v6 )
      *(_DWORD *)(v6 + 2608) = -1;
  }
  return result;
}
