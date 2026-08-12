_DWORD *__cdecl sub_100593D0(int a1)
{
  _DWORD *result; // eax
  char *v2; // eax
  char *v3; // ebx
  int v4; // eax
  float *v5; // edi
  _BYTE v6[12]; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v7[12]; // [esp+18h] [ebp-1Ch] BYREF
  _BYTE v8[12]; // [esp+24h] [ebp-10h] BYREF
  float *v9; // [esp+30h] [ebp-4h] BYREF

  result = (_DWORD *)sub_1009B500();
  if ( !(_BYTE)result )
  {
    v2 = (char *)sub_10074520(*(_DWORD *)(a1 + 84));
    v3 = v2;
    if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
    {
      sub_10059370(&v9, 0, v2, 0);
      v5 = v9;
      if ( *((_DWORD *)v9 + 20) )
      {
        v9[1682] = *(float *)a1;
        v5[1683] = *(float *)(a1 + 4);
        v5[1684] = *(float *)(a1 + 8);
        sub_100F2080(0, a1);
        sub_100F2080(1, a1 + 12);
        sub_101EE040(a1 + 36, v8, v7, v6);
        sub_100F2230(0, v8, v7, v6);
      }
      return (_DWORD *)sub_100F1860(v5);
    }
    result = *(_DWORD **)(a1 + 52);
    if ( result != (_DWORD *)-1
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 52) & 0xFFF) + 2) == *(_DWORD *)(a1 + 52) >> 12 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 52) & 0xFFF) + 1) )
      {
        result = (_DWORD *)sub_10036460(*(_DWORD *)(a1 + 52));
        if ( result )
        {
          result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(result[2] + 32))(result + 2);
          if ( !(_BYTE)result )
          {
            if ( (*(_BYTE *)(a1 + 48) & 2) != 0 )
              sub_100EA4D0(0, 0, 0);
            v4 = sub_100EA350(
                   v3,
                   *(_DWORD *)(a1 + 80),
                   *(_DWORD *)(a1 + 68),
                   SLODWORD(flt_10459240),
                   qword_10459244,
                   SHIDWORD(qword_10459244));
            result = sub_10059340(&v9, v4);
            v5 = v9;
            if ( v9 )
            {
              if ( *((_DWORD *)v9 + 20) )
              {
                if ( *(_DWORD *)(a1 + 80) == 2 )
                {
                  sub_10059030(v9, (float *)a1);
                  sub_100F2080(0, a1);
                  sub_100F2080(1, a1 + 12);
                  sub_101EE040(a1 + 36, v6, v7, v8);
                  sub_100F2230(0, v6, v7, v8);
                }
              }
              return (_DWORD *)sub_100F1860(v5);
            }
          }
        }
      }
    }
  }
  return result;
}
