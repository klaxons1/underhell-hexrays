bool __thiscall sub_100AB070(_DWORD *this, int a2)
{
  return a2 != this[1]
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 264))(a2)
      && (!(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) || (*(_DWORD *)(a2 + 256) & 0x8000) == 0)
      && (*(_BYTE *)(a2 + 248) & 1) == 0
      && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 552))(a2, this[1])
      && (*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(*(_DWORD *)this[1] + 1432))(this[1], a2, 1) != 0;
}
