void __thiscall sub_10105170(int this)
{
  long double v2; // st7
  long double v3; // st7
  signed int v4; // eax
  long double v5; // st7
  long double v6; // st7
  bool v7; // zf
  signed int v8; // eax
  int v9; // eax
  double v10; // st7
  double v11; // st7
  double v12; // st7

  switch ( *(_DWORD *)(this + 1232) )
  {
    case 0:
      *(float *)(this + 1256) = 0.0;
      break;
    case 1:
      *(float *)(this + 1256) = sin(
                                  (*(float *)(this + 1236) + *((float *)off_103DC81C + 3))
                                * *(float *)(this + 1240)
                                * 6.283185307179586)
                              * *(float *)(this + 1244);
      break;
    case 2:
      v2 = *(float *)(this + 1244);
      if ( (int)fabs(
                  (*(float *)(this + 1236) + *((float *)off_103DC81C + 3))
                * (*(float *)(this + 1240) + *(float *)(this + 1240)))
         % 2 )
      {
LABEL_12:
        *(float *)(this + 1256) = -v2;
      }
      else
      {
        *(float *)(this + 1256) = *(float *)(this + 1244);
      }
      break;
    case 3:
      v3 = fabs((*(float *)(this + 1236) + *((float *)off_103DC81C + 3)) * (*(float *)(this + 1240) * 4.0));
      v4 = (int)v3 & 0x80000003;
      v5 = v3 - (double)(int)v3;
      if ( v4 < 0 )
        v4 = (((_BYTE)v4 - 1) | 0xFFFFFFFC) + 1;
      switch ( v4 )
      {
        case 0:
          *(float *)(this + 1256) = v5 * *(float *)(this + 1244);
          break;
        case 1:
          *(float *)(this + 1256) = (1.0 - v5) * *(float *)(this + 1244);
          break;
        case 2:
          v2 = v5 * *(float *)(this + 1244);
          goto LABEL_12;
        case 3:
          goto LABEL_13;
        default:
          return;
      }
      break;
    case 4:
      v6 = fabs(
             (*(float *)(this + 1236) + *((float *)off_103DC81C + 3))
           * (*(float *)(this + 1240) + *(float *)(this + 1240)));
      v8 = (int)v6 & 0x80000001;
      v7 = v8 == 0;
      v5 = v6 - (double)(int)v6;
      if ( v8 < 0 )
        v7 = (((_BYTE)v8 - 1) | 0xFFFFFFFE) == -1;
      if ( v7 )
        *(float *)(this + 1256) = v5 * *(float *)(this + 1244);
      else
LABEL_13:
        *(float *)(this + 1256) = (v5 - 1.0) * *(float *)(this + 1244);
      break;
    case 5:
      v9 = RandomInt(0, 1);
      v10 = *(float *)(this + 1240);
      if ( v9 )
        v11 = *(float *)(this + 1256) - v10 * *((float *)off_103DC81C + 4);
      else
        v11 = v10 * *((float *)off_103DC81C + 4) + *(float *)(this + 1256);
      *(float *)(this + 1256) = v11;
      v12 = *(float *)(this + 1244);
      if ( v12 >= *(float *)(this + 1256) )
      {
        v12 = -v12;
        if ( v12 <= *(float *)(this + 1256) )
          v12 = *(float *)(this + 1256);
      }
      *(float *)(this + 1256) = v12;
      break;
    default:
      return;
  }
}
