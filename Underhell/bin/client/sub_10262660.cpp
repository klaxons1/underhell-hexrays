int __thiscall sub_10262660(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  char *v6; // eax
  int v7; // edi

  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 848))(this, a2);
  if ( v4
    && a3 >= 0
    && a3 < this[68]
    && (v5 = *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(this[65] + a3)),
        (v6 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 72))(v5)) != 0)
    && *v6
    && this[109]
    && (v7 = sub_1022A800(v4, v6, 0), (unsigned __int8)sub_10279000(v7))
    && v7 > 0 )
  {
    return sub_10279020(v7);
  }
  else
  {
    return 0;
  }
}
