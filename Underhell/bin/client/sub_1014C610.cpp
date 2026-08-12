void *__thiscall sub_1014C610(char *this, char a2)
{
  void *result; // eax
  int v3; // esi
  int v4; // eax
  unsigned int v5; // eax
  int v6; // edi
  unsigned int v7; // ebx
  char Destination[2048]; // [esp+0h] [ebp-B10h] BYREF
  char Source[512]; // [esp+800h] [ebp-310h] BYREF
  char Buffer[124]; // [esp+A00h] [ebp-110h] BYREF
  char v11[36]; // [esp+A7Ch] [ebp-94h] BYREF
  char v12[96]; // [esp+AA0h] [ebp-70h] BYREF
  char ArgList[4]; // [esp+B00h] [ebp-10h]
  int v14; // [esp+B04h] [ebp-Ch]
  char *v15; // [esp+B08h] [ebp-8h]
  char v16; // [esp+B0Fh] [ebp-1h]

  v15 = this;
  if ( byte_10413158 )
  {
    v3 = 0;
    v4 = *(_DWORD *)(dword_1043C904 + 48) != 0;
    if ( a2 || *((_DWORD *)this + 2) != v4 )
    {
      *((_DWORD *)this + 2) = v4;
      sub_10228370(Buffer, 0x100u, "VModEnable %d", v4);
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, Buffer, 1);
      if ( *(_DWORD *)(dword_1043C94C + 48) )
        Msg("CVoiceStatus::UpdateServerState: Sending '%s'\n", Buffer);
    }
    sub_102282F0(Destination, "vban", 0x800u);
    v5 = 0;
    v16 = 0;
    v14 = 0;
    *(_DWORD *)ArgList = 0;
    v6 = 1;
    do
    {
      if ( v3 >= 17 )
        break;
      v7 = v5 + 1;
      if ( (*(unsigned __int8 (__thiscall **)(int, unsigned int, char *))(*(_DWORD *)dword_1041315C + 32))(
             dword_1041315C,
             v5 + 1,
             v11) )
      {
        if ( sub_1014C280(v15 + 40, (int)v12) )
          *(_DWORD *)ArgList |= v6;
        if ( ((1 << (v3 & 0x1F)) & *(_DWORD *)&v15[4 * (v3 >> 5) + 28]) != 0 )
          v14 |= v6;
      }
      ++v3;
      v5 = v7;
      v6 = __ROL4__(v6, 1);
    }
    while ( v7 < 0x20 );
    if ( v14 != *(_DWORD *)ArgList )
      v16 = 1;
    sub_10228370(Source, 0x200u, " %x", ArgList[0]);
    sub_10228100((int)Destination, Source, 2048, -1);
    if ( v16 || a2 )
    {
      if ( *(_DWORD *)(dword_1043C94C + 48) )
        Msg("CVoiceStatus::UpdateServerState: Sending '%s'\n", Destination);
      (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, Destination, 0);
    }
    else if ( *(_DWORD *)(dword_1043C94C + 48) )
    {
      Msg("CVoiceStatus::UpdateServerState: no change\n");
      result = off_103DC81C;
      *((float *)v15 + 1) = *((float *)off_103DC81C + 3);
      return result;
    }
    result = off_103DC81C;
    *((float *)v15 + 1) = *((float *)off_103DC81C + 3);
  }
  else
  {
    result = (void *)dword_1043C94C;
    if ( *(_DWORD *)(dword_1043C94C + 48) )
      return (void *)Msg("CVoiceStatus::UpdateServerState: g_bLevelInitialized\n");
  }
  return result;
}
