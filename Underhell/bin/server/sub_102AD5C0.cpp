int __thiscall sub_102AD5C0(int this)
{
  int v2; // edx
  int i; // esi
  int v4; // eax
  const char *v5; // eax
  _DWORD *v6; // eax
  char Buffer[64]; // [esp+Ch] [ebp-C0h] BYREF
  int v9[19]; // [esp+4Ch] [ebp-80h] BYREF
  _BYTE v10[8]; // [esp+98h] [ebp-34h] BYREF
  int v11; // [esp+A0h] [ebp-2Ch]
  int v12; // [esp+ACh] [ebp-20h]
  int v13; // [esp+B0h] [ebp-1Ch]
  int v14; // [esp+B8h] [ebp-14h] BYREF
  int v15; // [esp+BCh] [ebp-10h]
  int v16; // [esp+C0h] [ebp-Ch]
  int v17; // [esp+C4h] [ebp-8h]
  int v18; // [esp+C8h] [ebp-4h]

  sub_10072560(v9);
  sub_1006FF60(v9, *(_DWORD *)(this + 960));
  sub_10070FE0(v9, 400);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  sub_100727B0(0, &flt_106F1CA8, v9, &v14);
  v2 = v14;
  for ( i = 0; i < v17; ++i )
  {
    v4 = *(_DWORD *)(v2 + 4 * i);
    if ( v4 )
    {
      v5 = *(const char **)(v4 + 260);
      if ( !v5 )
        v5 = String;
      if ( *(_BYTE *)(this + 1080) )
      {
        sub_10429A00(Buffer, 0x40u, "%s_spore", (char)v5);
        v6 = sub_1012BF20(&dword_1069E3E0, 0, Buffer, 0, 0, 0, 0);
        if ( v6 && !*((_BYTE *)v6 + 800) )
        {
          v11 = 0;
          v12 = -1;
          v13 = 0;
          sub_10285150((int)v6, (int)v10);
        }
        v2 = v14;
      }
    }
  }
  v17 = 0;
  if ( v16 >= 0 )
  {
    if ( v2 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v2);
      v2 = 0;
      v14 = 0;
    }
    v15 = 0;
  }
  v18 = v2;
  if ( v16 >= 0 )
  {
    if ( v2 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v2);
      v14 = 0;
    }
    v15 = 0;
  }
  return sub_100725D0(v9);
}
