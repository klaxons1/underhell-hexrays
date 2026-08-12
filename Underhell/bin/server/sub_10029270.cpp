bool __thiscall sub_10029270(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  bool result; // al

  result = (!*(_DWORD *)(dword_1069345C + 48)
         || (v3 = *(_DWORD *)(this[647] + 128), v3 == -1)
         || off_1061BE18[4 * (*(_DWORD *)(this[647] + 128) & 0xFFF) + 2] != v3 >> 12
         || (v4 = off_1061BE18[4 * (*(_DWORD *)(this[647] + 128) & 0xFFF) + 1]) == 0
         || !(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 340))(v4)
         || (*(int (__thiscall **)(_DWORD *))(*this + 220))(this) != 3
         && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1676))(this))
        && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1676))(this) == 0;
  return result;
}
