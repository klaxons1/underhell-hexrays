int __thiscall sub_1016C090(_DWORD *this)
{
  int result; // eax
  int v2; // esi
  int v4; // esi

  result = dword_106B31C8;
  v2 = *(_DWORD *)(dword_106B31C8 + 24);
  if ( this[13] <= v2 )
  {
    this[13] = v2 + (int)(6.0 / *(float *)(dword_106B31C8 + 28) + 0.5);
    v4 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31F8 + 24))(
           dword_106B31F8,
           "hltv_message",
           1);
    if ( v4 )
    {
      (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v4 + 48))(
        v4,
        "text",
        "Please wait for broadcast to start ...");
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[4] + 40))(this[4], v4);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F8 + 40))(dword_106B31F8, v4);
    }
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, 1);
  }
  return result;
}
