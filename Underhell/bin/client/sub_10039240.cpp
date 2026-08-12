char __thiscall sub_10039240(int this, int a2, int a3)
{
  int v3; // eax
  int v5; // eax
  int v7; // [esp-8h] [ebp-Ch]
  int v8; // [esp-4h] [ebp-8h]

  v3 = a2;
  v8 = a3;
  *(_DWORD *)(this + 80) = a2;
  v7 = v3;
  v5 = (**(int (__thiscall ***)(int))(this + 4))(this + 4);
  sub_1009C000(&a2, v5, v7, v8);
  sub_1008E450(this + 352);
  sub_100390F0((void *)this, (int *)(this + 20));
  *(_DWORD *)(this + 1140) = *((_DWORD *)off_103DC81C + 6);
  return 1;
}
