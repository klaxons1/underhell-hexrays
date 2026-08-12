int __thiscall sub_102809E0(int this, int a2, int a3, int a4)
{
  int result; // eax
  int (__thiscall ***v6)(void *, int, int); // esi
  char Source[256]; // [esp+Ch] [ebp-100h] BYREF

  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 792))(*(_DWORD *)(this + 112), a2);
  v6 = (int (__thiscall ***)(void *, int, int))result;
  if ( result )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)result + 156))(result, *(_DWORD *)(this + 112));
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v6)[71])(v6, this);
    sub_10236140(v6, a3, a4);
    sub_102807F0((_DWORD *)this, Source, 0xFFu, (int)v6);
    sub_10236070(v6, Source);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*v6)[43])(v6, *(_DWORD *)(this + 112));
    sub_102370A0(v6, 1);
    sub_102370D0(v6, 1);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v6)[41])(v6, 1);
    return (int)v6;
  }
  return result;
}
