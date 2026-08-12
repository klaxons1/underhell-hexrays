int __thiscall sub_1018A790(int *this)
{
  int v2; // eax
  int v3; // edi
  int *v4; // esi
  int v5; // edi
  int v6; // ebx
  char *v7; // eax
  int v8; // esi
  const char *v9; // eax
  char *v10; // eax
  int v11; // ecx
  int v12; // edi
  int *v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  void *v17; // edi
  _DWORD v19[18]; // [esp+8h] [ebp-5Ch] BYREF
  int v20; // [esp+50h] [ebp-14h]
  int *v21; // [esp+54h] [ebp-10h]
  int v22; // [esp+58h] [ebp-Ch]
  int v23; // [esp+5Ch] [ebp-8h]
  int v24; // [esp+60h] [ebp-4h]

  if ( sub_1042A310(32) )
    v23 = sub_1042A330("VoiceCommands");
  else
    v23 = 0;
  if ( dword_106B31D8 )
    v2 = dword_106B31D8 + 4;
  else
    v2 = 0;
  v3 = v23;
  if ( (unsigned __int8)sub_1042A380(v2, "scripts/voicecommands.txt", "GAME") )
  {
    v24 = sub_1042A2F0(v23);
    if ( v24 )
    {
      v4 = this + 9;
      v21 = v4;
      do
      {
        v5 = sub_1018A370(v4, v4[3]);
        v20 = v5;
        v22 = 0;
        v6 = sub_1042A2F0(v24);
        if ( v6 )
        {
          while ( 1 )
          {
            if ( ++v22 <= 9 )
            {
              v7 = (char *)sub_1042B460("concept", (int)String);
              v8 = sub_101890B0(v7);
              if ( v8 == -1 )
              {
                v9 = (const char *)sub_1042B460("concept", (int)String);
                Warning(
                  "Voicecommand script attempting to use unknown concept. Need to define new concepts in code. ( %s )\n",
                  v9);
              }
              v19[0] = v8;
              LOBYTE(v19[1]) = sub_1042AE10("show_subtitle", 0) > 0;
              BYTE1(v19[1]) = sub_1042AE10("distance_check_subtitle", 0) > 0;
              v10 = (char *)sub_1042B460("activity", (int)String);
              sub_104299C0((char *)&v19[1] + 2, v10, 0x40u);
              v11 = 5 * v5;
              v12 = *(_DWORD *)(*v21 + 20 * v5 + 12);
              v13 = (int *)(*v21 + 4 * v11);
              v14 = v13[1];
              if ( v12 + 1 > v14 )
                sub_10189750(v13, v12 - v14 + 1);
              ++v13[3];
              v15 = *v13;
              v16 = v13[3] - v12 - 1;
              v13[4] = *v13;
              if ( v16 > 0 )
                memcpy((void *)(v15 + 72 * v12 + 72), (const void *)(v15 + 72 * v12), 72 * v16);
              v17 = (void *)(*v13 + 72 * v12);
              if ( v17 )
                qmemcpy(v17, v19, 0x48u);
            }
            else
            {
              Warning("Trying to load more than 9 menu items in voicecommands.txt, extras ignored");
            }
            v6 = sub_1042A300(v6);
            if ( !v6 )
              break;
            v5 = v20;
          }
          v4 = v21;
        }
        v24 = sub_1042A300(v24);
      }
      while ( v24 );
      v3 = v23;
    }
  }
  return sub_1042B1A0(v3);
}
