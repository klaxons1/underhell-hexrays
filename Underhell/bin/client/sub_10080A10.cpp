unsigned __int16 __thiscall sub_10080A10(int *this, __int16 a2, __int16 a3)
{
  int *v3; // esi
  int v4; // eax
  unsigned __int16 v5; // di
  int v6; // eax

  v3 = this + 17;
  v4 = sub_1007D460(this + 17, 0);
  v5 = v4;
  sub_1007EF10(v3, 0xFFFF, v4);
  v6 = 2 * v5;
  *(_WORD *)(*v3 + 8 * v6 + 8) = a2;
  *(_WORD *)(*v3 + 8 * v6) = -1;
  *(_WORD *)(*v3 + 8 * v6 + 2) = -1;
  *(_DWORD *)(*v3 + 8 * v6 + 4) = 0;
  *(_WORD *)(*v3 + 8 * v6 + 10) = a3;
  return v5;
}
