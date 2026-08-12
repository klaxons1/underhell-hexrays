int __thiscall sub_10103E50(int this)
{
  int v2; // eax
  int v3; // ebx
  int result; // eax
  int v5[3]; // [esp+14h] [ebp-14h] BYREF
  int v6; // [esp+20h] [ebp-8h]
  int v7; // [esp+24h] [ebp-4h]

  *(float *)(this + 1992) = 1.0;
  *(float *)(this + 1996) = 1.0;
  *(float *)(this + 2000) = 1.0;
  nullsub_4();
  v2 = sub_10034480((__int16 *)this);
  memset(v5, 0, sizeof(v5));
  v6 = 0;
  v7 = 0;
  sub_1010C180((int)v5, v2, 0.0, 0);
  v3 = v6;
  sub_1011A810(v5);
  *(_DWORD *)(this + 2044) = v3;
  result = sub_10102D40((_DWORD *)this);
  if ( !*(_DWORD *)(this + 2044) )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 1960) + 52))(this + 1960);
    if ( result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 1960) + 68))(this + 1960);
      if ( result )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 1960) + 68))(this + 1960);
        *(_DWORD *)(this + 2044) = result;
      }
    }
  }
  *(_BYTE *)(this + 134) = *(_DWORD *)(this + 136) != 0 ? 2 : 0;
  return result;
}
