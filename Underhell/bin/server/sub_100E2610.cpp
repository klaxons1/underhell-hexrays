int __thiscall sub_100E2610(int this)
{
  int result; // eax
  int v3; // edx

  *(_DWORD *)(this + 252) |= 2u;
  result = sub_100EC3F0(0, 0.0, 0);
  if ( *(_DWORD *)(this + 24) )
  {
    *(_DWORD *)(this + 252) |= 2u;
    sub_101129A0(*(unsigned __int16 *)(this + 356) | 4);
    sub_100E0970(this, v3, 0, 0);
    sub_100EAB80(this, 32);
    return sub_100EC4A0(-1.0, 0);
  }
  return result;
}
