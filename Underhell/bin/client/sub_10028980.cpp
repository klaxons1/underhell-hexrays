__int16 __thiscall sub_10028980(_DWORD **this, int a2, int a3, int a4)
{
  _WORD *v4; // eax
  int v6; // edi
  int v7; // eax
  _WORD *v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  int v12; // [esp-8h] [ebp-70h]
  _BYTE v13[48]; // [esp+8h] [ebp-60h] BYREF
  _BYTE v14[48]; // [esp+38h] [ebp-30h] BYREF

  LOWORD(v4) = a3;
  if ( a3 )
    LOWORD(v4) = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_10413160 + 76))(
                   dword_10413160,
                   a3,
                   a2,
                   a4);
  if ( *(_DWORD *)(dword_1040375C + 48) )
  {
    if ( this[298] && *((_BYTE *)this + 84) == 23 )
    {
      LOWORD(v4) = (*(int (__thiscall **)(_DWORD *))(*this[298] + 24))(this[298]);
    }
    else if ( *((_BYTE *)this + 393) )
    {
      if ( ((_BYTE)this[97] & 4) == 0 )
      {
        v4 = (_WORD *)((int (__thiscall *)(_DWORD **))this[88][11])(this + 88);
        if ( v4 == (_WORD *)6 )
        {
          v6 = *(_DWORD *)dword_10413178;
          v7 = sub_10034480(this);
          v4 = (_WORD *)(*(int (__thiscall **)(int, int))(v6 + 16))(dword_10413178, v7);
          v8 = v4;
          if ( v4 )
          {
            LOWORD(v4) = *v4 & 0x7FFF;
            if ( (_WORD)v4 == 1 )
            {
              v12 = ((int (__thiscall *)(_DWORD **))(*this)[9])(this);
              v9 = ((int (__thiscall *)(_DWORD **))(*this)[10])(this);
              sub_101F0B70(v9, v12, v14);
              LOWORD(v4) = (*(int (__thiscall **)(int, _DWORD, _DWORD, _BYTE *, void *))(*(_DWORD *)dword_1041315C + 288))(
                             dword_1041315C,
                             **((_DWORD **)v8 + 1),
                             0,
                             v14,
                             &unk_103D80A4);
              v10 = this[46];
              if ( v10 )
              {
                (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v10 + 192))(v10, v13);
                LOWORD(v4) = (*(int (__thiscall **)(int, _DWORD, _DWORD, _BYTE *, void *))(*(_DWORD *)dword_1041315C
                                                                                         + 288))(
                               dword_1041315C,
                               **((_DWORD **)v8 + 1),
                               0,
                               v13,
                               &unk_103D80A0);
              }
            }
          }
        }
      }
    }
  }
  return (__int16)v4;
}
