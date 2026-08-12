int __thiscall sub_1027C790(int *this, int a2, int a3)
{
  int v4; // edi
  int result; // eax

  v4 = sub_1027C550((int)this);
  (*(void (__thiscall **)(int *, int, int, int))(*this + 808))(this, v4, a2, a3);
  sub_10258C50(this + 76, this[79], (_DWORD *)(this[58] + 12 * v4));
  result = v4;
  *((_BYTE *)this + 353) = 1;
  return result;
}
