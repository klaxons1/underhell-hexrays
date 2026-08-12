int __thiscall sub_10143470(_DWORD *this, _DWORD *a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // [esp+4h] [ebp-8h]

  result = a2[3];
  v4 = 0;
  v7 = result;
  if ( result <= 0 )
  {
    this[112] = 0;
  }
  else
  {
    do
    {
      v5 = (***(int (__thiscall ****)(_DWORD))(*a2 + 4 * v4))(*(_DWORD *)(*a2 + 4 * v4));
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6) )
      {
        this[112] = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 28))(v5);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 40))(v6, a3 | 1);
      }
      ++v4;
    }
    while ( v4 < v7 );
    result = (int)this;
    this[112] = 0;
  }
  return result;
}
