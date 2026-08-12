int __thiscall sub_1018A5D0(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax

  v3 = this[112];
  if ( v3 == -1 || v3 != a2 )
  {
    v5 = this[113];
    if ( v5 == -1 || v5 != a2 )
    {
      return sub_10236C80(a2);
    }
    else
    {
      (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_104453A8 + 8))(dword_104453A8, "scores", 1);
      if ( sub_10229D00(32) )
        v6 = sub_1022B1A0((int)"PollHideCode", "code", a2);
      else
        v6 = 0;
      return (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_104453A8 + 24))(
               dword_104453A8,
               "scores",
               v6);
    }
  }
  else
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "jointeam 0");
    return (*(int (__thiscall **)(_DWORD *))(*this + 860))(this);
  }
}
