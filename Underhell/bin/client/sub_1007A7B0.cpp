int __thiscall sub_1007A7B0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(_DWORD *, int))(this[16389] + 8))(this + 16389, a2);
  if ( v2 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 32))(v2);
  else
    return 0;
}
