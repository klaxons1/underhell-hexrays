bool __thiscall sub_1004C4B0(int this)
{
  int v1; // edx
  bool result; // al

  v1 = *(_DWORD *)(this + 32);
  if ( v1 == 4 )
    return 1;
  switch ( *(_DWORD *)(this + 28) )
  {
    case 1:
      result = v1 == 1;
      break;
    case 2:
      if ( sub_1004C220((_DWORD **)this, 53) )
        return 1;
      goto LABEL_7;
    case 3:
      *(_DWORD *)(this + 32) = 3;
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}
