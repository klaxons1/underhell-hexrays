char __thiscall sub_10149C00(_DWORD *this, float a2)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v11; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h]

  v2 = sub_1005D660();
  v3 = v2;
  if ( v2 )
  {
    byte_10407398 = 1;
    if ( *(_BYTE *)(v2 + 1222) )
      v4 = sub_10129C10(off_103E6E3C, *(_DWORD *)(v2 + 1224));
    else
      v4 = sub_10116280();
    v5 = v4;
    if ( !v4 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 60))(v4) )
      v5 = sub_10116280();
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 16))(v5);
    v11 = sub_100422D0();
    v12 = 0;
    while ( 1 )
    {
      LOBYTE(v2) = sub_1005D6F0((_BYTE *)v3);
      if ( (_BYTE)v2 )
      {
        LOBYTE(v2) = (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 8) + 32))(v3 + 8);
        if ( !(_BYTE)v2 )
        {
          if ( !*(_BYTE *)(v3 + 1222) )
          {
            v6 = sub_10116280();
LABEL_13:
            if ( !v6 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 60))(v6) )
              v6 = sub_10116280();
            v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 16))(v6);
            LOBYTE(v2) = sub_10149960(this, v6, v12, (float *)v3, a2, v11, 0, 0, v7, v8);
            if ( (_BYTE)v2 )
              ++v12;
            goto LABEL_18;
          }
          v6 = sub_10129C10(off_103E6E3C, *(_DWORD *)(v3 + 1224));
          if ( v6 )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 60))(v6) )
              goto LABEL_13;
            LOBYTE(v2) = Warning("Error Texture in Monitor Drawing\n");
          }
          else
          {
            LOBYTE(v2) = Warning("NULL Texture in Monitor Drawing\n");
          }
        }
      }
LABEL_18:
      v3 = *(_DWORD *)(v3 + 1228);
      if ( !v3 )
      {
        byte_10407398 = 0;
        return v2;
      }
    }
  }
  return v2;
}
