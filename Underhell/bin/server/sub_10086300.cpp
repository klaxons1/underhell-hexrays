_DWORD *__thiscall sub_10086300(_DWORD *this, int a2)
{
  int i; // eax
  int v4; // edx

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) )
    this[1] = sub_10184390(18000);
  else
    this[1] = 0;
  this[3] = 0;
  this[2] = 0;
  this[3] = sub_10184390(6000);
  for ( i = 0; i < 6000; i += 4 )
    *(_DWORD *)(i + this[3]) = -1;
  *this = 0;
  v4 = *(_DWORD *)(a2 + 808);
  this[4] = a2;
  this[5] = v4;
  return this;
}
