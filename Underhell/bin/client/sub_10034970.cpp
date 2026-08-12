bool __thiscall sub_10034970(void *this, int a2)
{
  int v4; // edi

  if ( !a2 )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 292))(a2);
  return v4 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 292))(this);
}
