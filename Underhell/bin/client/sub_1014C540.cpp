void __thiscall sub_1014C540(int this, int a2, unsigned __int8 a3)
{
  int v4; // eax
  char v5; // cl
  int v6; // eax

  if ( *(_DWORD *)(this + 12) )
  {
    if ( *(_DWORD *)(dword_1043C94C + 48) )
      Msg("CVoiceStatus::UpdateSpeakerStatus: ent %d talking = %d\n", a2, a3);
    if ( a2 == -1 )
    {
      *(_BYTE *)(this + 37) = a3 != 0;
      if ( a3 )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(
          dword_1041315C,
          "voice_modenable 1");
    }
    else if ( a2 == -2 )
    {
      *(_BYTE *)(this + 38) = a3 != 0;
    }
    else if ( (unsigned int)(a2 - 1) <= 0x10 )
    {
      v4 = a2 - 1;
      if ( a2 - 1 >= 0 )
      {
        v5 = v4 & 0x1F;
        if ( a3 )
        {
          v6 = 4 * (v4 >> 5);
          *(_DWORD *)(v6 + this + 16) |= 1 << v5;
          *(_DWORD *)(v6 + this + 24) |= 1 << v5;
        }
        else
        {
          *(_DWORD *)(this + 4 * (v4 >> 5) + 16) &= ~(1 << v5);
        }
      }
    }
  }
}
