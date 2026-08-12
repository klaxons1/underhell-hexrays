int sub_1013A970()
{
  int result; // eax
  int v1; // eax

  result = sub_10153490();
  if ( result )
  {
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)result + 576))(result);
    return sub_10261B70(v1, 25.0, 150.0, 1.0, 750.0, 0, 0);
  }
  return result;
}
