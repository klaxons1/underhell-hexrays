bool __thiscall sub_10028720(_DWORD *this)
{
  int v2; // eax

  v2 = this[581];
  return (v2 == 1 || v2 == 2)
      && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 99)
      && (this[62] & 2) == 0;
}
