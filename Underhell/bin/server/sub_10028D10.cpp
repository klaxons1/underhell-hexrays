char __thiscall sub_10028D10(_DWORD *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  char **v6; // ecx
  char *v7; // ecx
  char *v8; // ebx
  int v9; // edi
  char v10; // cl
  int v11; // eax

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
        v6 = (char **)(a2 + 2);
        if ( a2[6] == 2 )
        {
          v7 = *v6;
          if ( v7 )
            v8 = v7;
          else
            v8 = (char *)String;
        }
        else
        {
          v8 = (char *)sub_1010D460(v6);
        }
        v9 = sub_1012C5B0(0, v8, (int)this, 0, 0);
        if ( !v9 )
        {
          if ( !strcmp(v8, "!caller") )
          {
            LOBYTE(v3) = (_BYTE)a2;
            v9 = a2[1];
          }
          else
          {
            v3 = strcmp(v8, "!activator");
            if ( v3 )
              return v3;
            v9 = *a2;
          }
          if ( !v9 )
            return v3;
        }
        if ( (int)this[588] > 0 )
          (*(void (__thiscall **)(_DWORD *, int))(*this + 1412))(this, 1);
        v10 = *((_BYTE *)this + 306);
        *((float *)this + 587) = 0.0;
        this[585] = 0;
        v11 = 11;
        if ( v10 == 4 || v10 == 5 )
          v11 = 26;
        (*(void (__thiscall **)(_DWORD *, int, int, int))(*this + 1860))(this, 2, v9, v11);
        LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1856))(this, 0);
      }
    }
  }
  return v3;
}
