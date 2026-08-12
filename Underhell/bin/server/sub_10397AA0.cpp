char __thiscall sub_10397AA0(int this, int a2)
{
  int v3; // ecx
  char v4; // al
  int v5; // eax

  v3 = *(_DWORD *)(this + 3624);
  if ( v3 )
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 224))(v3, a2);
  else
    v4 = sub_100242F0((_DWORD *)this, a2);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 16) & 0xFFFFF;
    switch ( v5 )
    {
      case 0x4000:
        if ( *(float *)(this + 5604) <= (double)*(float *)(dword_106B31C8 + 12) )
          sub_103957D0((float *)this, 0.1);
        break;
      case 0x8000:
        if ( *(float *)(this + 5604) <= (double)*(float *)(dword_106B31C8 + 12) )
        {
          sub_103957D0((float *)this, 0.94999999);
          return 0;
        }
        break;
      case 0x10000:
        if ( *(float *)(this + 5604) <= (double)*(float *)(dword_106B31C8 + 12) )
        {
          sub_103957D0((float *)this, 1.0);
          return 0;
        }
        break;
      default:
        return 1;
    }
  }
  return 0;
}
