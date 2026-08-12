void __userpurge sub_10039E30(int *a1@<ecx>, double a2@<st0>, int a3)
{
  int v4; // ebx
  const char *v5; // edi
  const char *v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebx
  const char *v10; // [esp-8h] [ebp-10h]

  v4 = a1[593];
  if ( v4 != a3 && (!a3 || v4 != 2 || a1[595] == 171) )
  {
    if ( *(_DWORD *)(dword_10695FE4 + 48) && (a1[59] & 0x1000) != 0 )
    {
      v5 = (const char *)a1[23];
      if ( !v5 )
        v5 = String;
      v10 = sub_10008F90(a3);
      v6 = sub_10008F90(v4);
      DevMsg("SetActivity : %s: %s -> %s\n", v5, v6, v10);
    }
    v7 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !a1[275] && sub_100D7240(a1) )
      sub_100BD750(a1);
    v8 = (_DWORD *)a1[275];
    if ( v8 && *v8 )
      v9 = a1[275];
    else
      v9 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
    if ( v9 )
    {
      a1[595] = a3;
      sub_10039D10(a1, a3, a1 + 596, a1 + 597, a1 + 598);
      sub_10033690((int)a1, a2, a1[595], a1[596], a1[597], a1[598]);
    }
  }
}
