int __thiscall sub_10273FC0(int this, int a2)
{
  unsigned int v3; // edi
  _DWORD *v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // eax
  int v7; // eax

  sub_10241570((unsigned int *)this, a2);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 252))(this, 0);
  v3 = *(_DWORD *)this;
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 268) + 228))(*(_DWORD *)(this + 268), &a2);
  (*(void (__thiscall **)(int, _DWORD))(v3 + 220))(this, *v4);
  v5 = *(_DWORD *)this;
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 268) + 224))(*(_DWORD *)(this + 268), &a2);
  (*(void (__thiscall **)(int, _DWORD))(v5 + 216))(this, *v6);
  v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 268) + 904))(*(_DWORD *)(this + 268));
  return sub_10273B90((_DWORD **)this, v7);
}
