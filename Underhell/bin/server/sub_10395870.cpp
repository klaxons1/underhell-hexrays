void __thiscall sub_10395870(float *this, int a2, char a3, char a4)
{
  double v4; // st7
  float v5; // [esp+0h] [ebp-4h]

  if ( this[1401] <= (double)*(float *)(dword_106B31C8 + 12) || a3 )
  {
    switch ( a2 )
    {
      case -2:
        if ( a4 )
          sub_103957D0(this, -2.0);
        return;
      case -1:
        if ( a4 )
          sub_103957D0(this, -1.0);
        return;
      case 0:
        v4 = 0.1;
        goto LABEL_9;
      case 1:
        v4 = 0.94999999;
        goto LABEL_9;
      case 2:
        v4 = 1.0;
LABEL_9:
        if ( a4 || v4 > this[1398] )
        {
          v5 = v4;
          sub_103957D0(this, v5);
        }
        break;
      default:
        DevMsg("ERROR: Bad readiness level\n");
        break;
    }
  }
}
