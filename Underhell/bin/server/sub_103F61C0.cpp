void __thiscall sub_103F61C0(int this, _DWORD *a2, int a3)
{
  _DWORD *v4; // esi

  v4 = (_DWORD *)sub_100D1940((_DWORD *)this);
  if ( !v4 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 320))(v4) )
    v4 = 0;
  if ( *a2 == 3005 )
  {
    sub_103F5FF0((_BYTE *)this, v4);
  }
  else if ( *a2 == 3900 )
  {
    *(_BYTE *)(this + 1392) = 1;
  }
  else
  {
    sub_100CFE60((_DWORD *)this, (int)a2, a3);
  }
}
