int __thiscall sub_10207C60(_DWORD *this)
{
  int v2; // esi
  __int16 v3; // ax

  v2 = this[106];
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 76))(this[106]);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 72))(v2, v3 & 0xFEFF);
  }
  return sub_100EC3F0(this, 0, 0.0, (int)"PROP_CLEARFLAGS");
}
