void __usercall sub_1027C0C0(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx

  v3 = a1[353];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (a1[353] & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
  {
    v5 = a1[103];
    if ( v5 == -1 || off_1061BE18[4 * (a1[103] & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (a1[103] & 0xFFF) + 1];
    if ( (a1[63] & 0x800) != 0 )
      sub_100DAE60((int)a1);
    v7 = sub_10409070(a1 + 145, v6, 1);
    if ( v7 )
      a1[353] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    else
      a1[353] = -1;
    v8 = a1[353];
    if ( v8 == -1 || off_1061BE18[4 * (a1[353] & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (a1[353] & 0xFFF) + 1];
    sub_10403E50(v9);
    sub_1027BD00(a1, a2, flt_106F1CA8, flt_106F1CAC, flt_106F1CB0, flt_106F1CA8, flt_106F1CAC, flt_106F1CB0);
  }
}
