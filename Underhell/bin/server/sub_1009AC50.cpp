char __thiscall sub_1009AC50(void *this, _DWORD *a2)
{
  int v3; // esi
  int v4; // edx
  char *i; // eax

  *a2 = -1;
  if ( (*((_BYTE *)this + 44) & 1) == 0 )
    return 0;
  v3 = *((_DWORD *)this + 3);
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  for ( i = (char *)(*(_DWORD *)this + 7); *(i - 1) == *((_BYTE *)this + 43) || *i >= 0; i += 8 )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  *a2 = v4;
  return 1;
}
