unsigned __int8 __usercall sub_10063220@<al>(int a1@<ecx>, int a2@<ebx>)
{
  unsigned __int8 result; // al
  double v4; // st7
  float *v5; // eax
  double v6; // st7
  double v7; // st7
  __int64 v8; // [esp+14h] [ebp-20h] BYREF
  unsigned __int64 v9; // [esp+1Ch] [ebp-18h] BYREF
  int v10[4]; // [esp+24h] [ebp-10h] BYREF

  *(_BYTE *)(a1 + 2061) |= 3u;
  result = dword_1040E804;
  if ( *(_DWORD *)(dword_1040E804 + 48) )
  {
    result = sub_100628C0(a1 - 12, a2);
    if ( result )
    {
      result = sub_10062270(a1 - 12, (bool *)(a1 + 1188));
      if ( !result )
      {
        LODWORD(v8) = &dword_1040EA80;
        v10[3] = (int)&v9;
        v9 = __rdtsc();
        sub_10062100((_DWORD *)(a1 - 12), *((float *)off_103DC81C + 4));
        *(_BYTE *)(a1 + 2061) &= ~4u;
        dword_1040E4F8 += *(_DWORD *)(a1 + 1256);
        *(float *)(a1 + 1976) = *((float *)off_103DC81C + 4) + *(float *)(a1 + 1976);
        v4 = *(float *)(a1 + 1984) - *((float *)off_103DC81C + 4);
        *(float *)(a1 + 1984) = v4;
        if ( v4 <= 0.0 )
        {
          v5 = sub_10042010((float *)v10, -1.0, 1.0);
          *(float *)(a1 + 1988) = *v5;
          *(float *)(a1 + 1992) = v5[1];
          *(float *)(a1 + 1996) = v5[2];
          off_103EDFEC();
          v6 = flt_103DBE14;
          *(float *)(a1 + 1988) = *(float *)(a1 + 1988) * flt_103DBE14;
          *(float *)(a1 + 1992) = v6 * *(float *)(a1 + 1992);
          *(float *)(a1 + 1996) = v6 * *(float *)(a1 + 1996);
          v7 = RandomFloat(-1.0, 1.0);
          *(float *)(a1 + 1988) = *(float *)(a1 + 1988) * v7;
          *(float *)(a1 + 1992) = v7 * *(float *)(a1 + 1992);
          *(float *)(a1 + 1996) = v7 * *(float *)(a1 + 1996);
          *(float *)(a1 + 1976) = 0.0;
          *(float *)(a1 + 1980) = RandomFloat(2.0, 3.0);
          *(float *)(a1 + 1984) = RandomFloat(3.0, 4.0);
        }
        sub_10060D50((_DWORD *)(a1 - 12));
        return (unsigned __int8)sub_10062CA0(&v8);
      }
    }
  }
  return result;
}
