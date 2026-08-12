int __usercall sub_10045830@<eax>(_DWORD *a1@<ecx>, double a2@<st0>)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi

  if ( sub_10023D10(a1, 68) )
    return sub_100696D0(73);
  if ( a1[581] == 3 && !(*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
  {
    DevMsg("**ERROR: Combat State with no enemy! slamming to ALERT\n");
    sub_1002B660((int)a1, 2);
  }
  v4 = a1[581];
  if ( v4 == 4 || v4 == 7 || a1[629] == 3 )
    v5 = sub_10045660((int)a1, a2);
  else
    v5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 1240))(a1);
  v6 = v5;
  a1[532] = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 1308))(a1, v5);
  return sub_100696D0(v6);
}
