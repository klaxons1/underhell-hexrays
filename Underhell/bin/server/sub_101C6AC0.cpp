void __thiscall sub_101C6AC0(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int *v6; // ecx
  _DWORD *v7; // eax
  char v8; // [esp+7h] [ebp-1h]

  if ( (this[191] & 2) != 0 )
  {
    if ( dword_106BA7D0 )
    {
      v2 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BA7D0 + 4))(dword_106BA7D0, this);
      v3 = v2;
      if ( v2 )
      {
        v4 = *(_DWORD **)(v2 + 8);
        v8 = byte_10638738;
        byte_10638738 = 0;
        if ( v4 != (_DWORD *)v2 )
        {
          do
          {
            v5 = v4[1];
            dword_106BA69C = v4[2];
            if ( v5 == -1 )
            {
              if ( *v4 != -1 )
              {
                v6 = &off_1061BE18[4 * (*v4 & 0xFFF) + 1];
                if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == *v4 >> 12
                  && *v6
                  && (this[63] & 1) == 0
                  && (*(_BYTE *)(*v6 + 252) & 1) == 0 )
                {
                  (*(void (__thiscall **)(_DWORD *, int))(*this + 380))(this, *v6);
                }
              }
            }
            else if ( v5 != this[35] )
            {
              if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
                v7 = 0;
              else
                v7 = (_DWORD *)off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              sub_101C5B20((int)this, v7);
              sub_101C4C90(v3, this, (int)v4);
            }
            v4 = (_DWORD *)dword_106BA69C;
          }
          while ( dword_106BA69C != v3 );
        }
        byte_10638738 = v8;
        if ( *(_DWORD *)(v3 + 8) == v3 && *(_DWORD *)(v3 + 12) == v3 && (this[191] & 2) != 0 )
        {
          if ( dword_106BA7D0 )
            (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BA7D0 + 12))(dword_106BA7D0, this);
          this[191] &= ~2u;
        }
      }
    }
  }
  dword_106BA69C = 0;
  sub_100DAE10(this, 0);
}
