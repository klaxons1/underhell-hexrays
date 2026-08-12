int __thiscall sub_10156FF0(_DWORD *this, int a2)
{
  switch ( a2 )
  {
    case 0:
      return (int)(0.30000001 / *(float *)(dword_106B31C8 + 28));
    case 1:
      if ( *(_DWORD *)(this[1] + 2176) )
        return 1;
      if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
        return (int)(0.2 / *(float *)(dword_106B31C8 + 28));
      else
        return (int)(1.0 / *(float *)(dword_106B31C8 + 28));
    case 2:
      return (int)(0.2 / *(float *)(dword_106B31C8 + 28));
    default:
      return 1;
  }
}
