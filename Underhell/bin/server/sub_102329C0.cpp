void __userpurge sub_102329C0(int a1@<ecx>, double a2@<st0>, int *a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  const char *v6; // ebx
  const char *v7; // eax
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // edi
  __int64 v12; // [esp-4h] [ebp-18h]
  float v13; // [esp+0h] [ebp-14h]

  if ( *(_DWORD *)(a1 + 812)
    && (*(_DWORD *)(a1 + 248) & 0x100) != 0
    && ((v4 = *(_DWORD *)(a1 + 884), v4 == -1)
     || (v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 884) & 0xFFF) + 1],
         off_1061BE18[4 * (*(_DWORD *)(a1 + 884) & 0xFFF) + 2] != v4 >> 12)
     || !*v5) )
  {
    if ( (a3[59] & 0x1000) != 0 )
    {
      v6 = *(const char **)(sub_1026A890(a3 + 672) + 812);
      if ( !v6 )
        v6 = String;
      v7 = sub_100D6390(a3);
      DevMsg(2, "Post Idle %s finished for %s\n", v6, v7);
    }
    a3[671] = 2;
    sub_10232840(a1, a2, (int)a3, *(char **)(a1 + 812), 0);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 248) & 4) == 0 )
    {
      sub_100EC3F0((_DWORD *)a1, (int)sub_10246D70, 0.0, 0);
      v13 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)a1, v13, 0);
      *(_WORD *)(a1 + 888) = 256;
    }
    sub_10033F30(a3);
    sub_10231710(a3, *(_DWORD *)(a1 + 868));
    v8 = *(_DWORD *)(a1 + 884);
    if ( v8 != -1 )
    {
      v9 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 884) & 0xFFF) + 1];
      v10 = v8 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 884) & 0xFFF) + 2] == v10 )
      {
        if ( *v9 )
        {
          v11 = off_1061BE18[4 * (*(_DWORD *)(a1 + 884) & 0xFFF) + 2] == v10 ? *v9 : 0;
          if ( v11 != a1 || (*(_BYTE *)(a1 + 248) & 4) != 0 )
          {
            if ( a3 )
              *(_DWORD *)(v11 + 880) = *(_DWORD *)(*(int (__thiscall **)(int *))(*a3 + 8))(a3);
            else
              *(_DWORD *)(v11 + 880) = -1;
            sub_10232210(v11);
          }
        }
      }
    }
  }
  HIDWORD(v12) = a1;
  LODWORD(v12) = 0;
  sub_1010DD80((_DWORD *)(a1 + 952), v12, 0.0);
}
