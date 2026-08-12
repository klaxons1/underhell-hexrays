bool __cdecl sub_103725A0(int a1)
{
  int v1; // ecx

  return !(unsigned __int8)sub_1040AC40(a1)
      && (v1 = *(_DWORD *)(a1 + 424)) != 0
      && (*(_DWORD *)(dword_106E921C + 48) || *(_DWORD *)(dword_106E9264 + 48) || *(_DWORD *)(dword_106E92AC + 48))
      && (((*(int (__thiscall **)(int))(*(_DWORD *)v1 + 76))(v1) & 0x104) != 0 || (unsigned __int8)sub_1040B950(a1, 0));
}
