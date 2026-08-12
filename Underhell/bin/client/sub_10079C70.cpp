int __thiscall sub_10079C70(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // [esp+Ch] [ebp-4h]

  result = this[11];
  v3 = 0;
  v6 = result;
  if ( result <= 0 )
  {
    this[11] = 0;
  }
  else
  {
    do
    {
      result = this[8];
      v4 = *(_DWORD *)(result + 4 * v3);
      if ( v4 != -1 )
      {
        v5 = (_DWORD *)sub_1007A770(v4);
        if ( v5 )
          sub_10034280(v5, 0);
        result = sub_1007A7B0(v4);
        if ( result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 16))(result);
      }
      ++v3;
    }
    while ( v3 < v6 );
    this[11] = 0;
  }
  return result;
}
