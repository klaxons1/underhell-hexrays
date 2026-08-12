int __thiscall sub_102AE610(int *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v4; // eax

  v3 = this + 5;
  v4 = 24 * sub_102AE520(this + 5, this[8]);
  *(_DWORD *)(v4 + *v3 + 4) = 7;
  *(_DWORD *)(v4 + *v3) = a2;
  return sub_10233090(a3, (_DWORD *)(v4 + *v3 + 8));
}
