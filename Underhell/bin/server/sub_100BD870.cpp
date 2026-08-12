void __thiscall sub_100BD870(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  unsigned __int16 v4; // ax
  _DWORD *v5; // eax

  if ( this[275] )
  {
    v2 = sub_100D7240(this);
    if ( v2 )
    {
      v3 = *(_DWORD *)dword_10700AC8;
      v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 160))(dword_106B31F0, v2);
      (*(void (__thiscall **)(int, _DWORD))(v3 + 164))(dword_10700AC8, v4);
      v5 = (_DWORD *)this[275];
      if ( v5[1] )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10700AC8 + 164))(
          dword_10700AC8,
          *(unsigned __int16 *)(*v5 + 344));
    }
  }
}
