void __thiscall sub_10060670(int this)
{
  unsigned __int16 v2; // ax
  int v3; // edi
  bool v4; // al
  int v5; // ecx
  const char *v6; // esi
  int v7; // [esp+8h] [ebp-8h] BYREF

  sub_10060390((_DWORD *)this);
  v7 = 131077;
  v2 = sub_1005E740((_WORD *)(this + 16), (int)&v7);
  if ( v2 == 0xFFFF || (v3 = *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v2 + 12), v3 == -1) )
    v3 = 5;
  v4 = ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1672))(*(_DWORD *)(this + 4)) & 0x8000000) != 0
    && sub_10039AE0(*(_DWORD **)(this + 4), v3, 0) != -1;
  v5 = *(_DWORD *)(this + 4);
  *(_BYTE *)(this + 201) = v4;
  if ( sub_100CF460(v5) && sub_10039AE0(*(_DWORD **)(this + 4), v3, 0) == -1 )
  {
    v6 = *(const char **)(*(_DWORD *)(this + 4) + 92);
    if ( !v6 )
      v6 = String;
    DevMsg("Note: NPC class %s lacks ACT_COVER_LOW, therefore cannot participate in standoff\n", v6);
  }
}
