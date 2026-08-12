int __thiscall sub_1044DCA0(int *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v4; // eax

  v3 = this + 5;
  v4 = 24 * sub_1044DBB0(this + 5, this[8]);
  *(_DWORD *)(v4 + *v3 + 4) = 7;
  *(_DWORD *)(v4 + *v3) = a2;
  return sub_104332E0(a3, (_DWORD *)(v4 + *v3 + 8));
}
