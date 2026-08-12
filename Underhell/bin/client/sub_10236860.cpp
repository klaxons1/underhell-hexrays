void __thiscall sub_10236860(void *this, void *a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // eax

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 148))(this) )
  {
    v3 = dword_1047CA70;
    v4 = *(_DWORD *)dword_1047CA70;
    v5 = (**(int (__thiscall ***)(void *))this)(this);
    v6 = (*(int (__thiscall **)(void *, void *, int))(*(_DWORD *)this + 148))(this, a2, v5);
    (*(void (__thiscall **)(int, int))(v4 + 148))(v3, v6);
  }
  if ( a2 )
    sub_1022AF00(a2);
}
