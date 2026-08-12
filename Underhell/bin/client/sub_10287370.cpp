int __thiscall sub_10287370(_DWORD *this)
{
  int i; // eax
  int v3; // edi
  int v4; // ecx

  for ( i = this[55]; i != -1; i = *(_DWORD *)(v3 + this[52] + 12) )
  {
    v3 = 16 * i;
    v4 = *(_DWORD *)(16 * i + this[52]);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 120))(v4, 1);
  }
  sub_10287290(this + 52);
  this[64] = 0;
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
