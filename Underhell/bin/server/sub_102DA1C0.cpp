bool __stdcall sub_102DA1C0(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // eax
  bool result; // al

  result = (*(_BYTE *)(a2 + 64) & 1) == 0
        || (v2 = *(_DWORD *)(a2 + 40), v2 == -1)
        || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v2 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1]
        || !sub_100D7680(a1)
        || (v3 = sub_100D7680(a1), !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 1528))(v3, 0))
        || (v4 = (_DWORD *)sub_1025FB50(1)) == 0
        || (v5 = sub_101E6620(v4, "weapon_physcannon")) == 0
        || (v6 = sub_100232D0((_DWORD *)a2), !(unsigned __int8)sub_103FC820(v5, v6))
        || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 220))(a1) == 4;
  return result;
}
