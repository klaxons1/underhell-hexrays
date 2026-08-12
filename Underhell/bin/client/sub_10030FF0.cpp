int __thiscall sub_10030FF0(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  int v6; // ecx
  int v7; // edi
  int result; // eax
  int v9; // [esp+8h] [ebp-4h]
  int v10; // [esp+14h] [ebp+8h]

  v3 = a3;
  v6 = a2 + a3;
  v9 = a2 + a3;
  if ( a2 + a3 - 1 >= a2 )
  {
    v7 = 44 * (a2 + a3 - 1);
    v10 = a3;
    do
    {
      (**(void (__thiscall ***)(int, _DWORD))(*this + v7))(v7 + *this, 0);
      v7 -= 44;
      --v10;
    }
    while ( v10 );
    v3 = a3;
    v6 = v9;
  }
  result = this[3] - a2 - v3;
  if ( result <= 0 || v3 <= 0 )
  {
    this[3] -= v3;
  }
  else
  {
    memcpy((void *)(*this + 44 * a2), (const void *)(*this + 44 * v6), 44 * result);
    result = a3;
    this[3] -= a3;
  }
  return result;
}
