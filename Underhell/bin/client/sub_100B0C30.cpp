int __cdecl sub_100B0C30(float a1, char a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // esi

  result = (unsigned __int16)dword_1042F810;
  if ( (_WORD)dword_1042F810 != 0xFFFF )
  {
    do
    {
      v3 = *(_DWORD *)(dword_1042F804 + 8 * (unsigned __int16)result);
      v4 = *(unsigned __int16 *)(dword_1042F804 + 8 * (unsigned __int16)result + 6);
      if ( *(_WORD *)(v3 + 154) && *(_BYTE *)(v3 + 16) )
      {
        if ( *(_BYTE *)(v3 + 32) )
          sub_100AFD10(v3, a1, a2);
      }
      result = v4;
    }
    while ( (_WORD)v4 != 0xFFFF );
  }
  return result;
}
