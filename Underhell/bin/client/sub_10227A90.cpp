_DWORD *__thiscall sub_10227A90(_DWORD *this, int a2, char a3, _DWORD *a4, int a5)
{
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a3 )
    a3 = *(_BYTE *)(this[16] + 844);
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)a2 + 588))(a2, v7);
  *a4 = this[10];
  sub_102279A0(this, v7[0], v7[1], v7[2], a5, a3);
  return &dword_10465D70[4 * this[10]];
}
