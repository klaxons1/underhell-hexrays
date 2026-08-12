int __thiscall sub_101326D0(int *this)
{
  int *v2; // esi
  int v3; // ebx
  int (__thiscall *v4)(int *, _DWORD); // eax

  this[8244] = 0;
  v2 = this + 56;
  v3 = 1023;
  do
  {
    if ( *v2 )
    {
      sub_10034930(*v2);
      *v2 = 0;
    }
    *(v2 - 4) = (int)(v2 + 4);
    v2 += 8;
    --v3;
  }
  while ( v3 );
  this[8236] = 0;
  v4 = *(int (__thiscall **)(int *, _DWORD))(*this + 124);
  this[8245] = (int)(this + 52);
  return v4(this, 0);
}
