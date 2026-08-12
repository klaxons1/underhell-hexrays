char __thiscall sub_10028EE0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  char v5; // al
  int v6; // ecx

  LOBYTE(v3) = sub_1007E040(this[647]);
  if ( !(_BYTE)v3 )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v4 = sub_1007DB30(10);
    if ( v4 == -1
      || (v3 = v4 - 1000000000, v3 == -1)
      || (LOBYTE(v3) = ((1 << (v3 & 0x1F)) & this[(v3 >> 5) + 548]) != 0, !(_BYTE)v3) )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
      v3 = sub_1007DB30(25);
      if ( v3 == -1
        || (v3 -= 1000000000, v3 == -1)
        || (LOBYTE(v3) = ((1 << (v3 & 0x1F)) & this[(v3 >> 5) + 548]) != 0, !(_BYTE)v3) )
      {
        if ( a2 )
        {
          if ( (int)this[588] > 0 )
            (*(void (__thiscall **)(_DWORD *, int))(*this + 1412))(this, 1);
          v5 = *((_BYTE *)this + 306);
          *((float *)this + 587) = 0.0;
          this[585] = 0;
          v6 = 11;
          if ( v5 == 4 || v5 == 5 )
            v6 = 26;
          (*(void (__thiscall **)(_DWORD *, int, int, int))(*this + 1860))(this, 2, a2, v6);
          LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1856))(this, 0);
        }
      }
    }
  }
  return v3;
}
