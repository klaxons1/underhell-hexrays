char __thiscall sub_100334B0(_BYTE *this)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 788))(this);
  if ( v2 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 704))(v2);
  else
    return sub_1002DDB0(this);
}
