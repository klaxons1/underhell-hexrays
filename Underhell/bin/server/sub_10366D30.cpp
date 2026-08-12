int __usercall sub_10366D30@<eax>(char *a1@<ecx>, double a2@<st0>)
{
  int v3; // edi

  v3 = (int)(a1 + 3832);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*((_DWORD *)a1 + 958) + 24))((_DWORD *)a1 + 958) )
  {
    sub_10164AB0(a1, v3);
    return sub_1032F2D0((int)a1, a2);
  }
  if ( sub_10023D10(a1, 74) )
    return 92;
  if ( sub_10023D10(a1, 76) )
    return 189;
  if ( *((_DWORD *)a1 + 581) != 2 )
  {
    if ( *((_DWORD *)a1 + 581) == 3
      && (sub_10023D10(a1, 11)
       || sub_10023D10(a1, 31) && (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a1 + 2288))(a1)) )
    {
      sub_1002B660((int)a1, 2);
      return (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 1240))(a1);
    }
    return sub_1032F2D0((int)a1, a2);
  }
  if ( !sub_10023D10(a1, 11)
    && (!sub_10023D10(a1, 31) || !(*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a1 + 2288))(a1)) )
  {
    return sub_1032F2D0((int)a1, a2);
  }
  sub_10023E00(a1, 11);
  sub_10023E00(a1, 31);
  sub_100285C0(a1, 0, 1);
  return 95;
}
