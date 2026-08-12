int __thiscall sub_10037B80(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  void (__thiscall ***v8)(_DWORD, int); // ecx
  void (__thiscall ***v9)(_DWORD, int); // ecx
  void (__thiscall ***v10)(_DWORD, int); // ecx

  *this = &CAI_BaseNPC::`vftable';
  this[526] = &CAI_BaseNPC::`vftable';
  v2 = 0;
  if ( dword_10690E04 > 0 )
  {
    while ( *(_DWORD **)(dword_10690DF8 + 4 * v2) != this )
    {
      if ( ++v2 >= dword_10690E04 )
        goto LABEL_8;
    }
    if ( v2 != -1 && dword_10690E04 > 0 )
      *(_DWORD *)(dword_10690DF8 + 4 * v2) = *(_DWORD *)(dword_10690DF8 + 4 * dword_10690E04-- - 4);
  }
LABEL_8:
  sub_10184660(this[602]);
  v3 = this[678];
  if ( v3 )
  {
    sub_100772A0(this[678]);
    sub_10184660(v3);
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this[649];
  if ( v4 )
    (**v4)(v4, 1);
  v5 = (void (__thiscall ***)(_DWORD, int))this[647];
  if ( v5 )
    (**v5)(v5, 1);
  v6 = (void (__thiscall ***)(_DWORD, int))this[651];
  if ( v6 )
    (**v6)(v6, 1);
  v7 = (void (__thiscall ***)(_DWORD, int))this[648];
  if ( v7 )
    (**v7)(v7, 1);
  v8 = (void (__thiscall ***)(_DWORD, int))this[650];
  if ( v8 )
    (**v8)(v8, 1);
  v9 = (void (__thiscall ***)(_DWORD, int))this[601];
  if ( v9 )
    (**v9)(v9, 1);
  v10 = (void (__thiscall ***)(_DWORD, int))this[704];
  if ( v10 )
    (**v10)(v10, 1);
  sub_1010BB10(this + 880);
  sub_1010BB10(this + 874);
  sub_1010BB10(this + 868);
  sub_1010BB10(this + 862);
  sub_1010BB10(this + 856);
  sub_1010BB10(this + 850);
  sub_1010BB10(this + 844);
  sub_1010BB10(this + 838);
  sub_1010BB10(this + 832);
  sub_1010BB10(this + 826);
  sub_1010BB10(this + 820);
  sub_1010BB10(this + 814);
  sub_1010BB10(this + 808);
  sub_1010BB10(this + 802);
  sub_1010BB10(this + 796);
  sub_1010BB10(this + 790);
  sub_1010BB10(this + 784);
  sub_1010BB10(this + 778);
  sub_1010BB10(this + 772);
  sub_1010BB10(this + 766);
  sub_1010BB10(this + 760);
  sub_1010BB10(this + 754);
  sub_1010BB10(this + 748);
  sub_1010BB10(this + 742);
  sub_1010BB10(this + 736);
  this[708] = &CAI_Component::`vftable';
  sub_102375F0(this + 642);
  sub_102375F0(this + 631);
  return sub_100CF2B0(this);
}
