int __thiscall sub_10256C10(int this)
{
  double v2; // st7
  int v3; // eax

  v2 = *(float *)(this + 732);
  *(_BYTE *)(this + 852) = 1;
  *(_DWORD *)(this + 828) = (int)v2;
  sub_10255440((unsigned __int16 *)this);
  v3 = *(_DWORD *)(this + 812);
  *(_DWORD *)(this + 836) = *(_DWORD *)(this + 828);
  *(_DWORD *)(this + 820) = v3;
  return sub_100EC3F0((_DWORD *)this, (int)sub_102547C0, *(float *)(dword_106B31C8 + 12), (int)"WindThinkContext");
}
