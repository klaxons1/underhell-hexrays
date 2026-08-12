int __thiscall sub_1023B860(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int result; // eax

  v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  v3 = a2;
  v4 = v2;
  result = (*(unsigned __int16 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 28))(dword_106B3204, a2);
  a2 = result;
  if ( (_WORD)result != 0xFFFF )
    return sub_1023AC80(&off_1064C3E8, v4, v3, (__int16 *)&a2);
  return result;
}
