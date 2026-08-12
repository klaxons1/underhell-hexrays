char *__thiscall sub_1025D5F0(void *this, int *a2)
{
  int v3; // eax
  int v4; // esi
  char *result; // eax

  if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
    return sub_1025C680(this, *a2);
  v3 = sub_10261B20();
  v4 = v3;
  if ( !v3 )
    return sub_1025C680(this, *a2);
  result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3);
  if ( (_BYTE)result )
  {
    if ( *(int *)(v4 + 3436) <= 0 )
      return sub_1025C680(this, *a2);
  }
  return result;
}
