double __thiscall sub_100DC7F0(_DWORD *this, int a2)
{
  double result; // st7
  int v4; // esi
  int v5; // esi
  float v6; // [esp+8h] [ebp-4h]

  result = 1.0;
  v6 = 1.0;
  v4 = this[69];
  if ( v4 != -1 )
  {
    do
    {
      v5 = 12 * v4;
      if ( !(unsigned __int8)sub_1042C180(*(_DWORD *)(this[66] + v5)) )
        v6 = sub_100B8D40((void *)*(_DWORD *)(this[66] + v5)) * v6;
      v4 = *(_DWORD *)(v5 + this[66] + 8);
    }
    while ( v4 != -1 );
    return v6;
  }
  return result;
}
