int __thiscall sub_1019D480(_DWORD *this, int a2, char *Buffer)
{
  int v4; // esi
  unsigned int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]
  const char *v9; // [esp+1Ch] [ebp+8h]

  v8 = 0;
  v9 = (const char *)(a2 + 14);
  v7 = strlen(v9);
  v4 = 0;
  if ( !this[266] )
    return v8;
  while ( 1 )
  {
    if ( !sub_104292D0(*(_DWORD *)(this[265] + 4 * v4), v9, v7) )
    {
      sub_10429A00(Buffer, 0x40u, "nav_use_place %s", *(_DWORD *)(this[265] + 4 * v4));
      Buffer += 64;
      if ( ++v8 == 64 )
        break;
    }
    if ( (unsigned int)++v4 >= this[266] )
      return v8;
  }
  return 64;
}
