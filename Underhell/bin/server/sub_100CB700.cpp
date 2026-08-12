int __thiscall sub_100CB700(_DWORD *this, int a2)
{
  int v2; // ebx
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // edi

  if ( *((_BYTE *)this + 225) != 1 )
  {
    v2 = this[55];
    v3 = this + 55;
    v4 = (int)*(float *)(a2 + 52);
    v5 = v2 - v4;
    if ( v2 != v2 - v4 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
      *v3 = v5;
    }
  }
  return 1;
}
