int __thiscall sub_10160E40(char *this)
{
  const char *v1; // edi
  char *v2; // esi
  const char *v3; // eax
  int result; // eax
  char *v5; // eax
  const char *v6; // esi
  int v7; // eax
  _DWORD v8[4]; // [esp+8h] [ebp-10h] BYREF

  v1 = *(const char **)(dword_106B31C8 + 60);
  if ( !v1 )
    v1 = String;
  v2 = this + 2436;
  v3 = (const char *)sub_10430F10(this + 2436);
  result = _stricmp(v3, v1);
  if ( result )
  {
    sub_10431220(v2);
    v5 = *(char **)(dword_106B31C8 + 60);
    if ( !v5 )
      v5 = (char *)String;
    sub_10431100(v5);
    v6 = *(const char **)(dword_106B31C8 + 60);
    if ( !v6 )
      v6 = String;
    v7 = sub_10430F10(v8);
    (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)off_10627F88 + 24))(off_10627F88, v7, v6);
    result = (**(int (__thiscall ***)(int))off_10627F88)(off_10627F88);
    if ( (_BYTE)result )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 180))(off_10627F88) )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)off_10627F88 + 164))(off_10627F88, 0);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 200))(off_10627F88);
      if ( (_BYTE)result )
        result = (*(int (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 168))(off_10627F88);
    }
    if ( v8[2] >= 0 )
    {
      result = v8[0];
      if ( v8[0] )
        return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v8[0]);
    }
  }
  return result;
}
