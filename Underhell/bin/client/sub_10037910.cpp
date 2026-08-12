BOOL __thiscall sub_10037910(int this)
{
  return *(_WORD *)(this + 132)
      && *(_DWORD *)(this + 92)
      && *(_BYTE *)(this + 393)
      && (*(_BYTE *)(this + 388) & 4) == 0
      && ((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, *(_DWORD *)(this + 92)) == 1
       || (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, *(_DWORD *)(this + 92)) == 3)
      && (*(_WORD *)(this + 132) == 1 || !sub_100353B0((float *)this));
}
