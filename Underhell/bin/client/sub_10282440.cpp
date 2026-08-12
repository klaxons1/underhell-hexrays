_BYTE *__thiscall sub_10282440(
        _BYTE *this,
        int (__thiscall ***a2)(_DWORD),
        char *Source,
        int a4,
        char a5,
        char a6,
        int (__thiscall ***a7)(_DWORD))
{
  unsigned int *v8; // edi
  int v9; // edi
  unsigned int *v10; // edi

  sub_102602A0((int)this, a2, Source, a4, a5);
  *(_DWORD *)this = &CBuildModeNavCombo::`vftable';
  if ( !byte_10481A64 )
  {
    byte_10481A64 = 1;
    v8 = sub_10242540("CBuildModeNavCombo");
    v8[7] = (unsigned int)sub_10281810;
    v8[6] = (unsigned int)sub_10242540("ComboBox");
  }
  if ( !byte_10481A65 )
  {
    byte_10481A65 = 1;
    v9 = sub_102484C0((int)"CBuildModeNavCombo");
    *(_DWORD *)(v9 + 24) = sub_10281810;
    *(_DWORD *)(v9 + 20) = sub_102484C0((int)"ComboBox");
  }
  if ( !byte_10481A66 )
  {
    byte_10481A66 = 1;
    v10 = sub_10242580("CBuildModeNavCombo");
    v10[17] = (unsigned int)sub_10281810;
    v10[6] = (unsigned int)sub_10242580("ComboBox");
  }
  this[975] = a6;
  *((_DWORD *)this + 244) = -1;
  sub_102393F0((_DWORD *)this + 244, a7);
  return this;
}
