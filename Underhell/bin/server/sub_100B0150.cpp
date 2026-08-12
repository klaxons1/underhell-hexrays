bool __thiscall sub_100B0150(int this, const char *ArgList, int a3, int a4)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // eax
  int v9; // ecx
  const char *v10; // edx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // esi
  int v18; // eax
  const char *v19; // ecx
  int v20; // eax
  int v21; // eax
  bool result; // al
  char v23; // al
  char *v24; // eax
  int v25; // eax
  int v26; // eax
  const char *v27; // edi
  int v28; // eax
  int v29; // eax
  const char *v30; // [esp+8h] [ebp-234h]
  const char *v31; // [esp+8h] [ebp-234h]
  char Buffer[256]; // [esp+1Ch] [ebp-220h] BYREF
  char Destination[256]; // [esp+11Ch] [ebp-120h] BYREF
  int v34[3]; // [esp+21Ch] [ebp-20h] BYREF
  int v35; // [esp+228h] [ebp-14h]
  float v36; // [esp+22Ch] [ebp-10h] BYREF
  float v37; // [esp+230h] [ebp-Ch]
  float v38; // [esp+234h] [ebp-8h]
  float v39; // [esp+238h] [ebp-4h]
  int v40; // [esp+248h] [ebp+Ch]
  bool v41; // [esp+24Bh] [ebp+Fh]

  sub_10065130((char *)a3, Destination, 0x100u);
  v39 = sub_10065910(a3);
  v41 = 0;
  v6 = sub_100651B0((_BYTE *)a3);
  v7 = *(_DWORD *)this;
  v35 = v6;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(v7 + 8))(this) || !*ArgList )
    goto LABEL_35;
  v8 = *(_DWORD *)(this + 64);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 2] != *(_DWORD *)(this + 64) >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 1];
  v10 = *(const char **)(v9 + 260);
  if ( !v10 )
    v10 = String;
  v11 = v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 2] != v8 >> 12
      ? 0
      : off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 1];
  v30 = v10;
  v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v11 + 24));
  DevMsg("SpeakDispatchResponse:  Entity ( %i/%s ) already speaking, forcing '%s'\n", v12, v30, ArgList);
  v13 = *(_DWORD *)(this + 64);
  if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 2] != v13 >> 12 )
    v14 = 0;
  else
    v14 = off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 1];
  sub_10227360(v14, 1, 0, 0);
  sub_1023C380((int)"AI_BaseNPC.SentenceStop", 0.0, 0);
  v15 = *(_DWORD *)(this + 64);
  if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 2] != v15 >> 12 )
    v16 = 0;
  else
    v16 = off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 1];
  if ( (unsigned __int8)sub_102273D0(v16, 1) )
  {
    v17 = *(_DWORD *)(this + 64);
    if ( v17 == -1 || off_1061BE18[4 * (v17 & 0xFFF) + 2] != v17 >> 12 )
      v18 = 0;
    else
      v18 = off_1061BE18[4 * (v17 & 0xFFF) + 1];
    v19 = *(const char **)(v18 + 260);
    if ( !v19 )
      v19 = String;
    if ( v17 == -1 || off_1061BE18[4 * (v17 & 0xFFF) + 2] != v17 >> 12 )
      v20 = 0;
    else
      v20 = off_1061BE18[4 * (v17 & 0xFFF) + 1];
    v31 = v19;
    v21 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v20 + 24));
    DevMsg(
      "SpeakDispatchResponse:  Entity ( %i/%s ) refusing to speak due to scene entity, tossing '%s'\n",
      v21,
      v31,
      ArgList);
    if ( a3 )
    {
      sub_10068150((int *)a3);
      sub_10184660(a3);
    }
    return 0;
  }
  else
  {
LABEL_35:
    switch ( *(_BYTE *)a3 )
    {
      case 1:
        if ( !(unsigned __int8)sub_100651E0((_WORD *)a3) )
        {
          v23 = sub_100AF1E0((_DWORD *)this, (int)Destination, v39);
          goto LABEL_38;
        }
        *(float *)&v40 = sub_100AD780((_DWORD *)this, (char *)a3);
        sub_100AD370((_DWORD *)this);
        sub_1023C380((int)Destination, 0.0, 0);
        v27 = *(const char **)(sub_100AD370((_DWORD *)this) + 260);
        if ( !v27 )
          v27 = String;
        v28 = sub_100AD370((_DWORD *)this);
        v29 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v28 + 24));
        DevMsg("SpeakDispatchResponse:  Entity ( %i/%s ) playing sound '%s'\n", v29, v27, Destination);
        sub_100AD840(this, *(float *)&v40, v39);
        v41 = 1;
        goto LABEL_40;
      case 2:
        v41 = (*(int (__thiscall **)(int, char *, float, _DWORD, int, _DWORD))(*(_DWORD *)this + 4))(
                this,
                Destination,
                COERCE_FLOAT(LODWORD(v39)),
                1.0,
                v35,
                0) != -1;
        goto LABEL_39;
      case 3:
        v23 = sub_100AF0B0((_DWORD *)this, (int)Destination, v39, a3, a4);
LABEL_38:
        v41 = v23;
LABEL_39:
        if ( v41 )
          goto LABEL_40;
        goto LABEL_59;
      case 5:
        if ( *(int *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) <= 0 )
          goto LABEL_59;
        v36 = 0.5;
        v37 = 0.5;
        v38 = 1.0;
        sub_100AD370((_DWORD *)this);
        sub_101117D0(&v36, v34);
        sub_1011CF30((int)v34, (int)Destination, 1, 1.5);
        v41 = 1;
LABEL_40:
        *(float *)(this + 60) = *(float *)(dword_106B31C8 + 12);
        if ( *(_DWORD *)(dword_106951B4 + 48)
          && *(int *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) > 0
          && *(_BYTE *)a3 != 5 )
        {
          v36 = 0.5;
          v37 = 0.5;
          v38 = 1.0;
          sub_100AD370((_DWORD *)this);
          sub_101117D0(&v36, v34);
          v24 = sub_1001E280(Buffer, "%s: %s", ArgList, Destination);
          sub_1011CF30((int)v34, (int)v24, 1, 1.5);
        }
        if ( !*(_BYTE *)(a3 + 164)
          || ((v25 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0
           || (v25 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
          && (v26 = *(_DWORD *)(v25 + 12)) != 0
          && (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 20))(v26) )
        {
          sub_100E2FF0(*(char **)(a3 + 160));
        }
        sub_100B0060(this, ArgList, a3, 1);
        result = v41;
        break;
      default:
LABEL_59:
        sub_10068150((int *)a3);
        sub_10184660(a3);
        result = v41;
        break;
    }
  }
  return result;
}
