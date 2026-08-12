int __thiscall sub_10373900(_DWORD *this, _DWORD *a2)
{
  int v4; // eax

  if ( !a2 )
    return 4;
  v4 = a2[23];
  if ( v4 == dword_106E8514 || v4 == dword_106E8510 )
    return sub_103725A0((int)a2) ? 1 : 4;
  if ( *(_DWORD *)(dword_106E9414 + 48)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2)
    && (int)this[1145] > 0 )
  {
    return 2;
  }
  return sub_100C9AD0(this, (int)a2);
}
