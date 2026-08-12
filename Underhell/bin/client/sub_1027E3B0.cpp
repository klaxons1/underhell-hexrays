int __thiscall sub_1027E3B0(_BYTE *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int (__thiscall *v5)(_BYTE *); // eax

  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 48))(this, 0);
  if ( a2 == 77 || a2 == 65 )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 57) + 772))(*((_DWORD *)this + 57)) + 200;
  }
  else
  {
    if ( a2 != 76 )
      goto LABEL_7;
    v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 57) + 772))(*((_DWORD *)this + 57)) - 200;
  }
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 57) + 768))(*((_DWORD *)this + 57), v3);
LABEL_7:
  v4 = *((_DWORD *)this + 53);
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 44))(v4, a2);
  v5 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 16);
  this[264] = 1;
  return v5(this);
}
