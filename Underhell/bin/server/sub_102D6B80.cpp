void __thiscall sub_102D6B80(_DWORD *this)
{
  _BYTE *v2; // esi
  void (__noreturn ***v3)(); // eax
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax

  v2 = (char *)this + 225;
  if ( *((_BYTE *)this + 225) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 480))(this, (int)this + 225);
    *v2 = 0;
  }
  sub_1023C380(this, (int)"GrenadeSpit.Hit", 0.0, 0);
  if ( this[537] )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[537]);
    this[537] = 0;
  }
  v4 = this[536];
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (this[536] & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( off_1061BE18[4 * (this[536] & 0xFFF) + 2] == v6 )
    {
      if ( *v5 )
      {
        if ( off_1061BE18[4 * (this[536] & 0xFFF) + 2] == v6 )
          v7 = *v5;
        else
          v7 = 0;
        sub_1025FAC0(v7);
      }
    }
  }
  sub_1025FAC0((int)this);
}
