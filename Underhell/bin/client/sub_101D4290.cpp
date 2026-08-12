char __thiscall sub_101D4290(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5,
        char *Src)
{
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ebp
  int v15; // [esp+10h] [ebp+8h]

  v7 = this[1];
  v8 = a2;
  if ( a2 >= v7 )
    return 0;
  v9 = a3;
  if ( a3 >= this[2] )
    return 0;
  v10 = (unsigned __int8)a4;
  v11 = v7 - a2;
  a4 = (unsigned __int8)a4;
  if ( (unsigned __int8)a4 >= v11 )
    a4 = v11;
  v12 = 0;
  if ( a5 )
  {
    v15 = 16 * v10;
    while ( v9 < this[2] )
    {
      memcpy_0((void *)(this[5] + 16 * v8 + v9 * this[3]), Src, 16 * a4);
      Src += v15;
      ++v12;
      ++v9;
      if ( v12 >= a5 )
        break;
      v8 = a2;
    }
  }
  return 1;
}
