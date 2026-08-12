int __thiscall sub_101301F0(int *this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // ebx
  double v7; // [esp+Ch] [ebp-8h]

  sub_1024AB70(a2);
  v3 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 12))(a2, "Trebuchet24", 0);
  v4 = *this;
  this[72] = v3;
  (*(void (__thiscall **)(int *, int))(v4 + 816))(this, v3);
  v5 = sub_10076740();
  v7 = (double)sub_10076720();
  sub_102361A0(v5, (int)(v7 * 0.3));
  return sub_10236140(0, (int)(v7 * 0.35 - (double)((int)(v7 * 0.3) / 2)));
}
