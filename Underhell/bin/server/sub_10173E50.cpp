void __thiscall sub_10173E50(_DWORD *this, __int64 a2, int a3, int a4)
{
  _BYTE v5[8]; // [esp+10h] [ebp-20h] BYREF
  int v6; // [esp+18h] [ebp-18h]
  int v7; // [esp+24h] [ebp-Ch]
  int v8; // [esp+28h] [ebp-8h]

  if ( (_DWORD)a2 && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( !*(_BYTE *)(a2 + 2139) )
      sub_102600F0(a2, "Valve_Hint_GasMask");
    sub_1023C380((int)"HL2Player.PickupItems", 0.0, 0);
    sub_1010DD80(this + 282, a2, 0.0);
    v6 = 1;
    v7 = -1;
    v8 = 6;
    sub_101E3750(v5);
    sub_1025FAC0(this);
  }
}
