void *__thiscall sub_1014CB20(char *this, int a2, int a3)
{
  void *result; // eax
  bool v5; // al
  bool v6; // al
  _BYTE v7[36]; // [esp+Ch] [ebp-84h] BYREF
  _BYTE v8[96]; // [esp+30h] [ebp-60h] BYREF

  if ( *(_DWORD *)(dword_1043C94C + 48) )
    Msg("CVoiceStatus::SetPlayerBlockedState part 1\n");
  result = (void *)(*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)dword_1041315C + 32))(dword_1041315C, a2, v7);
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(dword_1043C94C + 48) )
      Msg("CVoiceStatus::SetPlayerBlockedState part 2\n");
    if ( *(_DWORD *)(dword_1043C94C + 48) )
    {
      v5 = sub_1014C280(this + 40, (int)v8);
      Msg("CVoiceStatus::SetPlayerBlockedState: setting player %d ban to %d\n", a2, !v5);
    }
    v6 = sub_1014C280(this + 40, (int)v8);
    sub_1014C2A0(this + 40, v8, !v6);
    return sub_1014C610(this, 0);
  }
  return result;
}
