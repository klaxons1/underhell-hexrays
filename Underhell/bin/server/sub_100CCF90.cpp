int __thiscall sub_100CCF90(unsigned int *this, int a2)
{
  int result; // eax
  int v4; // eax

  sub_100C2480(this + 261, a2);
  result = sub_100CF460(this);
  if ( result )
  {
    v4 = sub_100CF460(this);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 828))(v4, a2);
  }
  return result;
}
