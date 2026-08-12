char __thiscall sub_101C1390(_DWORD *this, int a2, int a3)
{
  int v4; // ecx

  if ( (unsigned __int8)sub_102658A0(this[3], a2) )
    return 0;
  if ( *(_BYTE *)(a2 + 306) == 6
    && (v4 = *(_DWORD *)(a2 + 424)) != 0
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 40))(v4) )
  {
    return 0;
  }
  else
  {
    return sub_10265590(a2, a3);
  }
}
