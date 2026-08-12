char __usercall sub_100628C0@<al>(int a1@<ecx>, int a2@<ebx>)
{
  char result; // al
  float *v4; // edi
  float *v5; // ebx
  char v6; // al
  int v7; // ecx
  float *v8; // eax
  double v9; // st7
  float v10; // [esp+4h] [ebp-18h]
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 1248) & 8) == 0 )
    return 0;
  if ( (*(_BYTE *)(a1 + 2073) & 8) != 0 )
    return 1;
  v4 = (float *)(a1 + 1216);
  result = sub_10061020(a1, a2, 0, (float *)(a1 + 1216));
  *(_BYTE *)(a1 + 1212) = result;
  if ( result )
  {
    v5 = (float *)(a1 + 1228);
    v6 = sub_10061020(a1, a1 + 1228, 1, (float *)(a1 + 1228));
    *(_BYTE *)(a1 + 1213) = v6;
    if ( !v6 )
    {
      *v5 = *v4;
      *(float *)(a1 + 1232) = *(float *)(a1 + 1220);
      *(float *)(a1 + 1236) = *(float *)(a1 + 1224);
    }
    sub_10116850(0.0, a1 + 1944);
    v10 = (float)((*(_DWORD *)(a1 + 1928) + *(_DWORD *)(a1 + 1924) - 100) / (*(_DWORD *)(a1 + 1268) - 1));
    sub_101165F0(v10);
    sub_101165D0(a1 + 1256);
    v7 = 0;
    v11 = 0;
    if ( *(int *)(a1 + 1268) > 0 )
    {
      v12 = 0;
      do
      {
        v8 = (float *)(v12 + *(_DWORD *)(a1 + 1264));
        v9 = (double)v11 / (double)(*(_DWORD *)(a1 + 1268) - 1);
        v12 += 36;
        v11 = ++v7;
        *v8 = (*v5 - *v4) * v9 + *v4;
        v8[1] = (*(float *)(a1 + 1232) - *(float *)(a1 + 1220)) * v9 + *(float *)(a1 + 1220);
        v8[2] = v9 * (*(float *)(a1 + 1236) - *(float *)(a1 + 1224)) + *(float *)(a1 + 1224);
        v8[3] = *v8;
        v8[4] = v8[1];
        v8[5] = v8[2];
      }
      while ( v7 < *(_DWORD *)(a1 + 1268) );
    }
    if ( (*(_BYTE *)(a1 + 1248) & 0x40) != 0 )
      sub_10062100((_DWORD *)a1, 5.0);
    sub_10061260((int *)a1);
    sub_10060D50((_DWORD *)a1);
    *(float *)(a1 + 1996) = RandomFloat(1.0, 3.0);
    *(_BYTE *)(a1 + 2073) |= 8u;
    return 1;
  }
  return result;
}
