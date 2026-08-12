void __thiscall sub_103AAB50(unsigned int this, _DWORD *a2)
{
  int v3; // ecx

  switch ( *a2 )
  {
    case 0x9C:
      if ( sub_10022810((float *)this) )
      {
        v3 = *(_DWORD *)(this + 3888);
        if ( *(int *)(v3 + 820) <= 0 )
        {
          sub_103A9690(this);
          sub_10022750((float *)this, 0.1, 0.0);
        }
        else
        {
          sub_10242820(v3, 0, 0.0);
          if ( *(float *)(this + 3868) >= (double)*(float *)(dword_106B31C8 + 12) )
          {
            sub_10022750((float *)this, 5.0, 10.0);
          }
          else
          {
            sub_103A4C60(this);
            sub_10027CD0((_DWORD *)this, 0);
          }
        }
      }
      break;
    case 0x9D:
      sub_103A98B0(this);
      if ( sub_10022810((float *)this) )
        sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0x9E:
      if ( sub_10022810((float *)this) )
      {
        sub_103A77C0((int *)this);
        sub_10027CD0((_DWORD *)this, 0);
      }
      break;
    default:
      sub_100497D0((int *)this, a2);
      break;
  }
}
