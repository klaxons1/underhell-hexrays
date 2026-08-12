bool __thiscall sub_10024070(_DWORD *this, int a2)
{
  bool result; // al
  int v4; // eax

  result = this[531]
        && (a2 >= 1000000000
          ? (v4 = a2)
          : ((*(void (__thiscall **)(_DWORD *))(*this + 2160))(this), v4 = sub_1007DB30(a2)),
            v4 != -1 && v4 != 999999999)
        && (*(_DWORD *)(this[531] + 4 * ((v4 - 1000000000) >> 5) + 12) & (1 << (v4 & 0x1F))) != 0;
  return result;
}
