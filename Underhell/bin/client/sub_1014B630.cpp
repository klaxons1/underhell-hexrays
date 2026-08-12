int __thiscall sub_1014B630(int this)
{
  int v2; // esi
  int v3; // esi
  void (__thiscall ***v4)(_DWORD); // eax
  void (__thiscall ***v5)(_DWORD); // esi
  _DWORD v7[2]; // [esp+30h] [ebp-8h] BYREF

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  }
  sub_1014B3A0((_DWORD *)this, this, 0.0, *(_DWORD *)(this + 132), COERCE_INT(0.0), -1);
  if ( *(_BYTE *)(this + 164) )
  {
    *(_DWORD *)(this + 136) |= 1u;
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413168 + 120))(
      dword_10413168,
      *(_DWORD *)(this + 156),
      0);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    if ( v3 )
      (**(void (__thiscall ***)(int))v3)(v3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 208))(v3, v7);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v3 + 292))(
      v3,
      v7[0],
      *(_DWORD *)((char *)v7 + 1),
      *(_DWORD *)((char *)v7 + 2),
      255);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  else
  {
    sub_10149570();
  }
  sub_1014B480((int *)this, 0.0, dword_103E7E94, 0.0);
  v4 = (void (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v5 = v4;
  if ( v4 )
    (**v4)(v4);
  (*v5)[2](v5);
  ((void (__thiscall *)(void (__thiscall ***)(_DWORD), _DWORD, _DWORD, _DWORD, int))(*v5)[73])(v5, 0, 0, 0, 255);
  (*v5)[3](v5);
  return ((int (__thiscall *)(_DWORD))(*v5)[1])(v5);
}
