int __thiscall sub_10080A70(int this, int a2)
{
  int result; // eax

  sub_1007F490(this + 184, a2);
  sub_1007F6B0(this + 264, a2);
  sub_1007E370((_DWORD *)(this + 68), (unsigned __int16)a2);
  result = 2 * (unsigned __int16)a2;
  *(_WORD *)(*(_DWORD *)(this + 68) + 16 * (unsigned __int16)a2 + 14) = *(_WORD *)(this + 88);
  *(_DWORD *)(this + 88) = (unsigned __int16)a2;
  return result;
}
