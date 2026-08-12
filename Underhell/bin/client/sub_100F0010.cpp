char __thiscall sub_100F0010(int *this, int a2, int a3)
{
  _DWORD *v5; // eax
  int v6; // ebx
  int i; // edi
  void (__thiscall ***v8)(_DWORD, int); // ecx
  int v10; // [esp+14h] [ebp+8h]

  *(_DWORD *)(a2 + 140) = a3;
  *(_DWORD *)(a2 + 144) = this;
  (**(void (__thiscall ***)(void *, int, _DWORD))off_103DCDDC)(off_103DCDDC, a2 + 4, 0);
  v10 = (unsigned __int16)sub_100EC160(this + 10, 0);
  sub_1016F8E0(0xFFFF, v10);
  v5 = (_DWORD *)(this[10] + 8 * (unsigned __int16)v10);
  if ( v5 )
    *v5 = a2;
  *(_WORD *)(a2 + 136) = v10;
  v6 = this[21];
  for ( i = 0; i < v6; ++i )
  {
    v8 = *(void (__thiscall ****)(_DWORD, int))(this[18] + 4 * i);
    (**v8)(v8, a3);
  }
  return 1;
}
