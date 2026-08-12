void __thiscall sub_1024CA30(_BYTE *this, int a2, int a3)
{
  if ( this[216] )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 107) )
    {
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &a2, &a3);
      (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 768))(
        this,
        a2 - *((_DWORD *)this + 59),
        a3 - *((_DWORD *)this + 60));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 51) + 16))(*((_DWORD *)this + 51));
    }
    else
    {
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 408))(this, 107);
    }
  }
}
