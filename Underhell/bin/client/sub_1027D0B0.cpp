int __thiscall sub_1027D0B0(int this, const unsigned __int16 *a2, char a3)
{
  const unsigned __int16 *v4; // edi
  __int16 v5; // ax
  bool v6; // cc
  __int16 v7; // ax
  _WORD *v8; // edx
  const unsigned __int16 *v9; // ecx
  int result; // eax

  if ( a3 )
    *(_DWORD *)(this + 44) = -1;
  v4 = a2;
  if ( !a2 )
    v4 = (const unsigned __int16 *)&unk_10302674;
  v5 = wcslen(v4);
  v6 = v5 < *(_WORD *)(this + 28);
  *(_WORD *)(this + 30) = v5;
  if ( !v6 )
  {
    sub_10034930(*(_DWORD *)(this + 24));
    v7 = *(_WORD *)(this + 30) + 1;
    *(_WORD *)(this + 28) = v7;
    *(_DWORD *)(this + 24) = sub_100DDA40((unsigned __int64)(unsigned int)v7 >> 31 != 0 ? -1 : 2 * v7);
  }
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 92) = 0;
  v8 = *(_WORD **)(this + 24);
  v9 = v4;
  do
  {
    result = *v9;
    *v8 = result;
    ++v9;
    ++v8;
  }
  while ( (_WORD)result );
  *(_BYTE *)(this + 52) |= 1u;
  return result;
}
