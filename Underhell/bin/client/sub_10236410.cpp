int __thiscall sub_10236410(int (__thiscall ***this)(void *))
{
  int v2; // edi
  int v3; // eax

  v2 = (int)*this[19];
  v3 = (**this)(this);
  return (*(int (__thiscall **)(int (__thiscall **)(void *), int))(v2 + 8))(this[19], v3);
}
