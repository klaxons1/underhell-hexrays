char __thiscall sub_10028BC0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  char **v6; // ecx
  char *v7; // eax
  int v8; // edi
  char v9; // cl
  int v10; // eax

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
      v5 = sub_1007DB30(25);
      if ( v5 == -1
        || (v3 = v5 - 1000000000, v3 == -1)
        || (LOBYTE(v3) = ((1 << (v3 & 0x1F)) & this[(v3 >> 5) + 548]) != 0, !(_BYTE)v3) )
      {
        v6 = (char **)(a2 + 8);
        if ( *(_DWORD *)(a2 + 24) == 2 )
        {
          v7 = *v6;
          if ( !*v6 )
            v7 = (char *)String;
        }
        else
        {
          v7 = (char *)sub_1010D460(v6);
        }
        v3 = sub_1012C5B0(0, v7, (int)this, 0, 0);
        v8 = v3;
        if ( v3 )
        {
          if ( (int)this[588] > 0 )
            (*(void (__thiscall **)(_DWORD *, int))(*this + 1412))(this, 1);
          v9 = *((_BYTE *)this + 306);
          *((float *)this + 587) = 0.0;
          this[585] = 0;
          v10 = 6;
          if ( v9 == 4 || v9 == 5 )
            v10 = 26;
          (*(void (__thiscall **)(_DWORD *, int, int, int))(*this + 1860))(this, 2, v8, v10);
          LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1856))(this, 0);
        }
      }
    }
  }
  return v3;
}
