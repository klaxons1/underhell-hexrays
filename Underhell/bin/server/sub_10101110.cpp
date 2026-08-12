int __thiscall sub_10101110(float *this, int a2, int a3, float a4)
{
  int v5; // ebx
  int result; // eax
  int v7; // esi
  int v8; // [esp+Ch] [ebp-4h]

  v5 = (int)this + *((unsigned __int16 *)this + 7) + 20;
  result = 0;
  v7 = 0;
  v8 = (int)this + *((unsigned __int16 *)this + 8) + 20;
  if ( *((_WORD *)this + 6) )
  {
    do
    {
      sub_10421CC0(a2 + 48 * *(__int16 *)(v8 + 2 * v7), v5);
      result = *((unsigned __int16 *)this + 6);
      ++v7;
      v5 += 48;
    }
    while ( v7 < result );
  }
  *this = a4;
  return result;
}
