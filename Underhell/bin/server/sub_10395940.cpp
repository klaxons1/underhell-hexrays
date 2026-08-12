void __thiscall sub_10395940(int *this, int a2)
{
  int v3; // edi

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int *))(*this + 2416))(this) )
    this[1408] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[1408] = -1;
  v3 = (*(int (__thiscall **)(int *, int))(*this + 932))(this, this[593]);
  if ( sub_100BDCE0((int)this, v3) != -1 && v3 != this[593] )
    sub_10039F40(this, v3);
}
