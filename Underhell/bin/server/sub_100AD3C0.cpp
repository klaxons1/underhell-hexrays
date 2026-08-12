int *__userpurge sub_100AD3C0@<eax>(_DWORD *a1@<ecx>, int a2@<esi>, char *a3, char *Source)
{
  unsigned int v5; // eax
  int v6; // ecx
  int *result; // eax
  int v8; // ebx
  char *v9; // esi
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // eax
  char *v15; // eax
  int *v16; // edi
  _DWORD *v17; // esi
  char v18; // bl
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // edx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  const char *v29; // esi
  int v30; // eax
  int v31; // esi
  char v33[256]; // [esp+10h] [ebp-320h] BYREF
  char Destination[256]; // [esp+110h] [ebp-220h] BYREF
  char Src[128]; // [esp+210h] [ebp-120h] BYREF
  char v36[128]; // [esp+290h] [ebp-A0h] BYREF
  bool (__cdecl *v37[7])(int, int); // [esp+310h] [ebp-20h] BYREF
  _DWORD *v38; // [esp+32Ch] [ebp-4h]

  v5 = a1[16];
  v38 = a1;
  if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
  result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 212))(v6);
  v8 = (int)result;
  if ( result )
  {
    sub_10067CD0(v37);
    sub_10067DE0((int)v37, (void *)"concept", a3, 5.0);
    if ( Source )
    {
      memset(Src, 0, sizeof(Src));
      memset(v36, 0, sizeof(v36));
      sub_104299C0(Destination, Source, 0xFFu);
      v9 = Destination;
      do
      {
        v9 = sub_100654F0(v9, Src, 128, v36, 128, 0);
        if ( Src[0] && v36[0] )
          sub_10067DE0((int)v37, Src, v36, 5.0);
      }
      while ( v9 );
    }
    v10 = a1[16];
    if ( v10 == -1 || off_1061BE18[4 * (a1[16] & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (a1[16] & 0xFFF) + 1];
    (*(void (__thiscall **)(int, bool (__cdecl **)(int, int), int))(*(_DWORD *)v11 + 452))(v11, v37, a2);
    v12 = a1[16];
    if ( v12 == -1 || off_1061BE18[4 * (a1[16] & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (a1[16] & 0xFFF) + 1];
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 320))(v13) )
    {
      v14 = sub_1025FB50(1);
      if ( v14 )
        (*(void (__thiscall **)(int, bool (__cdecl **)(int, int)))(*(_DWORD *)v14 + 1540))(v14, v37);
    }
    v15 = (char *)sub_10184390(168);
    if ( v15 )
      v16 = (int *)sub_10065740(v15);
    else
      v16 = 0;
    v17 = v38;
    v18 = (*(int (__thiscall **)(int, bool (__cdecl **)(int, int), int *))(*(_DWORD *)v8 + 4))(v8, v37, v16);
    if ( *(_DWORD *)(dword_10694194 + 48) == 3 )
    {
      v19 = v17[16];
      if ( v19 == -1 || off_1061BE18[4 * (v17[16] & 0xFFF) + 2] != v19 >> 12 )
        v20 = 0;
      else
        v20 = off_1061BE18[4 * (v17[16] & 0xFFF) + 1];
      v21 = sub_100D7680(v20);
      v22 = off_1061BE18;
      if ( !v21
        || ((v23 = v17[16], v23 == -1) || off_1061BE18[4 * (v17[16] & 0xFFF) + 2] != v23 >> 12
          ? (v24 = 0)
          : (v24 = off_1061BE18[4 * (v17[16] & 0xFFF) + 1]),
            (*(_DWORD *)(v24 + 236) & 0x1000) == 0) )
      {
        v25 = v17[16];
        if ( v25 == -1 || off_1061BE18[4 * (v17[16] & 0xFFF) + 2] != v25 >> 12 )
          v26 = 0;
        else
          v26 = off_1061BE18[4 * (v17[16] & 0xFFF) + 1];
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 320))(v26) )
          goto LABEL_52;
        v22 = off_1061BE18;
      }
      v27 = v17[16];
      if ( v27 == -1 || v22[4 * (v17[16] & 0xFFF) + 2] != v27 >> 12 )
        v28 = 0;
      else
        v28 = v22[4 * (v17[16] & 0xFFF) + 1];
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 320))(v28) )
      {
        v29 = (const char *)(sub_100AD370(v17) + 4296);
      }
      else
      {
        v30 = sub_100AD370(v17);
        v29 = (const char *)sub_100D6390(v30);
      }
      if ( !v18 )
      {
        Warning("RESPONSERULES: %s spoke '%s'. Found no matching response.\n", v29, a3);
LABEL_56:
        if ( v16 )
        {
          sub_10068150(v16);
          sub_10184660(v16);
        }
        sub_10067DD0((int)v37);
        return 0;
      }
      sub_10065130((char *)v16, Destination, 0x100u);
      Warning("RESPONSERULES: %s spoke '%s'. Found response '%s'.\n", v29, a3, Destination);
    }
LABEL_52:
    if ( v18 )
    {
      sub_10065130((char *)v16, v33, 0x100u);
      if ( v33[0] )
      {
        if ( sub_10065200((int)v16) >= 100
          || (v31 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 100),
              v31 > sub_10065200((int)v16)) )
        {
          sub_10067DD0((int)v37);
          return v16;
        }
      }
    }
    goto LABEL_56;
  }
  return result;
}
