int __thiscall sub_1016C750(_DWORD *this)
{
  int result; // eax
  int i; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  this[81] = 0;
  result = dword_106B31C8;
  for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
  {
    v4 = (_DWORD *)sub_1025FB50(i);
    v5 = v4;
    if ( v4
      && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 264))(v4)
      && (v5[854] & 8) == 0
      && sub_100D8840(v5) > 1 )
    {
      this[this[81]++ + 82] = v5;
    }
    result = dword_106B31C8;
  }
  return result;
}
