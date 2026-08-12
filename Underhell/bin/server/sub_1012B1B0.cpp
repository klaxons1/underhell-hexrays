int __thiscall sub_1012B1B0(unsigned int *this, int a2)
{
  char v3; // al
  int (__thiscall *v4)(unsigned int *, int, int); // edx
  float v6; // [esp+8h] [ebp-8h]

  sub_100C0E40(this + 200, a2);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2);
  v6 = 0.0;
  if ( v3 )
    sub_1023C380((int)"General.BurningFlesh", v6, 0);
  else
    sub_1023C380((int)"General.BurningObject", v6, 0);
  v4 = *(int (__thiscall **)(unsigned int *, int, int))(*this + 140);
  *((_BYTE *)this + 824) = 1;
  return v4(this, a2, -1);
}
