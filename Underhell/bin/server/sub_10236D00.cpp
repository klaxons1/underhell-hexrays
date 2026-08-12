int __thiscall sub_10236D00(float *this)
{
  char *v2; // edi
  int v3; // ebx

  v2 = (char *)(this + 202);
  sub_101FC0B0(this + 202, this + 179);
  v3 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31D0 + 256))(dword_106B31D0, v2);
  if ( *((_DWORD *)this + 205) != v3 )
  {
    (**((void (__thiscall ***)(int, int))this + 200))((int)(this + 200), (int)(this + 205));
    *((_DWORD *)this + 205) = v3;
  }
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 100))(this);
}
