bool __stdcall sub_10260570(int a1, int a2)
{
  int v2; // eax

  return !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a1)
      && (v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1)) != 0
      && ((*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 320) + 48))(v2 + 320) & 0x20) != 0;
}
