char __thiscall sub_1001F5B0(void *this, int a2)
{
  char v3; // bl

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1024))(this, a2);
  if ( v3 )
  {
    sub_1025FAC0(this);
    sub_100EC3F0(0, 0.0, 0);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1028))(this);
    return 0;
  }
}
