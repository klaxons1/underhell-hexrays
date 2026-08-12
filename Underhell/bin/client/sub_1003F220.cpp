_DWORD *__thiscall sub_1003F220(_DWORD *this, int a2)
{
  int v3; // ebx
  _DWORD *result; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  float v10; // [esp+0h] [ebp-14h]
  _DWORD *v11; // [esp+10h] [ebp-4h]

  v3 = 0;
  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  result = (_DWORD *)this[485];
  if ( result && *result )
  {
    if ( (_BYTE)a2 )
    {
      v5 = 0;
      result = (_DWORD *)sub_1002A680(this);
      if ( (int)result > 0 )
      {
        do
        {
          v10 = sub_1003EC30(this, v5) * 0.95;
          sub_1003EB70(this, v5++, v10);
          result = (_DWORD *)sub_1002A680(this);
        }
        while ( v5 < (int)result );
      }
    }
    v11 = 0;
    if ( (int)this[641] > 0 )
    {
      do
      {
        v6 = this[638];
        v7 = *(_DWORD *)(v6 + v3);
        v8 = *(_DWORD *)(v6 + v3 + 4);
        v9 = v3 + v6;
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int, int))(*this + 764))(this, a2, v9, v8, v7) )
          *(_BYTE *)(v9 + 12) = 1;
        result = (_DWORD *)((char *)v11 + 1);
        v3 += 68;
        v11 = result;
      }
      while ( (int)result < this[641] );
    }
  }
  return result;
}
