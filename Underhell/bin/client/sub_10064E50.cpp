int __cdecl sub_10064E50(float a1)
{
  int result; // eax

  result = sub_100422D0();
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 500))(result);
    if ( (_BYTE)result )
    {
      if ( byte_10410AA0 )
        flt_10410A9C = a1;
      else
        flt_10410A9C = 0.0;
    }
  }
  return result;
}
