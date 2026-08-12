void __usercall sub_104095F0(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // esi
  char v7; // bl
  int *v8; // ecx
  _DWORD *v10; // edi
  int v11; // eax

  sub_100D3C30((int *)a1);
  v10 = (_DWORD *)sub_100D1940((_DWORD *)a1);
  if ( v10 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v10 + 320))(v10) )
  {
    if ( *(_BYTE *)(a1 + 1392) && *(_DWORD *)(a1 + 1160) != 172 )
    {
      sub_10409420((_BYTE *)a1, a3);
      *(_BYTE *)(a1 + 1392) = 0;
    }
    v11 = *(_DWORD *)(a1 + 1168);
    if ( v11 == 205 || v11 == 202 || v11 == 183 )
      sub_10409500((_DWORD *)a1, 1);
    else
      sub_10409500((_DWORD *)a1, 0);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) == 1
      && (v10[824] & 0x800) != 0 )
    {
      sub_10409460(a1, a3);
    }
    sub_104059F0((_DWORD *)a1, a3, flt_106F1CA8, flt_106F1CAC, flt_106F1CB0, flt_106F1CA8, flt_106F1CAC, flt_106F1CB0);
    if ( *(_BYTE *)(a1 + 1393) )
    {
      v3 = *(_DWORD *)(a1 + 1420);
      if ( v3 != -1 )
      {
        v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 1];
        v5 = v3 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] == v5 )
        {
          if ( *v4 )
          {
            v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1420) & 0xFFF) + 2] == v5 ? *v4 : 0;
            v7 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -8, 8, a2)
               + 0x80;
            if ( *(_BYTE *)(v6 + 119) != v7 )
            {
              if ( *(_BYTE *)(v6 + 84) )
              {
                *(_BYTE *)(v6 + 88) |= 1u;
                *(_BYTE *)(v6 + 119) = v7;
              }
              else
              {
                v8 = *(int **)(v6 + 24);
                if ( v8 )
                  sub_100194B0(v8, 116);
                *(_BYTE *)(v6 + 119) = v7;
              }
            }
          }
        }
      }
    }
  }
}
