void __thiscall sub_101274A0(void *this)
{
  const char *v2; // eax
  int *v3; // ecx
  int *v4; // ecx
  bool v5; // zf
  char v6; // bl
  int *v7; // ecx
  _BYTE v8[4]; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 28))(this, v8);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_10112C00((int)this + 320, 0);
  if ( *((_BYTE *)this + 119) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        sub_100194B0(v3, 116);
    }
    *((_BYTE *)this + 119) = 0;
  }
  if ( *((_BYTE *)this + 113) != 2 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 113);
    }
    *((_BYTE *)this + 113) = 2;
  }
  v5 = (*((_BYTE *)this + 248) & 1) == 0;
  *((_DWORD *)this + 50) = sub_101271C0;
  v6 = !v5 || !*((_DWORD *)this + 65);
  if ( v6 != *((_BYTE *)this + 812) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_BYTE *)this + 812) = v6;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
        sub_100194B0(v7, 812);
      *((_BYTE *)this + 812) = v6;
    }
  }
}
