signed int __thiscall sub_1021A000(_DWORD *this, int a2)
{
  signed int result; // eax
  _DWORD v4[8]; // [esp+4h] [ebp-20h] BYREF

  result = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    this[5] = 0;
  }
  else
  {
    memset(v4, 0, sizeof(v4));
    (*(void (__thiscall **)(int, _DWORD, int, _DWORD *))(*(_DWORD *)dword_106B31D0 + 164))(dword_106B31D0, 0, a2, v4);
    return sub_10219F10(this, v4);
  }
  return result;
}
