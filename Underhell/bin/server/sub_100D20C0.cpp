bool __thiscall sub_100D20C0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  bool result; // al

  v2 = this[280];
  result = v2 != -1
        && (v3 = &off_1061BE18[4 * (this[280] & 0xFFF) + 1], v3[1] == v2 >> 12)
        && (v4 = *v3) != 0
        && (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4)) != 0
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5)
        && (v6 = sub_101E7EA0(this[282])) != 0
        && (*(_DWORD *)(v6 + 192) & 0x20) == 0;
  return result;
}
