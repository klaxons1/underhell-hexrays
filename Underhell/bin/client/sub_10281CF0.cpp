char __thiscall sub_10281CF0(void *this)
{
  char result; // al
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // ecx

  result = sub_100E1B90();
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 114) + 28))(*((_DWORD *)this + 114));
    v3 = *(_DWORD **)this;
    v4 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 114) + 8))(*((_DWORD *)this + 114));
    ((void (__thiscall *)(void *, int))v3[257])(this, v4);
    sub_1022AF00(*((void **)this + 127));
    v5 = *((_DWORD *)this + 119);
    *((_DWORD *)this + 127) = 0;
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 200))(v5, 1);
  }
  return result;
}
