bool __thiscall sub_1000C0D0(_DWORD *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  int v4; // esi
  int v5; // eax
  bool result; // al

  v2 = this[490];
  result = v2 != -1
        && (v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4), v3[1] == v2 >> 12)
        && (v4 = *v3) != 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 512))(*v3)
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 504))(v4)
        && (v5 = sub_10045780(this[492])) != 0
        && (*(_DWORD *)(v5 + 112) & 0x20) == 0;
  return result;
}
