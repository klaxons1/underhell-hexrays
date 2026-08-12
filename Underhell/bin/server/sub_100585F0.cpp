int __thiscall sub_100585F0(_BYTE *this, int a2)
{
  int result; // eax

  result = 0;
  switch ( a2 )
  {
    case 0:
      result = (int)(this + 84);
      goto LABEL_8;
    case 1:
      result = (int)(this + 108);
      goto LABEL_9;
    case 2:
      result = (int)(this + 132);
      goto LABEL_9;
    case 3:
      result = (int)(this + 156);
      goto LABEL_9;
    case 4:
      result = (int)(this + 180);
      goto LABEL_9;
    default:
      if ( a2 )
        return result;
LABEL_8:
      this[4] = 1;
LABEL_9:
      if ( result )
        return sub_1010DD80((int)(this - 852), (int)(this - 852), 0.0);
      return result;
  }
}
