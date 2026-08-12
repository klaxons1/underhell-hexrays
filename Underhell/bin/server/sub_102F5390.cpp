void __usercall sub_102F5390(char *a1@<ecx>, double a2@<st0>)
{
  int v3; // edi
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6

  if ( (char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 1329) + 1364))(*((_DWORD *)a1 + 1329)) != a1 + 5312
    || !*((_DWORD *)a1 + 1332) )
  {
    sub_102F4E80((int)a1);
  }
  v3 = (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 368))(a1);
  if ( sub_10023D10(a1, 3) && v3 )
  {
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    if ( (*((_DWORD *)a1 + 63) & 0x800) != 0 )
      sub_100DAE60((int)a1);
    v4 = *((float *)a1 + 146) - *(float *)(v3 + 584);
    v5 = v4 * v4;
    v6 = *((float *)a1 + 145) - *(float *)(v3 + 580);
    v7 = v5;
    v8 = *((float *)a1 + 147) - *(float *)(v3 + 588);
    a2 = v6 * v6 + v7 + v8 * v8;
    if ( a2 < 3600.0 )
      sub_10023E00(a1, 3);
  }
  if ( sub_10023D10(a1, 17) && v3 && !(*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a1 + 2168))(a1) )
  {
    sub_100271C0((float *)a1, (float *)v3);
    if ( a2 > 360.0 )
      (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2180))(a1);
  }
}
