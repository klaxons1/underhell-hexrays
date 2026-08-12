bool __thiscall sub_101E28C0(_DWORD *this, int a2, int a3)
{
  int v5; // eax

  return !(**(int (__thiscall ***)(int, int))a2)(a2, a3)
      && ((*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a2 + 12))(a2, a3)
       || (v5 = sub_100CF460(this)) == 0
       || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 980))(v5))
      && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 264))(this)
      && (this[63] & 0x100000) == 0;
}
