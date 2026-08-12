int __thiscall sub_10142FC0(char *this)
{
  _DWORD *v2; // eax
  double v3; // st7
  char *v4; // esi
  void *v5; // eax
  float v7; // [esp+0h] [ebp-Ch]

  v2 = (_DWORD *)sub_100422D0();
  if ( v2 )
    v3 = sub_100138E0(v2);
  else
    v3 = (float)1.0;
  if ( *(float *)(dword_10439DC4 + 44) > 0.0 )
    v3 = -1.0;
  v7 = v3;
  v4 = this + 52;
  (*(void (__stdcall **)(char *, _DWORD))(*(_DWORD *)dword_10413190 + 20))(v4, LODWORD(v7));
  v5 = sub_100949D0();
  return (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v5 + 56))(v5, v4);
}
