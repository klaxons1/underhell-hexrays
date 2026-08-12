int __thiscall sub_1025FB10(_BYTE *this)
{
  bool v2; // zf
  int v3; // eax
  _BYTE v5[512]; // [esp+4h] [ebp-200h] BYREF

  v2 = this[960] == 0;
  this[961] = 1;
  if ( !v2 )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 238) + 928))(*((_DWORD *)this + 238));
    if ( v3 >= 0 )
    {
      sub_1026B870(v3, v5, 512);
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 1024))(this, v5);
    }
  }
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 16))(this);
}
