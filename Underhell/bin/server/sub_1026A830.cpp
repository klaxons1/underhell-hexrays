int __thiscall sub_1026A830(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  _BYTE *v4; // [esp-4h] [ebp-4h]

  result = this[a2 + 47];
  if ( result )
  {
    v4 = (_BYTE *)this[a2 + 47];
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
           dword_106B31D0,
           *(_DWORD *)(this[11] + 24));
    return sub_1023AF30(v3, 2, v4);
  }
  return result;
}
