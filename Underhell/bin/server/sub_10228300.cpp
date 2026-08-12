void __thiscall sub_10228300(void *this)
{
  int *v2; // ecx
  int *v3; // ecx
  const char *v4; // eax
  __int64 v5; // [esp-4h] [ebp-14h]

  if ( *((_BYTE *)this + 884) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)*((_DWORD *)this + 6);
      if ( v2 )
        sub_100194B0(v2, 884);
    }
    *((_BYTE *)this + 884) = 0;
    if ( *((_BYTE *)this + 885) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v3 = (int *)*((_DWORD *)this + 6);
        if ( v3 )
          sub_100194B0(v3, 885);
      }
      *((_BYTE *)this + 885) = 0;
    }
    HIDWORD(v5) = this;
    LODWORD(v5) = this;
    sub_1010DD80((_DWORD *)this + 259, v5, 0.0);
    v4 = (const char *)*((_DWORD *)this + 201);
    if ( !v4 )
      v4 = String;
    sub_1022F660("%s : %8.2f:  canceled\n", (char)v4);
    (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 724))(this, 1, 0);
  }
}
