bool __thiscall sub_1013A7E0(_BYTE *this, int a2)
{
  bool result; // al

  result = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2) == (unsigned __int16)word_103E77EC;
  this[4] = result;
  return result;
}
