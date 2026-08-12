int __thiscall sub_10029510(_DWORD *this, char *String1)
{
  int v2; // esi
  _DWORD *v3; // esi

  v2 = (int)(this - 1);
  if ( !this[484] && (*(int (__thiscall **)(_DWORD *))(*this + 36))(this) )
    sub_10026520(v2);
  v3 = *(_DWORD **)(v2 + 1940);
  if ( v3 && *v3 )
    return sub_1001E0E0((int)v3, String1) + 1;
  else
    return -1;
}
