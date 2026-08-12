void *__thiscall sub_100C9DB0(int *this, int a2, int a3)
{
  int v4; // edx
  wchar_t *v5; // eax
  void *result; // eax
  int v7; // esi
  float *v8; // eax

  word_10430CE8 = 0;
  v4 = *(_DWORD *)dword_1047CA78;
  dword_10430CE0 = (int)&word_10430CE8;
  if ( a2 )
    v5 = (wchar_t *)(*(int (__stdcall **)(int))(v4 + 8))(a2);
  else
    v5 = (wchar_t *)(*(int (__stdcall **)(int))(v4 + 8))(a3);
  dword_10430CE0 = (int)v5;
  if ( !v5 )
  {
    (*(void (__thiscall **)(int, int, __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      a3,
      &word_10430CE8,
      256);
    v5 = (wchar_t *)&word_10430CE8;
    dword_10430CE0 = (int)&word_10430CE8;
  }
  if ( sub_100C9C00(this, v5) )
  {
    (*(void (__thiscall **)(int *))(*this + 124))(this);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48, "HintMessageShow");
    sub_10248C80(1);
    result = (void *)sub_100422D0();
    v7 = (int)result;
    if ( result )
    {
      sub_101212D0((int)"Hud.Hint", 0.0, 0);
      result = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1016))(v7);
      if ( result )
      {
        v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1016))(v7);
        return sub_100B0E90(v8);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    return (void *)sub_10248C80("HintMessageHide");
  }
  return result;
}
