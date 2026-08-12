_BYTE *__thiscall sub_1000C5C0(_DWORD *this, int a2)
{
  _BYTE *result; // eax
  _BYTE *v4; // esi
  int v5; // ecx
  int v6; // eax
  _DWORD v7[6]; // [esp+Ch] [ebp-A4h] BYREF
  char v8; // [esp+24h] [ebp-8Ch]
  int v9; // [esp+28h] [ebp-88h]
  char v10; // [esp+2Ch] [ebp-84h]
  int v11; // [esp+ACh] [ebp-4h]

  result = (_BYTE *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1176))(this, a2);
  v4 = result;
  if ( result )
  {
    if ( *result )
    {
      v7[2] = 100;
      *(float *)&v7[1] = 1.0;
      v7[3] = 100;
      v7[4] = 100;
      v7[0] = 0;
      v7[5] = 75;
      v10 = 0;
      v8 = 0;
      v9 = 0;
      v11 = 0;
      result = (_BYTE *)sub_10120700(result, v7, 0);
      if ( (_BYTE)result )
      {
        if ( v8 )
        {
          result = (_BYTE *)sub_1000BAC0(this);
          if ( !result )
            return result;
        }
        else if ( !sub_1000BAC0(this) )
        {
          v5 = (int)(this + 2);
          goto LABEL_9;
        }
        v5 = sub_1000BAC0(this) + 8;
LABEL_9:
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
        return (_BYTE *)sub_10120990(v6, v4);
      }
    }
  }
  return result;
}
