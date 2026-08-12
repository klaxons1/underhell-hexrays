bool __thiscall sub_100428E0(_DWORD *this, int a2)
{
  bool result; // al
  int v4; // esi

  result = (unsigned __int8)sub_100E8910(a2)
        && ((v4 = this[647], !(unsigned __int8)sub_1007E040(v4)) || a2 != sub_1007E670(v4))
        && (!a2 || (unsigned __int8)sub_100E9830(a2));
  return result;
}
