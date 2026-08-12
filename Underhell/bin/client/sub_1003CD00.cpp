int __thiscall sub_1003CD00(int this)
{
  int result; // eax

  sub_1003CB30(this, 0, 0);
  *(_DWORD *)(this + 112) &= ~1u;
  result = sub_1008FB60(*(_WORD *)(this + 388) & 0xFFFB);
  *(_WORD *)(this + 316) = 0;
  return result;
}
