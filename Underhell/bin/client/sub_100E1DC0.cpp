int __thiscall sub_100E1DC0(int *this)
{
  int v2; // eax
  int v3; // edi
  int *v4; // esi
  int v5; // edi
  int v6; // ebx
  char *v7; // eax
  char *v8; // eax
  int v9; // eax
  int v10; // edi
  int *v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  char *v15; // edi
  int v16; // eax
  char Destination[512]; // [esp+8h] [ebp-214h] BYREF
  int v19; // [esp+208h] [ebp-14h]
  int *v20; // [esp+20Ch] [ebp-10h]
  int v21; // [esp+210h] [ebp-Ch]
  int v22; // [esp+214h] [ebp-8h]
  int v23; // [esp+218h] [ebp-4h]

  if ( sub_10229D00(32) )
    v22 = sub_10229D20("VoiceCommands");
  else
    v22 = 0;
  if ( dword_10413188 )
    v2 = dword_10413188 + 4;
  else
    v2 = 0;
  v3 = v22;
  if ( (unsigned __int8)sub_10229D70(v2, "scripts/voicecommands.txt", "GAME") )
  {
    v23 = sub_10229C90(v22);
    if ( v23 )
    {
      v4 = this + 3;
      v20 = v4;
      do
      {
        v5 = sub_100E1D40(v4, v4[3]);
        v19 = v5;
        v21 = 0;
        v6 = sub_10229C90(v23);
        if ( v6 )
        {
          while ( 1 )
          {
            if ( ++v21 <= 9 )
            {
              v7 = (char *)sub_1022B4C0("subtitle", (int)Locale);
              sub_102282F0(Destination, v7, 0x100u);
              v8 = (char *)sub_1022B4C0("menu_label", (int)Locale);
              sub_102282F0(&Destination[256], v8, 0x100u);
              v9 = 5 * v5;
              v10 = *(_DWORD *)(*v4 + 20 * v5 + 12);
              v11 = (int *)(*v4 + 4 * v9);
              v12 = v11[1];
              if ( v10 + 1 > v12 )
                sub_100E1C50(v11, v10 - v12 + 1);
              ++v11[3];
              v13 = *v11;
              v14 = v11[3] - v10 - 1;
              v11[4] = *v11;
              if ( v14 > 0 )
                memcpy((void *)((v10 << 9) + v13 + 512), (const void *)((v10 << 9) + v13), v14 << 9);
              v15 = (char *)(*v11 + (v10 << 9));
              if ( v15 )
                qmemcpy(v15, Destination, 0x200u);
            }
            else
            {
              Warning("Trying to load more than 9 menu items in voicecommands.txt, extras ignored");
            }
            v16 = sub_1021F0F0(v6);
            v4 = v20;
            v6 = v16;
            if ( !v16 )
              break;
            v5 = v19;
          }
        }
        v23 = sub_1021F0F0(v23);
      }
      while ( v23 );
      v3 = v22;
    }
  }
  return sub_1022AF00(v3);
}
