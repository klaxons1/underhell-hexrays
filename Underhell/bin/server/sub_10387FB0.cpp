void __thiscall sub_10387FB0(int this, int a2)
{
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case '2':
      sub_10387340(this);
      sub_10385ED0(this);
      sub_100C1600(this, 1, 1);
      (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)this + 540))(this, v3, 0);
      sub_100EA940((int *)this, 1024);
      a2 = -65537;
      sub_100332F0((int *)(this + 248), &a2);
      *(float *)(this + 3808) = *(float *)(dword_106B31C8 + 12) + 3.4028235e38;
      break;
    case '3':
      *(float *)(this + 3808) = *(float *)(dword_106B31C8 + 12) + 2.0;
      break;
    case '4':
      *(_BYTE *)(this + 3854) = 1;
      break;
    default:
      sub_1003AD70(this, a2);
      break;
  }
}
