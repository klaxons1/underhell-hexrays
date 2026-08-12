double __thiscall sub_1027DBC0(_DWORD *this)
{
  int v2; // eax

  if ( *(_DWORD *)(dword_10698344 + 48)
    && sub_100D1940(this)
    && (v2 = sub_100D1940(this), (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 220))(v2) == 9) )
  {
    return 1.2;
  }
  else
  {
    return 0.30000001;
  }
}
