int __thiscall sub_10308A10(int this, int a2)
{
  int result; // eax

  if ( a2 == 11 && sub_100697A0((_DWORD *)this, 88, 1) )
    return dword_106E3000;
  if ( *(_DWORD *)(dword_10698344 + 48) && *(_BYTE *)(this + 3675) )
  {
    if ( a2 == 11 )
    {
      if ( !*(_BYTE *)(this + 2680) )
        return dword_106E3000;
LABEL_9:
      result = dword_106E301C;
      if ( *(_DWORD *)(this + 220) <= *(_DWORD *)(this + 216) / 4 )
        return result;
    }
  }
  else if ( a2 == 11 )
  {
    goto LABEL_9;
  }
  return a2;
}
