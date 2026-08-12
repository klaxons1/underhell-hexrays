int __thiscall sub_10374D00(_BYTE *this, int a2)
{
  int (__thiscall *v3)(int, _DWORD, int); // eax
  _DWORD v4[4]; // [esp+0h] [ebp-10h]

  if ( this[4245] || !*(_DWORD *)(dword_106E8D54 + 48) )
    return 0;
  v3 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8);
  v4[0] = "scenes/npc/hunter/hunter_scan.vcd";
  v4[1] = "scenes/npc/hunter/hunter_eyeclose.vcd";
  v4[2] = "scenes/npc/hunter/hunter_roar.vcd";
  v4[3] = "scenes/npc/hunter/hunter_pain.vcd";
  return v4[v3(dword_106B31E4, 0, 3)];
}
