void __thiscall sub_102E5C30(_DWORD *this, int a2)
{
  int v3; // eax

  if ( sub_10257050(a2) )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 288))(a2);
    if ( v3 )
      *(_BYTE *)(v3 + 1670) = 0;
  }
  sub_102576F0(this, a2);
}
