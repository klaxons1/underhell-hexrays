int __thiscall sub_1010C590(_BYTE *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 48))(a2, &a2, 1, 0);
  this[4] = (_WORD)a2 == (unsigned __int16)word_10614A30;
  return result;
}
