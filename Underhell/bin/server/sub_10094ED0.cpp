char __thiscall sub_10094ED0(void *this)
{
  bool v3; // zf
  const char *v4; // eax

  if ( !sub_10093A00((int)this, 1, 1) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(void *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
         this,
         "TLK_USE",
         0,
         0,
         0,
         0) )
  {
    sub_10092A80(-1.0, 0);
    return 0;
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1656))(this);
  v3 = (unsigned __int8)sub_100AFBB0("TLK_HELLO") == 0;
  v4 = "TLK_HELLO";
  if ( !v3 )
    v4 = "TLK_IDLE";
  return (*(int (__thiscall **)(void *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
           this,
           v4,
           0,
           0,
           0,
           0);
}
