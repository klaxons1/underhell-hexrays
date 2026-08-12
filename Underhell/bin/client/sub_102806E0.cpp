int __thiscall sub_102806E0(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  _DWORD *v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  const char *v8; // eax
  char *String2; // [esp+8h] [ebp-4h]
  _DWORD *v10; // [esp+10h] [ebp+4h]

  result = sub_10229C90(a2);
  v4 = (_DWORD *)result;
  v10 = (_DWORD *)result;
  if ( result )
  {
    while ( 1 )
    {
      if ( sub_1022AEE0(v4, 0) )
        goto LABEL_15;
      v5 = 0;
      String2 = (char *)sub_10229A00(v4);
      if ( (int)this[22] > 0 )
      {
        while ( 1 )
        {
          v6 = sub_10237C80((_DWORD *)(4 * v5 + this[19]));
          v7 = v6;
          if ( v6 )
          {
            v8 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 72))(v6);
            if ( !_stricmp(v8, String2) )
            {
              (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 336))(v7, v10);
              v4 = v10;
              goto LABEL_15;
            }
          }
          else
          {
            if ( this[22] - v5 - 1 > 0 )
              memcpy((void *)(this[19] + 4 * v5), (const void *)(this[19] + 4 * v5 + 4), 4 * (this[22] - v5 - 1));
            --this[22];
            --v5;
          }
          if ( ++v5 >= this[22] )
          {
            v4 = v10;
            break;
          }
        }
      }
      if ( String2 )
        sub_1027F930((int)this, v4, 0, 0);
LABEL_15:
      result = sub_1021F0F0(v4);
      v10 = (_DWORD *)result;
      if ( !result )
        break;
      v4 = (_DWORD *)result;
    }
  }
  return result;
}
