char __thiscall sub_1003EAE0(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al

  switch ( sub_101E1B20(a4) )
  {
    case 2:
      goto LABEL_3;
    case 5:
      if ( !*(_BYTE *)(a2 + 64) )
        goto LABEL_7;
      goto LABEL_3;
    case 7:
      if ( !*(_BYTE *)(a2 + 64) )
        goto LABEL_7;
      result = sub_1003E5C0(this, a2, a3, a4, a5, a6);
      break;
    case 10:
      *(float *)(a2 + 32) = 1.0;
LABEL_3:
      result = 1;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}
