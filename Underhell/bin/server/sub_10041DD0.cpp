void __thiscall sub_10041DD0(_DWORD *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  char *v12; // eax
  char *i; // edi
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  const char *v23; // eax
  const char *v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // eax
  char String[256]; // [esp+1Ch] [ebp-1F0h] BYREF
  int v30[12]; // [esp+11Ch] [ebp-F0h] BYREF
  _BYTE v31[4]; // [esp+14Ch] [ebp-C0h] BYREF
  const char *v32; // [esp+150h] [ebp-BCh] BYREF
  int v33; // [esp+154h] [ebp-B8h]
  int v34; // [esp+158h] [ebp-B4h]
  int v35; // [esp+15Ch] [ebp-B0h]
  int v36[3]; // [esp+160h] [ebp-ACh] BYREF
  int v37[3]; // [esp+16Ch] [ebp-A0h] BYREF
  int v38[31]; // [esp+178h] [ebp-94h] BYREF
  _BYTE v39[4]; // [esp+1F4h] [ebp-18h] BYREF
  _BYTE v40[4]; // [esp+1F8h] [ebp-14h] BYREF
  _BYTE v41[4]; // [esp+1FCh] [ebp-10h] BYREF
  _BYTE v42[4]; // [esp+200h] [ebp-Ch] BYREF
  _BYTE v43[4]; // [esp+204h] [ebp-8h] BYREF
  int v44; // [esp+208h] [ebp-4h]

  if ( !this[634] )
  {
    if ( sub_1042A310(32) )
    {
      v2 = sub_1042A330(::String);
      v44 = v2;
    }
    else
    {
      v44 = 0;
      v2 = 0;
    }
    sub_1042DE40(1024, 0, 1);
    v3 = *(_DWORD *)dword_106B31F0;
    v4 = sub_100D7240(this);
    if ( (*(unsigned __int8 (__thiscall **)(int, int, int *))(v3 + 76))(dword_106B31F0, v4, v30) )
    {
      v5 = *(_DWORD *)dword_106B31F0;
      v6 = sub_100D7240(this);
      v7 = (char *)(*(int (__thiscall **)(int, int))(v5 + 12))(dword_106B31F0, v6);
      if ( (unsigned __int8)sub_1042BC60(v7, (int)v30, 0, 0) )
      {
        v8 = sub_1042ACB0("dynamic_interactions", 0);
        if ( v8 )
        {
          v9 = sub_1042A2F0(v8);
          if ( v9 )
          {
            do
            {
              sub_10022BD0(&v32);
              v10 = sub_1042A070(v9);
              v32 = *(const char **)sub_10162BE0(v39, v10);
              v11 = sub_1042B460("trigger", 0);
              if ( v11 && !sub_104291C0(v11, "auto_in_combat", 14) )
                v34 = 1;
              v12 = (char *)sub_1042B460("loop_break_trigger", 0);
              if ( v12 )
              {
                sub_104299C0(String, v12, 0x100u);
                for ( i = strtok(String, " "); i; i = strtok(0, " ") )
                {
                  if ( !sub_104291C0(i, "on_damage", 9) )
                    v35 |= 2u;
                  if ( !sub_104291C0(i, "on_flashlight_illum", 19) )
                    v35 |= 4u;
                }
              }
              v14 = (char *)sub_1042B460("origin_relative", (int)"0 0 0");
              sub_10264F10((int)v36, v14);
              v15 = (char *)sub_1042B460("angles_relative", 0);
              if ( v15 )
              {
                v33 |= 2u;
                sub_10264F10((int)v37, v15);
              }
              v16 = (char *)sub_1042B460("velocity_relative", 0);
              if ( v16 )
              {
                v33 |= 4u;
                sub_10264F10((int)v38, v16);
              }
              v17 = sub_1042B460("entry_sequence", 0);
              if ( v17 )
                v38[7] = *(_DWORD *)sub_10162BE0(v31, v17);
              v18 = sub_1042B460("entry_activity", 0);
              if ( v18 )
                v38[8] = sub_10008FB0(v18);
              v19 = sub_1042B460("sequence", 0);
              if ( v19 )
                v38[9] = *(_DWORD *)sub_10162BE0(v40, v19);
              v20 = sub_1042B460("activity", 0);
              if ( v20 )
                v38[10] = sub_10008FB0(v20);
              v21 = sub_1042B460("exit_sequence", 0);
              if ( v21 )
                v38[11] = *(_DWORD *)sub_10162BE0(v43, v21);
              v22 = sub_1042B460("exit_activity", 0);
              if ( v22 )
                v38[12] = sub_10008FB0(v22);
              sub_1042AE90("delay", 10.0);
              *(float *)&v38[3] = 10.0;
              sub_1042AE90("origin_max_delta", 36.0);
              *(float *)&v38[4] = 36.0;
              sub_1042AE90("loop_in_action", 0.0);
              v23 = (const char *)sub_1042B460("dont_teleport_at_end", 0);
              v24 = v23;
              if ( v23 )
              {
                if ( !_stricmp(v23, "me") || !_stricmp(v24, "both") )
                {
                  v33 |= 0x40u;
                }
                else if ( !_stricmp(v24, "them") || !_stricmp(v24, "both") )
                {
                  v33 |= 0x80u;
                }
              }
              v25 = sub_1042B460("needs_weapon", 0);
              v26 = v25;
              if ( v25 )
              {
                if ( sub_104291C0(v25, "ME", 2) )
                {
                  if ( sub_104291C0(v26, "THEM", 4) )
                  {
                    if ( !sub_104291C0(v26, "BOTH", 4) )
                      v33 |= 0x30u;
                  }
                  else
                  {
                    v33 |= 0x20u;
                  }
                }
                else
                {
                  v33 |= 0x10u;
                }
              }
              v27 = sub_1042B460("weapon_mine", 0);
              if ( v27 )
              {
                v33 |= 0x10u;
                v38[5] = *(_DWORD *)sub_10162BE0(v42, v27);
              }
              v28 = sub_1042B460("weapon_theirs", 0);
              if ( v28 )
              {
                v33 |= 0x20u;
                v38[6] = *(_DWORD *)sub_10162BE0(v41, v28);
              }
              sub_10041830(this, &v32);
              v9 = sub_1042A300(v9);
            }
            while ( v9 );
            v2 = v44;
          }
        }
      }
      sub_1042B1A0(v2);
    }
    if ( v30[2] >= 0 )
    {
      if ( v30[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v30[0]);
    }
  }
}
