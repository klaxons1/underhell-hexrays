char __thiscall sub_10341560(_BYTE *this, char a2)
{
  int v4; // edi
  int v5; // ecx
  int v6; // eax

  if ( this[4960] )
    return 0;
  v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this);
  if ( !v4 || sub_100697A0(this, 79, 1) )
    return 0;
  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1868))(this);
  if ( a2 )
    v6 = sub_10077560(v5, v4);
  else
    v6 = sub_100775F0(v5, v4);
  return sub_10341420((int)this, v6);
}
