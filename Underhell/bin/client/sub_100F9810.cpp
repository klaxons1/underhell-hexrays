int __thiscall sub_100F9810(_DWORD *this, unsigned __int16 a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // [esp+8h] [ebp-4h]

  result = 5 * a2;
  v4 = *(unsigned __int16 *)(this[3] + 10 * a2);
  if ( (_WORD)v4 != 0xFFFF )
  {
    do
    {
      v5 = 12 * (unsigned __int16)v4;
      v6 = v5 + *this;
      result = *(unsigned __int16 *)(v6 + 10);
      v7 = result;
      if ( (unsigned __int16)v4 < *((_WORD *)this + 24) && *(_WORD *)(v6 + 8) != (_WORD)v4 )
      {
        sub_1022D600(a2, v4);
        result = v7;
      }
      *(_WORD *)(v5 + *this + 10) = *((_WORD *)this + 22);
      --*((_WORD *)this + 23);
      *((_WORD *)this + 22) = v4;
      v4 = (unsigned __int16)result;
    }
    while ( (_WORD)result != 0xFFFF );
  }
  return result;
}
