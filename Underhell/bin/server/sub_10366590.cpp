char *__thiscall sub_10366590(int this)
{
  int v2; // eax
  int v3; // eax

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 1364))(this) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1364))(this);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2);
  }
  sub_10024230((char *)this, 25);
  v3 = *(_DWORD *)(this + 2372);
  if ( v3 == 34 || v3 == 35 || v3 == 36 )
    return sub_10024230((char *)this, 76);
  else
    return sub_10024290((char *)this, 76);
}
