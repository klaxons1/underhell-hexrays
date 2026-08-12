char __thiscall sub_10334150(void *this, int a2)
{
  int v3; // eax
  int v4; // eax

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 220))(this) != 7
    || (v3 = sub_101679A0((int)"gordon_precriminal"), v4 = sub_10167A00(v3), v4 != 1) )
  {
    LOBYTE(v4) = sub_10022610(this, a2);
  }
  return v4;
}
