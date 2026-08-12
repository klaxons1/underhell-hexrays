void __thiscall sub_10138D10(float *this)
{
  int v2; // edx
  double v3; // st6
  double v4; // st6
  double v5; // st6

  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 100))(this);
  sub_10112C00((int)(this + 80), 0);
  sub_100E0970((int)this, v2, 0, 0);
  switch ( *((_DWORD *)this + 221) )
  {
    case 1:
      v3 = 1.25;
      break;
    case 2:
      v3 = 0.80000001;
      break;
    case 3:
      this[222] = 0.0;
      goto LABEL_9;
    default:
      v3 = 60.0;
      break;
  }
  this[222] = v3;
LABEL_9:
  v4 = this[220];
  this[221] = 0.0;
  v5 = v4 * 0.1;
  this[220] = v5;
  if ( v5 <= 0.0 )
    this[220] = 1.0;
}
