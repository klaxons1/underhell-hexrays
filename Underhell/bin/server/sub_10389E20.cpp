void __thiscall sub_10389E20(_DWORD *this, int a2)
{
  switch ( a2 )
  {
    case 1000:
      sub_100AC410((int)(this + 1290), "METROPOLICE_SO_BEGIN", 2, 3);
      break;
    case 1001:
      sub_100AC410((int)(this + 1290), "METROPOLICE_SO_END", 2, 3);
      break;
    case 1002:
      sub_10388C20(this);
      break;
    case 1003:
      sub_100AC410((int)(this + 1290), "METROPOLICE_SO_FORCE_COVER", 0, 2);
      break;
    case 1004:
      if ( 0.0 != flt_106E9D08 && *(float *)(dword_106B31C8 + 12) - flt_106E9D08 > 20.0 )
      {
        sub_100AC410((int)(this + 1290), "METROPOLICE_SO_PEEK", 0, 2);
        flt_106E9D08 = *(float *)(dword_106B31C8 + 12);
      }
      break;
    default:
      return;
  }
}
