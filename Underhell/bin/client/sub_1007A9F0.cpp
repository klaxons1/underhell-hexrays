int __thiscall sub_1007A9F0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax

  if ( a2 != -1
    && (v2 = (*(int (__thiscall **)(_DWORD *, int))(this[16389] + 8))(this + 16389, a2)) != 0
    && (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 28))(v2)) != 0 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 8) + 36))(v3 + 8);
  }
  else
  {
    return -1;
  }
}
