bool __thiscall sub_10265910(int this, int a2, int a3)
{
  _DWORD *v4; // edi

  return !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2)
      && (v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2)) != 0
      && !sub_102658A0(*(_DWORD **)(this + 12), v4)
      && (!*(_BYTE *)(this + 20)
       || !(*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD *))(*(_DWORD *)dword_106BAFFC + 12))(
             dword_106BAFFC,
             *(_DWORD *)(this + 16),
             v4))
      && (!(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 284))(*(_DWORD *)(this + 16))
       || !sub_10020300(*(_DWORD *)(this + 16), (int)v4))
      && sub_10265590((int *)this, a2, a3);
}
