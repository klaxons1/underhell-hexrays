char sub_10273850()
{
  int v0; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // eax

  v0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0);
  if ( v0 )
  {
    dword_1060F300 = sub_10153480();
    if ( byte_1069362F )
    {
      v1 = (_DWORD *)sub_10153490();
      LOBYTE(v0) = sub_10273620(v1);
    }
    else
    {
      v2 = (_DWORD *)sub_10153490();
      LOBYTE(v0) = sub_102736F0(v2);
    }
  }
  return v0;
}
