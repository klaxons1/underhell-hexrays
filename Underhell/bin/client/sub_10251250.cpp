int __thiscall sub_10251250(_BYTE *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  this[342] = a2;
  if ( a2 )
  {
    if ( !*((_DWORD *)this + 86) )
    {
      if ( sub_100DDA40(232) )
        v3 = sub_10272DA0((int)this, "ScrollBar", 1);
      else
        v3 = 0;
      *((_DWORD *)this + 86) = v3;
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 172))(v3, this);
    }
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 86) + 124))(*((_DWORD *)this + 86), 1);
  }
  else
  {
    v4 = *((_DWORD *)this + 86);
    if ( v4 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 124))(v4, 0);
  }
  return (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
}
