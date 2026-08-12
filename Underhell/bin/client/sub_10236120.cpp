const char *__thiscall sub_10236120(void *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 108))(this);
  if ( v1 )
    return (const char *)(*(int (**)(void))(v1 + 28))();
  else
    return "Panel";
}
