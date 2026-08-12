int __thiscall sub_101C3F60(int this)
{
  char v2; // bl
  int *v3; // ecx
  int result; // eax

  if ( byte_10638658 != *(_BYTE *)(this + 605) )
  {
    v2 = byte_10638658;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 605);
    }
    *(_BYTE *)(this + 605) = v2;
  }
  result = sub_101C4640(2);
  if ( byte_10638658 )
  {
    if ( !(_BYTE)result )
      return sub_101C4730(2);
  }
  else if ( (_BYTE)result )
  {
    return sub_101C4770(2);
  }
  return result;
}
