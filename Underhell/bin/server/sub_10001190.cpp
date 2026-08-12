int __thiscall sub_10001190(_BYTE *this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 48))(a2, &a2, 1, 0);
  if ( (_WORD)a2 == word_105FD000 && *(_DWORD *)(dword_106B31C8 + 72) <= 1u )
  {
    result = 1;
    this[4] = 1;
  }
  else
  {
    result = 0;
    this[4] = 0;
  }
  return result;
}
