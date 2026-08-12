int __thiscall sub_100E0DE0(_DWORD *this)
{
  void (__thiscall *v2)(int, int); // eax
  int result; // eax
  int *v4; // esi
  int v5; // esi
  int v6; // ecx
  int v7; // [esp-4h] [ebp-28h]
  int v8; // [esp+8h] [ebp-1Ch] BYREF
  int v9; // [esp+Ch] [ebp-18h] BYREF
  int v10; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+18h] [ebp-Ch]
  int v13; // [esp+1Ch] [ebp-8h]
  int v14; // [esp+20h] [ebp-4h]

  v2 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68);
  v7 = this[4349];
  v14 = 0;
  v12 = 0;
  v2(dword_1047CA6C, v7);
  result = this[4354];
  if ( result > 0 )
  {
    v13 = 0;
    v11 = result;
    do
    {
      v4 = (int *)(v13 + this[4351]);
      if ( *((_BYTE *)v4 + 10) == 1 )
      {
        result = *((__int16 *)v4 + 3);
        v14 = *((__int16 *)v4 + 2);
        v12 = result;
      }
      else if ( *((_BYTE *)v4 + 10) == 2 )
      {
        result = this[4349];
        if ( result )
        {
          result = (*(int (__thiscall **)(int, int, _DWORD, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 280))(
                     dword_1047CA6C,
                     result,
                     *((unsigned __int16 *)v4 + 4),
                     &v9,
                     &v10,
                     &v8);
          if ( *((_WORD *)v4 + 4) > 0x20u )
          {
            (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 76))(
              *((unsigned __int8 *)v4 + 11),
              *((unsigned __int8 *)v4 + 12),
              *((unsigned __int8 *)v4 + 13),
              *((unsigned __int8 *)v4 + 14));
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v14, v12);
            result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(
                       *((unsigned __int16 *)v4 + 4),
                       0);
          }
          v14 += v8 + v10 + v9;
        }
      }
      else
      {
        result = *((unsigned __int8 *)v4 + 10) - 3;
        if ( *((_BYTE *)v4 + 10) == 3 )
        {
          v5 = *v4;
          this[4349] = v5;
          result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, v5);
        }
      }
      v13 += 16;
      --v11;
    }
    while ( v11 );
  }
  this[4354] = 0;
  if ( (int)this[4353] < 0 )
  {
    this[4355] = this[4351];
  }
  else
  {
    result = this[4351];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[4351]);
      this[4351] = 0;
    }
    v6 = this[4351];
    this[4352] = 0;
    this[4355] = v6;
  }
  return result;
}
