void __thiscall sub_102238E0(void *this, int a2)
{
  const char *v3; // eax

  if ( *((int *)this + 361) <= 0 )
  {
    *((_BYTE *)this + 900) = 1;
  }
  else
  {
    v3 = (const char *)*((_DWORD *)this + 201);
    if ( !v3 )
      v3 = String;
    sub_1022F660("%s : cancelled via input at interrupt point\n", (char)v3);
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 764))(this);
  }
}
