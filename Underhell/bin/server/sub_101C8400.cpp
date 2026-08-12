int __thiscall sub_101C8400(_WORD *this)
{
  unsigned __int16 v2; // ax
  int v3; // esi
  int result; // eax

  v2 = sub_104313D0(0);
  v3 = v2;
  sub_101C6480((int)&dword_10638748, 0xFFFFu, v2);
  result = 10 * v3;
  *(_WORD *)(result + dword_10638748 + 2) = -1;
  *(_WORD *)(result + dword_10638748) = -1;
  *(_WORD *)(result + dword_10638748 + 4) = 0;
  *this = v3;
  return result;
}
