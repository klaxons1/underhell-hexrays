char __thiscall sub_102BFAB0(_WORD *this)
{
  char **v2; // esi
  _DWORD v4[9]; // [esp+Ch] [ebp-2Ch] BYREF
  __int16 v5; // [esp+30h] [ebp-8h]
  int v6; // [esp+34h] [ebp-4h]

  v2 = off_10662430;
  while ( *v2 )
  {
    v4[0] = *v2;
    memset(&v4[1], 0, 32);
    v5 = 1;
    v6 = 0;
    if ( sub_10161A10(this + 24, (int)v4) == -1 )
      break;
    if ( (int)++v2 >= (int)&unk_10662468 )
      return 1;
  }
  return 0;
}
