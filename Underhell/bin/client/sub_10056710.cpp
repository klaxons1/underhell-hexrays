int __thiscall sub_10056710(_BYTE *this)
{
  _BYTE *v2; // edi
  bool v3; // zf
  float v5; // [esp+0h] [ebp-Ch]

  v2 = this - 12;
  sub_10035090(this - 12, 4, 0);
  v3 = this[79] == 0;
  this[72] = 6;
  if ( v3 )
  {
    sub_101A8B70(v2);
    return (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)this - 1) + 4))(this - 4);
  }
  else
  {
    v5 = *((float *)off_103DC81C + 3) + 1.0;
    return (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v2 + 408))(v2, LODWORD(v5));
  }
}
