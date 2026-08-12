int __thiscall sub_100C1940(int this)
{
  int v1; // esi
  _DWORD *v3; // eax
  int v4; // edi
  int result; // eax
  int v6; // edi
  int i; // esi
  int v8; // esi
  int v9; // [esp+10h] [ebp-4h]

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( v3 && *v3 )
  {
    v4 = *(_DWORD *)(this + 1100);
    v9 = v4;
  }
  else
  {
    v9 = 0;
    v4 = 0;
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  if ( v4 )
  {
    v6 = *(_DWORD *)(*(_DWORD *)v4 + 164);
    if ( v6 > 4 )
      v6 = 4;
    for ( i = 0; i < v6; ++i )
      sub_100BFF30(this, i, 0.0);
    result = sub_10245FE0(v9);
    if ( (_BYTE)result )
    {
      v8 = 0;
      result = sub_10245290(v9);
      if ( result > 0 )
      {
        do
        {
          sub_10019C10((_DWORD *)this, v8++, 0.0);
          result = sub_10245290(v9);
        }
        while ( v8 < result );
      }
    }
  }
  return result;
}
