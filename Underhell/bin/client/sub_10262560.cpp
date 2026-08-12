void __thiscall sub_10262560(_DWORD *this, int a2, int a3, wchar_t *Destination, unsigned int a5)
{
  __int16 *v6; // eax
  __int16 v7; // cx
  _DWORD *v8; // ebx
  int v9; // ecx
  char *v10; // eax
  char *v11; // edi
  _BYTE *v12; // eax
  int v13; // eax
  const wchar_t *v14; // eax

  if ( Destination )
  {
    if ( a5 )
    {
      v6 = (__int16 *)&unk_10302674;
      do
      {
        v7 = *v6;
        *(__int16 *)((char *)v6 + (char *)Destination - (char *)&unk_10302674) = *v6;
        ++v6;
      }
      while ( v7 );
      v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 848))(this, a2);
      if ( v8 )
      {
        if ( a3 >= 0 && a3 < this[68] )
        {
          v9 = *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(this[65] + a3));
          v10 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 72))(v9);
          v11 = v10;
          if ( v10 )
          {
            if ( *v10 )
            {
              v12 = (_BYTE *)sub_1022B4C0(v8, v10, (int)Locale);
              if ( v12 )
              {
                if ( *v11 )
                {
                  if ( *v12 != 35
                    || (v13 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 20))(
                                dword_1047CA78,
                                v12 + 1),
                        v13 == -1)
                    || (v14 = (const wchar_t *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 40))(
                                                 dword_1047CA78,
                                                 v13)) == 0 )
                  {
                    v14 = (const wchar_t *)sub_1022B600(v8, v11, (int)&unk_10302674);
                  }
                  wcsncpy(Destination, v14, a5 >> 1);
                  Destination[(a5 >> 1) - 1] = 0;
                }
              }
            }
          }
        }
      }
    }
  }
}
