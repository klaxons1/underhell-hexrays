int __thiscall sub_1026B810(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // esi

  if ( a2 >= 0
    && a2 < this[59]
    && a2 <= this[65]
    && ((v2 = 12 * a2 + this[58], *(_DWORD *)(v2 + 4) != a2) || *(_DWORD *)(v2 + 8) == a2)
    && (v3 = *(_DWORD *)(12 * a2 + this[58])) != 0
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 204))(v3) )
  {
    return sub_1026F360(v3);
  }
  else
  {
    return 0;
  }
}
