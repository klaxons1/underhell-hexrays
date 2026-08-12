int __thiscall sub_10082900(_DWORD **this)
{
  int v1; // eax
  int v4; // edi

  v4 = *(_DWORD *)(dword_1042BCFC + 48);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this[3] + 128))(this[3]) != (v4 != 0) )
    (*(void (__thiscall **)(_DWORD *, bool))(*this[3] + 124))(this[3], *(_DWORD *)(dword_1042BCFC + 48) != 0);
  v1 = sub_100422D0();
  if ( v1 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 500))(v1) )
    return sub_100658B0((int)&unk_1040EFB0, *((float *)off_103DC81C + 3));
  flt_10410A9C = 0.0;
  byte_1040EFBC = 0;
  byte_1040EFD0 = 0;
  byte_1040EFE4 = 0;
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_104131B0 + 96))(dword_104131B0);
}
