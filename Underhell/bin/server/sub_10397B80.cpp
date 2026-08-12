bool __thiscall sub_10397B80(int *this, unsigned int *a2)
{
  int v3; // ecx
  bool result; // al
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // edi

  v3 = this[906];
  result = 0;
  if ( !v3 || !(*(unsigned __int8 (__thiscall **)(int, unsigned int *))(*(_DWORD *)v3 + 180))(v3, a2) )
  {
    if ( (a2[4] & 8) != 0 && !sub_1001FDB0(this, a2) )
      return 1;
    if ( *a2 != -1 )
    {
      v5 = &off_1061BE18[4 * (*a2 & 0xFFF) + 1];
      v6 = *a2 >> 12;
      if ( off_1061BE18[4 * (*a2 & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          v7 = off_1061BE18[4 * (*a2 & 0xFFF) + 2] == v6 ? *v5 : 0;
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 340))(v7) )
          {
            if ( this[1332] == 2 )
            {
              v8 = sub_1026A890(a2);
              v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 340))(v8);
              v10 = sub_10366D00(this + 1328);
              if ( v10 == (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 32))(v9) )
                return 1;
            }
          }
        }
      }
    }
  }
  return result;
}
