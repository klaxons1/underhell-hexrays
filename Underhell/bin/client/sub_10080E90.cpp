int sub_10080E90()
{
  int result; // eax

  result = sub_101A6B50();
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 140))(result);
  return result;
}
