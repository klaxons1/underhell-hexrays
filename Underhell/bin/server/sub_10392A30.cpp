void __thiscall sub_10392A30(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // eax

  if ( a2 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 19 )
    {
      if ( !sub_100CF460(this)
        || (v3 = (_DWORD *)sub_100CF460(this), !sub_100D1400(v3))
        || (v4 = sub_100CF460(this), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 972))(v4))
        || (int)this[1170] < 2 )
      {
        if ( this[1170] == 1
          || (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 3) == 1 )
        {
          (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
            this,
            "TLK_ENEMY_DEAD",
            0,
            0,
            0,
            0);
        }
      }
    }
  }
}
