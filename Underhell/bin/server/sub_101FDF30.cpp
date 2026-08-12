void __thiscall sub_101FDF30(_BYTE *this)
{
  bool v1; // c0
  bool v2; // c3
  _BYTE *v3; // ebx
  const char *v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  char *v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  const char *v16; // eax
  int v17; // eax
  char Buffer[512]; // [esp+4h] [ebp-204h] BYREF
  _BYTE *v19; // [esp+204h] [ebp-4h]

  v1 = *(float *)(dword_106B31C8 + 12) > 5.0;
  v2 = 5.0 == *(float *)(dword_106B31C8 + 12);
  v3 = this;
  v19 = this;
  if ( (v1 || v2) && !this[12] && !this[13] )
  {
    this[13] = 1;
    v4 = *(const char **)(dword_106B31C8 + 60);
    if ( !v4 )
      v4 = String;
    sub_10429A00(Buffer, 0x200u, "maps/%s.txt", (char)v4);
    if ( sub_1042A310(32) )
      v5 = sub_1042A330("MapCameras");
    else
      v5 = 0;
    if ( dword_106B31D8 )
      v6 = dword_106B31D8 + 4;
    else
      v6 = 0;
    if ( (unsigned __int8)sub_1042A380(v6, Buffer, "MOD") )
    {
      Warning("Devshots: Loading point_devshot_camera positions from %s. \n", Buffer);
      v7 = sub_1042A2F0(v5);
      if ( v7 )
      {
        do
        {
          v8 = sub_1042A070(v7);
          v9 = (char *)sub_101811E0("point_devshot_camera", -1);
          (*(void (__thiscall **)(char *, const char *, int))(*(_DWORD *)v9 + 128))(v9, "cameraname", v8);
          v10 = *(_DWORD *)v9;
          v11 = sub_1042B460("origin", (int)"0 0 0");
          (*(void (__thiscall **)(char *, const char *, int))(v10 + 128))(v9, "origin", v11);
          v12 = *(_DWORD *)v9;
          v13 = sub_1042B460("angles", (int)"0 0 0");
          (*(void (__thiscall **)(char *, const char *, int))(v12 + 128))(v9, "angles", v13);
          v14 = *(_DWORD *)v9;
          v15 = sub_1042B460("FOV", (int)"75");
          (*(void (__thiscall **)(char *, const char *, int))(v14 + 128))(v9, "FOV", v15);
          sub_10260750(v9);
          (*(void (__thiscall **)(char *))(*(_DWORD *)v9 + 136))(v9);
          v7 = sub_1042A300(v7);
        }
        while ( v7 );
        v3 = v19;
      }
    }
    if ( !dword_106C13C0 )
    {
      v16 = *(const char **)(dword_106B31C8 + 60);
      if ( !v16 )
        v16 = String;
      Warning("Devshots: No point_devshot_camera in %s. Moving to next map.\n", v16);
      v17 = sub_101FDE50();
      if ( v17 )
      {
        (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
          dword_106B31D0,
          *(_DWORD *)(v17 + 24),
          "devshots_nextmap");
        v3[12] = 1;
      }
    }
  }
}
