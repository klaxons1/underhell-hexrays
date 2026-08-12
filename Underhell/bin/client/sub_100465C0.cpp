char __thiscall sub_100465C0(int this, int a2)
{
  int v2; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  double v7; // st7
  float *v8; // ebx
  float *v9; // eax
  double v10; // st6
  double v11; // st5
  double v12; // st3
  float *v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  char result; // al
  float v21[3]; // [esp+28h] [ebp-14h] BYREF
  float v22; // [esp+34h] [ebp-8h]
  bool v23; // [esp+3Bh] [ebp-1h]

  v2 = a2;
  if ( !a2 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 48))(dword_1041315C);
    if ( dword_10407388 )
      v4 = dword_1040738C;
    if ( v4 == *(_DWORD *)(this + 72) )
    {
      dword_10407394 = this - 8;
      v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "snd_soundmixer");
      sub_10229150(v5);
    }
  }
  v23 = *(_BYTE *)(this + 4681) != *(_BYTE *)(this + 4680);
  v6 = this - 8;
  if ( dword_10407394 == this - 8 )
  {
    if ( *(_BYTE *)(v6 + 1109) != 1 )
    {
      *(_BYTE *)(v6 + 1109) = 1;
      sub_10039160((void *)(this - 8), (_DWORD *)(v6 + 20));
    }
  }
  else
  {
    if ( *(_BYTE *)(v6 + 1109) )
    {
      *(_BYTE *)(v6 + 1109) = 0;
      sub_10039160((void *)(this - 8), (_DWORD *)(v6 + 20));
    }
    v7 = *(float *)(this + 96) - *(float *)(this + 100);
    v22 = v7;
    if ( v7 > 0.0 && (*(_DWORD *)(this + 104) & 8) == 0 && !v23 )
    {
      v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 340))(this - 8);
      v9 = (float *)sub_10034470((char *)(this - 8));
      v10 = v9[1] - v8[1];
      v11 = v9[2] - v8[2];
      v12 = 1.0 / v22;
      v21[0] = (*v9 - *v8) * v12;
      v21[1] = v10 * v12;
      v21[2] = v12 * v11;
      sub_100399E0(this - 8, v21);
      v2 = a2;
    }
  }
  sub_1002F9F0(this, v2);
  if ( dword_10407394 == this - 8 )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v21);
    if ( !v2 )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 1064))(this - 8, v21);
      *(float *)(this + 4304) = *((float *)sub_10034A00((char *)(this - 8)) + 2);
    }
    sub_10034B10((float *)(this - 8), v21);
    if ( !*(_BYTE *)(this + 4108) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 844))(this - 8) == 2 )
      {
        v13 = (float *)sub_101356D0();
        *(float *)(this + 4088) = *v13;
        *(float *)(this + 4092) = v13[1];
        *(float *)(this + 4096) = v13[2];
        *(float *)(this + 4100) = *((float *)off_103DC81C + 3);
        *(float *)(this + 4104) = RandomFloat(*(float *)(dword_1040756C + 44), *(float *)(dword_104075B4 + 44));
        *(float *)(this + 4676) = RandomFloat(-30.0, 20.0);
        *(_BYTE *)(this + 4673) = 0;
        v14 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
                dword_104131A8,
                "show_freezepanel",
                0);
        if ( v14 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 848))(this - 8) )
          {
            v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 848))(this - 8);
            v16 = (*(int (__thiscall **)(int))(*(_DWORD *)(v15 + 8) + 36))(v15 + 8);
          }
          else
          {
            v16 = 0;
          }
          (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v14 + 40))(v14, "killer", v16);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, v14);
        }
        v17 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "snd_soundmixer");
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(v17 + 24) + 8))(v17 + 24, "FreezeCam_Only");
        goto LABEL_31;
      }
      if ( !*(_BYTE *)(this + 4108) )
        goto LABEL_31;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 844))(this - 8) != 2 )
    {
      v18 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
              dword_104131A8,
              "hide_freezepanel",
              0);
      if ( v18 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, v18);
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10439968 + 124))(0.0);
      v19 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "snd_soundmixer");
      sub_10229150(v19);
    }
  }
LABEL_31:
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 312))(dword_1041315C) || v23 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 376))(this - 8);
  result = *(_BYTE *)(this + 4132);
  if ( result != *(_BYTE *)(this + 3440) )
  {
    *(_BYTE *)(this + 3440) = result;
    if ( dword_104376B8 )
    {
      HIBYTE(a2) = result;
      return (*(int (__thiscall **)(int, int, char *))(*(_DWORD *)dword_104376B8 + 64))(
               dword_104376B8,
               this + 3436,
               (char *)&a2 + 3);
    }
  }
  return result;
}
