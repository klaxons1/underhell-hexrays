int __thiscall sub_100790A0(int this, const char *a2)
{
  int v2; // ebx
  int v3; // edi
  int v5; // [esp+Ch] [ebp-4h]

  v2 = *(unsigned __int16 *)(this + 22);
  v3 = 0;
  if ( !*(_WORD *)(this + 22) )
    return -1;
  v5 = *(_DWORD *)(this + 8);
  while ( v5 + 60 * (unsigned __int16)v3 == -12 || strcmp((const char *)(v5 + 60 * (unsigned __int16)v3 + 20), a2) )
  {
    if ( ++v3 >= v2 )
      return -1;
  }
  return *(_DWORD *)(v5 + 60 * (unsigned __int16)v3 + 16);
}
