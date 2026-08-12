void __usercall sub_101BB4F0(int a1@<esi>, double a2@<st0>, int *a3, _DWORD *a4)
{
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  const char *v11; // eax
  const char *v12; // ecx

  if ( dword_106BAFF4 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106BAFF4 + 140))(dword_106BAFF4)
    || dword_106BA094 > 0 )
  {
    v4 = a4[10];
    if ( v4 != -1
      && off_1061BE18[4 * (a4[10] & 0xFFF) + 2] == v4 >> 12
      && (v5 = off_1061BE18[4 * (a4[10] & 0xFFF) + 1]) != 0 )
    {
      v6 = *(_DWORD *)(v5 + 424);
    }
    else
    {
      v6 = 0;
    }
    sub_101BB3B0(&dword_106B9F38, a2, (int)a3, (int)a4, v6, 0, &flt_106F1CA8, &flt_106F1CA8);
    if ( a3 )
    {
      v7 = a4[10];
      if ( v7 != -1 )
      {
        v8 = &off_1061BE18[4 * (a4[10] & 0xFFF) + 1];
        v9 = v7 >> 12;
        if ( off_1061BE18[4 * (a4[10] & 0xFFF) + 2] == v9 )
        {
          if ( *v8 )
          {
            if ( off_1061BE18[4 * (a4[10] & 0xFFF) + 2] == v9 )
              v10 = *v8;
            else
              v10 = 0;
            v11 = *(const char **)(v10 + 92);
            if ( !v11 )
              v11 = String;
            v12 = (const char *)a3[23];
            if ( !v12 )
              v12 = String;
            DevMsg(2, "Warning: Physics damage event with no recovery info!\nObjects: %s, %s\n", v12, v11);
          }
        }
      }
    }
  }
  else
  {
    sub_100D9E70(a3, a1, a4);
  }
}
