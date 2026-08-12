int __thiscall sub_1041F990(int this, unsigned __int16 a2)
{
  unsigned __int16 v3; // di
  int v4; // ebp
  __int16 *v5; // eax
  int result; // eax

  v3 = *sub_1041F220((_DWORD *)this, a2);
  v4 = 12 * a2;
  *(_WORD *)(*(_DWORD *)(this + 4) + v4) = sub_1041F220((_DWORD *)this, v3)[1];
  if ( sub_1041F220((_DWORD *)this, v3)[1] != -1 )
    *(_WORD *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)sub_1041F220((_DWORD *)this, v3)[1] + 4) = a2;
  if ( v3 != 0xFFFF )
    *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v3 + 4) = sub_1041F220((_DWORD *)this, a2)[2];
  if ( a2 == *(_WORD *)(this + 16) )
  {
    *(_WORD *)(this + 16) = v3;
  }
  else
  {
    v5 = sub_1041F220((_DWORD *)this, a2);
    if ( sub_1041F220((_DWORD *)this, v5[2])[1] == a2 )
      *(_WORD *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)sub_1041F220((_DWORD *)this, a2)[2] + 2) = v3;
    else
      *(_WORD *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)sub_1041F220((_DWORD *)this, a2)[2]) = v3;
  }
  result = v3;
  *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v3 + 2) = a2;
  if ( a2 != 0xFFFF )
  {
    result = *(_DWORD *)(this + 4);
    *(_WORD *)(result + v4 + 4) = v3;
  }
  return result;
}
