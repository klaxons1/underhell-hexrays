int __thiscall sub_10285960(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // ebp
  int result; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v7; // esi
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  int v11; // esi
  int v12; // eax

  v3 = this + 2;
  result = sub_10237CC0(this + 2);
  if ( a2 != result )
  {
    if ( a3 && sub_10237CC0(v3) )
    {
      v5 = (_DWORD *)sub_10229D00(32);
      if ( v5 )
        v6 = sub_1022B1A0(v5, (int)"SetAsCurrentDefaultButton", "state", 0);
      else
        v6 = 0;
      v7 = dword_1047CA74;
      v8 = sub_10237CC0(v3);
      (*(void (__thiscall **)(int, int, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v7 + 80))(v7, v8, v6, 0, 0.0);
    }
    result = sub_10237CE0(v3, a2);
    if ( a3 )
    {
      result = sub_10237CC0(v3);
      if ( result )
      {
        v9 = (_DWORD *)sub_10229D00(32);
        if ( v9 )
          v10 = sub_1022B1A0(v9, (int)"SetAsCurrentDefaultButton", "state", 1);
        else
          v10 = 0;
        v11 = dword_1047CA74;
        v12 = sub_10237CC0(v3);
        return (*(int (__thiscall **)(int, int, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v11 + 80))(v11, v12, v10, 0, 0.0);
      }
    }
  }
  return result;
}
