bool __thiscall sub_100240F0(void *this, int a2, int a3)
{
  int v4; // ebx
  bool result; // al
  int v6; // eax

  v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1300))(this, a2);
  result = v4
        && (a3 >= 1000000000
          ? (v6 = a3)
          : ((*(void (__thiscall **)(void *))(*(_DWORD *)this + 2160))(this), v6 = sub_1007DB30(a3)),
            v6 != -1 && v6 != 999999999)
        && (*(_DWORD *)(v4 + 4 * ((v6 - 1000000000) >> 5) + 12) & (1 << (v6 & 0x1F))) != 0;
  return result;
}
