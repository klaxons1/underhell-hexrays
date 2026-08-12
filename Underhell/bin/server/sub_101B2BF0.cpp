void __thiscall sub_101B2BF0(int this)
{
  int v2; // eax

  if ( (*(_DWORD *)(this + 248) & 8) != 0
    && *(_DWORD *)(this + 800)
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800)) )
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 312))(v2);
  }
  sub_101B0490(this);
}
