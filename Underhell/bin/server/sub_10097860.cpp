void __thiscall sub_10097860(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // [esp+Ch] [ebp-Ch]

  if ( *((_BYTE *)this + 4412) && *(_DWORD *)(dword_106938FC + 48) )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v2 = sub_10261B20();
      v3 = v2;
      if ( v2 )
      {
        v7 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) != 0 ? v2 : 0;
        v4 = (*(int (__thiscall **)(_DWORD *))(*this + 2352))(this);
        sub_1025F210(v4, v7);
        *(_BYTE *)((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) != 0 ? v3 + 0x11A6 : 4518) = 1;
      }
    }
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60(this);
    v5 = sub_101E3340(this[145], this[146], this[147], 1.5, 8.0, 4.5);
    v6 = v5;
    if ( v5 )
    {
      sub_1005C620((_BYTE *)(v5 + 116), 0, 0, 0, 255);
      sub_1010C7F0(v6, (int)"Reload", 1.5, v6, v6, 0);
    }
    flt_10627D1C = 0.0;
    flt_10627D20 = 0.0;
  }
}
