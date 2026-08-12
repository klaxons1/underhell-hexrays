char __thiscall sub_1012C980(_DWORD *this, int a2, const void *a3)
{
  int v4; // edx
  int v6; // esi
  const char *v7; // eax
  int v8; // ebx
  int v9; // eax
  _BYTE v10[36]; // [esp+0h] [ebp-24h] BYREF
  int v11; // [esp+2Ch] [ebp+8h]

  if ( a2 < 0 || a2 >= this[5] )
  {
    DevMsg("CUserMessages::DispatchUserMessage:  Bogus msg type %i (max == %i)\n", a2, this[5]);
    return 0;
  }
  else
  {
    v4 = *(_DWORD *)(this[1] + 24 * a2 + 20);
    v11 = v4;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 20);
      if ( v6 )
      {
        v8 = 0;
        if ( v6 > 0 )
        {
          while ( 1 )
          {
            v9 = *(_DWORD *)(v4 + 8);
            qmemcpy(v10, a3, sizeof(v10));
            (*(void (__cdecl **)(_BYTE *))(v9 + 4 * v8++))(v10);
            if ( v8 >= *(_DWORD *)(v11 + 20) )
              break;
            v4 = v11;
          }
        }
        return 1;
      }
      else
      {
        v7 = (const char *)sub_1012C940(this, a2);
        DevMsg("CUserMessages::DispatchUserMessage:  missing client hook for %s\n", v7);
        return 0;
      }
    }
    else
    {
      DevMsg("CUserMessages::DispatchUserMessage:  Missing client entry for msg type %i\n", a2);
      return 0;
    }
  }
}
