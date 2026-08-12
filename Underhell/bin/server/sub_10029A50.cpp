char __usercall sub_10029A50@<al>(int a1@<ebp>, int a2, int a3, char a4)
{
  float *v4; // eax
  int v5; // edi
  float *v7; // eax
  int v8; // esi
  int v9; // [esp+Ch] [ebp-F4h]
  int v10; // [esp+Ch] [ebp-F4h]
  float v11[22]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v12[12]; // [esp+7Ch] [ebp-84h] BYREF
  int v13; // [esp+88h] [ebp-78h] BYREF
  char v14; // [esp+B3h] [ebp-4Dh]
  _BYTE v15[16]; // [esp+D4h] [ebp-2Ch] BYREF
  float *v16; // [esp+E4h] [ebp-1Ch]
  float *v17; // [esp+E8h] [ebp-18h]
  char v18; // [esp+EEh] [ebp-12h]
  char v19; // [esp+EFh] [ebp-11h]
  float *v20; // [esp+F0h] [ebp-10h]
  _DWORD v21[3]; // [esp+F4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+100h] [ebp+0h]

  v21[0] = a1;
  v21[1] = retaddr;
  v18 = 1;
  v19 = 1;
  v20 = (float *)sub_10073710(*(_DWORD *)(a2 + 1676));
  if ( *(float *)sub_10073710(*(_DWORD *)(a3 + 1676)) < (double)*v20
    || (v20 = (float *)sub_10073710(*(_DWORD *)(a2 + 1676)),
        *(float *)(sub_10073710(*(_DWORD *)(a3 + 1676)) + 4) < (double)v20[1])
    || (v20 = (float *)sub_10073710(*(_DWORD *)(a2 + 1676)),
        *(float *)(sub_10073710(*(_DWORD *)(a3 + 1676)) + 8) < (double)v20[2])
    || (v20 = (float *)sub_10073730(*(_DWORD *)(a2 + 1676)),
        *(float *)sub_10073730(*(_DWORD *)(a3 + 1676)) > (double)*v20)
    || (v20 = (float *)sub_10073730(*(_DWORD *)(a2 + 1676)),
        *(float *)(sub_10073730(*(_DWORD *)(a3 + 1676)) + 4) > (double)v20[1])
    || (v20 = (float *)sub_10073730(*(_DWORD *)(a2 + 1676)),
        *(float *)(sub_10073730(*(_DWORD *)(a3 + 1676)) + 8) > (double)v20[2]) )
  {
    v20 = (float *)sub_10073710(*(_DWORD *)(a3 + 1676));
    if ( *(float *)sub_10073710(*(_DWORD *)(a2 + 1676)) >= (double)*v20 )
    {
      v20 = (float *)sub_10073710(*(_DWORD *)(a3 + 1676));
      if ( *(float *)(sub_10073710(*(_DWORD *)(a2 + 1676)) + 4) >= (double)v20[1] )
      {
        v20 = (float *)sub_10073710(*(_DWORD *)(a3 + 1676));
        if ( *(float *)(sub_10073710(*(_DWORD *)(a2 + 1676)) + 8) >= (double)v20[2] )
        {
          v20 = (float *)sub_10073730(*(_DWORD *)(a3 + 1676));
          if ( *(float *)sub_10073730(*(_DWORD *)(a2 + 1676)) <= (double)*v20 )
          {
            v20 = (float *)sub_10073730(*(_DWORD *)(a3 + 1676));
            if ( *(float *)(sub_10073730(*(_DWORD *)(a2 + 1676)) + 4) <= (double)v20[1] )
            {
              v20 = (float *)sub_10073730(*(_DWORD *)(a3 + 1676));
              if ( *(float *)(sub_10073730(*(_DWORD *)(a2 + 1676)) + 8) <= (double)v20[2] )
                v18 = 0;
            }
          }
        }
      }
    }
  }
  else
  {
    v19 = 0;
  }
  sub_10265720(a2, a3, 0);
  if ( v18 )
  {
    v20 = (float *)sub_10073730(*(_DWORD *)(a2 + 1676));
    v17 = (float *)sub_10073710(*(_DWORD *)(a2 + 1676));
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    v16 = (float *)(a3 + 580);
    sub_1001F200(v11, (float *)(a3 + 580), (float *)(a3 + 580), v17, v20);
    (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v11,
      33570827,
      v15,
      v12);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v12, (int)&v13, 255, 255, 0, 1, -1.0);
    if ( v14 )
    {
      if ( a4 )
      {
        v4 = (float *)sub_10073730(*(_DWORD *)(a2 + 1676));
        v9 = *(_DWORD *)(a2 + 1676);
        v17 = v4;
        v5 = sub_10073710(v9);
        if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
          sub_100DAE60(a3);
        sub_1011BB20((int)v16, v5, (int)v17, 255, 0, 0, 1, 1.0);
      }
      return 0;
    }
  }
  if ( !v19 )
    return 1;
  v16 = (float *)sub_10073730(*(_DWORD *)(a3 + 1676));
  v17 = (float *)sub_10073710(*(_DWORD *)(a3 + 1676));
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v20 = (float *)(a2 + 580);
  sub_10023240(COERCE_FLOAT(v21), a3, (float *)(a2 + 580), (float *)(a2 + 580), v17, v16, 33570827, (int)v15, (int)v12);
  if ( !v14 )
    return 1;
  if ( !a4 )
    return 0;
  v7 = (float *)sub_10073730(*(_DWORD *)(a3 + 1676));
  v10 = *(_DWORD *)(a3 + 1676);
  v16 = v7;
  v8 = sub_10073710(v10);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  sub_1011BB20((int)v20, v8, (int)v16, 255, 0, 0, 1, 1.0);
  return 0;
}
