_DWORD *__thiscall sub_1022AC10(_DWORD *this, char *Str, const unsigned __int16 *Src)
{
  _DWORD *result; // eax
  int v4; // esi
  const unsigned __int16 *v5; // ebx
  unsigned int v6; // edi
  void *v7; // eax

  result = sub_1022A6A0(this, Str, 1);
  v4 = (int)result;
  if ( result )
  {
    sub_10034930(result[2]);
    sub_10034930(*(_DWORD *)(v4 + 4));
    v5 = Src;
    *(_DWORD *)(v4 + 4) = 0;
    if ( !Src )
      v5 = (const unsigned __int16 *)&unk_10302674;
    v6 = wcslen(v5);
    v7 = (void *)sub_100DDA40((unsigned __int64)(v6 + 1) >> 31 != 0 ? -1 : 2 * (v6 + 1));
    *(_DWORD *)(v4 + 8) = v7;
    result = memcpy_0(v7, v5, 2 * v6 + 2);
    *(_BYTE *)(v4 + 16) = 5;
  }
  return result;
}
