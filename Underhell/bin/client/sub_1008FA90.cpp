unsigned int __thiscall sub_1008FA90(int this, int a2)
{
  char v2; // bl
  unsigned int result; // eax
  int v5; // edi
  unsigned __int16 v6; // ax
  _DWORD *v7; // ecx
  _DWORD *v8; // eax
  char *v9; // [esp+8h] [ebp-4h]

  v2 = a2;
  v9 = (char *)(this + 41);
  result = *(unsigned __int8 *)(this + 41);
  if ( result != a2 )
  {
    *(_DWORD *)(*(_DWORD *)(this + 4) + 312) |= 0x4000u;
    sub_1008F420((int *)this);
    v5 = *(_DWORD *)off_103DD080;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 4) + 4) + 28))(*(_DWORD *)(this + 4) + 4);
    result = (*(int (__thiscall **)(void *, _DWORD))(v5 + 140))(off_103DD080, v6);
    if ( a2 == 1 )
    {
      v7 = *(_DWORD **)(this + 4);
      result = v7[81];
      if ( result != -1 )
      {
        result >>= 12;
        if ( *((_DWORD *)off_103DCD74 + 4 * (v7[81] & 0xFFF) + 2) == result )
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * (v7[81] & 0xFFF) + 1) )
          {
            v8 = sub_1000F870(v7);
            result = (*(int (__thiscall **)(_DWORD *))(*v8 + 276))(v8);
            if ( result != 1 )
              v2 = 6;
          }
        }
      }
    }
    if ( v2 != *v9 )
    {
      result = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)(v9 - 41) + 72))(v9 - 41, v9);
      *v9 = v2;
    }
  }
  return result;
}
