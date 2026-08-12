void __userpurge sub_10332DF0(unsigned __int16 *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int *v5; // edx
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ecx
  float v11; // [esp+0h] [ebp-24h]

  sub_10035690((int)a1, a2, a3, a4);
  v6 = *((_DWORD *)a1 + 75);
  if ( v6 != -1
    && (v5 = off_1061BE18,
        v7 = &off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 1],
        v8 = v6 >> 12,
        off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 2] == v8)
    && *v7
    && (off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 2] != v8 ? (v9 = 0) : (v9 = *v7),
        *(char **)(v9 + 92) == "prop_combine_ball" || sub_100D6240((_DWORD *)v9, "prop_combine_ball")) )
  {
    if ( *((_DWORD *)a1 + 75) == -1
      || off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 2] != *((_DWORD *)a1 + 75) >> 12 )
    {
      v10 = 0;
    }
    else
    {
      v10 = off_1061BE18[4 * (*((_DWORD *)a1 + 75) & 0xFFF) + 1];
    }
    (*(void (__thiscall **)(int, const char *, unsigned __int16 *, unsigned __int16 *, _DWORD))(*(_DWORD *)v10 + 148))(
      v10,
      "explode",
      a1,
      a1,
      0);
    (*(void (__thiscall **)(unsigned __int16 *, _DWORD, int))(*(_DWORD *)a1 + 140))(a1, 0, -1);
    sub_1025FAC0((int)a1);
  }
  else
  {
    sub_100E0970((int)a1, (int)v5, 0, 0);
    sub_101129A0(a1 + 160, a1[178] | 4);
    sub_1025F360(a1, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
    v11 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)a1, v11, 0);
    sub_100EC3F0(a1, (int)sub_10246D70, 0.0, 0);
  }
}
