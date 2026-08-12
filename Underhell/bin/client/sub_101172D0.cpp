int __thiscall sub_101172D0(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int *v5; // esi
  _DWORD *v6; // edi
  int v7; // ecx
  int i; // ebx
  _DWORD v9[3]; // [esp+0h] [ebp-10h] BYREF
  _DWORD *v10; // [esp+Ch] [ebp-4h]

  result = a4;
  v10 = this;
  if ( a4 > 0 )
  {
    v5 = (int *)(a3 + 24);
    do
    {
      result = *((unsigned __int16 *)v5 - 3);
      if ( (result & 2) != 0 && (!v10[8] || (result & 1) == 0) )
      {
        v6 = (_DWORD *)(a2 + *(v5 - 4));
        if ( *(v5 - 6) == 10 )
        {
          result = *((_WORD *)v5 - 3) & 0x40;
          if ( !result || *v6 )
          {
            if ( (_WORD)result )
              v6 = (_DWORD *)*v6;
            for ( i = *((unsigned __int16 *)v5 - 4) - 1; i >= 0; --i )
            {
              result = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD))(*v10 + 16))(
                         v10,
                         v6,
                         *(_DWORD *)v5[2],
                         *(_DWORD *)(v5[2] + 4));
              v6 = (_DWORD *)((char *)v6 + v5[3]);
            }
          }
        }
        else if ( *(v5 - 6) == 11 )
        {
          v7 = *v5;
          v9[1] = a2;
          v9[0] = v6;
          v9[2] = v5 - 6;
          result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 12))(v7, v9);
        }
        else
        {
          if ( v5[3] != dword_103E45C8[*(v5 - 6)] * *((unsigned __int16 *)v5 - 4) )
            Warning(
              "WARNING! Field %s is using the wrong FIELD_ type!\nFix this or you'll see a crash.\n",
              (const char *)*(v5 - 5));
          result = (int)memset(
                          v6,
                          (unsigned __int8)((*(v5 - 6) != 13) - 1),
                          dword_103E45C8[*(v5 - 6)] * *((unsigned __int16 *)v5 - 4));
        }
      }
      v5 += 13;
      --a4;
    }
    while ( a4 );
  }
  return result;
}
