int sub_10039880()
{
  int result; // eax
  _BYTE *v1; // esi
  int v2; // edi

  result = (unsigned __int16)word_103D8A88;
  if ( (unsigned __int16)word_103D8A88 != 0xFFFF )
  {
    do
    {
      v1 = *(_BYTE **)(dword_103D8A7C + 8 * (unsigned __int16)result);
      v2 = *(unsigned __int16 *)(dword_103D8A7C + 8 * (unsigned __int16)result + 6);
      v1[120] = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v1 + 380))(v1, *((float *)off_103DC81C + 3));
      result = v2;
    }
    while ( v2 != 0xFFFF );
  }
  return result;
}
