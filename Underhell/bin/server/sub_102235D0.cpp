void __thiscall sub_102235D0(void *this, int a2, int a3)
{
  const char *v4; // eax

  if ( !*((_BYTE *)this + 1500) )
  {
    if ( *((_BYTE *)this + 900) )
    {
      *((_BYTE *)this + 900) = 0;
      v4 = (const char *)*((_DWORD *)this + 201);
      if ( !v4 )
        v4 = String;
      sub_1022F660("%s : cancelled via interrupt\n", (char)v4);
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 764))(this);
    }
    else
    {
      ++*((_DWORD *)this + 361);
    }
  }
}
