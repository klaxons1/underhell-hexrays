void __thiscall sub_102611C0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // eax

  if ( *((_BYTE *)this + 216) )
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
      v4 = sub_1022B1A0(v3, (int)"ResizeColumnToContents", "column", this[51]);
    else
      v4 = 0;
    v5 = *this;
    v6 = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 144))(this, v4, 0.0);
    (*(void (__thiscall **)(_DWORD *, int))(v5 + 132))(this, v6);
  }
}
