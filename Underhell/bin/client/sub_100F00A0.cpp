int __thiscall sub_100F00A0(_DWORD *this)
{
  int v1; // esi
  int v3; // edi
  int v4; // ebx
  void *v5; // eax
  int v6; // esi
  int v7; // ecx
  int i; // edi
  int v9; // eax
  int v10; // ecx
  void *v11; // eax
  int v12; // esi
  const char *v13; // eax
  _BYTE v15[18]; // [esp+20h] [ebp-44h] BYREF
  unsigned __int16 v16; // [esp+32h] [ebp-32h]
  int v17; // [esp+58h] [ebp-Ch]
  int v18; // [esp+5Ch] [ebp-8h] BYREF
  int v19; // [esp+60h] [ebp-4h] BYREF

  v1 = 0;
  sub_10230EB0(0, 32, 1);
  v3 = this[17];
  v17 = v3;
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = v3 + 16;
      v5 = (void *)sub_101F8D90(v3 + 16);
      sub_10230F20((int)&v19, v5);
      v6 = (unsigned __int16)v19;
      if ( (unsigned __int16)v19 + 1 > 0 )
        sub_100F8630(0, (unsigned __int16)v19 + 1, 0);
      if ( ++*(_DWORD *)(8 * v6) == 1 )
      {
        v7 = *(_DWORD *)(v3 != 0 ? v4 + 0x1778 : 6008);
        for ( i = 1; v7; i += v9 )
        {
          v9 = sub_100EB2C0(v7);
          v7 = *(_DWORD *)(v10 + 5980);
        }
        v11 = (void *)sub_101F8D90(v4);
        sub_10230F20((int)&v18, v11);
        v12 = (unsigned __int16)v18;
        if ( (unsigned __int16)v18 + 1 > 0 )
          sub_100F8630(0, (unsigned __int16)v18 + 1, 0);
        *(_DWORD *)(8 * v12 + 4) = i;
        v3 = v17;
      }
      v17 = *(_DWORD *)(v3 + 6708);
      if ( !v17 )
        break;
      v3 = v17;
    }
    v1 = 0;
  }
  Msg("Too many simultaneously active particle systems!\n");
  Msg("Name\t\t\t\t\tCount\t\tChild Count Per Instance\n");
  v17 = v16;
  if ( v16 )
  {
    do
    {
      v13 = (const char *)sub_10230460(v1);
      Msg("%30s\t\t%d\t\t%d\n", v13, *(_DWORD *)(8 * (unsigned __int16)v1), *(_DWORD *)(8 * (unsigned __int16)v1 + 4));
      ++v1;
    }
    while ( v1 < v17 );
  }
  sub_10230E30(v15);
  return 0;
}
