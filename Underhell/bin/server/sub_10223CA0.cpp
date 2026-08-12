int __thiscall sub_10223CA0(void *this, int a2)
{
  int v3; // eax

  v3 = sub_1041D110(a2);
  if ( v3 < 0 )
    return 0;
  else
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 896))(this, v3);
}
