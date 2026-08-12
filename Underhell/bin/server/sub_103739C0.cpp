char __thiscall sub_103739C0(int *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax

  v3 = this[906];
  if ( v3 )
    LOBYTE(v4) = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 184))(v3, a2);
  else
    LOBYTE(v4) = sub_100246E0(this, a2);
  if ( a2 )
  {
    v4 = a2[23];
    if ( v4 == dword_106E8514 || v4 == dword_106E8510 )
    {
      LOBYTE(v4) = (*(int (__thiscall **)(int *, _DWORD *))(*this + 1484))(this, a2);
      if ( (_BYTE)v4 )
        LOBYTE(v4) = (unsigned __int8)sub_10023CB0((char *)this, 80);
    }
  }
  return v4;
}
