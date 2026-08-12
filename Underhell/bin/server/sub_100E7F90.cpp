int __usercall sub_100E7F90@<eax>(int a1@<edi>, int a2)
{
  int result; // eax
  int v3; // ebx
  const char *v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  char *v8; // eax
  int v9; // eax
  int i; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // esi
  int v15; // edi
  int v16; // esi
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _BYTE v22[256]; // [esp+4h] [ebp-19Ch] BYREF
  _DWORD v23[2]; // [esp+104h] [ebp-9Ch] BYREF
  char v24[36]; // [esp+10Ch] [ebp-94h] BYREF
  char v25[20]; // [esp+130h] [ebp-70h] BYREF
  char v26[20]; // [esp+144h] [ebp-5Ch] BYREF
  int v27; // [esp+158h] [ebp-48h]
  char v28[48]; // [esp+164h] [ebp-3Ch] BYREF
  char Destination[4]; // [esp+194h] [ebp-Ch] BYREF
  int v30; // [esp+198h] [ebp-8h]
  int j; // [esp+19Ch] [ebp-4h]

  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, a2);
  v3 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 36))(dword_106B31F0, result);
    if ( result == 3 )
    {
      v4 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 12))(dword_106B31F0, v3);
      if ( !sub_100E16C0(&off_1060F368, (int)v4) )
      {
        sub_10429D00((int)v4, Destination, 8u);
        if ( !sub_104295F0(Destination, "mdl") )
        {
          if ( Destination[0] )
            return Warning("Late precache of %s (file missing?)\n", v4);
          else
            return Warning("Precache of %s ambigious (no extension specified)\n", v4);
        }
        DevMsg(2, "Late precache of %s, need to rebuild modelsounds.cache\n", v4);
      }
      v5 = sub_100E7320((int)&off_1060F368, (int)v4);
      if ( v5 )
        sub_101854E0(v5);
      if ( sub_1042A310(32) )
        v6 = sub_1042A330(String);
      else
        v6 = 0;
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 72))(dword_106B31F0, v3);
      v8 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31F0 + 12))(dword_106B31F0, v3, v7);
      if ( (unsigned __int8)sub_1042BFB0(v8, 0, 0, a1) )
      {
        v9 = sub_1042ACB0("Particles", 0);
        if ( v9 )
        {
          for ( i = sub_1042A2F0(v9); i; i = sub_1042A300(i) )
          {
            v11 = sub_1042B460("name", (int)String);
            sub_101543E0(v11);
          }
        }
      }
      if ( v6 )
        sub_1042B1A0(v6);
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31F0 + 112))(dword_106B31F0);
      sub_10246610(v12, v3);
      if ( v23[0] )
      {
        sub_100BADE0((int)v23);
        v13 = sub_10245270(v23);
        v14 = 0;
        v30 = v13;
        for ( j = 0; v14 < v13; j = v14 )
        {
          v15 = sub_10245550(v14);
          if ( *(int *)(v15 + 24) > 0 )
          {
            v16 = 0;
            v17 = *(_DWORD *)(v15 + 24);
            do
            {
              v18 = v16 + *(_DWORD *)(v15 + 28);
              v19 = *(_DWORD *)(v18 + v15 + 8);
              v20 = v15 + v18;
              if ( ((v19 & 0x400) == 0 || (v19 & 0x10) != 0) && *(_DWORD *)(v20 + 4) == 32 )
              {
                sub_1025F620(v22, v20 + 12, 32);
                sub_101543E0(v22);
              }
              v16 += 80;
              --v17;
            }
            while ( v17 );
            v14 = j;
            v13 = v30;
          }
          ++v14;
        }
      }
      nullsub_4(v23);
      if ( v27 )
        sub_10184660(v27);
      sub_101C7570(v28);
      sub_101C8650(v28);
      sub_102375F0(v26);
      sub_102375F0(v25);
      return sub_102375F0(v24);
    }
  }
  return result;
}
