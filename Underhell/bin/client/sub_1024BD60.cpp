void __thiscall sub_1024BD60(int (__thiscall ***this)(void *), int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // [esp-4h] [ebp-Ch]

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 92))(dword_1047CA70, a2) )
    v4 = a3;
  else
    v4 = ((int (__thiscall *)(int (__thiscall ***)(void *), int, int))this[54][8])(this + 54, a2, a3);
  v6 = v4;
  v5 = (**this)(this);
  sub_10237260(this, v5, v6);
}
