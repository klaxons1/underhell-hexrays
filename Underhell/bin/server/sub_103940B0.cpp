bool __thiscall sub_103940B0(_DWORD *this, int a2, char a3)
{
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // ecx
  bool result; // al

  v4 = (_DWORD *)sub_100D7680(a2);
  result = v4
        && ((v5 = v4[581], v5 == 2) || (v6 = this[581], v6 == 2) || v5 == 3 || v6 == 3)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v4 + 1528))(v4, 0)
        || sub_1001FBD0(this, a2, a3);
  return result;
}
