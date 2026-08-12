char __thiscall sub_1003C970(int this, int a2, int a3)
{
  int v4; // edi
  int v6; // eax
  void (__thiscall *v7)(int); // edx

  if ( a2 )
  {
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, a2);
    if ( v4 == -1 )
      return 0;
  }
  else
  {
    LOWORD(v4) = -1;
  }
  sub_100390F0((void *)this, (int *)(this + 20));
  sub_1003B5B0((_WORD *)this, v4);
  v6 = (**(int (__thiscall ***)(int))(this + 4))(this + 4);
  sub_1009C060(&a2, v6);
  sub_10036100(this, a3);
  sub_1008E450(this + 352);
  v7 = *(void (__thiscall **)(int))(*(_DWORD *)this + 124);
  *(_DWORD *)(this + 80) = -1;
  v7(this);
  return 1;
}
