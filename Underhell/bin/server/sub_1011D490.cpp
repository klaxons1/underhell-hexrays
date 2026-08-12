int __thiscall sub_1011D490(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // [esp+Ch] [ebp-4h]

  result = this[6];
  if ( result > 0 )
  {
    v3 = 0;
    v6 = this[6];
    do
    {
      v4 = this[3];
      v5 = sub_1042EE50(*(_WORD *)(v4 + v3));
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31D0 + 24))(dword_106B31D0, v5, 0);
      *(_DWORD *)(v4 + v3 + 4) = result;
      v3 += 12;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
