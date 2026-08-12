void __thiscall sub_1015FB20(int this)
{
  char v2; // al
  char v3; // bl
  int v4; // eax
  char v5; // al
  char v6; // bl
  int v7; // eax
  _BYTE v8[4]; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h]

  sub_1015F3A0((_DWORD *)this);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D8 + 20))(dword_106B31D8);
  v3 = v2;
  if ( byte_106B4AC4 )
    *(_BYTE *)(this + 40) = v2;
  if ( byte_106B4AC3 )
  {
    v4 = sub_10430F10(&dword_106B4A9C);
    *(_BYTE *)(sub_10162950(v4) + 32) = v3;
  }
  *(_BYTE *)(this + 76) = v3;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31CC + 20))(dword_106B31CC);
  v6 = v5;
  if ( byte_106B4AC4 )
    *(_BYTE *)(this + 41) = v5;
  if ( byte_106B4AC3 )
  {
    v7 = sub_10430F10(&dword_106B4A9C);
    *(_BYTE *)(sub_10162950(v7) + 33) = v6;
  }
  *(_BYTE *)(this + 77) = v6;
  sub_1042CBA0("mat_dxlevel");
  if ( (unsigned __int8)sub_1042C850(v8) )
    *(_DWORD *)(this + 84) = *(_DWORD *)(v9 + 48);
  sub_1015EFA0(this, "CBaseGameStats::Event_Init [%dth session]\n", ++*(_DWORD *)(this + 8));
}
