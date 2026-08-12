int __thiscall sub_1026EC80(int this)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int *v5; // edi
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  int v9; // ebx
  int *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  char *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // [esp-10h] [ebp-28h]
  int v22; // [esp-Ch] [ebp-24h]
  int v23; // [esp+Ch] [ebp-Ch]
  _DWORD *v24; // [esp+Ch] [ebp-Ch]
  int v26; // [esp+14h] [ebp-4h]

  if ( sub_1042A310(32) )
  {
    v1 = sub_1042A330(String);
    v26 = v1;
  }
  else
  {
    v26 = 0;
    v1 = 0;
  }
  v2 = *(_DWORD *)dword_106B31F0;
  v3 = *(_DWORD *)dword_106B31F0;
  v22 = sub_100D7240(*(void **)(this + 44));
  v4 = (*(int (__thiscall **)(int))(v2 + 72))(dword_106B31F0);
  v5 = (int *)this;
  v21 = v4;
  v6 = sub_100D7240(*(void **)(this + 44));
  v7 = (char *)(*(int (__thiscall **)(int, int, int))(v3 + 12))(dword_106B31F0, v6, v21);
  if ( (unsigned __int8)sub_1042BFB0(v7, v22, 0, 0) )
  {
    v8 = sub_1042ACB0("vehicle_entry", 0);
    if ( v8 )
    {
      v9 = sub_1042A2F0(v8);
      if ( v9 )
      {
        v10 = (int *)(this + 64);
        do
        {
          v11 = *(_DWORD *)(this + 76);
          v12 = *(_DWORD *)(this + 68);
          if ( v11 + 1 > v12 )
            sub_1026A8C0(v10, v11 - v12 + 1);
          ++*(_DWORD *)(this + 76);
          v13 = *v10;
          v14 = *(_DWORD *)(this + 76) - v11 - 1;
          *(_DWORD *)(this + 80) = *(_DWORD *)(this + 64);
          if ( v14 > 0 )
            memcpy((void *)(132 * v11 + v13 + 132), (const void *)(132 * v11 + v13), 132 * v14);
          v15 = 132 * v11;
          v23 = v15 + *v10;
          v16 = (char *)sub_1042A070(v9);
          sub_104299C0((char *)(v23 + 4), v16, 0x80u);
          v24 = (_DWORD *)(v15 + *v10);
          *v24 = sub_1042AE10(0, 0);
          v9 = sub_1042A300(v9);
        }
        while ( v9 );
        v1 = v26;
        v5 = (int *)this;
      }
    }
    v17 = sub_1042ACB0("vehicle_exit", 0);
    if ( v17 )
      sub_1026DD00(v5, v17, 0);
    v18 = sub_1042ACB0("vehicle_escape_exit", 0);
    if ( v18 )
      sub_1026DD00(v5, v18, 1);
    v19 = sub_1042ACB0("vehicle_npc_passengers", 0);
    if ( v19 )
      sub_1026E9C0(v5, v19);
  }
  sub_1042B1A0(v1);
  return sub_1026CBE0((int)v5);
}
