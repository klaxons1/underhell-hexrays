_BYTE *__thiscall sub_100D25D0(_DWORD *this, int a2)
{
  _BYTE *result; // eax
  _BYTE *v4; // esi
  int v5; // eax
  int v6; // [esp-8h] [ebp-B8h]
  _BYTE *v7; // [esp-4h] [ebp-B4h]
  _DWORD v8[6]; // [esp+Ch] [ebp-A4h] BYREF
  char v9; // [esp+24h] [ebp-8Ch]
  int v10; // [esp+28h] [ebp-88h]
  char v11; // [esp+2Ch] [ebp-84h]
  int v12; // [esp+ACh] [ebp-4h]

  result = (_BYTE *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1264))(this, a2);
  v4 = result;
  if ( result )
  {
    if ( *result )
    {
      v8[2] = 100;
      *(float *)&v8[1] = 1.0;
      v8[3] = 100;
      v8[4] = 100;
      v8[0] = 0;
      v8[5] = 75;
      v11 = 0;
      v9 = 0;
      v10 = 0;
      v12 = 0;
      result = (_BYTE *)sub_1023A760(result, v8, 0);
      if ( (_BYTE)result )
      {
        if ( v9 )
        {
          result = (_BYTE *)sub_100D1940(this);
          if ( !result )
            return result;
        }
        else if ( !sub_100D1940(this) )
        {
          v7 = v4;
          v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
          return (_BYTE *)sub_1023AEF0(v5, v7);
        }
        v7 = v4;
        v6 = *(_DWORD *)(sub_100D1940(this) + 24);
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6);
        return (_BYTE *)sub_1023AEF0(v5, v7);
      }
    }
  }
  return result;
}
