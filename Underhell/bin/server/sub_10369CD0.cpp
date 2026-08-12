char __thiscall sub_10369CD0(int this, int a2)
{
  char result; // al

  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 264))(this);
  if ( result )
  {
    result = sub_100457E0((_DWORD *)this, 107);
    *(float *)(this + 3676) = -1.0;
  }
  return result;
}
