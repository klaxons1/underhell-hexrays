int __thiscall sub_10372210(void *this)
{
  int v2; // eax
  int v3; // eax

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this)
    && (v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this),
        (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 288))(v2)) != 0) )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1096))(v3);
  }
  else
  {
    return 0;
  }
}
