void __userpurge sub_10400740(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, float *a5)
{
  sub_103FF610(a1, *(float *)&a2);
  a1[2457] = a4;
  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
  {
    switch ( a4 )
    {
      case 1:
        goto LABEL_3;
      case 2:
        sub_103FE6A0(a1);
        break;
      case 3:
        sub_103FE400(a1);
        break;
      case 4:
        sub_103FF0B0(a1, a2, a3, a5);
        break;
      default:
        return;
    }
  }
  else
  {
    switch ( a4 )
    {
      case 1:
LABEL_3:
        sub_103FD9B0(a1);
        break;
      case 2:
        sub_103FDD20(a1);
        break;
      case 3:
        sub_103FE090(a1);
        break;
      case 4:
        sub_103FEDE0(a1, a5);
        break;
      default:
        sub_103FB690(a1);
        break;
    }
  }
}
