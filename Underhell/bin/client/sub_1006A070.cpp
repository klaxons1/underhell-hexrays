int __thiscall sub_1006A070(int *this, char *a2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // esi
  double v5; // st7
  int result; // eax

  v2 = this + 45;
  v3 = sub_100698A0(this + 45, this[48], a2);
  v4 = *v2 + (v3 << 6);
  v5 = sub_100DA430(a2 + 16);
  result = v3;
  *(float *)(v4 + 12) = v5 * 0.5 + *((float *)off_103DC81C + 3);
  return result;
}
