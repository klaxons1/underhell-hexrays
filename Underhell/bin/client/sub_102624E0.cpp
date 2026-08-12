int __thiscall sub_102624E0(_BYTE *this, int a2, int a3)
{
  int result; // eax
  int v5; // edx

  if ( (this[376] & 8) == 0 )
    return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 960))(this, a2);
  result = a2;
  if ( a2 >= 0 && a2 < *((_DWORD *)this + 73) && a2 <= *((_DWORD *)this + 79) )
  {
    v5 = *((_DWORD *)this + 72);
    if ( (*(_DWORD *)(v5 + 12 * a2 + 4) != a2 || *(_DWORD *)(v5 + 12 * a2 + 8) == a2)
      && a3 >= 0
      && a3 < *((_DWORD *)this + 68) )
    {
      result = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 960))(this, a2);
      *((_DWORD *)this + 93) = a3;
    }
  }
  return result;
}
