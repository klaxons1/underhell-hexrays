void __thiscall sub_10252910(_DWORD **this)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  void (__thiscall *v9)(int, int); // eax
  int v11; // [esp+24h] [ebp-D0h]
  int v12; // [esp+28h] [ebp-CCh]
  BOOL v13; // [esp+2Ch] [ebp-C8h]
  int v14; // [esp+30h] [ebp-C4h]
  _BYTE v15[64]; // [esp+34h] [ebp-C0h] BYREF
  wchar_t Buffer[64]; // [esp+74h] [ebp-80h] BYREF

  if ( this[230] )
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 172))(dword_1047CA68);
    if ( v14 )
    {
      v2 = (*(int (__thiscall **)(_DWORD *))(*this[230] + 932))(this[230]);
      if ( v2 == (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 184))(dword_1047CA68) )
      {
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 184))(dword_1047CA68);
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 180))(dword_1047CA68);
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 188))(dword_1047CA68);
        if ( v4 < v5 || v4 >= v5 + v3 )
        {
          v5 = v3 * (v4 / v3);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 204))(dword_1047CA68, v5);
        }
        v13 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 200))(dword_1047CA68) != 0;
        v12 = v5 + v3;
        if ( v5 < v5 + v3 )
        {
          v6 = 0;
          do
          {
            v11 = (*(int (__thiscall **)(_DWORD *, int))(*this[230] + 936))(this[230], v6);
            v7 = sub_1026B780(v11);
            v8 = v7;
            if ( v7 )
            {
              v9 = *(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 124);
              if ( v5 < v14 )
              {
                v9(v8, 1);
                (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA68 + 176))(
                  dword_1047CA68,
                  v5,
                  v15,
                  64);
                _snwprintf(Buffer, 0x3Fu, L"%i %s", v6 + v13, v15);
                Buffer[63] = 0;
                (*(void (__thiscall **)(int, wchar_t *, _DWORD))(*(_DWORD *)v8 + 768))(v8, Buffer, 0);
                if ( v5 == v4 )
                  sub_1026C340(v11);
              }
              else
              {
                v9(v8, 0);
              }
            }
            ++v5;
            ++v6;
          }
          while ( v5 < v12 );
        }
      }
      else
      {
        ((void (__thiscall *)(_DWORD **))(*this)[222])(this);
      }
    }
    else
    {
      ((void (__thiscall *)(_DWORD **))(*this)[223])(this);
    }
  }
}
