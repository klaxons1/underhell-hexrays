void __thiscall sub_10392900(int *this, _DWORD *a2)
{
  int *v2; // esi
  int v3; // eax
  int v4; // eax

  v2 = this;
  if ( *a2 == 78 )
  {
    if ( sub_100CF460(this) )
    {
      v3 = sub_100CF460(v2);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 972))(v3) )
      {
        sub_10027CD0(v2, 0);
        return;
      }
    }
    if ( v2[1170] >= 2
      && (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 3) == 1 )
    {
      (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*v2 + 2344))(
        v2,
        "TLK_ATTACKING",
        0,
        0,
        0,
        0);
    }
    v4 = sub_10039AE0(v2, 367, 0);
    if ( v4 != -1 && sub_100C4E90(v2, v4) )
    {
      sub_10043E90(v2, 1);
      return;
    }
    this = v2;
  }
  sub_10094F60(this, a2);
}
