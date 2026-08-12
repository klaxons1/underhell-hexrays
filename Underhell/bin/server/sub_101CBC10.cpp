int __thiscall sub_101CBC10(int this)
{
  int result; // eax

  sub_100BDBA0(this);
  result = *(_DWORD *)(this + 1124);
  if ( result )
  {
    if ( *(_BYTE *)(this + 1864) || *(_BYTE *)(this + 1867) )
    {
      *(_DWORD *)(*(_DWORD *)(result + 8) + 4) = *(_DWORD *)(result + 4);
      *(_DWORD *)(*(_DWORD *)(result + 4) + 8) = *(_DWORD *)(result + 8);
      --dword_106960D8;
      result = sub_10184660(result);
      *(_DWORD *)(this + 1124) = 0;
    }
    else if ( *(_BYTE *)(this + 1866) )
    {
      *(_DWORD *)(*(_DWORD *)(result + 8) + 4) = *(_DWORD *)(result + 4);
      *(_DWORD *)(*(_DWORD *)(result + 4) + 8) = *(_DWORD *)(result + 8);
      --dword_106960D8;
      sub_10184660(result);
      *(_DWORD *)(this + 1124) = 0;
      return sub_101CB960(this);
    }
  }
  return result;
}
