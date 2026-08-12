void __thiscall sub_102319C0(int this)
{
  bool v2; // zf
  float v3; // [esp+0h] [ebp-Ch]

  sub_10112C00(this + 320, 0);
  v2 = *(_DWORD *)(this + 260) == 0;
  *(_BYTE *)(this + 832) = 1;
  if ( v2 )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_10231550, 0.0, 0);
    v3 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_100EC4A0((int *)this, v3, 0);
  }
  switch ( *(_DWORD *)(this + 824) )
  {
    case 1:
      *(_DWORD *)(this + 820) = 80;
      break;
    case 2:
      *(_DWORD *)(this + 820) = 85;
      break;
    case 3:
      *(_DWORD *)(this + 820) = 0;
      break;
    default:
      *(_DWORD *)(this + 820) = 70;
      break;
  }
  *(_DWORD *)(this + 824) = 0;
  if ( *(float *)(this + 828) <= 0.0 )
    *(float *)(this + 828) = 1.0;
}
