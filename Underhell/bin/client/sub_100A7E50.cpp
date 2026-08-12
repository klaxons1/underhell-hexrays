int __thiscall sub_100A7E50(_DWORD **this)
{
  int (__fastcall *v3)(int); // eax

  if ( (*(int (__thiscall **)(_DWORD *))(*this[1] + 844))(this[1]) )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50) + 72;
  v3 = *(int (__fastcall **)(int))(*(_DWORD *)dword_10412D50 + 120);
  if ( *((_BYTE *)this[1] + 3528) )
    return v3(dword_10412D50) + 36;
  else
    return v3(dword_10412D50) + 12;
}
