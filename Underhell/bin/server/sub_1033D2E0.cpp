int __thiscall sub_1033D2E0(void *this, int a2)
{
  const char *v3; // eax
  const char *v5; // eax

  if ( sub_100B16F0(*((int **)this + 699), 1) >= 2 )
  {
    v5 = "COMBINEPRISONGUARD_MAN_DOWN";
    if ( !*((_BYTE *)this + 4976) )
      v5 = "COMBINE_MAN_DOWN";
    return sub_100AC410((int)this + 4244, v5, 0, 2);
  }
  else
  {
    v3 = "COMBINEPRISONGUARD_LAST_OF_SQUAD";
    if ( !*((_BYTE *)this + 4976) )
      v3 = "COMBINE_LAST_OF_SQUAD";
    sub_100AC410((int)this + 4244, v3, -1, 1);
    return (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 1608))(this, 0, 0.0);
  }
}
