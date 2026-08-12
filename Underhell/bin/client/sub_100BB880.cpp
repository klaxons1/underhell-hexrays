int __thiscall sub_100BB880(_DWORD *this, char a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  signed int v8; // edi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  wchar_t Destination[4096]; // [esp+14h] [ebp-2008h] BYREF
  int v15; // [esp+2014h] [ebp-8h]
  int i; // [esp+2018h] [ebp-4h]

  sub_1025A8E0(Locale);
  v3 = 0;
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
  v5 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
         (int)&CBaseHudChat `RTTI Type Descriptor',
         0);
  if ( v5 && *(_DWORD *)(v5 + 320) )
    sub_1025AB30("\n");
  for ( i = 0; i < this[112]; ++i )
  {
    v6 = this[109];
    v7 = *(_DWORD *)(v6 + v3);
    v8 = *(_DWORD *)(v6 + v3 + 4) - v7 + 1;
    if ( v8 > 1 )
    {
      wcsncpy(Destination, (const wchar_t *)(this[114] + 2 * v7), v8);
      v9 = this[109];
      Destination[v8 - 1] = 0;
      v15 = *(_DWORD *)(v9 + v3 + 8);
      HIBYTE(v15) = a2;
      sub_10259970(v15);
      sub_1025A7B0(Destination);
      v10 = (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
      v11 = __RTDynamicCast(
              v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
              (int)&CBaseHudChat `RTTI Type Descriptor',
              0);
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 320) )
        {
          sub_10259970(v15);
          sub_1025A7B0(Destination);
          sub_10259A00(*(float *)(dword_1042FFC4 + 44), 2.5);
          if ( i == this[112] - 1 )
            sub_10259A00(-1.0, -1.0);
        }
      }
    }
    v3 += 12;
  }
  return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 244))(this, 1, 0);
}
