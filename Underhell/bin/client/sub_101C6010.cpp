_DWORD *__thiscall sub_101C6010(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  this[2] = 0;
  v4 = sub_100DDA40((unsigned __int64)(unsigned int)(4 * a3 * a2) >> 30 != 0 ? -1 : 16 * a3 * a2);
  *this = a2;
  this[2] = v4;
  this[1] = a3;
  return this;
}
