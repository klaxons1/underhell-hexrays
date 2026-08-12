int __thiscall sub_1024F3A0(void *this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // eax

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 844))(this);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 16))(v3, a2);
  v5 = result;
  if ( result )
  {
    v6 = (_DWORD *)sub_10229D00(32);
    if ( v6 )
      v7 = sub_10229D20(v6, (int)"Hotkey");
    else
      v7 = 0;
    return (*(int (__thiscall **)(void *, int, _DWORD *, _DWORD))(*(_DWORD *)this + 132))(this, v5, v7, 0.0);
  }
  return result;
}
