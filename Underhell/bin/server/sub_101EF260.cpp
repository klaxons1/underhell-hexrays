int __thiscall sub_101EF260(unsigned int *this, char a2)
{
  int v3; // eax
  int v4; // eax

  if ( sub_100CF460(this) )
  {
    sub_101EDFB0((int)this);
    v3 = sub_100CF460(this);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 996))(v3, 0);
    v4 = sub_100CF460(this);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 1004))(v4, 0);
  }
  (*(void (__thiscall **)(unsigned int *, _DWORD))(*this + 1236))(this, 0);
  sub_100CD300(this, 0);
  sub_100CE630((char *)this);
  sub_100CF580((char *)this);
  if ( a2 )
    (*(void (__thiscall **)(unsigned int *))(*this + 1600))(this);
  return (*(int (__thiscall **)(unsigned int *))(*this + 1248))(this);
}
