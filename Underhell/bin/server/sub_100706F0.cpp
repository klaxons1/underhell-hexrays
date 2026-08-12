char *__cdecl sub_100706F0(int *a1)
{
  char *result; // eax
  char *v2; // edi
  unsigned int v3; // esi
  float *v4; // eax
  bool v5; // cc
  double v6; // st7
  const char *v7; // eax
  char *v8; // edi
  _DWORD v9[4]; // [esp+8h] [ebp-44h] BYREF
  __int16 v10; // [esp+18h] [ebp-34h]
  int v11; // [esp+1Ch] [ebp-30h]
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  int v14; // [esp+28h] [ebp-24h]
  int v15; // [esp+30h] [ebp-1Ch]
  int v16; // [esp+34h] [ebp-18h]
  int v17; // [esp+38h] [ebp-14h]
  _BYTE v18[12]; // [esp+40h] [ebp-Ch] BYREF

  result = (char *)sub_10153490();
  v2 = result;
  v3 = 0;
  if ( result )
  {
    result = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( *a1 >= 2 )
      {
        v9[0] = "ai_drop_hint";
        v4 = (float *)(*(int (__thiscall **)(char *, _BYTE *))(*(_DWORD *)v2 + 504))(v2, v18);
        v5 = *a1 <= 1;
        *(float *)&v9[1] = *v4;
        *(float *)&v9[2] = v4[1];
        v6 = v4[2];
        v7 = String;
        *(float *)&v9[3] = v6;
        if ( !v5 )
          v7 = (const char *)a1[259];
        v10 = atoi(v7);
        v11 = -1;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 2;
        v16 = 1;
        v17 = 3;
        result = sub_10070220(v9, 0);
        v8 = result;
        if ( result )
        {
          (*(void (__thiscall **)(char *))(*(_DWORD *)result + 136))(result);
          result = (char *)(*(int (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v8 + 128))(
                             v8,
                             "nodeFOV",
                             "360");
          *((_DWORD *)v8 + 59) |= 5u;
        }
      }
      else
      {
        Msg("Invalid hint type specified. Format: ai_drop_hint <hint type>\nValid hint types:\n");
        do
        {
          result = (char *)Msg("%d : %s\n", dword_10607330[v3], (&off_10607334)[v3]);
          v3 += 2;
        }
        while ( v3 < 52 );
      }
    }
  }
  return result;
}
