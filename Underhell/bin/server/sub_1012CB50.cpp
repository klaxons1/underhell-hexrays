_DWORD *__thiscall sub_1012CB50(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // edx
  int v6; // eax
  bool v7; // zf
  _DWORD *v8; // [esp+20h] [ebp-4h]
  int i; // [esp+2Ch] [ebp+8h]

  result = (_DWORD *)(*(_DWORD *)(a2 + 252) >> 6);
  v8 = this;
  if ( (*(_DWORD *)(a2 + 252) & 0x40) != 0 )
  {
    v5 = 0;
    for ( i = 0; v5 < this[5]; i = v5 )
    {
      v6 = this[2];
      v7 = *(_DWORD *)(v6 + 8 * v5 + 4) == a2;
      result = (_DWORD *)(v6 + 8 * v5);
      if ( v7 )
      {
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int, int, int, _DWORD))(*(_DWORD *)*result + 148))(
                             *result,
                             a3,
                             a2,
                             a2,
                             0);
        v5 = i;
        this = v8;
      }
      ++v5;
    }
  }
  return result;
}
