int __thiscall sub_10093000(_DWORD *this)
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
      v5 = sub_10230460(*(_WORD *)(v4 + v3));
      result = (**(int (__thiscall ***)(int, int))dword_10413164)(dword_10413164, v5);
      *(_DWORD *)(v4 + v3 + 4) = result;
      v3 += 12;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
