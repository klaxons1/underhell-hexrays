int __usercall sub_103AD750@<eax>(_DWORD *a1@<ecx>, double a2@<st0>)
{
  int v4; // eax
  int v5; // eax

  if ( sub_1032ECA0(a1) )
    return sub_10092C60((int)a1, a2);
  v4 = a1[581];
  if ( v4 <= 0 )
    return sub_10092C60((int)a1, a2);
  if ( v4 <= 2 )
    return sub_10023D10(a1, 1) ? 91 : 1;
  if ( v4 != 3 )
    return sub_10092C60((int)a1, a2);
  if ( sub_10023D10(a1, 26) )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
      return 90;
  }
  if ( sub_10023D10(a1, 21) )
    return sub_1004AE20(a1, 0, 1) ? 43 : 91;
  return sub_10023D10(a1, 10) ? 12 : 91;
}
