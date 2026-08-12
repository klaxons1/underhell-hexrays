int __thiscall sub_10249820(int *this, const char *a2)
{
  const char *v2; // edi
  int v4; // ebx
  int v5; // eax

  v2 = a2;
  if ( !a2 )
    v2 = Locale;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this[54] + 108))(this[54], v2);
  v4 = *this;
  if ( *v2 == 35 )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v2);
    v5 = (*(int (__thiscall **)(int *))(v4 + 876))(this);
  }
  else
  {
    v5 = (*(int (__thiscall **)(int *))(v4 + 880))(this);
  }
  (*(void (__thiscall **)(int *, int))(v4 + 824))(this, v5);
  (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  return (*(int (__thiscall **)(int *))(*this + 16))(this);
}
